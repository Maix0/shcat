#define _POSIX_C_SOURCE 200112L

#include "me/mem/mem.h"
#include "me/types.h"
#include "parser/api.h"
#include "parser/array.h"
#include "parser/language.h"
#include "parser/length.h"
#include "parser/lexer.h"
#include "parser/reduce_action.h"
#include "parser/stack.h"
#include "parser/subtree.h"
#include "parser/tree.h"
#include <assert.h>
#include <stdio.h>

#define LOG(...)
#define LOG_LOOKAHEAD(...)
#define LOG_STACK(...)
#define LOG_TREE(...)

#define SYM_NAME(symbol) ts_language_symbol_name(self->language, symbol)

#define TREE_NAME(tree) SYM_NAME(ts_subtree_symbol(tree))

static const t_u32 MAX_VERSION_COUNT = 6;
static const t_u32 MAX_VERSION_COUNT_OVERFLOW = 4;
static const t_u32 MAX_SUMMARY_DEPTH = 16;
static const t_u32 MAX_COST_DIFFERENCE = 16 * ERROR_COST_PER_SKIPPED_TREE;
static const t_u32 OP_COUNT_PER_TIMEOUT_CHECK = 100;

typedef struct TokenCache
{
	Subtree token;
	Subtree last_external_token;
	t_u32	byte_index;
} TokenCache;

struct TSParser
{
	Lexer				   lexer;
	Stack				  *stack;
	SubtreePool			   tree_pool;
	const TSLanguage	  *language;
	ReduceActionSet		   reduce_actions;
	Subtree				   finished_tree;
	SubtreeArray		   trailing_extras;
	SubtreeArray		   trailing_extras2;
	SubtreeArray		   scratch_trees;
	TokenCache			   token_cache;
	void				  *external_scanner_payload;
	t_u32				   accept_count;
	t_u32				   operation_count;
	const volatile size_t *cancellation_flag;
	Subtree				   old_tree;
	t_u32				   included_range_difference_index;
	bool				   has_scanner_error;
};

typedef struct ErrorStatus
{
	t_u32 cost;
	t_u32 node_count;
	int	  dynamic_precedence;
	bool  is_in_error;
} ErrorStatus;

typedef enum ErrorComparison
{
	ErrorComparisonTakeLeft,
	ErrorComparisonPreferLeft,
	ErrorComparisonNone,
	ErrorComparisonPreferRight,
	ErrorComparisonTakeRight,
} ErrorComparison;

typedef struct TSStringInput
{
	const t_u8 *string;
	t_u32		length;
} TSStringInput;

// StringInput

static const t_u8 *ts_string_input_read(void *_self, t_u32 byte, TSPoint point, t_u32 *length)
{
	(void)point;
	TSStringInput *self = (TSStringInput *)_self;
	if (byte >= self->length)
	{
		*length = 0;
		return (const t_u8 *)"";
	}
	else
	{
		*length = self->length - byte;
		return self->string + byte;
	}
}

// Parser - Private
/*
static void ts_parser__log(TSParser *self)
{
	if (self->lexer.logger.log)
	{
		self->lexer.logger.log(self->lexer.logger.payload, TSLogTypeParse, self->lexer.debug_buffer);
	}

	if (self->dot_graph_file)
	{
		fprintf(self->dot_graph_file, "graph {\nlabel=\"");
		for (char *chr = &self->lexer.debug_buffer[0]; *chr != 0; chr++)
		{
			if (*chr == '"' || *chr == '\\')
				fputc('\\', self->dot_graph_file);
			fputc(*chr, self->dot_graph_file);
		}
		fprintf(self->dot_graph_file, "\"\n}\n\n");
	}
}
*/
static bool ts_parser__breakdown_top_of_stack(TSParser *self, StackVersion version)
{
	bool did_break_down = false;
	bool pending = false;

	do
	{
		StackSliceArray pop = ts_stack_pop_pending(self->stack, version);
		if (!pop.size)
			break;

		did_break_down = true;
		pending = false;
		for (t_u32 i = 0; i < pop.size; i++)
		{
			StackSlice slice = pop.contents[i];
			TSStateId  state = ts_stack_state(self->stack, slice.version);
			Subtree	   parent = *array_front(&slice.subtrees);

			for (t_u32 j = 0, n = ts_subtree_child_count(parent); j < n; j++)
			{
				Subtree child = ts_subtree_children(parent)[j];
				pending = ts_subtree_child_count(child) > 0;

				if (ts_subtree_is_error(child))
				{
					state = ERROR_STATE;
				}
				else if (!ts_subtree_extra(child))
				{
					state = ts_language_next_state(self->language, state, ts_subtree_symbol(child));
				}

				ts_subtree_retain(child);
				ts_stack_push(self->stack, slice.version, child, pending, state);
			}

			for (t_u32 j = 1; j < slice.subtrees.size; j++)
			{
				Subtree tree = slice.subtrees.contents[j];
				ts_stack_push(self->stack, slice.version, tree, false, state);
			}

			ts_subtree_release(/*&self->tree_pool,*/ parent);
			array_delete(&slice.subtrees);

			LOG("breakdown_top_of_stack tree:%s", TREE_NAME(parent));
			LOG_STACK();
		}
	} while (pending);

	return did_break_down;
}

static ErrorComparison ts_parser__compare_versions(TSParser *self, ErrorStatus a, ErrorStatus b)
{
	(void)self;
	if (!a.is_in_error && b.is_in_error)
	{
		if (a.cost < b.cost)
		{
			return ErrorComparisonTakeLeft;
		}
		else
		{
			return ErrorComparisonPreferLeft;
		}
	}

	if (a.is_in_error && !b.is_in_error)
	{
		if (b.cost < a.cost)
		{
			return ErrorComparisonTakeRight;
		}
		else
		{
			return ErrorComparisonPreferRight;
		}
	}

	if (a.cost < b.cost)
	{
		if ((b.cost - a.cost) * (1 + a.node_count) > MAX_COST_DIFFERENCE)
		{
			return ErrorComparisonTakeLeft;
		}
		else
		{
			return ErrorComparisonPreferLeft;
		}
	}

	if (b.cost < a.cost)
	{
		if ((a.cost - b.cost) * (1 + b.node_count) > MAX_COST_DIFFERENCE)
		{
			return ErrorComparisonTakeRight;
		}
		else
		{
			return ErrorComparisonPreferRight;
		}
	}

	if (a.dynamic_precedence > b.dynamic_precedence)
		return ErrorComparisonPreferLeft;
	if (b.dynamic_precedence > a.dynamic_precedence)
		return ErrorComparisonPreferRight;
	return ErrorComparisonNone;
}

static ErrorStatus ts_parser__version_status(TSParser *self, StackVersion version)
{
	t_u32 cost = ts_stack_error_cost(self->stack, version);
	bool  is_paused = ts_stack_is_paused(self->stack, version);
	if (is_paused)
		cost += ERROR_COST_PER_SKIPPED_TREE;
	return (ErrorStatus){.cost = cost,
						 .node_count = ts_stack_node_count_since_error(self->stack, version),
						 .dynamic_precedence = ts_stack_dynamic_precedence(self->stack, version),
						 .is_in_error = is_paused || ts_stack_state(self->stack, version) == ERROR_STATE};
}

static bool ts_parser__better_version_exists(TSParser *self, StackVersion version, bool is_in_error, t_u32 cost)
{
	if (self->finished_tree.ptr && ts_subtree_error_cost(self->finished_tree) <= cost)
	{
		return true;
	}

	Length		position = ts_stack_position(self->stack, version);
	ErrorStatus status = {
		.cost = cost,
		.is_in_error = is_in_error,
		.dynamic_precedence = ts_stack_dynamic_precedence(self->stack, version),
		.node_count = ts_stack_node_count_since_error(self->stack, version),
	};

	for (StackVersion i = 0, n = ts_stack_version_count(self->stack); i < n; i++)
	{
		if (i == version || !ts_stack_is_active(self->stack, i) || ts_stack_position(self->stack, i).bytes < position.bytes)
			continue;
		ErrorStatus status_i = ts_parser__version_status(self, i);
		switch (ts_parser__compare_versions(self, status, status_i))
		{
		case ErrorComparisonTakeRight:
			return true;
		case ErrorComparisonPreferRight:
			if (ts_stack_can_merge(self->stack, i, version))
				return true;
			break;
		default:
			break;
		}
	}

	return false;
}

static bool ts_parser__call_main_lex_fn(TSParser *self, TSLexMode lex_mode)
{
	return self->language->lex_fn(&self->lexer.data, lex_mode.lex_state);
}

static bool ts_parser__call_keyword_lex_fn(TSParser *self, TSLexMode lex_mode)
{
	(void)(lex_mode);

	return self->language->keyword_lex_fn(&self->lexer.data, 0);
}

static void ts_parser__external_scanner_create(TSParser *self)
{
	if (self->language && self->language->external_scanner.states)
	{

		if (self->language->external_scanner.create)
		{
			self->external_scanner_payload = self->language->external_scanner.create();
		}
	}
}

static void ts_parser__external_scanner_destroy(TSParser *self)
{
	if (self->language && self->external_scanner_payload && self->language->external_scanner.destroy)
	{
		self->language->external_scanner.destroy(self->external_scanner_payload);
	}
	self->external_scanner_payload = NULL;
}

static t_u32 ts_parser__external_scanner_serialize(TSParser *self)
{

	t_u32 length = self->language->external_scanner.serialize(self->external_scanner_payload, self->lexer.debug_buffer);
	assert(length <= TREE_SITTER_SERIALIZATION_BUFFER_SIZE);
	return length;
}

static void ts_parser__external_scanner_deserialize(TSParser *self, Subtree external_token)
{
	const t_u8 *data = NULL;
	t_u32		length = 0;
	if (external_token.ptr)
	{
		data = ts_external_scanner_state_data(&external_token.ptr->external_scanner_state);
		length = external_token.ptr->external_scanner_state.length;
	}

	self->language->external_scanner.deserialize(self->external_scanner_payload, data, length);
}

static bool ts_parser__external_scanner_scan(TSParser *self, TSStateId external_lex_state)
{
	const bool *valid_external_tokens = ts_language_enabled_external_tokens(self->language, external_lex_state);
	return self->language->external_scanner.scan(self->external_scanner_payload, &self->lexer.data, valid_external_tokens);
}

static bool ts_parser__can_reuse_first_leaf(TSParser *self, TSStateId state, Subtree tree, TableEntry *table_entry)
{
	TSLexMode current_lex_mode = self->language->lex_modes[state];
	TSSymbol  leaf_symbol = ts_subtree_leaf_symbol(tree);
	TSStateId leaf_state = ts_subtree_leaf_parse_state(tree);
	TSLexMode leaf_lex_mode = self->language->lex_modes[leaf_state];

	// At the end of a non-terminal extra node, the lexer normally returns
	// NULL, which indicates that the parser should look for a reduce action
	// at symbol `0`. Avoid reusing tokens in this situation to ensure that
	// the same thing happens when incrementally reparsing.
	if (current_lex_mode.lex_state == (t_u16)(-1))
		return false;

	// If the token was created in a state with the same set of lookaheads, it is reusable.
	if (table_entry->action_count > 0 && memcmp(&leaf_lex_mode, &current_lex_mode, sizeof(TSLexMode)) == 0 &&
		(leaf_symbol != self->language->keyword_capture_token || (!ts_subtree_is_keyword(tree) && ts_subtree_parse_state(tree) == state)))
		return true;

	// Empty tokens are not reusable in states with different lookaheads.
	if (ts_subtree_size(tree).bytes == 0 && leaf_symbol != ts_builtin_sym_end)
		return false;

	// If the current state allows external tokens or other tokens that conflict with this
	// token, this token is not reusable.
	return current_lex_mode.external_lex_state == 0 && table_entry->is_reusable;
}

static Subtree ts_parser__lex(TSParser *self, StackVersion version, TSStateId parse_state)
{
	TSLexMode lex_mode = self->language->lex_modes[parse_state];
	if (lex_mode.lex_state == (t_u16)-1)
	{
		LOG("no_lookahead_after_non_terminal_extra");
		return NULL_SUBTREE;
	}

	const Length  start_position = ts_stack_position(self->stack, version);
	const Subtree external_token = ts_stack_last_external_token(self->stack, version);

	bool   found_external_token = false;
	bool   error_mode = parse_state == ERROR_STATE;
	bool   skipped_error = false;
	bool   called_get_column = false;
	t_i32  first_error_character = 0;
	Length error_start_position = length_zero();
	Length error_end_position = length_zero();
	t_u32  lookahead_end_byte = 0;
	t_u32  external_scanner_state_len = 0;
	bool   external_scanner_state_changed = false;
	ts_lexer_reset(&self->lexer, start_position);

	for (;;)
	{
		bool   found_token = false;
		Length current_position = self->lexer.current_position;

		if (lex_mode.external_lex_state != 0)
		{
			LOG("lex_external state:%d, row:%u, column:%u", lex_mode.external_lex_state, current_position.extent.row,
				current_position.extent.column);
			ts_lexer_start(&self->lexer);
			ts_parser__external_scanner_deserialize(self, external_token);
			found_token = ts_parser__external_scanner_scan(self, lex_mode.external_lex_state);
			if (self->has_scanner_error)
				return NULL_SUBTREE;
			ts_lexer_finish(&self->lexer, &lookahead_end_byte);

			if (found_token)
			{
				external_scanner_state_len = ts_parser__external_scanner_serialize(self);
				external_scanner_state_changed = !ts_external_scanner_state_eq(ts_subtree_external_scanner_state(external_token),
																			   self->lexer.debug_buffer, external_scanner_state_len);

				// When recovering from an error, ignore any zero-length external tokens
				// unless they have changed the external scanner's state. This helps to
				// avoid infinite loops which could otherwise occur, because the lexer is
				// looking for any possible token, instead of looking for the specific set of
				// tokens that are valid in some parse state.
				//
				// Note that it's possible that the token end position may be *before* the
				// original position of the lexer because of the way that tokens are positioned
				// at included range boundaries: when a token is terminated at the start of
				// an included range, it is marked as ending at the *end* of the preceding
				// included range.
				if (self->lexer.token_end_position.bytes <= current_position.bytes &&
					(error_mode || !ts_stack_has_advanced_since_error(self->stack, version)) && !external_scanner_state_changed)
				{
					LOG("ignore_empty_external_token symbol:%s",
						SYM_NAME(self->language->external_scanner.symbol_map[self->lexer.data.result_symbol]))
					found_token = false;
				}
			}

			if (found_token)
			{
				found_external_token = true;
				called_get_column = self->lexer.did_get_column;
				break;
			}

			ts_lexer_reset(&self->lexer, current_position);
		}

		LOG("lex_internal state:%d, row:%u, column:%u", lex_mode.lex_state, current_position.extent.row, current_position.extent.column);
		ts_lexer_start(&self->lexer);
		found_token = ts_parser__call_main_lex_fn(self, lex_mode);
		ts_lexer_finish(&self->lexer, &lookahead_end_byte);
		if (found_token)
			break;

		if (!error_mode)
		{
			error_mode = true;
			lex_mode = self->language->lex_modes[ERROR_STATE];
			ts_lexer_reset(&self->lexer, start_position);
			continue;
		}

		if (!skipped_error)
		{
			LOG("skip_unrecognized_character");
			skipped_error = true;
			error_start_position = self->lexer.token_start_position;
			error_end_position = self->lexer.token_start_position;
			first_error_character = self->lexer.data.lookahead;
		}

		if (self->lexer.current_position.bytes == error_end_position.bytes)
		{
			if (self->lexer.data.eof(&self->lexer.data))
			{
				self->lexer.data.result_symbol = ts_builtin_sym_error;
				break;
			}
			self->lexer.data.advance(&self->lexer.data, false);
		}

		error_end_position = self->lexer.current_position;
	}

	Subtree result;
	if (skipped_error)
	{
		Length padding = length_sub(error_start_position, start_position);
		Length size = length_sub(error_end_position, error_start_position);
		t_u32  lookahead_bytes = lookahead_end_byte - error_end_position.bytes;
		result =
			ts_subtree_new_error(/*&self->tree_pool, */ first_error_character, padding, size, lookahead_bytes, parse_state, self->language);
	}
	else
	{
		bool	 is_keyword = false;
		TSSymbol symbol = self->lexer.data.result_symbol;
		Length	 padding = length_sub(self->lexer.token_start_position, start_position);
		Length	 size = length_sub(self->lexer.token_end_position, self->lexer.token_start_position);
		t_u32	 lookahead_bytes = lookahead_end_byte - self->lexer.token_end_position.bytes;

		if (found_external_token)
		{
			symbol = self->language->external_scanner.symbol_map[symbol];
		}
		else if (symbol == self->language->keyword_capture_token && symbol != 0)
		{
			t_u32 end_byte = self->lexer.token_end_position.bytes;
			ts_lexer_reset(&self->lexer, self->lexer.token_start_position);
			ts_lexer_start(&self->lexer);

			is_keyword = ts_parser__call_keyword_lex_fn(self, lex_mode);

			if (is_keyword && self->lexer.token_end_position.bytes == end_byte &&
				ts_language_has_actions(self->language, parse_state, self->lexer.data.result_symbol))
			{
				symbol = self->lexer.data.result_symbol;
			}
		}

		result = ts_subtree_new_leaf(/*&self->tree_pool,*/ symbol, padding, size, lookahead_bytes, parse_state, found_external_token,
									 called_get_column, is_keyword, self->language);

		if (found_external_token)
		{
			MutableSubtree mut_result = ts_subtree_to_mut_unsafe(result);
			ts_external_scanner_state_init(&mut_result.ptr->external_scanner_state, self->lexer.debug_buffer, external_scanner_state_len);
			mut_result.ptr->has_external_scanner_state_change = external_scanner_state_changed;
		}
	}

	LOG_LOOKAHEAD(SYM_NAME(ts_subtree_symbol(result)), ts_subtree_total_size(result).bytes);
	return result;
}

static Subtree ts_parser__get_cached_token(TSParser *self, TSStateId state, size_t position, Subtree last_external_token,
										   TableEntry *table_entry)
{
	TokenCache *cache = &self->token_cache;
	if (cache->token.ptr && cache->byte_index == position &&
		ts_subtree_external_scanner_state_eq(cache->last_external_token, last_external_token))
	{
		ts_language_table_entry(self->language, state, ts_subtree_symbol(cache->token), table_entry);
		if (ts_parser__can_reuse_first_leaf(self, state, cache->token, table_entry))
		{
			ts_subtree_retain(cache->token);
			return cache->token;
		}
	}
	return NULL_SUBTREE;
}

static void ts_parser__set_cached_token(TSParser *self, t_u32 byte_index, Subtree last_external_token, Subtree token)
{
	TokenCache *cache = &self->token_cache;
	if (token.ptr)
		ts_subtree_retain(token);
	if (last_external_token.ptr)
		ts_subtree_retain(last_external_token);
	if (cache->token.ptr)
		ts_subtree_release(/*&self->tree_pool, */ cache->token);
	if (cache->last_external_token.ptr)
		ts_subtree_release(/*&self->tree_pool, */ cache->last_external_token);
	cache->token = token;
	cache->byte_index = byte_index;
	cache->last_external_token = last_external_token;
}

// Determine if a given tree should be replaced by an alternative tree.
//
// The decision is based on the trees' error costs (if any), their dynamic precedence,
// and finally, as a default, by a recursive comparison of the trees' symbols.
static bool ts_parser__select_tree(TSParser *self, Subtree left, Subtree right)
{
	(void)(self);
	if (!left.ptr)
		return true;
	if (!right.ptr)
		return false;

	if (ts_subtree_error_cost(right) < ts_subtree_error_cost(left))
	{
		LOG("select_smaller_error symbol:%s, over_symbol:%s", TREE_NAME(right), TREE_NAME(left));
		return true;
	}

	if (ts_subtree_error_cost(left) < ts_subtree_error_cost(right))
	{
		LOG("select_smaller_error symbol:%s, over_symbol:%s", TREE_NAME(left), TREE_NAME(right));
		return false;
	}

	if (ts_subtree_dynamic_precedence(right) > ts_subtree_dynamic_precedence(left))
	{
		LOG("select_higher_precedence symbol:%s, prec:%" PRId32 ", over_symbol:%s, other_prec:%" PRId32, TREE_NAME(right),
			ts_subtree_dynamic_precedence(right), TREE_NAME(left), ts_subtree_dynamic_precedence(left));
		return true;
	}

	if (ts_subtree_dynamic_precedence(left) > ts_subtree_dynamic_precedence(right))
	{
		LOG("select_higher_precedence symbol:%s, prec:%" PRId32 ", over_symbol:%s, other_prec:%" PRId32, TREE_NAME(left),
			ts_subtree_dynamic_precedence(left), TREE_NAME(right), ts_subtree_dynamic_precedence(right));
		return false;
	}

	if (ts_subtree_error_cost(left) > 0)
		return true;

	int comparison = ts_subtree_compare(left, right /* , &self->tree_pool*/);
	switch (comparison)
	{
	case -1:
		LOG("select_earlier symbol:%s, over_symbol:%s", TREE_NAME(left), TREE_NAME(right));
		return false;
		break;
	case 1:
		LOG("select_earlier symbol:%s, over_symbol:%s", TREE_NAME(right), TREE_NAME(left));
		return true;
	default:
		LOG("select_existing symbol:%s, over_symbol:%s", TREE_NAME(left), TREE_NAME(right));
		return false;
	}
}

// Determine if a given tree's children should be replaced by an alternative
// array of children.
static bool ts_parser__select_children(TSParser *self, Subtree left, const SubtreeArray *children)
{
	array_assign(&self->scratch_trees, children);

	// Create a temporary subtree using the scratch trees array. This node does
	// not perform any allocation except for possibly growing the array to make
	// room for its own heap data. The scratch tree is never explicitly released,
	// so the same 'scratch trees' array can be reused again later.
	MutableSubtree scratch_tree = ts_subtree_new_node(ts_subtree_symbol(left), &self->scratch_trees, 0, self->language);

	return ts_parser__select_tree(self, left, ts_subtree_from_mut(scratch_tree));
}

static void ts_parser__shift(TSParser *self, StackVersion version, TSStateId state, Subtree lookahead, bool extra)
{
	bool	is_leaf = ts_subtree_child_count(lookahead) == 0;
	Subtree subtree_to_push = lookahead;
	if (extra != ts_subtree_extra(lookahead) && is_leaf)
	{
		MutableSubtree result = ts_subtree_make_mut(/*&self->tree_pool,*/ lookahead);
		ts_subtree_set_extra(&result, extra);
		subtree_to_push = ts_subtree_from_mut(result);
	}

	ts_stack_push(self->stack, version, subtree_to_push, !is_leaf, state);
	if (ts_subtree_has_external_tokens(subtree_to_push))
	{
		ts_stack_set_last_external_token(self->stack, version, ts_subtree_last_external_token(subtree_to_push));
	}
}

static StackVersion ts_parser__reduce(TSParser *self, StackVersion version, TSSymbol symbol, t_u32 count, int dynamic_precedence,
									  t_u16 production_id, bool is_fragile, bool end_of_non_terminal_extra)
{
	t_u32 initial_version_count = ts_stack_version_count(self->stack);

	// Pop the given number of nodes from the given version of the parse stack.
	// If stack versions have previously merged, then there may be more than one
	// path back through the stack. For each path, create a new parent node to
	// contain the popped children, and push it onto the stack in place of the
	// children.
	StackSliceArray pop = ts_stack_pop_count(self->stack, version, count);
	t_u32			removed_version_count = 0;
	for (t_u32 i = 0; i < pop.size; i++)
	{
		StackSlice	 slice = pop.contents[i];
		StackVersion slice_version = slice.version - removed_version_count;

		// This is where new versions are added to the parse stack. The versions
		// will all be sorted and truncated at the end of the outer parsing loop.
		// Allow the maximum version count to be temporarily exceeded, but only
		// by a limited threshold.
		if (slice_version > MAX_VERSION_COUNT + MAX_VERSION_COUNT_OVERFLOW)
		{
			ts_stack_remove_version(self->stack, slice_version);
			ts_subtree_array_delete(/*&self->tree_pool,*/ &slice.subtrees);
			removed_version_count++;
			while (i + 1 < pop.size)
			{
				StackSlice next_slice = pop.contents[i + 1];
				if (next_slice.version != slice.version)
					break;
				ts_subtree_array_delete(/*&self->tree_pool,*/ &next_slice.subtrees);
				i++;
			}
			continue;
		}

		// Extra tokens on top of the stack should not be included in this new parent
		// node. They will be re-pushed onto the stack after the parent node is
		// created and pushed.
		SubtreeArray children = slice.subtrees;
		ts_subtree_array_remove_trailing_extras(&children, &self->trailing_extras);

		MutableSubtree parent = ts_subtree_new_node(symbol, &children, production_id, self->language);

		// This pop operation may have caused multiple stack versions to collapse
		// into one, because they all diverged from a common state. In that case,
		// choose one of the arrays of trees to be the parent node's children, and
		// delete the rest of the tree arrays.
		while (i + 1 < pop.size)
		{
			StackSlice next_slice = pop.contents[i + 1];
			if (next_slice.version != slice.version)
				break;
			i++;

			SubtreeArray next_slice_children = next_slice.subtrees;
			ts_subtree_array_remove_trailing_extras(&next_slice_children, &self->trailing_extras2);

			if (ts_parser__select_children(self, ts_subtree_from_mut(parent), &next_slice_children))
			{
				ts_subtree_array_clear(/*&self->tree_pool,*/ &self->trailing_extras);
				ts_subtree_release(/*&self->tree_pool,*/ ts_subtree_from_mut(parent));
				array_swap(&self->trailing_extras, &self->trailing_extras2);
				parent = ts_subtree_new_node(symbol, &next_slice_children, production_id, self->language);
			}
			else
			{
				array_clear(&self->trailing_extras2);
				ts_subtree_array_delete(/*&self->tree_pool,*/ &next_slice.subtrees);
			}
		}

		TSStateId state = ts_stack_state(self->stack, slice_version);
		TSStateId next_state = ts_language_next_state(self->language, state, symbol);
		if (end_of_non_terminal_extra && next_state == state)
		{
			parent.ptr->extra = true;
		}
		if (is_fragile || pop.size > 1 || initial_version_count > 1)
		{
			parent.ptr->fragile_left = true;
			parent.ptr->fragile_right = true;
			parent.ptr->parse_state = TS_TREE_STATE_NONE;
		}
		else
		{
			parent.ptr->parse_state = state;
		}
		parent.ptr->dynamic_precedence += dynamic_precedence;

		// Push the parent node onto the stack, along with any extra tokens that
		// were previously on top of the stack.
		ts_stack_push(self->stack, slice_version, ts_subtree_from_mut(parent), false, next_state);
		for (t_u32 j = 0; j < self->trailing_extras.size; j++)
		{
			ts_stack_push(self->stack, slice_version, self->trailing_extras.contents[j], false, next_state);
		}

		for (StackVersion j = 0; j < slice_version; j++)
		{
			if (j == version)
				continue;
			if (ts_stack_merge(self->stack, j, slice_version))
			{
				removed_version_count++;
				break;
			}
		}
	}

	// Return the first new stack version that was created.
	return ts_stack_version_count(self->stack) > initial_version_count ? initial_version_count : STACK_VERSION_NONE;
}

static void ts_parser__accept(TSParser *self, StackVersion version, Subtree lookahead)
{
	assert(ts_subtree_is_eof(lookahead));
	ts_stack_push(self->stack, version, lookahead, false, 1);

	StackSliceArray pop = ts_stack_pop_all(self->stack, version);
	for (t_u32 i = 0; i < pop.size; i++)
	{
		SubtreeArray trees = pop.contents[i].subtrees;

		Subtree root = NULL_SUBTREE;
		for (t_u32 j = trees.size - 1; j + 1 > 0; j--)
		{
			Subtree tree = trees.contents[j];
			if (!ts_subtree_extra(tree))
			{
				t_u32		   child_count = ts_subtree_child_count(tree);
				const Subtree *children = ts_subtree_children(tree);
				for (t_u32 k = 0; k < child_count; k++)
				{
					ts_subtree_retain(children[k]);
				}
				array_splice(&trees, j, 1, child_count, children);
				root = ts_subtree_from_mut(ts_subtree_new_node(ts_subtree_symbol(tree), &trees, tree.ptr->production_id, self->language));
				ts_subtree_release(/*&self->tree_pool, */ tree);
				break;
			}
		}

		assert(root.ptr);
		self->accept_count++;

		if (self->finished_tree.ptr)
		{
			if (ts_parser__select_tree(self, self->finished_tree, root))
			{
				ts_subtree_release(/*&self->tree_pool,*/ self->finished_tree);
				self->finished_tree = root;
			}
			else
			{
				ts_subtree_release(/*&self->tree_pool,*/ root);
			}
		}
		else
		{
			self->finished_tree = root;
		}
	}

	ts_stack_remove_version(self->stack, pop.contents[0].version);
	ts_stack_halt(self->stack, version);
}

static bool ts_parser__do_all_potential_reductions(TSParser *self, StackVersion starting_version, TSSymbol lookahead_symbol)
{
	t_u32 initial_version_count = ts_stack_version_count(self->stack);

	bool		 can_shift_lookahead_symbol = false;
	StackVersion version = starting_version;
	for (t_u32 i = 0; true; i++)
	{
		t_u32 version_count = ts_stack_version_count(self->stack);
		if (version >= version_count)
			break;

		bool merged = false;
		for (StackVersion j = initial_version_count; j < version; j++)
		{
			if (ts_stack_merge(self->stack, j, version))
			{
				merged = true;
				break;
			}
		}
		if (merged)
			continue;

		TSStateId state = ts_stack_state(self->stack, version);
		bool	  has_shift_action = false;
		array_clear(&self->reduce_actions);

		TSSymbol first_symbol, end_symbol;
		if (lookahead_symbol != 0)
		{
			first_symbol = lookahead_symbol;
			end_symbol = lookahead_symbol + 1;
		}
		else
		{
			first_symbol = 1;
			end_symbol = self->language->token_count;
		}

		for (TSSymbol symbol = first_symbol; symbol < end_symbol; symbol++)
		{
			TableEntry entry;
			ts_language_table_entry(self->language, state, symbol, &entry);
			for (t_u32 j = 0; j < entry.action_count; j++)
			{
				TSParseAction action = entry.actions[j];
				switch (action.type)
				{
				case TSParseActionTypeShift:
				case TSParseActionTypeRecover:
					if (!action.shift.extra && !action.shift.repetition)
						has_shift_action = true;
					break;
				case TSParseActionTypeReduce:
					if (action.reduce.child_count > 0)
						ts_reduce_action_set_add(&self->reduce_actions, (ReduceAction){
																			.symbol = action.reduce.symbol,
																			.count = action.reduce.child_count,
																			.dynamic_precedence = action.reduce.dynamic_precedence,
																			.production_id = action.reduce.production_id,
																		});
					break;
				default:
					break;
				}
			}
		}

		StackVersion reduction_version = STACK_VERSION_NONE;
		for (t_u32 j = 0; j < self->reduce_actions.size; j++)
		{
			ReduceAction action = self->reduce_actions.contents[j];

			reduction_version =
				ts_parser__reduce(self, version, action.symbol, action.count, action.dynamic_precedence, action.production_id, true, false);
		}

		if (has_shift_action)
		{
			can_shift_lookahead_symbol = true;
		}
		else if (reduction_version != STACK_VERSION_NONE && i < MAX_VERSION_COUNT)
		{
			ts_stack_renumber_version(self->stack, reduction_version, version);
			continue;
		}
		else if (lookahead_symbol != 0)
		{
			ts_stack_remove_version(self->stack, version);
		}

		if (version == starting_version)
		{
			version = version_count;
		}
		else
		{
			version++;
		}
	}

	return can_shift_lookahead_symbol;
}

static bool ts_parser__recover_to_state(TSParser *self, StackVersion version, t_u32 depth, TSStateId goal_state)
{
	StackSliceArray pop = ts_stack_pop_count(self->stack, version, depth);
	StackVersion	previous_version = STACK_VERSION_NONE;

	for (t_u32 i = 0; i < pop.size; i++)
	{
		StackSlice slice = pop.contents[i];

		if (slice.version == previous_version)
		{
			ts_subtree_array_delete(/*&self->tree_pool,*/ &slice.subtrees);
			array_erase(&pop, i--);
			continue;
		}

		if (ts_stack_state(self->stack, slice.version) != goal_state)
		{
			ts_stack_halt(self->stack, slice.version);
			ts_subtree_array_delete(/*&self->tree_pool,*/ &slice.subtrees);
			array_erase(&pop, i--);
			continue;
		}

		SubtreeArray error_trees = ts_stack_pop_error(self->stack, slice.version);
		if (error_trees.size > 0)
		{
			assert(error_trees.size == 1);
			Subtree error_tree = error_trees.contents[0];
			t_u32	error_child_count = ts_subtree_child_count(error_tree);
			if (error_child_count > 0)
			{
				array_splice(&slice.subtrees, 0, 0, error_child_count, ts_subtree_children(error_tree));
				for (t_u32 j = 0; j < error_child_count; j++)
				{
					ts_subtree_retain(slice.subtrees.contents[j]);
				}
			}
			ts_subtree_array_delete(/*&self->tree_pool,*/ &error_trees);
		}

		ts_subtree_array_remove_trailing_extras(&slice.subtrees, &self->trailing_extras);

		if (slice.subtrees.size > 0)
		{
			Subtree error = ts_subtree_new_error_node(&slice.subtrees, true, self->language);
			ts_stack_push(self->stack, slice.version, error, false, goal_state);
		}
		else
		{
			array_delete(&slice.subtrees);
		}

		for (t_u32 j = 0; j < self->trailing_extras.size; j++)
		{
			Subtree tree = self->trailing_extras.contents[j];
			ts_stack_push(self->stack, slice.version, tree, false, goal_state);
		}

		previous_version = slice.version;
	}

	return previous_version != STACK_VERSION_NONE;
}

static void ts_parser__recover(TSParser *self, StackVersion version, Subtree lookahead)
{
	bool		  did_recover = false;
	t_u32		  previous_version_count = ts_stack_version_count(self->stack);
	Length		  position = ts_stack_position(self->stack, version);
	StackSummary *summary = ts_stack_get_summary(self->stack, version);
	t_u32		  node_count_since_error = ts_stack_node_count_since_error(self->stack, version);
	t_u32		  current_error_cost = ts_stack_error_cost(self->stack, version);

	// When the parser is in the error state, there are two strategies for recovering with a
	// given lookahead token:
	// 1. Find a previous state on the stack in which that lookahead token would be valid. Then,
	//    create a new stack version that is in that state again. This entails popping all of the
	//    subtrees that have been pushed onto the stack since that previous state, and wrapping
	//    them in an ERROR node.
	// 2. Wrap the lookahead token in an ERROR node, push that ERROR node onto the stack, and
	//    move on to the next lookahead token, remaining in the error state.
	//
	// First, try the strategy 1. Upon entering the error state, the parser recorded a summary
	// of the previous parse states and their depths. Look at each state in the summary, to see
	// if the current lookahead token would be valid in that state.
	if (summary && !ts_subtree_is_error(lookahead))
	{
		for (t_u32 i = 0; i < summary->size; i++)
		{
			StackSummaryEntry entry = summary->contents[i];

			if (entry.state == ERROR_STATE)
				continue;
			if (entry.position.bytes == position.bytes)
				continue;
			t_u32 depth = entry.depth;
			if (node_count_since_error > 0)
				depth++;

			// Do not recover in ways that create redundant stack versions.
			bool would_merge = false;
			for (t_u32 j = 0; j < previous_version_count; j++)
			{
				if (ts_stack_state(self->stack, j) == entry.state && ts_stack_position(self->stack, j).bytes == position.bytes)
				{
					would_merge = true;
					break;
				}
			}
			if (would_merge)
				continue;

			// Do not recover if the result would clearly be worse than some existing stack version.
			t_u32 new_cost = current_error_cost + entry.depth * ERROR_COST_PER_SKIPPED_TREE +
							 (position.bytes - entry.position.bytes) * ERROR_COST_PER_SKIPPED_CHAR +
							 (position.extent.row - entry.position.extent.row) * ERROR_COST_PER_SKIPPED_LINE;
			if (ts_parser__better_version_exists(self, version, false, new_cost))
				break;

			// If the current lookahead token is valid in some previous state, recover to that state.
			// Then stop looking for further recoveries.
			if (ts_language_has_actions(self->language, entry.state, ts_subtree_symbol(lookahead)))
			{
				if (ts_parser__recover_to_state(self, version, depth, entry.state))
				{
					did_recover = true;
					LOG("recover_to_previous state:%u, depth:%u", entry.state, depth);
					LOG_STACK();
					break;
				}
			}
		}
	}

	// In the process of attempting to recover, some stack versions may have been created
	// and subsequently halted. Remove those versions.
	for (t_u32 i = previous_version_count; i < ts_stack_version_count(self->stack); i++)
	{
		if (!ts_stack_is_active(self->stack, i))
		{
			ts_stack_remove_version(self->stack, i--);
		}
	}

	// If strategy 1 succeeded, a new stack version will have been created which is able to handle
	// the current lookahead token. Now, in addition, try strategy 2 described above: skip the
	// current lookahead token by wrapping it in an ERROR node.

	// Don't pursue this additional strategy if there are already too many stack versions.
	if (did_recover && ts_stack_version_count(self->stack) > MAX_VERSION_COUNT)
	{
		ts_stack_halt(self->stack, version);
		ts_subtree_release(/*&self->tree_pool,*/ lookahead);
		return;
	}

	if (did_recover && ts_subtree_has_external_scanner_state_change(lookahead))
	{
		ts_stack_halt(self->stack, version);
		ts_subtree_release(/*&self->tree_pool,*/ lookahead);
		return;
	}

	// If the parser is still in the error state at the end of the file, just wrap everything
	// in an ERROR node and terminate.
	if (ts_subtree_is_eof(lookahead))
	{
		LOG("recover_eof");
		SubtreeArray children = array_new();
		Subtree		 parent = ts_subtree_new_error_node(&children, false, self->language);
		ts_stack_push(self->stack, version, parent, false, 1);
		ts_parser__accept(self, version, lookahead);
		return;
	}

	// Do not recover if the result would clearly be worse than some existing stack version.
	t_u32 new_cost = current_error_cost + ERROR_COST_PER_SKIPPED_TREE + ts_subtree_total_bytes(lookahead) * ERROR_COST_PER_SKIPPED_CHAR +
					 ts_subtree_total_size(lookahead).extent.row * ERROR_COST_PER_SKIPPED_LINE;
	if (ts_parser__better_version_exists(self, version, false, new_cost))
	{
		ts_stack_halt(self->stack, version);
		ts_subtree_release(/*&self->tree_pool,*/ lookahead);
		return;
	}

	// If the current lookahead token is an extra token, mark it as extra. This means it won't
	// be counted in error cost calculations.
	t_u32				 n;
	const TSParseAction *actions = ts_language_actions(self->language, 1, ts_subtree_symbol(lookahead), &n);
	if (n > 0 && actions[n - 1].type == TSParseActionTypeShift && actions[n - 1].shift.extra)
	{
		MutableSubtree mutable_lookahead = ts_subtree_make_mut(/*&self->tree_pool,*/ lookahead);
		ts_subtree_set_extra(&mutable_lookahead, true);
		lookahead = ts_subtree_from_mut(mutable_lookahead);
	}

	// Wrap the lookahead token in an ERROR.
	LOG("skip_token symbol:%s", TREE_NAME(lookahead));
	SubtreeArray children = array_new();
	array_reserve(&children, 1);
	array_push(&children, lookahead);
	MutableSubtree error_repeat = ts_subtree_new_node(ts_builtin_sym_error_repeat, &children, 0, self->language);

	// If other tokens have already been skipped, so there is already an ERROR at the top of the
	// stack, then pop that ERROR off the stack and wrap the two ERRORs together into one larger
	// ERROR.
	if (node_count_since_error > 0)
	{
		StackSliceArray pop = ts_stack_pop_count(self->stack, version, 1);

		// TODO: Figure out how to make this condition occur.
		// See https://github.com/atom/atom/issues/18450#issuecomment-439579778
		// If multiple stack versions have merged at this point, just pick one of the errors
		// arbitrarily and discard the rest.
		if (pop.size > 1)
		{
			for (t_u32 i = 1; i < pop.size; i++)
			{
				ts_subtree_array_delete(/*&self->tree_pool,*/ &pop.contents[i].subtrees);
			}
			while (ts_stack_version_count(self->stack) > pop.contents[0].version + 1)
			{
				ts_stack_remove_version(self->stack, pop.contents[0].version + 1);
			}
		}

		ts_stack_renumber_version(self->stack, pop.contents[0].version, version);
		array_push(&pop.contents[0].subtrees, ts_subtree_from_mut(error_repeat));
		error_repeat = ts_subtree_new_node(ts_builtin_sym_error_repeat, &pop.contents[0].subtrees, 0, self->language);
	}

	// Push the new ERROR onto the stack.
	ts_stack_push(self->stack, version, ts_subtree_from_mut(error_repeat), false, ERROR_STATE);
	if (ts_subtree_has_external_tokens(lookahead))
	{
		ts_stack_set_last_external_token(self->stack, version, ts_subtree_last_external_token(lookahead));
	}
}

static void ts_parser__handle_error(TSParser *self, StackVersion version, Subtree lookahead)
{
	t_u32 previous_version_count = ts_stack_version_count(self->stack);

	// Perform any reductions that can happen in this state, regardless of the lookahead. After
	// skipping one or more invalid tokens, the parser might find a token that would have allowed
	// a reduction to take place.
	ts_parser__do_all_potential_reductions(self, version, 0);
	t_u32  version_count = ts_stack_version_count(self->stack);
	Length position = ts_stack_position(self->stack, version);

	// Push a discontinuity onto the stack. Merge all of the stack versions that
	// were created in the previous step.
	bool did_insert_missing_token = false;
	for (StackVersion v = version; v < version_count;)
	{
		if (!did_insert_missing_token)
		{
			TSStateId state = ts_stack_state(self->stack, v);
			for (TSSymbol missing_symbol = 1; missing_symbol < (t_u16)self->language->token_count; missing_symbol++)
			{
				TSStateId state_after_missing_symbol = ts_language_next_state(self->language, state, missing_symbol);
				if (state_after_missing_symbol == 0 || state_after_missing_symbol == state)
				{
					continue;
				}

				if (ts_language_has_reduce_action(self->language, state_after_missing_symbol, ts_subtree_leaf_symbol(lookahead)))
				{
					// In case the parser is currently outside of any included range, the lexer will
					// snap to the beginning of the next included range. The missing token's padding
					// must be assigned to position it within the next included range.
					ts_lexer_reset(&self->lexer, position);
					ts_lexer_mark_end(&self->lexer);
					Length padding = length_sub(self->lexer.token_end_position, position);
					t_u32  lookahead_bytes = ts_subtree_total_bytes(lookahead) + ts_subtree_lookahead_bytes(lookahead);

					StackVersion version_with_missing_tree = ts_stack_copy_version(self->stack, v);
					Subtree		 missing_tree =
						ts_subtree_new_missing_leaf(/*&self->tree_pool,*/ missing_symbol, padding, lookahead_bytes, self->language);
					ts_stack_push(self->stack, version_with_missing_tree, missing_tree, false, state_after_missing_symbol);

					if (ts_parser__do_all_potential_reductions(self, version_with_missing_tree, ts_subtree_leaf_symbol(lookahead)))
					{
						LOG("recover_with_missing symbol:%s, state:%u", SYM_NAME(missing_symbol),
							ts_stack_state(self->stack, version_with_missing_tree));
						did_insert_missing_token = true;
						break;
					}
				}
			}
		}

		ts_stack_push(self->stack, v, NULL_SUBTREE, false, ERROR_STATE);
		v = (v == version) ? previous_version_count : v + 1;
	}

	for (t_u32 i = previous_version_count; i < version_count; i++)
	{
		bool did_merge = ts_stack_merge(self->stack, version, previous_version_count);
		assert(did_merge);
		(void)did_merge; //	fix warning/error with clang -Os
	}

	ts_stack_record_summary(self->stack, version, MAX_SUMMARY_DEPTH);

	// Begin recovery with the current lookahead node, rather than waiting for the
	// next turn of the parse loop. This ensures that the tree accounts for the
	// current lookahead token's "lookahead bytes" value, which describes how far
	// the lexer needed to look ahead beyond the content of the token in order to
	// recognize it.
	ts_parser__recover(self, version, lookahead);

	LOG_STACK();
}

static bool ts_parser__advance(TSParser *self, StackVersion version, bool allow_node_reuse)
{
	(void)(allow_node_reuse);
	TSStateId state = ts_stack_state(self->stack, version);
	t_u32	  position = ts_stack_position(self->stack, version).bytes;
	Subtree	  last_external_token = ts_stack_last_external_token(self->stack, version);

	Subtree	   lookahead = NULL_SUBTREE;
	TableEntry table_entry = {.action_count = 0};

	// If no node from the previous syntax tree could be reused, then try to
	// reuse the token previously returned by the lexer.
	if (!lookahead.ptr)
	{
		lookahead = ts_parser__get_cached_token(self, state, position, last_external_token, &table_entry);
	}

	bool needs_lex = !lookahead.ptr;
	for (;;)
	{
		// Otherwise, re-run the lexer.
		if (needs_lex)
		{
			needs_lex = false;
			lookahead = ts_parser__lex(self, version, state);
			if (self->has_scanner_error)
				return false;

			if (lookahead.ptr)
			{
				ts_parser__set_cached_token(self, position, last_external_token, lookahead);
				ts_language_table_entry(self->language, state, ts_subtree_symbol(lookahead), &table_entry);
			}

			// When parsing a non-terminal extra, a null lookahead indicates the
			// end of the rule. The reduction is stored in the EOF table entry.
			// After the reduction, the lexer needs to be run again.
			else
			{
				ts_language_table_entry(self->language, state, ts_builtin_sym_end, &table_entry);
			}
		}

		// If a cancellation flag or a timeout was provided, then check every
		// time a fixed number of parse actions has been processed.
		if (++self->operation_count == OP_COUNT_PER_TIMEOUT_CHECK)
		{
			self->operation_count = 0;
		}
		if (self->operation_count == 0 && ((self->cancellation_flag && *self->cancellation_flag)))
		{
			if (lookahead.ptr)
			{
				ts_subtree_release(/*&self->tree_pool,*/ lookahead);
			}
			return false;
		}

		// Process each parse action for the current lookahead token in
		// the current state. If there are multiple actions, then this is
		// an ambiguous state. REDUCE actions always create a new stack
		// version, whereas SHIFT actions update the existing stack version
		// and terminate this loop.
		StackVersion last_reduction_version = STACK_VERSION_NONE;
		for (t_u32 i = 0; i < table_entry.action_count; i++)
		{
			TSParseAction action = table_entry.actions[i];

			switch (action.type)
			{
			case TSParseActionTypeShift: {
				if (action.shift.repetition)
					break;
				TSStateId next_state;
				if (action.shift.extra)
				{
					next_state = state;
					LOG("shift_extra");
				}
				else
				{
					next_state = action.shift.state;
					LOG("shift state:%u", next_state);
				}

				if (ts_subtree_child_count(lookahead) > 0)
				{
					next_state = ts_language_next_state(self->language, state, ts_subtree_symbol(lookahead));
				}

				ts_parser__shift(self, version, next_state, lookahead, action.shift.extra);
				// if (did_reuse)
				// 	reusable_node_advance(&self->reusable_node);
				return true;
			}

			case TSParseActionTypeReduce: {
				bool is_fragile = table_entry.action_count > 1;
				bool end_of_non_terminal_extra = lookahead.ptr == NULL;
				LOG("reduce sym:%s, child_count:%u", SYM_NAME(action.reduce.symbol), action.reduce.child_count);
				StackVersion reduction_version =
					ts_parser__reduce(self, version, action.reduce.symbol, action.reduce.child_count, action.reduce.dynamic_precedence,
									  action.reduce.production_id, is_fragile, end_of_non_terminal_extra);
				if (reduction_version != STACK_VERSION_NONE)
				{
					last_reduction_version = reduction_version;
				}
				break;
			}

			case TSParseActionTypeAccept: {
				LOG("accept");
				ts_parser__accept(self, version, lookahead);
				return true;
			}

			case TSParseActionTypeRecover: {

				ts_parser__recover(self, version, lookahead);
				return true;
			}
			}
		}

		// If a reduction was performed, then replace the current stack version
		// with one of the stack versions created by a reduction, and continue
		// processing this version of the stack with the same lookahead symbol.
		if (last_reduction_version != STACK_VERSION_NONE)
		{
			ts_stack_renumber_version(self->stack, last_reduction_version, version);
			LOG_STACK();
			state = ts_stack_state(self->stack, version);

			// At the end of a non-terminal extra rule, the lexer will return a
			// null subtree, because the parser needs to perform a fixed reduction
			// regardless of the lookahead node. After performing that reduction,
			// (and completing the non-terminal extra rule) run the lexer again based
			// on the current parse state.
			if (!lookahead.ptr)
			{
				needs_lex = true;
			}
			else
			{
				ts_language_table_entry(self->language, state, ts_subtree_leaf_symbol(lookahead), &table_entry);
			}

			continue;
		}

		// A non-terminal extra rule was reduced and merged into an existing
		// stack version. This version can be discarded.
		if (!lookahead.ptr)
		{
			ts_stack_halt(self->stack, version);
			return true;
		}

		// If there were no parse actions for the current lookahead token, then
		// it is not valid in this state. If the current lookahead token is a
		// keyword, then switch to treating it as the normal word token if that
		// token is valid in this state.
		if (ts_subtree_is_keyword(lookahead) && ts_subtree_symbol(lookahead) != self->language->keyword_capture_token)
		{
			ts_language_table_entry(self->language, state, self->language->keyword_capture_token, &table_entry);
			if (table_entry.action_count > 0)
			{
				LOG("switch from_keyword:%s, to_word_token:%s", TREE_NAME(lookahead), SYM_NAME(self->language->keyword_capture_token));

				MutableSubtree mutable_lookahead = ts_subtree_make_mut(/*&self->tree_pool,*/ lookahead);
				ts_subtree_set_symbol(&mutable_lookahead, self->language->keyword_capture_token, self->language);
				lookahead = ts_subtree_from_mut(mutable_lookahead);
				continue;
			}
		}

		// If the current lookahead token is not valid and the parser is
		// already in the error state, restart the error recovery process.
		// TODO - can this be unified with the other `RECOVER` case above?
		if (state == ERROR_STATE)
		{
			ts_parser__recover(self, version, lookahead);
			return true;
		}

		// If the current lookahead token is not valid and the previous
		// subtree on the stack was reused from an old tree, it isn't actually
		// valid to reuse it. Remove it from the stack, and in its place,
		// push each of its children. Then try again to process the current
		// lookahead.
		if (ts_parser__breakdown_top_of_stack(self, version))
		{
			state = ts_stack_state(self->stack, version);
			ts_subtree_release(/*&self->tree_pool,*/ lookahead);
			needs_lex = true;
			continue;
		}

		// At this point, the current lookahead token is definitely not valid
		// for this parse stack version. Mark this version as paused and continue
		// processing any other stack versions that might exist. If some other
		// version advances successfully, then this version can simply be removed.
		// But if all versions end up paused, then error recovery is needed.
		LOG("detect_error");
		ts_stack_pause(self->stack, version, lookahead);
		return true;
	}
}

static t_u32 ts_parser__condense_stack(TSParser *self)
{
	bool  made_changes = false;
	t_u32 min_error_cost = UINT_MAX;
	for (StackVersion i = 0; i < ts_stack_version_count(self->stack); i++)
	{
		// Prune any versions that have been marked for removal.
		if (ts_stack_is_halted(self->stack, i))
		{
			ts_stack_remove_version(self->stack, i);
			i--;
			continue;
		}

		// Keep track of the minimum error cost of any stack version so
		// that it can be returned.
		ErrorStatus status_i = ts_parser__version_status(self, i);
		if (!status_i.is_in_error && status_i.cost < min_error_cost)
		{
			min_error_cost = status_i.cost;
		}

		// Examine each pair of stack versions, removing any versions that
		// are clearly worse than another version. Ensure that the versions
		// are ordered from most promising to least promising.
		for (StackVersion j = 0; j < i; j++)
		{
			ErrorStatus status_j = ts_parser__version_status(self, j);

			switch (ts_parser__compare_versions(self, status_j, status_i))
			{
			case ErrorComparisonTakeLeft:
				made_changes = true;
				ts_stack_remove_version(self->stack, i);
				i--;
				j = i;
				break;

			case ErrorComparisonPreferLeft:
			case ErrorComparisonNone:
				if (ts_stack_merge(self->stack, j, i))
				{
					made_changes = true;
					i--;
					j = i;
				}
				break;

			case ErrorComparisonPreferRight:
				made_changes = true;
				if (ts_stack_merge(self->stack, j, i))
				{
					i--;
					j = i;
				}
				else
				{
					ts_stack_swap_versions(self->stack, i, j);
				}
				break;

			case ErrorComparisonTakeRight:
				made_changes = true;
				ts_stack_remove_version(self->stack, j);
				i--;
				j--;
				break;
			}
		}
	}

	// Enforce a hard upper bound on the number of stack versions by
	// discarding the least promising versions.
	while (ts_stack_version_count(self->stack) > MAX_VERSION_COUNT)
	{
		ts_stack_remove_version(self->stack, MAX_VERSION_COUNT);
		made_changes = true;
	}

	// If the best-performing stack version is currently paused, or all
	// versions are paused, then resume the best paused version and begin
	// the error recovery process. Otherwise, remove the paused versions.
	if (ts_stack_version_count(self->stack) > 0)
	{
		bool has_unpaused_version = false;
		for (StackVersion i = 0, n = ts_stack_version_count(self->stack); i < n; i++)
		{
			if (ts_stack_is_paused(self->stack, i))
			{
				if (!has_unpaused_version && self->accept_count < MAX_VERSION_COUNT)
				{
					LOG("resume version:%u", i);
					min_error_cost = ts_stack_error_cost(self->stack, i);
					Subtree lookahead = ts_stack_resume(self->stack, i);
					ts_parser__handle_error(self, i, lookahead);
					has_unpaused_version = true;
				}
				else
				{
					ts_stack_remove_version(self->stack, i);
					i--;
					n--;
				}
			}
			else
			{
				has_unpaused_version = true;
			}
		}
	}

	if (made_changes)
	{
		LOG("condense");
		LOG_STACK();
	}

	return min_error_cost;
}

static bool ts_parser_has_outstanding_parse(TSParser *self)
{
	return (self->external_scanner_payload || ts_stack_state(self->stack, 0) != 1 || ts_stack_node_count_since_error(self->stack, 0) != 0);
}

// Parser - Public

TSParser *ts_parser_new(void)
{
	TSParser *self = mem_alloc_array(1, sizeof(TSParser));
	ts_lexer_init(&self->lexer);
	array_init(&self->reduce_actions);
	array_reserve(&self->reduce_actions, 4);
	self->tree_pool = ts_subtree_pool_new(32);
	self->stack = ts_stack_new(&self->tree_pool);
	self->finished_tree = NULL_SUBTREE;
	self->cancellation_flag = NULL;
	self->language = NULL;
	self->has_scanner_error = false;
	self->external_scanner_payload = NULL;
	self->operation_count = 0;
	self->old_tree = NULL_SUBTREE;
	self->included_range_difference_index = 0;
	ts_parser__set_cached_token(self, 0, NULL_SUBTREE, NULL_SUBTREE);
	return self;
}

void ts_parser_delete(TSParser *self)
{
	if (!self)
		return;

	ts_parser_set_language(self, NULL);
	ts_stack_delete(self->stack);
	if (self->reduce_actions.contents)
	{
		array_delete(&self->reduce_actions);
	}
	if (self->old_tree.ptr)
	{
		ts_subtree_release(/*&self->tree_pool,*/ self->old_tree);
		self->old_tree = NULL_SUBTREE;
	}
	ts_lexer_delete(&self->lexer);
	ts_parser__set_cached_token(self, 0, NULL_SUBTREE, NULL_SUBTREE);
	ts_subtree_pool_delete(&self->tree_pool);
	array_delete(&self->trailing_extras);
	array_delete(&self->trailing_extras2);
	array_delete(&self->scratch_trees);
	mem_free(self);
}

const TSLanguage *ts_parser_language(const TSParser *self)
{
	return self->language;
}

bool ts_parser_set_language(TSParser *self, const TSLanguage *language)
{
	ts_parser_reset(self);
	ts_language_delete(self->language);
	self->language = NULL;

	if (language)
	{
		if (language->version > TREE_SITTER_LANGUAGE_VERSION || language->version < TREE_SITTER_MIN_COMPATIBLE_LANGUAGE_VERSION)
			return false;
	}

	self->language = ts_language_copy(language);
	return true;
}

void ts_parser_reset(TSParser *self)
{
	ts_parser__external_scanner_destroy(self);
	if (self->old_tree.ptr)
	{
		ts_subtree_release(/*&self->tree_pool,*/ self->old_tree);
		self->old_tree = NULL_SUBTREE;
	}

	ts_lexer_reset(&self->lexer, length_zero());
	ts_stack_clear(self->stack);
	ts_parser__set_cached_token(self, 0, NULL_SUBTREE, NULL_SUBTREE);
	if (self->finished_tree.ptr)
	{
		ts_subtree_release(/*&self->tree_pool,*/ self->finished_tree);
		self->finished_tree = NULL_SUBTREE;
	}
	self->accept_count = 0;
	self->has_scanner_error = false;
}

TSTree *ts_parser_parse(TSParser *self, const TSTree *old_tree, TSInput input)
{
	(void)(old_tree);
	TSTree *result = NULL;
	if (!self->language || !input.read)
		return NULL;

	ts_lexer_set_input(&self->lexer, input);
	self->included_range_difference_index = 0;

	if (ts_parser_has_outstanding_parse(self))
	{
		LOG("resume_parsing");
	}
	else
	{
		ts_parser__external_scanner_create(self);
		if (self->has_scanner_error)
			goto exit;

		LOG("new_parse");
	}

	self->operation_count = 0;

	t_u32 position = 0, last_position = 0, version_count = 0;
	do
	{
		for (StackVersion version = 0; version_count = ts_stack_version_count(self->stack), version < version_count; version++)
		{
			bool allow_node_reuse = version_count == 1;
			while (ts_stack_is_active(self->stack, version))
			{
				LOG("process version:%u, version_count:%u, state:%d, row:%u, col:%u", version, ts_stack_version_count(self->stack),
					ts_stack_state(self->stack, version), ts_stack_position(self->stack, version).extent.row,
					ts_stack_position(self->stack, version).extent.column);

				if (!ts_parser__advance(self, version, allow_node_reuse))
				{
					if (self->has_scanner_error)
						goto exit;
					return NULL;
				}

				LOG_STACK();

				position = ts_stack_position(self->stack, version).bytes;
				if (position > last_position || (version > 0 && position == last_position))
				{
					last_position = position;
					break;
				}
			}
		}

		// After advancing each version of the stack, re-sort the versions by their cost,
		// removing any versions that are no longer worth pursuing.
		t_u32 min_error_cost = ts_parser__condense_stack(self);

		// If there's already a finished parse tree that's better than any in-progress version,
		// then terminate parsing. Clear the parse stack to remove any extra references to subtrees
		// within the finished tree, ensuring that these subtrees can be safely mutated in-place
		// for rebalancing.
		if (self->finished_tree.ptr && ts_subtree_error_cost(self->finished_tree) < min_error_cost)
		{
			ts_stack_clear(self->stack);
			break;
		}

	} while (version_count != 0);

	assert(self->finished_tree.ptr);
	ts_subtree_balance(self->finished_tree, /*&self->tree_pool,*/ self->language);
	LOG("done");
	LOG_TREE(self->finished_tree);

	result = ts_tree_new(self->finished_tree, self->language, self->lexer.included_ranges, self->lexer.included_range_count);
	self->finished_tree = NULL_SUBTREE;

exit:
	ts_parser_reset(self);
	return result;
}

TSTree *ts_parser_parse_string(TSParser *self, const TSTree *old_tree, t_const_str string, t_u32 length)
{
	return ts_parser_parse_string_encoding(self, old_tree, string, length, TSInputEncodingUTF8);
}

TSTree *ts_parser_parse_string_encoding(TSParser *self, const TSTree *old_tree, t_const_str string, t_u32 length, TSInputEncoding encoding)
{
	TSStringInput input = {(const t_u8 *)string, length};
	return ts_parser_parse(self, old_tree,
						   (TSInput){
							   &input,
							   ts_string_input_read,
							   encoding,
						   });
}

#undef LOG
