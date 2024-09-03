/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 14:08:00 by maiboyer          #+#    #+#             */
/*   Updated: 2024/09/03 14:08:01 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/mem/mem.h"
#include "me/types.h"
#include "me/vec/vec_subtree.h"
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

static const t_u32				MAX_VERSION_COUNT = 1;
static const t_u32				MAX_VERSION_COUNT_OVERFLOW = 1;
static const t_u32				MAX_SUMMARY_DEPTH = 1;
static const t_u32				MAX_COST_DIFFERENCE = 16
					* ERROR_COST_PER_SKIPPED_TREE;

typedef struct s_error_status	t_error_status;
typedef enum e_error_comparison	t_error_comparison;
typedef struct s_string_input	t_string_input;

void							ts_lexer__mark_end(TSLexer *_self);

struct							TSParser
{
	t_lexer						lexer;
	t_stack						*stack;
	const TSLanguage			*language;
	ReduceActionSet				reduce_actions;
	t_subtree					finished_tree;
	t_vec_subtree				trailing_extras;
	t_vec_subtree				trailing_extras2;
	t_vec_subtree				scratch_trees;
	void						*external_scanner_payload;
	t_u32						accept_count;
	t_u32						operation_count;
	bool						has_scanner_error;
};

struct							s_error_status
{
	t_u32						cost;
	t_u32						node_count;
	int							dynamic_precedence;
	bool						is_in_error;
};

enum							e_error_comparison
{

	ECTakeLeft,
	ECPreferLeft,
	ECNone,
	ECPreferRight,
	ECTakeRight,
};

struct							s_string_input
{
	const t_u8					*string;
	t_u32						length;
};

// StringInput

static const t_u8	*ts_string_input_read(void *_self, t_u32 byte,
		TSPoint point, t_u32 *length)
{
	t_string_input	*self;

	(void)point;
	self = (t_string_input *)_self;
	if (byte >= self->length)
	{
		*length = 0;
		return ((const t_u8 *)"");
	}
	else
	{
		*length = self->length - byte;
		return (self->string + byte);
	}
}

// Parser - Private
static bool	ts_parser__breakdown_top_of_stack(TSParser *self,
		t_stack_version version)
{
	t_stack_slice_array	pop;
	bool				did_break_down;
	bool				pending;
	t_stack_slice		slice;
	TSStateId			state;
	t_subtree			parent;
	t_subtree			child;
	t_subtree			tree;
	t_u32				i;
	t_u32				n;
	t_u32				j;

	did_break_down = false;
	pending = false;
	do
	{
		pop = ts_stack_pop_pending(self->stack, version);
		if (!pop.size)
			break ;
		did_break_down = true;
		pending = false;
		for (i = 0; i < pop.size; i++)
		{
			slice = pop.contents[i];
			state = ts_stack_state(self->stack, slice.version);
			parent = *slice.subtrees.buffer;
			for (j = 0, n = ts_subtree_child_count(parent); j < n; j++)
			{
				child = ts_subtree_children(parent)[j];
				pending = ts_subtree_child_count(child) > 0;
				if (ts_subtree_is_error(child))
				{
					state = ERROR_STATE;
				}
				else if (!ts_subtree_extra(child))
				{
					state = ts_language_next_state(self->language, state,
							ts_subtree_symbol(child));
				}
				child->ref_count++;
				ts_stack_push(self->stack, slice.version, child, pending,
					state);
			}
			for (j = 1; j < slice.subtrees.len; j++)
			{
				tree = slice.subtrees.buffer[j];
				ts_stack_push(self->stack, slice.version, tree, false, state);
			}
			ts_subtree_release(parent);
			array_delete(&slice.subtrees);
		}
	} while (pending);
	return (did_break_down);
}

static t_error_comparison	ts_parser__compare_versions(TSParser *self,
		t_error_status a, t_error_status b)
{
	(void)self;
	if (!a.is_in_error && b.is_in_error)
	{
		if (a.cost < b.cost)
		{
			return (ECTakeLeft);
		}
		else
		{
			return (ECPreferLeft);
		}
	}
	if (a.is_in_error && !b.is_in_error)
	{
		if (b.cost < a.cost)
		{
			return (ECTakeRight);
		}
		else
		{
			return (ECPreferRight);
		}
	}
	if (a.cost < b.cost)
	{
		if ((b.cost - a.cost) * (1 + a.node_count) > MAX_COST_DIFFERENCE)
		{
			return (ECTakeLeft);
		}
		else
		{
			return (ECPreferLeft);
		}
	}
	if (b.cost < a.cost)
	{
		if ((a.cost - b.cost) * (1 + b.node_count) > MAX_COST_DIFFERENCE)
		{
			return (ECTakeRight);
		}
		else
		{
			return (ECPreferRight);
		}
	}
	if (a.dynamic_precedence > b.dynamic_precedence)
		return (ECPreferLeft);
	if (b.dynamic_precedence > a.dynamic_precedence)
		return (ECPreferRight);
	return (ECNone);
}

static t_error_status	ts_parser__version_status(TSParser *self,
		t_stack_version version)
{
	t_u32	cost;
	bool	is_paused;

	cost = ts_stack_error_cost(self->stack, version);
	is_paused = ts_stack_is_paused(self->stack, version);
	if (is_paused)
		cost += ERROR_COST_PER_SKIPPED_TREE;
	return ((t_error_status){.cost = cost,
		.node_count = ts_stack_node_count_since_error(self->stack, version),
		.dynamic_precedence = ts_stack_dynamic_precedence(self->stack, version),
		.is_in_error = is_paused || ts_stack_state(self->stack,
			version) == ERROR_STATE});
}

static bool	ts_parser__better_version_exists(TSParser *self,
		t_stack_version version, bool is_in_error, t_u32 cost)
{
	t_error_status	status_i;
	Length			position;
	t_error_status	status;
	t_stack_version	i;
	t_stack_version	n;

	if (self->finished_tree
		&& ts_subtree_error_cost(self->finished_tree) <= cost)
		return (true);
	position = ts_stack_position(self->stack, version);
	status = (t_error_status){
		.cost = cost,
		.is_in_error = is_in_error,
		.dynamic_precedence = ts_stack_dynamic_precedence(self->stack, version),
		.node_count = ts_stack_node_count_since_error(self->stack, version),
	};
	for (i = 0, n = ts_stack_version_count(self->stack); i < n; i++)
	{
		if (i == version || !ts_stack_is_active(self->stack, i)
			|| ts_stack_position(self->stack, i).bytes < position.bytes)
			continue ;
		status_i = ts_parser__version_status(self, i);
		switch (ts_parser__compare_versions(self, status, status_i))
		{
		case ECTakeRight:
			return (true);
		case ECPreferRight:
			if (ts_stack_can_merge(self->stack, i, version))
				return (true);
			break ;
		default:
			break ;
		}
	}
	return false;
}

static bool	ts_parser__call_main_lex_fn(TSParser *self, TSLexMode lex_mode)
{
	return self->language->lex_fn(&self->lexer.data, lex_mode.lex_state);
}

static bool	ts_parser__call_keyword_lex_fn(TSParser *self, TSLexMode lex_mode)
{
	(void)(lex_mode);
	return self->language->keyword_lex_fn(&self->lexer.data, 0);
}

static void	ts_parser__external_scanner_create(TSParser *self)
{
	if (self->language && self->language->external_scanner.states
		&& self->language->external_scanner.create)
		self->external_scanner_payload = self->language->external_scanner.create();
}

static void	ts_parser__external_scanner_destroy(TSParser *self)
{
	if (self->language && self->external_scanner_payload
		&& self->language->external_scanner.destroy)
		self->language->external_scanner.destroy(self->external_scanner_payload);
	self->external_scanner_payload = NULL;
}

static t_u32	ts_parser__external_scanner_serialize(TSParser *self)
{
	t_u32	length;

	length = self->language->external_scanner.serialize(self->external_scanner_payload,
			self->lexer.debug_buffer);
	if (length > TREE_SITTER_SERIALIZATION_BUFFER_SIZE)
		me_abort("assertion failed in " __FILE__ " `length > "
					"TREE_SITTER_SERIALIZATION_BUFFER_SIZE`");
	return length;
}

static void	ts_parser__external_scanner_deserialize(TSParser *self,
		t_subtree external_token)
{
	const t_u8	*data;
	t_u32		length;

	data = NULL;
	length = 0;
	if (external_token)
	{
		data = ts_external_scanner_state_data(&external_token->external_scanner_state);
		length = external_token->external_scanner_state.length;
	}
	self->language->external_scanner.deserialize(self->external_scanner_payload,
		data, length);
}

static bool	ts_parser__external_scanner_scan(TSParser *self,
		TSStateId external_lex_state)
{
	const bool	*valid_external_tokens;

	valid_external_tokens = ts_language_enabled_external_tokens(self->language,
			external_lex_state);
	return self->language->external_scanner.scan(self->external_scanner_payload,
		&self->lexer.data, valid_external_tokens);
}

static t_subtree	ts_parser__lex(TSParser *self, t_stack_version version,
		TSStateId parse_state)
{
	Length		start_position;
	t_subtree	external_token;
	TSLexMode	lex_mode;
	bool		found_external_token;
	bool		error_mode;
	bool		skipped_error;
	bool		called_get_column;
	t_i32		first_error_character;
	Length		error_start_position;
	Length		error_end_position;
	t_u32		lookahead_end_byte;
	t_u32		external_scanner_state_len;
	bool		external_scanner_state_changed;
	bool		found_token;
	Length		current_position;
	t_subtree	result;
	Length		padding;
	Length		size;
	t_u32		lookahead_bytes;
	bool		is_keyword;
	TSSymbol	symbol;
	t_u32		end_byte;

	lex_mode = self->language->lex_modes[parse_state];
	if (lex_mode.lex_state == (t_u16)-1)
		return NULL;
	start_position = ts_stack_position(self->stack, version);
	external_token = ts_stack_last_external_token(self->stack, version);
	found_external_token = false;
	error_mode = parse_state == ERROR_STATE;
	skipped_error = false;
	called_get_column = false;
	first_error_character = 0;
	error_start_position = length_zero();
	error_end_position = length_zero();
	lookahead_end_byte = 0;
	external_scanner_state_len = 0;
	external_scanner_state_changed = false;
	ts_lexer_reset(&self->lexer, start_position);
	for (;;)
	{
		found_token = false;
		current_position = self->lexer.current_position;
		if (lex_mode.external_lex_state != 0)
		{
			ts_lexer_start(&self->lexer);
			ts_parser__external_scanner_deserialize(self, external_token);
			found_token = ts_parser__external_scanner_scan(self,
					lex_mode.external_lex_state);
			if (self->has_scanner_error)
				return NULL;
			ts_lexer_finish(&self->lexer, &lookahead_end_byte);
			if (found_token)
			{
				external_scanner_state_len = ts_parser__external_scanner_serialize(self);
				external_scanner_state_changed = !ts_external_scanner_state_eq(ts_subtree_external_scanner_state(external_token),
						self->lexer.debug_buffer, external_scanner_state_len);
				// When recovering from an error, ignore any
				// zero-length external tokens unless they
				// have changed the external scanner's
				// state. This helps to avoid infinite loops
				// which could otherwise occur, because the
				// lexer is looking for any possible token,
				// instead of looking for the specific set
				// of tokens that are valid in some parse
				// state.
				//
				// Note that it's possible that the token
				// end position may be *before* the original
				// position of the lexer because of the way
				// that tokens are positioned at included
				// range boundaries: when a token is
				// terminated at the start of an included
				// range, it is marked as ending at the
				// *end* of the preceding included range.
				if (self->lexer.token_end_position.bytes <= current_position.bytes
					&& (error_mode
						|| !ts_stack_has_advanced_since_error(self->stack,
							version)) && !external_scanner_state_changed)
				{
					found_token = false;
				}
			}
			if (found_token)
			{
				found_external_token = true;
				called_get_column = self->lexer.did_get_column;
				break ;
			}
			ts_lexer_reset(&self->lexer, current_position);
		}
		ts_lexer_start(&self->lexer);
		found_token = ts_parser__call_main_lex_fn(self, lex_mode);
		ts_lexer_finish(&self->lexer, &lookahead_end_byte);
		if (found_token)
			break ;
		if (!error_mode)
		{
			error_mode = true;
			lex_mode = self->language->lex_modes[ERROR_STATE];
			ts_lexer_reset(&self->lexer, start_position);
			continue ;
		}
		if (!skipped_error)
		{
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
				break ;
			}
			self->lexer.data.advance(&self->lexer.data, false);
		}
		error_end_position = self->lexer.current_position;
	}
	if (skipped_error)
	{
		padding = length_sub(error_start_position, start_position);
		size = length_sub(error_end_position, error_start_position);
		lookahead_bytes = lookahead_end_byte - error_end_position.bytes;
		result = ts_subtree_new_error(first_error_character, padding, size,
				lookahead_bytes, parse_state, self->language);
	}
	else
	{
		is_keyword = false;
		symbol = self->lexer.data.result_symbol;
		padding = length_sub(self->lexer.token_start_position, start_position);
		size = length_sub(self->lexer.token_end_position,
				self->lexer.token_start_position);
		lookahead_bytes = lookahead_end_byte
			- self->lexer.token_end_position.bytes;
		if (found_external_token)
		{
			symbol = self->language->external_scanner.symbol_map[symbol];
		}
		else if (symbol == self->language->keyword_capture_token && symbol != 0)
		{
			end_byte = self->lexer.token_end_position.bytes;
			ts_lexer_reset(&self->lexer, self->lexer.token_start_position);
			ts_lexer_start(&self->lexer);
			is_keyword = ts_parser__call_keyword_lex_fn(self, lex_mode);
			if (is_keyword && self->lexer.token_end_position.bytes == end_byte
				&& ts_language_has_actions(self->language, parse_state,
					self->lexer.data.result_symbol))
			{
				symbol = self->lexer.data.result_symbol;
			}
		}
		result = ts_subtree_new_leaf(symbol, padding, size, lookahead_bytes,
				parse_state, found_external_token, called_get_column,
				is_keyword, self->language);
		if (found_external_token)
		{
			ts_external_scanner_state_init(&result->external_scanner_state,
				self->lexer.debug_buffer, external_scanner_state_len);
			result->has_external_scanner_state_change = external_scanner_state_changed;
		}
	}
	return result;
}

// Determine if a given tree should be replaced by an
// alternative tree.
//
// The decision is based on the trees' error costs (if any),
// their dynamic precedence, and finally, as a default, by a
// recursive comparison of the trees' symbols.
static bool	ts_parser__select_tree(TSParser *self, t_subtree left,
		t_subtree right)
{
	int	comparison;

	(void)(self);
	if (!left)
		return true;
	if (!right)
		return false;
	if (ts_subtree_error_cost(right) < ts_subtree_error_cost(left))
	{
		return true;
	}
	if (ts_subtree_error_cost(left) < ts_subtree_error_cost(right))
	{
		return false;
	}
	if (ts_subtree_dynamic_precedence(right) > ts_subtree_dynamic_precedence(left))
	{
		return true;
	}
	if (ts_subtree_dynamic_precedence(left) > ts_subtree_dynamic_precedence(right))
	{
		return false;
	}
	if (ts_subtree_error_cost(left) > 0)
		return true;
	comparison = ts_subtree_compare(left, right);
	switch (comparison)
	{
	case -1:
		return false;
	case 1:
		return true;
	default:
		return false;
	}
}

// Determine if a given tree's children should be replaced
// by an alternative array of children.
static bool	ts_parser__select_children(TSParser *self, t_subtree left,
		const t_vec_subtree *children)
{
	t_subtree	scratch_tree;

	vec_subtree_copy_into(&self->scratch_trees, (void *)children);
	scratch_tree = ts_subtree_new_node(ts_subtree_symbol(left),
			&self->scratch_trees, 0, self->language);
	return (ts_parser__select_tree(self, left, (scratch_tree)));
}

static void	ts_parser__shift(TSParser *self, t_stack_version version,
		TSStateId state, t_subtree lookahead, bool extra)
{
	t_subtree	result;
	bool		is_leaf;
	t_subtree	subtree_to_push;

	is_leaf = ts_subtree_child_count(lookahead) == 0;
	subtree_to_push = lookahead;
	if (extra != ts_subtree_extra(lookahead) && is_leaf)
	{
		result = ts_subtree_ensure_owner(lookahead);
		ts_subtree_set_extra(&result, extra);
		subtree_to_push = (result);
	}
	ts_stack_push(self->stack, version, subtree_to_push, !is_leaf, state);
	if (ts_subtree_has_external_tokens(subtree_to_push))
		ts_stack_set_last_external_token(self->stack, version,
			ts_subtree_last_external_token(subtree_to_push));
}

static t_stack_version	ts_parser__reduce(TSParser *self,
		t_stack_version version, TSSymbol symbol, t_u32 count,
		int dynamic_precedence, t_u16 production_id, bool is_fragile,
		bool end_of_non_terminal_extra)
{
	t_u32				initial_version_count;
	t_stack_slice_array	pop;
	t_u32				removed_version_count;
	t_stack_slice		slice;
	t_stack_version		slice_version;
	t_stack_slice		next_slice;
	t_u32				i;
	t_vec_subtree		children;
	t_subtree			parent;
	t_vec_subtree		next_slice_children;
	TSStateId			state;
	TSStateId			next_state;
	t_u32				j;
	t_stack_version		k;

	initial_version_count = ts_stack_version_count(self->stack);
	// Pop the given number of nodes from the given version
	// of the parse stack. If stack versions have previously
	// merged, then there may be more than one path back
	// through the stack. For each path, create a new parent
	// node to contain the popped children, and push it onto
	// the stack in place of the children.
	pop = ts_stack_pop_count(self->stack, version, count);
	removed_version_count = 0;
	for (i = 0; i < pop.size; i++)
	{
		slice = pop.contents[i];
		slice_version = slice.version - removed_version_count;
		// This is where new versions are added to the parse
		// stack. The versions will all be sorted and
		// truncated at the end of the outer parsing loop.
		// Allow the maximum version count to be temporarily
		// exceeded, but only by a limited threshold.
		if (slice_version > MAX_VERSION_COUNT + MAX_VERSION_COUNT_OVERFLOW)
		{
			ts_stack_remove_version(self->stack, slice_version);
			ts_subtree_array_delete(&slice.subtrees);
			removed_version_count++;
			while (i + 1 < pop.size)
			{
				next_slice = pop.contents[i + 1];
				if (next_slice.version != slice.version)
					break ;
				ts_subtree_array_delete(&next_slice.subtrees);
				i++;
			}
			continue ;
		}
		// Extra tokens on top of the stack should not be
		// included in this new parent node. They will be
		// re-pushed onto the stack after the parent node is
		// created and pushed.
		children = slice.subtrees;
		ts_subtree_array_remove_trailing_extras(&children,
			&self->trailing_extras);
		parent = ts_subtree_new_node(symbol, &children, production_id,
				self->language);
		// This pop operation may have caused multiple stack
		// versions to collapse into one, because they all
		// diverged from a common state. In that case,
		// choose one of the arrays of trees to be the
		// parent node's children, and delete the rest of
		// the tree arrays.
		while (i + 1 < pop.size)
		{
			next_slice = pop.contents[i + 1];
			if (next_slice.version != slice.version)
				break ;
			i++;
			next_slice_children = next_slice.subtrees;
			ts_subtree_array_remove_trailing_extras(&next_slice_children,
				&self->trailing_extras2);
			if (ts_parser__select_children(self, (parent),
					&next_slice_children))
			{
				ts_subtree_array_clear(
					/*&self->tree_pool,*/ &self->trailing_extras);
				ts_subtree_release(
					/*&self->tree_pool,*/ (parent));
				array_swap(&self->trailing_extras, &self->trailing_extras2);
				parent = ts_subtree_new_node(symbol, &next_slice_children,
						production_id, self->language);
			}
			else
			{
				self->trailing_extras2.len = 0;
				ts_subtree_array_delete(
					/*&self->tree_pool,*/ &next_slice.subtrees);
			}
		}
		state = ts_stack_state(self->stack, slice_version);
		next_state = ts_language_next_state(self->language, state, symbol);
		if (end_of_non_terminal_extra && next_state == state)
		{
			parent->extra = true;
		}
		if (is_fragile || pop.size > 1 || initial_version_count > 1)
		{
			parent->fragile_left = true;
			parent->fragile_right = true;
			parent->parse_state = TS_TREE_STATE_NONE;
		}
		else
		{
			parent->parse_state = state;
		}
		parent->dynamic_precedence += dynamic_precedence;
		// Push the parent node onto the stack, along with
		// any extra tokens that were previously on top of
		// the stack.
		ts_stack_push(self->stack, slice_version, (parent), false, next_state);
		for (j = 0; j < self->trailing_extras.len; j++)
		{
			ts_stack_push(self->stack, slice_version,
				self->trailing_extras.buffer[j], false, next_state);
		}
		for (k = 0; k < slice_version; k++)
		{
			if (k == version)
				continue ;
			if (ts_stack_merge(self->stack, k, slice_version))
			{
				removed_version_count++;
				break ;
			}
		}
	}
	// Return the first new stack version that was created.
	return ts_stack_version_count(self->stack) > initial_version_count ? initial_version_count : STACK_VERSION_NONE;
}

static void	ts_parser__accept(TSParser *self, t_stack_version version,
		t_subtree lookahead)
{
	t_u32				child_count;
	const t_subtree		*children;
	t_stack_slice_array	pop;
	t_vec_subtree		trees;
	t_subtree			root;
	t_u32				i;
	t_u32				j;
	t_u32				k;
	t_subtree			tree;

	assert(ts_subtree_is_eof(lookahead));
	ts_stack_push(self->stack, version, lookahead, false, 1);
	pop = ts_stack_pop_all(self->stack, version);
	for (i = 0; i < pop.size; i++)
	{
		trees = pop.contents[i].subtrees;
		root = NULL;
		for (j = trees.len - 1; j + 1 > 0; j--)
		{
			tree = trees.buffer[j];
			if (!ts_subtree_extra(tree))
			{
				child_count = ts_subtree_child_count(tree);
				children = ts_subtree_children(tree);
				for (k = 0; k < child_count; k++)
					children[k]->ref_count++;
				vec_subtree_splice(&trees, vec_subtree_splice_args(j, 1,
						child_count, children));
				root = (ts_subtree_new_node(ts_subtree_symbol(tree), &trees,
							tree->production_id, self->language));
				ts_subtree_release(tree);
				break ;
			}
		}
		self->accept_count++;
		if (self->finished_tree)
		{
			if (ts_parser__select_tree(self, self->finished_tree, root))
			{
				ts_subtree_release(self->finished_tree);
				self->finished_tree = root;
			}
			else
				ts_subtree_release(root);
		}
		else
			self->finished_tree = root;
	}
	ts_stack_remove_version(self->stack, pop.contents[0].version);
	ts_stack_halt(self->stack, version);
}

static bool	ts_parser__do_all_potential_reductions(TSParser *self,
		t_stack_version starting_version, TSSymbol lookahead_symbol)
{
	t_u32			initial_version_count;
	bool			can_shift_lookahead_symbol;
	t_stack_version	version;
	t_u32			i;
	t_u32			version_count;
	bool			merged;
	t_stack_version	j;
	TSStateId		state;
	bool			has_shift_action;
	TSSymbol		first_symbol;
	TSSymbol		end_symbol;
	t_stack_version	reduction_version;
	ReduceAction	reduce_action;
	t_u32			k;
	TSSymbol		symbol;
	TableEntry		entry;
	TSParseAction	action;

	initial_version_count = ts_stack_version_count(self->stack);
	can_shift_lookahead_symbol = false;
	version = starting_version;
	for (i = 0; true; i++)
	{
		version_count = ts_stack_version_count(self->stack);
		if (version >= version_count)
			break ;
		merged = false;
		for (j = initial_version_count; j < version; j++)
		{
			if (ts_stack_merge(self->stack, j, version))
			{
				merged = true;
				break ;
			}
		}
		if (merged)
			continue ;
		state = ts_stack_state(self->stack, version);
		has_shift_action = false;
		array_clear(&self->reduce_actions);
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
		for (symbol = first_symbol; symbol < end_symbol; symbol++)
		{
			ts_language_table_entry(self->language, state, symbol, &entry);
			for (k = 0; k < entry.action_count; k++)
			{
				action = entry.actions[k];
				switch (action.type)
				{
				case TSParseActionTypeShift:
				case TSParseActionTypeRecover:
					if (!action.shift.extra && !action.shift.repetition)
						has_shift_action = true;
					break ;
				case TSParseActionTypeReduce:
					if (action.reduce.child_count > 0)
						ts_reduce_action_set_add(&self->reduce_actions,
													(ReduceAction){
														.symbol = action.reduce.symbol,
														.count = action.reduce.child_count,
														.dynamic_precedence = action.reduce.dynamic_precedence,
														.production_id = action.reduce.production_id,
													});
					break ;
				default:
					break ;
				}
			}
		}
		reduction_version = STACK_VERSION_NONE;
		for (k = 0; k < self->reduce_actions.size; k++)
		{
			reduce_action = self->reduce_actions.contents[k];
			reduction_version = ts_parser__reduce(self, version,
					reduce_action.symbol, reduce_action.count,
					reduce_action.dynamic_precedence,
					reduce_action.production_id, true, false);
		}
		if (has_shift_action)
			can_shift_lookahead_symbol = true;
		else if (reduction_version != STACK_VERSION_NONE
			&& i < MAX_VERSION_COUNT)
		{
			ts_stack_renumber_version(self->stack, reduction_version, version);
			continue ;
		}
		else if (lookahead_symbol != 0)
			ts_stack_remove_version(self->stack, version);
		if (version == starting_version)
			version = version_count;
		else
			version++;
	}
	return can_shift_lookahead_symbol;
}

static bool	ts_parser__recover_to_state(TSParser *self, t_stack_version version,
		t_u32 depth, TSStateId goal_state)
{
	t_stack_slice_array	pop;
	t_stack_version		previous_version;
	t_stack_slice		slice;
	t_u32				i;
	t_u32				j;
	t_vec_subtree		error_trees;
	t_subtree			error_tree;
	t_u32				error_child_count;
	t_subtree			tree;
	t_subtree			error;

	previous_version = STACK_VERSION_NONE;
	pop = ts_stack_pop_count(self->stack, version, depth);
	for (i = 0; i < pop.size; i++)
	{
		slice = pop.contents[i];
		if (slice.version == previous_version)
		{
			ts_subtree_array_delete(&slice.subtrees);
			array_erase(&pop, i--);
			continue ;
		}
		if (ts_stack_state(self->stack, slice.version) != goal_state)
		{
			ts_stack_halt(self->stack, slice.version);
			ts_subtree_array_delete(&slice.subtrees);
			array_erase(&pop, i--);
			continue ;
		}
		error_trees = ts_stack_pop_error(self->stack, slice.version);
		if (error_trees.len > 0)
		{
			error_tree = error_trees.buffer[0];
			error_child_count = ts_subtree_child_count(error_tree);
			if (error_child_count > 0)
			{
				vec_subtree_splice(&slice.subtrees, vec_subtree_splice_args(0,
						0, error_child_count, ts_subtree_children(error_tree)));
				for (j = 0; j < error_child_count; j++)
					slice.subtrees.buffer[j]->ref_count++;
			}
			ts_subtree_array_delete(&error_trees);
		}
		ts_subtree_array_remove_trailing_extras(&slice.subtrees,
			&self->trailing_extras);
		if (slice.subtrees.len > 0)
		{
			error = ts_subtree_new_error_node(&slice.subtrees, true,
					self->language);
			ts_stack_push(self->stack, slice.version, error, false, goal_state);
		}
		else
		{
			vec_subtree_free(slice.subtrees);
		}
		for (j = 0; j < self->trailing_extras.len; j++)
		{
			tree = self->trailing_extras.buffer[j];
			ts_stack_push(self->stack, slice.version, tree, false, goal_state);
		}
		previous_version = slice.version;
	}
	return previous_version != STACK_VERSION_NONE;
}

static void	ts_parser__recover(TSParser *self, t_stack_version version,
		t_subtree lookahead)
{
	Length					position;
	bool					did_recover;
	bool					would_merge;
	t_stack_slice_array		pop;
	t_stack_summary			*summary;
	t_stack_summary_entry	entry;
	t_subtree				parent;
	t_u32					current_error_cost;
	t_u32					depth;
	t_u32					i;
	t_u32					j;
	t_u32					new_cost;
	t_u32					node_count_since_error;
	t_u32					previous_version_count;
	t_vec_subtree			children;
	t_u32					n;
	const TSParseAction		*actions;
	t_subtree				error_repeat;
	t_subtree				mutable_lookahead;

	did_recover = false;
	previous_version_count = ts_stack_version_count(self->stack);
	position = ts_stack_position(self->stack, version);
	summary = ts_stack_get_summary(self->stack, version);
	node_count_since_error = ts_stack_node_count_since_error(self->stack,
			version);
	current_error_cost = ts_stack_error_cost(self->stack, version);
	// When the parser is in the error state, there are two
	// strategies for recovering with a given lookahead
	// token:
	// 1. Find a previous state on the stack in which that
	// lookahead token would be valid. Then,
	//    create a new stack version that is in that state
	//    again. This entails popping all of the subtrees
	//    that have been pushed onto the stack since that
	//    previous state, and wrapping them in an ERROR
	//    node.
	// 2. Wrap the lookahead token in an ERROR node, push
	// that ERROR node onto the stack, and
	//    move on to the next lookahead token, remaining in
	//    the error state.
	//
	// First, try the strategy 1. Upon entering the error
	// state, the parser recorded a summary of the previous
	// parse states and their depths. Look at each state in
	// the summary, to see if the current lookahead token
	// would be valid in that state.
	if (summary && !ts_subtree_is_error(lookahead))
	{
		for (i = 0; i < summary->size; i++)
		{
			entry = summary->contents[i];
			if (entry.state == ERROR_STATE)
				continue ;
			if (entry.position.bytes == position.bytes)
				continue ;
			depth = entry.depth;
			if (node_count_since_error > 0)
				depth++;
			// Do not recover in ways that create redundant
			// stack versions.
			would_merge = false;
			for (j = 0; j < previous_version_count; j++)
			{
				if (ts_stack_state(self->stack, j) == entry.state
					&& ts_stack_position(self->stack,
						j).bytes == position.bytes)
				{
					would_merge = true;
					break ;
				}
			}
			if (would_merge)
				continue ;
			// Do not recover if the result would clearly be
			// worse than some existing stack version.
			new_cost = current_error_cost + entry.depth
				* ERROR_COST_PER_SKIPPED_TREE + (position.bytes
					- entry.position.bytes) * ERROR_COST_PER_SKIPPED_CHAR
				+ (position.extent.row - entry.position.extent.row)
				* ERROR_COST_PER_SKIPPED_LINE;
			if (ts_parser__better_version_exists(self, version, false,
					new_cost))
				break ;
			// If the current lookahead token is valid in
			// some previous state, recover to that state.
			// Then stop looking for further recoveries.
			if (ts_language_has_actions(self->language, entry.state,
					ts_subtree_symbol(lookahead)))
			{
				if (ts_parser__recover_to_state(self, version, depth,
						entry.state))
				{
					did_recover = true;
					break ;
				}
			}
		}
	}
	// In the process of attempting to recover, some stack
	// versions may have been created and subsequently
	// halted. Remove those versions.
	for (i = previous_version_count; i < ts_stack_version_count(self->stack); i++)
		if (!ts_stack_is_active(self->stack, i))
			ts_stack_remove_version(self->stack, i--);
	// If strategy 1 succeeded, a new stack version will
	// have been created which is able to handle the current
	// lookahead token. Now, in addition, try strategy 2
	// described above: skip the current lookahead token by
	// wrapping it in an ERROR node.
	// Don't pursue this additional strategy if there are
	// already too many stack versions.
	if (did_recover && ts_stack_version_count(self->stack) > MAX_VERSION_COUNT)
	{
		ts_stack_halt(self->stack, version);
		ts_subtree_release(lookahead);
		return ;
	}
	if (did_recover && ts_subtree_has_external_scanner_state_change(lookahead))
	{
		ts_stack_halt(self->stack, version);
		ts_subtree_release(lookahead);
		return ;
	}
	// If the parser is still in the error state at the end
	// of the file, just wrap everything in an ERROR node
	// and terminate.
	if (ts_subtree_is_eof(lookahead))
	{
		children = vec_subtree_new(16, NULL);
		parent = ts_subtree_new_error_node(&children, false, self->language);
		ts_stack_push(self->stack, version, parent, false, 1);
		ts_parser__accept(self, version, lookahead);
		return ;
	}
	// Do not recover if the result would clearly be worse
	// than some existing stack version.
	new_cost = current_error_cost + ERROR_COST_PER_SKIPPED_TREE
		+ ts_subtree_total_bytes(lookahead) * ERROR_COST_PER_SKIPPED_CHAR
		+ ts_subtree_total_size(lookahead).extent.row
		* ERROR_COST_PER_SKIPPED_LINE;
	if (ts_parser__better_version_exists(self, version, false, new_cost))
	{
		ts_stack_halt(self->stack, version);
		ts_subtree_release(lookahead);
		return ;
	}
	// If the current lookahead token is an extra token,
	// mark it as extra. This means it won't be counted in
	// error cost calculations.
	actions = ts_language_actions(self->language, 1,
			ts_subtree_symbol(lookahead), &n);
	if (n > 0 && actions[n - 1].type == TSParseActionTypeShift && actions[n
		- 1].shift.extra)
	{
		mutable_lookahead = ts_subtree_ensure_owner(lookahead);
		ts_subtree_set_extra(&mutable_lookahead, true);
		lookahead = (mutable_lookahead);
	}
	// Wrap the lookahead token in an ERROR.
	children = vec_subtree_new(1, NULL);
	vec_subtree_push(&children, lookahead);
	error_repeat = ts_subtree_new_node(ts_builtin_sym_error_repeat, &children,
			0, self->language);
	// If other tokens have already been skipped, so there
	// is already an ERROR at the top of the stack, then pop
	// that ERROR off the stack and wrap the two ERRORs
	// together into one larger ERROR.
	if (node_count_since_error > 0)
	{
		pop = ts_stack_pop_count(self->stack, version, 1);
		// TODO: Figure out how to make this condition
		// occur. See
		// https://github.com/atom/atom/issues/18450#issuecomment-439579778
		// If multiple stack versions have merged at this
		// point, just pick one of the errors arbitrarily
		// and discard the rest.
		if (pop.size > 1)
		{
			for (i = 1; i < pop.size; i++)
				ts_subtree_array_delete(
					/*&self->tree_pool,*/ &pop.contents[i].subtrees);
			while (ts_stack_version_count(self->stack) > pop.contents[0].version
				+ 1)
				ts_stack_remove_version(self->stack, pop.contents[0].version
					+ 1);
		}
		ts_stack_renumber_version(self->stack, pop.contents[0].version,
			version);
		vec_subtree_push(&pop.contents[0].subtrees, (error_repeat));
		error_repeat = ts_subtree_new_node(ts_builtin_sym_error_repeat,
				&pop.contents[0].subtrees, 0, self->language);
	}
	// Push the new ERROR onto the stack.
	ts_stack_push(self->stack, version, (error_repeat), false, ERROR_STATE);
	if (ts_subtree_has_external_tokens(lookahead))
		ts_stack_set_last_external_token(self->stack, version,
			ts_subtree_last_external_token(lookahead));
}

static void	ts_parser__handle_error(TSParser *self, t_stack_version version,
		t_subtree lookahead)
{
	TSSymbol		missing_symbol;
	bool			did_insert_missing_token;
	TSStateId		state;
	TSStateId		state_after_missing_symbol;
	Length			padding;
	t_u32			lookahead_bytes;
	t_stack_version	version_with_missing_tree;
	t_subtree		missing_tree;
	t_u32			previous_version_count;
	t_u32			version_count;
	Length			position;

	previous_version_count = ts_stack_version_count(self->stack);
	// Perform any reductions that can happen in this state,
	// regardless of the lookahead. After skipping one or
	// more invalid tokens, the parser might find a token
	// that would have allowed a reduction to take place.
	ts_parser__do_all_potential_reductions(self, version, 0);
	version_count = ts_stack_version_count(self->stack);
	position = ts_stack_position(self->stack, version);
	// Push a discontinuity onto the stack. Merge all of the
	// stack versions that were created in the previous
	// step.
	did_insert_missing_token = false;
	for (t_stack_version v = version; v < version_count;)
	{
		if (!did_insert_missing_token)
		{
			state = ts_stack_state(self->stack, v);
			for (missing_symbol = 1; missing_symbol < (t_u16)self->language->token_count; missing_symbol++)
			{
				state_after_missing_symbol = ts_language_next_state(self->language,
						state, missing_symbol);
				if (state_after_missing_symbol == 0
					|| state_after_missing_symbol == state)
					continue ;
				if (ts_language_has_reduce_action(self->language,
						state_after_missing_symbol,
						ts_subtree_leaf_symbol(lookahead)))
				{
					// In case the parser is currently
					// outside of any included range, the
					// lexer will snap to the beginning of
					// the next included range. The missing
					// token's padding must be assigned to
					// position it within the next included
					// range.
					ts_lexer_reset(&self->lexer, position);
					ts_lexer__mark_end((void *)&self->lexer);
					padding = length_sub(self->lexer.token_end_position,
							position);
					lookahead_bytes = ts_subtree_total_bytes(lookahead)
						+ ts_subtree_lookahead_bytes(lookahead);
					version_with_missing_tree = ts_stack_copy_version(self->stack,
							v);
					missing_tree = ts_subtree_new_missing_leaf(missing_symbol,
							padding, lookahead_bytes, self->language);
					ts_stack_push(self->stack, version_with_missing_tree,
						missing_tree, false, state_after_missing_symbol);
					if (ts_parser__do_all_potential_reductions(self,
							version_with_missing_tree,
							ts_subtree_leaf_symbol(lookahead)))
					{
						did_insert_missing_token = true;
						break ;
					}
				}
			}
		}
		ts_stack_push(self->stack, v, NULL, false, ERROR_STATE);
		v = (v == version) ? previous_version_count : v + 1;
	}
	for (t_u32 i = previous_version_count; i < version_count; i++)
	{
		ts_stack_merge(self->stack, version, previous_version_count);
	}
	ts_stack_record_summary(self->stack, version, MAX_SUMMARY_DEPTH);
	// Begin recovery with the current lookahead node,
	// rather than waiting for the next turn of the parse
	// loop. This ensures that the tree accounts for the
	// current lookahead token's "lookahead bytes" value,
	// which describes how far the lexer needed to look
	// ahead beyond the content of the token in order to
	// recognize it.
	ts_parser__recover(self, version, lookahead);
}

static bool	ts_parser__advance(TSParser *self, t_stack_version version,
		bool allow_node_reuse)
{
	TSStateId	state;
	t_subtree	mutable_lookahead;
	t_subtree	lookahead;
	TableEntry	table_entry;
	bool		needs_lex;
	t_u32		i;
		t_stack_version last_reduction_version;
			TSParseAction action;
				TSStateId next_state;
				bool is_fragile;
				bool end_of_non_terminal_extra;
				t_stack_version reduction_version;

	(void)(allow_node_reuse);
	lookahead = NULL;
	table_entry = (TableEntry){.action_count = 0};
	state = ts_stack_state(self->stack, version);
	needs_lex = true;
	for (;;)
	{
		// Otherwise, re-run the lexer.
		if (needs_lex)
		{
			needs_lex = false;
			lookahead = ts_parser__lex(self, version, state);
			if (self->has_scanner_error)
				return false;
			if (lookahead)
			{
				ts_language_table_entry(self->language, state,
					ts_subtree_symbol(lookahead), &table_entry);
			}
			// When parsing a non-terminal extra, a null
			// lookahead indicates the end of the rule. The
			// reduction is stored in the EOF table entry.
			// After the reduction, the lexer needs to be
			// run again.
			else
			{
				ts_language_table_entry(self->language, state,
					ts_builtin_sym_end, &table_entry);
			}
		}
		// Process each parse action for the current
		// lookahead token in the current state. If there
		// are multiple actions, then this is an ambiguous
		// state. REDUCE actions always create a new stack
		// version, whereas SHIFT actions update the
		// existing stack version and terminate this loop.
		last_reduction_version = STACK_VERSION_NONE;
		for (i = 0; i < table_entry.action_count; i++)
		{
			action = table_entry.actions[i];
			switch (action.type)
			{
			case TSParseActionTypeShift:
			{
				if (action.shift.repetition)
					break ;
				if (action.shift.extra)
				{
					next_state = state;
				}
				else
				{
					next_state = action.shift.state;
				}
				if (ts_subtree_child_count(lookahead) > 0)
				{
					next_state = ts_language_next_state(self->language, state,
							ts_subtree_symbol(lookahead));
				}
				ts_parser__shift(self, version, next_state, lookahead,
					action.shift.extra);
				return true;
			}
			case TSParseActionTypeReduce:
			{
				is_fragile = table_entry.action_count > 1;
				end_of_non_terminal_extra = lookahead == NULL;
				reduction_version = ts_parser__reduce(self, version,
						action.reduce.symbol, action.reduce.child_count,
						action.reduce.dynamic_precedence,
						action.reduce.production_id, is_fragile,
						end_of_non_terminal_extra);
				if (reduction_version != STACK_VERSION_NONE)
				{
					last_reduction_version = reduction_version;
				}
				break ;
			}
			case TSParseActionTypeAccept:
			{
				ts_parser__accept(self, version, lookahead);
				return true;
			}
			case TSParseActionTypeRecover:
			{
				ts_parser__recover(self, version, lookahead);
				return true;
			}
			}
		}
		// If a reduction was performed, then replace the
		// current stack version with one of the stack
		// versions created by a reduction, and continue
		// processing this version of the stack with the
		// same lookahead symbol.
		if (last_reduction_version != STACK_VERSION_NONE)
		{
			ts_stack_renumber_version(self->stack, last_reduction_version,
				version);
			state = ts_stack_state(self->stack, version);
			// At the end of a non-terminal extra rule, the
			// lexer will return a null subtree, because the
			// parser needs to perform a fixed reduction
			// regardless of the lookahead node. After
			// performing that reduction, (and completing
			// the non-terminal extra rule) run the lexer
			// again based on the current parse state.
			if (!lookahead)
				needs_lex = true;
			else
				ts_language_table_entry(self->language, state,
					ts_subtree_leaf_symbol(lookahead), &table_entry);
			continue ;
		}
		// A non-terminal extra rule was reduced and merged
		// into an existing stack version. This version can
		// be discarded.
		if (!lookahead)
		{
			ts_stack_halt(self->stack, version);
			return true;
		}
		// If there were no parse actions for the current
		// lookahead token, then it is not valid in this
		// state. If the current lookahead token is a
		// keyword, then switch to treating it as the normal
		// word token if that token is valid in this state.
		if (ts_subtree_is_keyword(lookahead)
			&& ts_subtree_symbol(lookahead) != self->language->keyword_capture_token)
		{
			ts_language_table_entry(self->language, state,
				self->language->keyword_capture_token, &table_entry);
			if (table_entry.action_count > 0)
			{
				mutable_lookahead = ts_subtree_ensure_owner(lookahead);
				ts_subtree_set_symbol(&mutable_lookahead,
					self->language->keyword_capture_token, self->language);
				lookahead = mutable_lookahead;
				continue ;
			}
		}
		// If the current lookahead token is not valid and
		// the parser is already in the error state, restart
		// the error recovery process.
		// TODO - can this be unified with the other
		// `RECOVER` case above?
		if (state == ERROR_STATE)
		{
			ts_parser__recover(self, version, lookahead);
			return true;
		}
		// If the current lookahead token is not valid and
		// the previous subtree on the stack was reused from
		// an old tree, it isn't actually valid to reuse it.
		// Remove it from the stack, and in its place, push
		// each of its children. Then try again to process
		// the current lookahead.
		if (ts_parser__breakdown_top_of_stack(self, version))
		{
			state = ts_stack_state(self->stack, version);
			ts_subtree_release(
				/*&self->tree_pool,*/ lookahead);
			needs_lex = true;
			continue ;
		}
		// At this point, the current lookahead token is
		// definitely not valid for this parse stack
		// version. Mark this version as paused and continue
		// processing any other stack versions that might
		// exist. If some other version advances
		// successfully, then this version can simply be
		// removed. But if all versions end up paused, then
		// error recovery is needed.
		ts_stack_pause(self->stack, version, lookahead);
		return true;
	}
}

static t_u32	ts_parser__condense_stack(TSParser *self)
{
	t_error_status	status_i;
	t_error_status	status_j;
	t_stack_version	i;
	t_stack_version	j;
	t_stack_version	n;
	t_subtree		lookahead;
	t_u32			min_error_cost;
	bool			has_unpaused_version;

	min_error_cost = UINT_MAX;
	for (i = 0; i < ts_stack_version_count(self->stack); i++)
	{
		// Prune any versions that have been marked for
		// removal.
		if (ts_stack_is_halted(self->stack, i))
		{
			ts_stack_remove_version(self->stack, i);
			i--;
			continue ;
		}
		// Keep track of the minimum error cost of any stack
		// version so that it can be returned.
		status_i = ts_parser__version_status(self, i);
		if (!status_i.is_in_error && status_i.cost < min_error_cost)
		{
			min_error_cost = status_i.cost;
		}
		// Examine each pair of stack versions, removing any
		// versions that are clearly worse than another
		// version. Ensure that the versions are ordered
		// from most promising to least promising.
		for (j = 0; j < i; j++)
		{
			status_j = ts_parser__version_status(self, j);
			switch (ts_parser__compare_versions(self, status_j, status_i))
			{
			case ECTakeLeft:
				ts_stack_remove_version(self->stack, i);
				i--;
				j = i;
				break ;
			case ECPreferLeft:
			case ECNone:
				if (ts_stack_merge(self->stack, j, i))
				{
					i--;
					j = i;
				}
				break ;
			case ECPreferRight:
				if (ts_stack_merge(self->stack, j, i))
				{
					i--;
					j = i;
				}
				else
				{
					ts_stack_swap_versions(self->stack, i, j);
				}
				break ;
			case ECTakeRight:
				ts_stack_remove_version(self->stack, j);
				i--;
				j--;
				break ;
			}
		}
	}
	// Enforce a hard upper bound on the number of stack
	// versions by discarding the least promising versions.
	while (ts_stack_version_count(self->stack) > MAX_VERSION_COUNT)
		ts_stack_remove_version(self->stack, MAX_VERSION_COUNT);
	// If the best-performing stack version is currently
	// paused, or all versions are paused, then resume the
	// best paused version and begin the error recovery
	// process. Otherwise, remove the paused versions.
	if (ts_stack_version_count(self->stack) > 0)
	{
		has_unpaused_version = false;
		for (i = 0, n = ts_stack_version_count(self->stack); i < n; i++)
		{
			if (ts_stack_is_paused(self->stack, i))
			{
				if (!has_unpaused_version
					&& self->accept_count < MAX_VERSION_COUNT)
				{
					min_error_cost = ts_stack_error_cost(self->stack, i);
					lookahead = ts_stack_resume(self->stack, i);
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
	return min_error_cost;
}

static bool	ts_parser_has_outstanding_parse(TSParser *self)
{
	return (self->external_scanner_payload || ts_stack_state(self->stack,
			0) != 1 || ts_stack_node_count_since_error(self->stack, 0) != 0);
}

// Parser - Public

TSParser	*ts_parser_new(void)
{
	TSParser	*self;

	self = mem_alloc(sizeof(*self));
	ts_lexer_init(&self->lexer);
	array_init(&self->reduce_actions);
	array_reserve(&self->reduce_actions, 4);
	self->stack = ts_stack_new();
	self->finished_tree = NULL;
	self->language = NULL;
	self->has_scanner_error = false;
	self->external_scanner_payload = NULL;
	self->operation_count = 0;
	return self;
}

void	ts_parser_delete(TSParser *self)
{
	if (!self)
		return ;
	ts_parser_set_language(self, NULL);
	ts_stack_delete(self->stack);
	if (self->reduce_actions.contents)
	{
		array_delete(&self->reduce_actions);
	}
	array_delete(&self->trailing_extras);
	array_delete(&self->trailing_extras2);
	array_delete(&self->scratch_trees);
	mem_free(self);
}

const TSLanguage	*ts_parser_language(const TSParser *self)
{
	return self->language;
}

bool	ts_parser_set_language(TSParser *self, const TSLanguage *language)
{
	ts_parser_reset(self);
	self->language = language;
	return true;
}

void	ts_parser_reset(TSParser *self)
{
	ts_parser__external_scanner_destroy(self);
	ts_lexer_reset(&self->lexer, length_zero());
	ts_stack_clear(self->stack);
	if (self->finished_tree)
	{
		ts_subtree_release(self->finished_tree);
		self->finished_tree = NULL;
	}
	self->accept_count = 0;
	self->has_scanner_error = false;
}

TSTree	*ts_parser_parse(TSParser *self, TSInput input)
{
	TSTree			*result;
	t_u32			position;
	t_u32			last_position;
	t_u32			version_count;
	t_stack_version	version;
	bool			allow_node_reuse;
	t_u32			min_error_cost;

	result = NULL;
	if (!self->language || !input.read)
		return NULL;
	ts_lexer_set_input(&self->lexer, input);
	if (!ts_parser_has_outstanding_parse(self))
	{
		ts_parser__external_scanner_create(self);
		if (self->has_scanner_error)
		{
			ts_parser_reset(self);
			return result;
		}
	}
	self->operation_count = 0;
	position = 0;
	last_position = 0;
	version_count = 0;
	version = 0;
	do
	{
		for (version = 0; version_count = ts_stack_version_count(self->stack),
			version < version_count; version++)
		{
			allow_node_reuse = version_count == 1;
			while (ts_stack_is_active(self->stack, version))
			{
				if (!ts_parser__advance(self, version, allow_node_reuse))
				{
					if (self->has_scanner_error)
					{
						ts_parser_reset(self);
						return result;
					}
					return NULL;
				}
				position = ts_stack_position(self->stack, version).bytes;
				if (position > last_position || (version > 0
						&& position == last_position))
				{
					last_position = position;
					break ;
				}
			}
		}
		// After advancing each version of the stack,
		// re-sort the versions by their cost, removing any
		// versions that are no longer worth pursuing.
		min_error_cost = ts_parser__condense_stack(self);
		// If there's already a finished parse tree that's
		// better than any in-progress version, then
		// terminate parsing. Clear the parse stack to
		// remove any extra references to subtrees within
		// the finished tree, ensuring that these subtrees
		// can be safely mutated in-place for rebalancing.
		if (self->finished_tree
			&& ts_subtree_error_cost(self->finished_tree) < min_error_cost)
		{
			ts_stack_clear(self->stack);
			break ;
		}
	} while (version_count != 0);
	if (self->finished_tree == NULL)
		me_abort("self->finished_tree == NULL");
	result = ts_tree_new(self->finished_tree, self->language);
	self->finished_tree = NULL;
	ts_parser_reset(self);
	return result;
}

TSTree	*ts_parser_parse_string(TSParser *self, t_const_str string,
		t_u32 length)
{
	t_string_input	input;

	input = (t_string_input){(const t_u8 *)string, length};
	return ts_parser_parse(self,
							(TSInput){
								&input,
								ts_string_input_read,
							});
}
