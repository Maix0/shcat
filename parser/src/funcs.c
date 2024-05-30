/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 19:21:01 by maiboyer          #+#    #+#             */
/*   Updated: 2024/05/30 19:22:53 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./api.h"

size_t atomic_load(const volatile size_t *p)
{
	return (*p);
}

uint32_t atomic_inc(volatile uint32_t *p)
{
	return (++(*p));
}

uint32_t atomic_dec(volatile uint32_t *p)
{
	return (--(*p));
}

bool ts_language_is_symbol_external(const t_language *self, t_symbol symbol)
{
	return 0 < symbol && symbol < self->external_token_count + 1;
}

const t_parse_action *ts_language_actions(const t_language *self, t_state_id state, t_symbol symbol, uint32_t *count)
{
	t_table_entry entry;
	ts_language_table_entry(self, state, symbol, &entry);
	*count = entry.action_count;
	return entry.actions;
}

bool ts_language_has_reduce_action(const t_language *self, t_state_id state, t_symbol symbol)
{
	t_table_entry entry;
	ts_language_table_entry(self, state, symbol, &entry);
	return entry.action_count > 0 && entry.actions[0].type == TSParseActionTypeReduce;
}

uint16_t ts_language_lookup(const t_language *self, t_state_id state, t_symbol symbol)
{
	if (state >= self->large_state_count)
	{
		uint32_t		index = self->small_parse_table_map[state - self->large_state_count];
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

bool ts_language_has_actions(const t_language *self, t_state_id state, t_symbol symbol)
{
	return ts_language_lookup(self, state, symbol) != 0;
}

t_lookahead_iterator ts_language_lookaheads(const t_language *self, t_state_id state)
{
	bool			is_small_state = state >= self->large_state_count;
	const uint16_t *data;
	const uint16_t *group_end = NULL;
	uint16_t		group_count = 0;
	if (is_small_state)
	{
		uint32_t index = self->small_parse_table_map[state - self->large_state_count];
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

bool ts_lookahead_iterator__next(t_lookahead_iterator *self)
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
		const t_parse_action_entry *entry = &self->language->parse_actions[self->table_value];
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

bool ts_language_state_is_primary(const t_language *self, t_state_id state)
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

const bool *ts_language_enabled_external_tokens(const t_language *self, unsigned external_scanner_state)
{
	if (external_scanner_state == 0)
	{
		return NULL;
	}
	else
	{
		return self->external_scanner.states + self->external_token_count * external_scanner_state;
	}
}

const t_symbol *ts_language_alias_sequence(const t_language *self, uint32_t production_id)
{
	return production_id ? &self->alias_sequences[production_id * self->max_alias_sequence_length] : NULL;
}

t_symbol ts_language_alias_at(const t_language *self, uint32_t production_id, uint32_t child_index)
{
	return production_id ? self->alias_sequences[production_id * self->max_alias_sequence_length + child_index] : 0;
}

void ts_language_field_map(const t_language *self, uint32_t production_id, const t_field_map_entry **start, const t_field_map_entry **end)
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

void ts_language_aliases_for_symbol(const t_language *self, t_symbol original_symbol, const t_symbol **start, const t_symbol **end)
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

bool length_is_undefined(t_length length)
{
	return length.bytes == 0 && length.extent.column != 0;
}

t_length length_min(t_length len1, t_length len2)
{
	return (len1.bytes < len2.bytes) ? len1 : len2;
}

t_length length_add(t_length len1, t_length len2)
{
	t_length result;
	result.bytes = len1.bytes + len2.bytes;
	result.extent = point_add(len1.extent, len2.extent);
	return result;
}

t_length length_sub(t_length len1, t_length len2)
{
	t_length result;
	result.bytes = len1.bytes - len2.bytes;
	result.extent = point_sub(len1.extent, len2.extent);
	return result;
}

t_length length_zero(void)
{
	t_length result = {0, {0, 0}};
	return result;
}

t_length length_saturating_sub(t_length len1, t_length len2)
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

bool set_contains(t_char_range *ranges, uint32_t len, int32_t lookahead)
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

t_point point__new(unsigned row, unsigned column)
{
	t_point result = {row, column};
	return result;
}

t_point point_add(t_point a, t_point b)
{
	if (b.row > 0)
		return point__new(a.row + b.row, b.column);
	else
		return point__new(a.row, a.column + b.column);
}

t_point point_sub(t_point a, t_point b)
{
	if (a.row > b.row)
		return point__new(a.row - b.row, a.column);
	else
		return point__new(0, a.column - b.column);
}

bool point_lte(t_point a, t_point b)
{
	return (a.row < b.row) || (a.row == b.row && a.column <= b.column);
}

bool point_lt(t_point a, t_point b)
{
	return (a.row < b.row) || (a.row == b.row && a.column < b.column);
}

bool point_gt(t_point a, t_point b)
{
	return (a.row > b.row) || (a.row == b.row && a.column > b.column);
}

bool point_gte(t_point a, t_point b)
{
	return (a.row > b.row) || (a.row == b.row && a.column >= b.column);
}

bool point_eq(t_point a, t_point b)
{
	return a.row == b.row && a.column == b.column;
}

t_point point_min(t_point a, t_point b)
{
	if (a.row < b.row || (a.row == b.row && a.column < b.column))
		return a;
	else
		return b;
}

t_point point_max(t_point a, t_point b)
{
	if (a.row > b.row || (a.row == b.row && a.column > b.column))
		return a;
	else
		return b;
}

void ts_reduce_action_set_add(t_reduce_action_set *self, t_reduce_action new_action)
{
	for (uint32_t i = 0; i < self->size; i++)
	{
		t_reduce_action action = self->contents[i];
		if (action.symbol == new_action.symbol && action.count == new_action.count)
			return;
	}
	array_push(self, new_action);
}

t_reusable_node reusable_node_new(void)
{
	return (t_reusable_node){array_new(), NULL_SUBTREE};
}

void reusable_node_clear(t_reusable_node *self)
{
	array_clear(&self->stack);
	self->last_external_token = NULL_SUBTREE;
}

t_subtree reusable_node_tree(t_reusable_node *self)
{
	return self->stack.size > 0 ? self->stack.contents[self->stack.size - 1].tree : NULL_SUBTREE;
}

uint32_t reusable_node_byte_offset(t_reusable_node *self)
{
	return self->stack.size > 0 ? self->stack.contents[self->stack.size - 1].byte_offset : UINT32_MAX;
}

void reusable_node_delete(t_reusable_node *self)
{
	array_delete(&self->stack);
}

void reusable_node_advance(t_reusable_node *self)
{
	t_stack_entry last_entry = *array_back(&self->stack);
	uint32_t	  byte_offset = last_entry.byte_offset + ts_subtree_total_bytes(last_entry.tree);
	if (ts_subtree_has_external_tokens(last_entry.tree))
	{
		self->last_external_token = ts_subtree_last_external_token(last_entry.tree);
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

bool reusable_node_descend(t_reusable_node *self)
{
	t_stack_entry last_entry = *array_back(&self->stack);
	if (ts_subtree_child_count(last_entry.tree) > 0)
	{
		array_push(&self->stack, ((t_stack_entry){
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

void reusable_node_advance_past_leaf(t_reusable_node *self)
{
	while (reusable_node_descend(self))
	{
	}
	reusable_node_advance(self);
}

void reusable_node_reset(t_reusable_node *self, t_subtree tree)
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


#define SUBTREE_GET(self, name) ((self).data.is_inline ? (self).data.name : (self).ptr->name)

t_symbol ts_subtree_symbol(t_subtree self)
{
	return SUBTREE_GET(self, symbol);
}

bool ts_subtree_visible(t_subtree self)
{
	return SUBTREE_GET(self, visible);
}

bool ts_subtree_named(t_subtree self)
{
	return SUBTREE_GET(self, named);
}

bool ts_subtree_extra(t_subtree self)
{
	return SUBTREE_GET(self, extra);
}

bool ts_subtree_has_changes(t_subtree self)
{
	return SUBTREE_GET(self, has_changes);
}

bool ts_subtree_missing(t_subtree self)
{
	return SUBTREE_GET(self, is_missing);
}

bool ts_subtree_is_keyword(t_subtree self)
{
	return SUBTREE_GET(self, is_keyword);
}

t_state_id ts_subtree_parse_state(t_subtree self)
{
	return SUBTREE_GET(self, parse_state);
}

uint32_t ts_subtree_lookahead_bytes(t_subtree self)
{
	return SUBTREE_GET(self, lookahead_bytes);
}

size_t ts_subtree_alloc_size(uint32_t child_count)
{
	return child_count * sizeof(t_subtree) + sizeof(t_subtree_heap_data);
}

void ts_subtree_set_extra(t_mutable_subtree *self, bool is_extra)
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

t_symbol ts_subtree_leaf_symbol(t_subtree self)
{
	if (self.data.is_inline)
		return self.data.symbol;
	if (self.ptr->child_count == 0)
		return self.ptr->symbol;
	return self.ptr->first_leaf.symbol;
}

t_state_id ts_subtree_leaf_parse_state(t_subtree self)
{
	if (self.data.is_inline)
		return self.data.parse_state;
	if (self.ptr->child_count == 0)
		return self.ptr->parse_state;
	return self.ptr->first_leaf.parse_state;
}

t_length ts_subtree_padding(t_subtree self)
{
	if (self.data.is_inline)
	{
		t_length result = {self.data.padding_bytes, {self.data.padding_rows, self.data.padding_columns}};
		return result;
	}
	else
	{
		return self.ptr->padding;
	}
}

t_length ts_subtree_size(t_subtree self)
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

t_length ts_subtree_total_size(t_subtree self)
{
	return length_add(ts_subtree_padding(self), ts_subtree_size(self));
}

uint32_t ts_subtree_total_bytes(t_subtree self)
{
	return ts_subtree_total_size(self).bytes;
}

uint32_t ts_subtree_child_count(t_subtree self)
{
	return self.data.is_inline ? 0 : self.ptr->child_count;
}

uint32_t ts_subtree_repeat_depth(t_subtree self)
{
	return self.data.is_inline ? 0 : self.ptr->repeat_depth;
}

uint32_t ts_subtree_is_repetition(t_subtree self)
{
	return self.data.is_inline ? 0 : !self.ptr->named && !self.ptr->visible && self.ptr->child_count != 0;
}

uint32_t ts_subtree_visible_descendant_count(t_subtree self)
{
	return (self.data.is_inline || self.ptr->child_count == 0) ? 0 : self.ptr->visible_descendant_count;
}

uint32_t ts_subtree_visible_child_count(t_subtree self)
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

uint32_t ts_subtree_error_cost(t_subtree self)
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

int32_t ts_subtree_dynamic_precedence(t_subtree self)
{
	return (self.data.is_inline || self.ptr->child_count == 0) ? 0 : self.ptr->dynamic_precedence;
}

uint16_t ts_subtree_production_id(t_subtree self)
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

bool ts_subtree_fragile_left(t_subtree self)
{
	return self.data.is_inline ? false : self.ptr->fragile_left;
}

bool ts_subtree_fragile_right(t_subtree self)
{
	return self.data.is_inline ? false : self.ptr->fragile_right;
}

bool ts_subtree_has_external_tokens(t_subtree self)
{
	return self.data.is_inline ? false : self.ptr->has_external_tokens;
}

bool ts_subtree_has_external_scanner_state_change(t_subtree self)
{
	return self.data.is_inline ? false : self.ptr->has_external_scanner_state_change;
}

bool ts_subtree_depends_on_column(t_subtree self)
{
	return self.data.is_inline ? false : self.ptr->depends_on_column;
}

bool ts_subtree_is_fragile(t_subtree self)
{
	return self.data.is_inline ? false : (self.ptr->fragile_left || self.ptr->fragile_right);
}

bool ts_subtree_is_error(t_subtree self)
{
	return ts_subtree_symbol(self) == ts_builtin_sym_error;
}

bool ts_subtree_is_eof(t_subtree self)
{
	return ts_subtree_symbol(self) == ts_builtin_sym_end;
}

t_subtree ts_subtree_from_mut(t_mutable_subtree self)
{
	t_subtree result;
	result.data = self.data;
	return result;
}

t_mutable_subtree ts_subtree_to_mut_unsafe(t_subtree self)
{
	t_mutable_subtree result;
	result.data = self.data;
	return result;
}

t_subtree ts_tree_cursor_current_subtree(const t_tree_cursor *_self)
{
	const t_tree_cursor *self = (const t_tree_cursor *)_self;
	t_tree_cursor_entry *last_entry = array_back(&self->stack);
	return *last_entry->subtree;
}
