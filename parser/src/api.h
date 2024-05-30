#ifndef TREE_SITTER_ARRAY_H_
#define TREE_SITTER_ARRAY_H_

#include "me/char/char.h"
#include "me/mem/mem.h"
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

#include "./array.h"
#include "./api_structs.h"
#include "./funcs.h"

#define ts_builtin_sym_error_repeat (ts_builtin_sym_error - 1)
#define LANGUAGE_VERSION_WITH_PRIMARY_STATES 14
#define LANGUAGE_VERSION_USABLE_VIA_WASM 13
#define ERROR_STATE 0
#define ERROR_COST_PER_RECOVERY 500
#define ERROR_COST_PER_MISSING_TREE 110
#define ERROR_COST_PER_SKIPPED_TREE 100
#define ERROR_COST_PER_SKIPPED_LINE 30
#define ERROR_COST_PER_SKIPPED_CHAR 1
#define MAX_STEP_CAPTURE_COUNT 3
#define MAX_NEGATED_FIELD_COUNT 8
#define MAX_STATE_PREDECESSOR_COUNT 256
#define MAX_ANALYSIS_STATE_DEPTH 8
#define MAX_ANALYSIS_ITERATION_COUNT 256
#define MAX_LINK_COUNT 8
#define MAX_NODE_POOL_SIZE 50
#define MAX_ITERATOR_COUNT 64
#define TS_MAX_INLINE_TREE_LENGTH UINT8_MAX
#define TS_MAX_TREE_POOL_SIZE 32
#define ts_builtin_sym_error ((t_symbol) - 1)
#define ts_builtin_sym_end 0

#define POINT_ZERO ((t_point){0, 0})
#define POINT_MAX ((t_point){UINT32_MAX, UINT32_MAX})
#define TS_TREE_STATE_NONE USHRT_MAX
#define NULL_SUBTREE ((t_subtree){.ptr = NULL})
#define STACK_VERSION_NONE ((t_stack_version) - 1)
#define TS_DECODE_ERROR (-1)

#if true
# undef malloc
# undef calloc
# undef realloc
# undef free

# define malloc(s) mem_alloc((s))
# define calloc(s, l) mem_alloc_array((s), (l))
# define realloc(p, t) mem_realloc((p), (t))
# define free(p) mem_free((p))
#endif

// Get a subtree's children, which are allocated immediately before the
// tree's own heap data.
#define ts_subtree_children(self)                                              \
	((self).data.is_inline                                                     \
		 ? NULL                                                                \
		 : (t_subtree *)((self).ptr) - (self).ptr->child_count)

/// Helper macro for the `_sorted_by` routines below. This takes the left
/// (existing) parameter by reference in order to work with the generic sorting
/// function above.
#define _compare_int(a, b) ((int)*(a) - (int)(b))

static inline size_t atomic_load(const volatile size_t *p)
{
#ifdef __ATOMIC_RELAXED
	return __atomic_load_n(p, __ATOMIC_RELAXED);
#else
	return __sync_fetch_and_add((volatile size_t *)p, 0);
#endif
}

static inline uint32_t atomic_inc(volatile uint32_t *p)
{
#ifdef __ATOMIC_RELAXED
	return __atomic_add_fetch(p, 1U, __ATOMIC_SEQ_CST);
#else
	return __sync_add_and_fetch(p, 1U);
#endif
}

static inline uint32_t atomic_dec(volatile uint32_t *p)
{
#ifdef __ATOMIC_RELAXED
	return __atomic_sub_fetch(p, 1U, __ATOMIC_SEQ_CST);
#else
	return __sync_sub_and_fetch(p, 1U);
#endif
}


static inline bool ts_language_is_symbol_external(const t_language *self,
												  t_symbol			symbol)
{
	return 0 < symbol && symbol < self->external_token_count + 1;
}

static inline const t_parse_action *ts_language_actions(const t_language *self,
														t_state_id		  state,
														t_symbol  symbol,
														uint32_t *count)
{
	t_table_entry entry;
	ts_language_table_entry(self, state, symbol, &entry);
	*count = entry.action_count;
	return entry.actions;
}

static inline bool ts_language_has_reduce_action(const t_language *self,
												 t_state_id		   state,
												 t_symbol		   symbol)
{
	t_table_entry entry;
	ts_language_table_entry(self, state, symbol, &entry);
	return entry.action_count > 0 &&
		   entry.actions[0].type == TSParseActionTypeReduce;
}

// Lookup the table value for a given symbol and state.
//
// For non-terminal symbols, the table value represents a successor state.
// For terminal symbols, it represents an index in the actions table.
// For 'large' parse states, this is a direct lookup. For 'small' parse
// states, this requires searching through the symbol groups to find
// the given symbol.
static inline uint16_t ts_language_lookup(const t_language *self,
										  t_state_id state, t_symbol symbol)
{
	if (state >= self->large_state_count)
	{
		uint32_t index =
			self->small_parse_table_map[state - self->large_state_count];
		const uint16_t *data = &self->small_parse_table[index];
		uint16_t		group_count = *(data++);
		for (unsigned i = 0; i < group_count; i++)
		{
			uint16_t section_value = *(data++);
			uint16_t symbol_count = *(data++);
			for (unsigned j = 0; j < symbol_count; j++)
			{
				if (*(data++) == symbol)
					return section_value;
			}
		}
		return 0;
	}
	else
	{
		return self->parse_table[state * self->symbol_count + symbol];
	}
}

static inline bool ts_language_has_actions(const t_language *self,
										   t_state_id state, t_symbol symbol)
{
	return ts_language_lookup(self, state, symbol) != 0;
}

// Iterate over all of the symbols that are valid in the given state.
//
// For 'large' parse states, this just requires iterating through
// all possible symbols and checking the parse table for each one.
// For 'small' parse states, this exploits the structure of the
// table to only visit the valid symbols.
static inline t_lookahead_iterator ts_language_lookaheads(
	const t_language *self, t_state_id state)
{
	bool			is_small_state = state >= self->large_state_count;
	const uint16_t *data;
	const uint16_t *group_end = NULL;
	uint16_t		group_count = 0;
	if (is_small_state)
	{
		uint32_t index =
			self->small_parse_table_map[state - self->large_state_count];
		data = &self->small_parse_table[index];
		group_end = data + 1;
		group_count = *data;
	}
	else
	{
		data = &self->parse_table[state * self->symbol_count] - 1;
	}
	return (t_lookahead_iterator){
		.language = self,
		.data = data,
		.group_end = group_end,
		.group_count = group_count,
		.is_small_state = is_small_state,
		.symbol = UINT16_MAX,
		.next_state = 0,
	};
}

static inline bool ts_lookahead_iterator__next(t_lookahead_iterator *self)
{
	// For small parse states, valid symbols are listed explicitly,
	// grouped by their value. There's no need to look up the actions
	// again until moving to the next group.
	if (self->is_small_state)
	{
		self->data++;
		if (self->data == self->group_end)
		{
			if (self->group_count == 0)
				return false;
			self->group_count--;
			self->table_value = *(self->data++);
			unsigned symbol_count = *(self->data++);
			self->group_end = self->data + symbol_count;
			self->symbol = *self->data;
		}
		else
		{
			self->symbol = *self->data;
			return true;
		}
	}

	// For large parse states, iterate through every symbol until one
	// is found that has valid actions.
	else
	{
		do
		{
			self->data++;
			self->symbol++;
			if (self->symbol >= self->language->symbol_count)
				return false;
			self->table_value = *self->data;
		} while (!self->table_value);
	}

	// Depending on if the symbols is terminal or non-terminal, the table value
	// either represents a list of actions or a successor state.
	if (self->symbol < self->language->token_count)
	{
		const t_parse_action_entry *entry =
			&self->language->parse_actions[self->table_value];
		self->action_count = entry->entry.count;
		self->actions = (const t_parse_action *)(entry + 1);
		self->next_state = 0;
	}
	else
	{
		self->action_count = 0;
		self->next_state = self->table_value;
	}
	return true;
}

// Whether the state is a "primary state". If this returns false, it indicates
// that there exists another state that behaves identically to this one with
// respect to query analysis.
static inline bool ts_language_state_is_primary(const t_language *self,
												t_state_id		  state)
{
	if (self->version >= LANGUAGE_VERSION_WITH_PRIMARY_STATES)
	{
		return state == self->primary_state_ids[state];
	}
	else
	{
		return true;
	}
}

static inline const bool *ts_language_enabled_external_tokens(
	const t_language *self, unsigned external_scanner_state)
{
	if (external_scanner_state == 0)
	{
		return NULL;
	}
	else
	{
		return self->external_scanner.states +
			   self->external_token_count * external_scanner_state;
	}
}

static inline const t_symbol *ts_language_alias_sequence(const t_language *self,
														 uint32_t production_id)
{
	return production_id
			   ? &self->alias_sequences[production_id *
										self->max_alias_sequence_length]
			   : NULL;
}

static inline t_symbol ts_language_alias_at(const t_language *self,
											uint32_t		  production_id,
											uint32_t		  child_index)
{
	return production_id
			   ? self->alias_sequences[production_id *
										   self->max_alias_sequence_length +
									   child_index]
			   : 0;
}

static inline void ts_language_field_map(const t_language *self,
										 uint32_t		   production_id,
										 const t_field_map_entry **start,
										 const t_field_map_entry **end)
{
	if (self->field_count == 0)
	{
		*start = NULL;
		*end = NULL;
		return;
	}

	t_field_map_slice slice = self->field_map_slices[production_id];
	*start = &self->field_map_entries[slice.index];
	*end = &self->field_map_entries[slice.index] + slice.length;
}

static inline void ts_language_aliases_for_symbol(const t_language *self,
												  t_symbol original_symbol,
												  const t_symbol **start,
												  const t_symbol **end)
{
	*start = &self->public_symbol_map[original_symbol];
	*end = *start + 1;

	unsigned idx = 0;
	for (;;)
	{
		t_symbol symbol = self->alias_map[idx++];
		if (symbol == 0 || symbol > original_symbol)
			break;
		uint16_t count = self->alias_map[idx++];
		if (symbol == original_symbol)
		{
			*start = &self->alias_map[idx];
			*end = &self->alias_map[idx + count];
			break;
		}
		idx += count;
	}
}

static const t_length LENGTH_UNDEFINED = {0, {0, 1}};
static const t_length LENGTH_MAX = {UINT32_MAX, {UINT32_MAX, UINT32_MAX}};

static t_point point_add(t_point a, t_point b);
static t_point point_sub(t_point a, t_point b);

static inline bool length_is_undefined(t_length length)
{
	return length.bytes == 0 && length.extent.column != 0;
}

static inline t_length length_min(t_length len1, t_length len2)
{
	return (len1.bytes < len2.bytes) ? len1 : len2;
}

static inline t_length length_add(t_length len1, t_length len2)
{
	t_length result;
	result.bytes = len1.bytes + len2.bytes;
	result.extent = point_add(len1.extent, len2.extent);
	return result;
}

static inline t_length length_sub(t_length len1, t_length len2)
{
	t_length result;
	result.bytes = len1.bytes - len2.bytes;
	result.extent = point_sub(len1.extent, len2.extent);
	return result;
}

static inline t_length length_zero(void)
{
	t_length result = {0, {0, 0}};
	return result;
}

static inline t_length length_saturating_sub(t_length len1, t_length len2)
{
	if (len1.bytes > len2.bytes)
	{
		return length_sub(len1, len2);
	}
	else
	{
		return length_zero();
	}
}



static inline bool set_contains(t_char_range *ranges, uint32_t len,
								int32_t lookahead)
{
	uint32_t index = 0;
	uint32_t size = len - index;
	while (size > 1)
	{
		uint32_t	  half_size = size / 2;
		uint32_t	  mid_index = index + half_size;
		t_char_range *range = &ranges[mid_index];
		if (lookahead >= range->start && lookahead <= range->end)
		{
			return true;
		}
		else if (lookahead > range->end)
		{
			index = mid_index;
		}
		size -= half_size;
	}
	t_char_range *range = &ranges[index];
	return (lookahead >= range->start && lookahead <= range->end);
}

static inline t_point point__new(unsigned row, unsigned column)
{
	t_point result = {row, column};
	return result;
}

static inline t_point point_add(t_point a, t_point b)
{
	if (b.row > 0)
		return point__new(a.row + b.row, b.column);
	else
		return point__new(a.row, a.column + b.column);
}

static inline t_point point_sub(t_point a, t_point b)
{
	if (a.row > b.row)
		return point__new(a.row - b.row, a.column);
	else
		return point__new(0, a.column - b.column);
}

static inline bool point_lte(t_point a, t_point b)
{
	return (a.row < b.row) || (a.row == b.row && a.column <= b.column);
}

static inline bool point_lt(t_point a, t_point b)
{
	return (a.row < b.row) || (a.row == b.row && a.column < b.column);
}

static inline bool point_gt(t_point a, t_point b)
{
	return (a.row > b.row) || (a.row == b.row && a.column > b.column);
}

static inline bool point_gte(t_point a, t_point b)
{
	return (a.row > b.row) || (a.row == b.row && a.column >= b.column);
}

static inline bool point_eq(t_point a, t_point b)
{
	return a.row == b.row && a.column == b.column;
}

static inline t_point point_min(t_point a, t_point b)
{
	if (a.row < b.row || (a.row == b.row && a.column < b.column))
		return a;
	else
		return b;
}

static inline t_point point_max(t_point a, t_point b)
{
	if (a.row > b.row || (a.row == b.row && a.column > b.column))
		return a;
	else
		return b;
}

static inline void ts_reduce_action_set_add(t_reduce_action_set *self,
											t_reduce_action		 new_action)
{
	for (uint32_t i = 0; i < self->size; i++)
	{
		t_reduce_action action = self->contents[i];
		if (action.symbol == new_action.symbol &&
			action.count == new_action.count)
			return;
	}
	array_push(self, new_action);
}

static inline t_reusable_node reusable_node_new(void)
{
	return (t_reusable_node){array_new(), NULL_SUBTREE};
}

static inline void reusable_node_clear(t_reusable_node *self)
{
	array_clear(&self->stack);
	self->last_external_token = NULL_SUBTREE;
}

static inline t_subtree reusable_node_tree(t_reusable_node *self)
{
	return self->stack.size > 0
			   ? self->stack.contents[self->stack.size - 1].tree
			   : NULL_SUBTREE;
}

static inline uint32_t reusable_node_byte_offset(t_reusable_node *self)
{
	return self->stack.size > 0
			   ? self->stack.contents[self->stack.size - 1].byte_offset
			   : UINT32_MAX;
}

static inline void reusable_node_delete(t_reusable_node *self)
{
	array_delete(&self->stack);
}

static inline uint32_t ts_subtree_total_bytes(t_subtree self);
static inline bool	   ts_subtree_has_external_tokens(t_subtree self);
t_subtree			   ts_subtree_last_external_token(t_subtree self);
static inline uint32_t ts_subtree_child_count(t_subtree self);

static inline void reusable_node_advance(t_reusable_node *self)
{
	t_stack_entry last_entry = *array_back(&self->stack);
	uint32_t	  byte_offset =
		last_entry.byte_offset + ts_subtree_total_bytes(last_entry.tree);
	if (ts_subtree_has_external_tokens(last_entry.tree))
	{
		self->last_external_token =
			ts_subtree_last_external_token(last_entry.tree);
	}

	t_subtree tree;
	uint32_t  next_index;
	do
	{
		t_stack_entry popped_entry = array_pop(&self->stack);
		next_index = popped_entry.child_index + 1;
		if (self->stack.size == 0)
			return;
		tree = array_back(&self->stack)->tree;
	} while (ts_subtree_child_count(tree) <= next_index);

	array_push(&self->stack, ((t_stack_entry){
								 .tree = ts_subtree_children(tree)[next_index],
								 .child_index = next_index,
								 .byte_offset = byte_offset,
							 }));
}

static inline bool reusable_node_descend(t_reusable_node *self)
{
	t_stack_entry last_entry = *array_back(&self->stack);
	if (ts_subtree_child_count(last_entry.tree) > 0)
	{
		array_push(&self->stack,
				   ((t_stack_entry){
					   .tree = ts_subtree_children(last_entry.tree)[0],
					   .child_index = 0,
					   .byte_offset = last_entry.byte_offset,
				   }));
		return true;
	}
	else
	{
		return false;
	}
}

static inline void reusable_node_advance_past_leaf(t_reusable_node *self)
{
	while (reusable_node_descend(self))
	{
	}
	reusable_node_advance(self);
}

static inline void reusable_node_reset(t_reusable_node *self, t_subtree tree)
{
	reusable_node_clear(self);
	array_push(&self->stack, ((t_stack_entry){
								 .tree = tree,
								 .child_index = 0,
								 .byte_offset = 0,
							 }));

	// Never reuse the root node, because it has a non-standard internal
	// structure due to transformations that are applied when it is accepted:
	// adding the EOF child and any extra children.
	if (!reusable_node_descend(self))
	{
		reusable_node_clear(self);
	}
}



#define SUBTREE_GET(self, name)                                                \
	((self).data.is_inline ? (self).data.name : (self).ptr->name)

static inline t_symbol ts_subtree_symbol(t_subtree self)
{
	return SUBTREE_GET(self, symbol);
}
static inline bool ts_subtree_visible(t_subtree self)
{
	return SUBTREE_GET(self, visible);
}
static inline bool ts_subtree_named(t_subtree self)
{
	return SUBTREE_GET(self, named);
}
static inline bool ts_subtree_extra(t_subtree self)
{
	return SUBTREE_GET(self, extra);
}
static inline bool ts_subtree_has_changes(t_subtree self)
{
	return SUBTREE_GET(self, has_changes);
}
static inline bool ts_subtree_missing(t_subtree self)
{
	return SUBTREE_GET(self, is_missing);
}
static inline bool ts_subtree_is_keyword(t_subtree self)
{
	return SUBTREE_GET(self, is_keyword);
}
static inline t_state_id ts_subtree_parse_state(t_subtree self)
{
	return SUBTREE_GET(self, parse_state);
}
static inline uint32_t ts_subtree_lookahead_bytes(t_subtree self)
{
	return SUBTREE_GET(self, lookahead_bytes);
}

#undef SUBTREE_GET

// Get the size needed to store a heap-allocated subtree with the given
// number of children.
static inline size_t ts_subtree_alloc_size(uint32_t child_count)
{
	return child_count * sizeof(t_subtree) + sizeof(t_subtree_heap_data);
}

static inline void ts_subtree_set_extra(t_mutable_subtree *self, bool is_extra)
{
	if (self->data.is_inline)
	{
		self->data.extra = is_extra;
	}
	else
	{
		self->ptr->extra = is_extra;
	}
}

static inline t_symbol ts_subtree_leaf_symbol(t_subtree self)
{
	if (self.data.is_inline)
		return self.data.symbol;
	if (self.ptr->child_count == 0)
		return self.ptr->symbol;
	return self.ptr->first_leaf.symbol;
}

static inline t_state_id ts_subtree_leaf_parse_state(t_subtree self)
{
	if (self.data.is_inline)
		return self.data.parse_state;
	if (self.ptr->child_count == 0)
		return self.ptr->parse_state;
	return self.ptr->first_leaf.parse_state;
}

static inline t_length ts_subtree_padding(t_subtree self)
{
	if (self.data.is_inline)
	{
		t_length result = {self.data.padding_bytes,
						   {self.data.padding_rows, self.data.padding_columns}};
		return result;
	}
	else
	{
		return self.ptr->padding;
	}
}

static inline t_length ts_subtree_size(t_subtree self)
{
	if (self.data.is_inline)
	{
		t_length result = {self.data.size_bytes, {0, self.data.size_bytes}};
		return result;
	}
	else
	{
		return self.ptr->size;
	}
}

static inline t_length ts_subtree_total_size(t_subtree self)
{
	return length_add(ts_subtree_padding(self), ts_subtree_size(self));
}

static inline uint32_t ts_subtree_total_bytes(t_subtree self)
{
	return ts_subtree_total_size(self).bytes;
}

static inline uint32_t ts_subtree_child_count(t_subtree self)
{
	return self.data.is_inline ? 0 : self.ptr->child_count;
}

static inline uint32_t ts_subtree_repeat_depth(t_subtree self)
{
	return self.data.is_inline ? 0 : self.ptr->repeat_depth;
}

static inline uint32_t ts_subtree_is_repetition(t_subtree self)
{
	return self.data.is_inline ? 0
							   : !self.ptr->named && !self.ptr->visible &&
									 self.ptr->child_count != 0;
}

static inline uint32_t ts_subtree_visible_descendant_count(t_subtree self)
{
	return (self.data.is_inline || self.ptr->child_count == 0)
			   ? 0
			   : self.ptr->visible_descendant_count;
}

static inline uint32_t ts_subtree_visible_child_count(t_subtree self)
{
	if (ts_subtree_child_count(self) > 0)
	{
		return self.ptr->visible_child_count;
	}
	else
	{
		return 0;
	}
}

static inline uint32_t ts_subtree_error_cost(t_subtree self)
{
	if (ts_subtree_missing(self))
	{
		return ERROR_COST_PER_MISSING_TREE + ERROR_COST_PER_RECOVERY;
	}
	else
	{
		return self.data.is_inline ? 0 : self.ptr->error_cost;
	}
}

static inline int32_t ts_subtree_dynamic_precedence(t_subtree self)
{
	return (self.data.is_inline || self.ptr->child_count == 0)
			   ? 0
			   : self.ptr->dynamic_precedence;
}

static inline uint16_t ts_subtree_production_id(t_subtree self)
{
	if (ts_subtree_child_count(self) > 0)
	{
		return self.ptr->production_id;
	}
	else
	{
		return 0;
	}
}

static inline bool ts_subtree_fragile_left(t_subtree self)
{
	return self.data.is_inline ? false : self.ptr->fragile_left;
}

static inline bool ts_subtree_fragile_right(t_subtree self)
{
	return self.data.is_inline ? false : self.ptr->fragile_right;
}

static inline bool ts_subtree_has_external_tokens(t_subtree self)
{
	return self.data.is_inline ? false : self.ptr->has_external_tokens;
}

static inline bool ts_subtree_has_external_scanner_state_change(t_subtree self)
{
	return self.data.is_inline ? false
							   : self.ptr->has_external_scanner_state_change;
}

static inline bool ts_subtree_depends_on_column(t_subtree self)
{
	return self.data.is_inline ? false : self.ptr->depends_on_column;
}

static inline bool ts_subtree_is_fragile(t_subtree self)
{
	return self.data.is_inline
			   ? false
			   : (self.ptr->fragile_left || self.ptr->fragile_right);
}

static inline bool ts_subtree_is_error(t_subtree self)
{
	return ts_subtree_symbol(self) == ts_builtin_sym_error;
}

static inline bool ts_subtree_is_eof(t_subtree self)
{
	return ts_subtree_symbol(self) == ts_builtin_sym_end;
}

static inline t_subtree ts_subtree_from_mut(t_mutable_subtree self)
{
	t_subtree result;
	result.data = self.data;
	return result;
}

static inline t_mutable_subtree ts_subtree_to_mut_unsafe(t_subtree self)
{
	t_mutable_subtree result;
	result.data = self.data;
	return result;
}

static inline t_subtree ts_tree_cursor_current_subtree(
	const t_tree_cursor *_self)
{
	const t_tree_cursor *self = (const t_tree_cursor *)_self;
	t_tree_cursor_entry *last_entry = array_back(&self->stack);
	return *last_entry->subtree;
}

#endif // TREE_SITTER_TREE_H_
