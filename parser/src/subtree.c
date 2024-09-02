#include <assert.h>
#include <stddef.h>

#include "me/mem/mem.h"
#include "me/types.h"
#include "me/vec/vec_subtree.h"
#include "parser/array.h"
#include "parser/external_scanner_state.h"
#include "parser/language.h"
#include "parser/length.h"
#include "parser/subtree.h"

void ts_subtree_array_copy(t_vec_subtree self, t_vec_subtree *dest)
{
	t_usize i;

	dest->len = self.len;
	dest->capacity = self.capacity;
	dest->buffer = self.buffer;
	if (self.capacity > 0)
	{
		dest->buffer = mem_alloc_array(self.capacity, sizeof(t_subtree));
		mem_copy(dest->buffer, self.buffer, self.len * sizeof(t_subtree));
		i = 0;
		while (i < self.len)
			dest->buffer[i++]->ref_count++;
	}
}

void ts_subtree_array_clear(t_vec_subtree *self)
{
	t_usize i;
	i = 0;
	while (i < self->len)
		ts_subtree_release(self->buffer[i++]);
}

void ts_subtree_array_delete(t_vec_subtree *self)
{
	ts_subtree_array_clear(self);
	vec_subtree_free(*self);
}

void ts_subtree_array_remove_trailing_extras(t_vec_subtree *self, t_vec_subtree *destination)
{
	t_subtree last;

	destination->len = 0;
	while (self->len > 0)
	{
		last = self->buffer[self->len - 1];
		if (ts_subtree_extra(last))
		{
			self->len--;
			vec_subtree_push(destination, last);
		}
		else
			break;
	}
	vec_subtree_reverse(destination);
}

t_subtree ts_subtree_new_leaf(TSSymbol symbol, Length padding, Length size, t_u32 lookahead_bytes, TSStateId parse_state,
							  bool has_external_tokens, bool depends_on_column, bool is_keyword, const TSLanguage *language)
{
	TSSymbolMetadata metadata;
	bool			 extra;
	t_subtree_data	*data;

	extra = symbol == ts_builtin_sym_end;
	metadata = ts_language_symbol_metadata(language, symbol);
	data = mem_alloc(sizeof(*data));
	*data = (t_subtree_data){.ref_count = 1,
							 .padding = padding,
							 .size = size,
							 .lookahead_bytes = lookahead_bytes,
							 .error_cost = 0,
							 .child_count = 0,
							 .symbol = symbol,
							 .parse_state = parse_state,
							 .visible = metadata.visible,
							 .named = metadata.named,
							 .extra = extra,
							 .fragile_left = false,
							 .fragile_right = false,
							 .has_changes = false,
							 .has_external_tokens = has_external_tokens,
							 .has_external_scanner_state_change = false,
							 .depends_on_column = depends_on_column,
							 .is_missing = false,
							 .is_keyword = is_keyword,
							 {{.first_leaf = {.symbol = 0, .parse_state = 0}}}};
	return ((t_subtree)data);
}

void ts_subtree_set_symbol(t_subtree *self, TSSymbol symbol, const TSLanguage *language)
{
	TSSymbolMetadata metadata;

	metadata = ts_language_symbol_metadata(language, symbol);
	(*self)->symbol = symbol;
	(*self)->named = metadata.named;
	(*self)->visible = metadata.visible;
}

t_subtree ts_subtree_new_error(t_i32 lookahead_char, Length padding, Length size, t_u32 bytes_scanned, TSStateId parse_state,
							   const TSLanguage *language)
{
	t_subtree result;

	result = ts_subtree_new_leaf(ts_builtin_sym_error, padding, size, bytes_scanned, parse_state, false, false, false, language);
	result->fragile_left = true;
	result->fragile_right = true;
	result->lookahead_char = lookahead_char;
	return (result);
}

// Clone a subtree.
t_subtree ts_subtree_clone(t_subtree self)
{
	t_usize			alloc_size;
	t_usize			i;
	t_subtree	   *new_children;
	t_subtree	   *old_children;
	t_subtree_data *result;

	alloc_size = ts_subtree_alloc_size(self->child_count);
	new_children = mem_alloc(alloc_size);
	old_children = ts_subtree_children(self);
	mem_copy(new_children, old_children, alloc_size);
	result = (t_subtree_data *)&new_children[self->child_count];
	i = 0;
	if (self->child_count > 0)
		while (i < self->child_count)
			(new_children[i++]->ref_count++);
	else if (self->has_external_tokens)
		result->external_scanner_state = ts_external_scanner_state_copy(&self->external_scanner_state);
	result->ref_count = 1;
	return ((t_subtree)result);
}

// Get mutable version of a subtree.
//
// This takes ownership of the subtree. If the subtree has only one owner,
// this will directly convert it into a mutable version. Otherwise, it will
// perform a copy.
t_subtree ts_subtree_ensure_owner(t_subtree self)
{
	t_subtree result;

	result = ts_subtree_clone(self);
	ts_subtree_release(self);
	return result;
}

// Assign all of the node's properties that depend on its children.
void ts_subtree_summarize_children(t_subtree self, const TSLanguage *language)
{
	self->named_child_count = 0;
	self->visible_child_count = 0;
	self->error_cost = 0;
	self->repeat_depth = 0;
	self->visible_descendant_count = 0;
	self->has_external_tokens = false;
	self->depends_on_column = false;
	self->has_external_scanner_state_change = false;
	self->dynamic_precedence = 0;

	t_u32			structural_index = 0;
	const TSSymbol *alias_sequence = ts_language_alias_sequence(language, self->production_id);
	t_u32			lookahead_end_byte = 0;

	t_subtree *children = ts_subtree_children(self);
	for (t_u32 i = 0; i < self->child_count; i++)
	{
		t_subtree child = children[i];

		if (self->size.extent.row == 0 && ts_subtree_depends_on_column(child))
			self->depends_on_column = true;

		if (ts_subtree_has_external_scanner_state_change(child))
			self->has_external_scanner_state_change = true;

		if (i == 0)
		{
			self->padding = ts_subtree_padding(child);
			self->size = ts_subtree_size(child);
		}
		else
			self->size = length_add(self->size, ts_subtree_total_size(child));

		t_u32 child_lookahead_end_byte = self->padding.bytes + self->size.bytes + ts_subtree_lookahead_bytes(child);
		if (child_lookahead_end_byte > lookahead_end_byte)
			lookahead_end_byte = child_lookahead_end_byte;

		if (ts_subtree_symbol(child) != ts_builtin_sym_error_repeat)
			self->error_cost += ts_subtree_error_cost(child);

		t_u32 grandchild_count = ts_subtree_child_count(child);
		if (self->symbol == ts_builtin_sym_error || self->symbol == ts_builtin_sym_error_repeat)
		{
			if (!ts_subtree_extra(child) && !(ts_subtree_is_error(child) && grandchild_count == 0))
			{
				if (ts_subtree_visible(child))
					self->error_cost += ERROR_COST_PER_SKIPPED_TREE;
				else if (grandchild_count > 0)
					self->error_cost += ERROR_COST_PER_SKIPPED_TREE * child->visible_child_count;
			}
		}

		self->dynamic_precedence += ts_subtree_dynamic_precedence(child);
		self->visible_descendant_count += ts_subtree_visible_descendant_count(child);

		if (alias_sequence && alias_sequence[structural_index] != 0 && !ts_subtree_extra(child))
		{
			self->visible_descendant_count++;
			self->visible_child_count++;
			if (ts_language_symbol_metadata(language, alias_sequence[structural_index]).named)
				self->named_child_count++;
		}
		else if (ts_subtree_visible(child))
		{
			self->visible_descendant_count++;
			self->visible_child_count++;
			if (ts_subtree_named(child))
				self->named_child_count++;
		}
		else if (grandchild_count > 0)
		{
			self->visible_child_count += child->visible_child_count;
			self->named_child_count += child->named_child_count;
		}

		if (ts_subtree_has_external_tokens(child))
			self->has_external_tokens = true;

		if (ts_subtree_is_error(child))
		{
			self->fragile_left = self->fragile_right = true;
			self->parse_state = TS_TREE_STATE_NONE;
		}

		if (!ts_subtree_extra(child))
			structural_index++;
	}

	self->lookahead_bytes = lookahead_end_byte - self->size.bytes - self->padding.bytes;

	if (self->symbol == ts_builtin_sym_error || self->symbol == ts_builtin_sym_error_repeat)
		self->error_cost +=
			ERROR_COST_PER_RECOVERY + ERROR_COST_PER_SKIPPED_CHAR * self->size.bytes + ERROR_COST_PER_SKIPPED_LINE * self->size.extent.row;

	if (self->child_count > 0)
	{
		t_subtree first_child = children[0];
		t_subtree last_child = children[self->child_count - 1];

		self->first_leaf.symbol = ts_subtree_leaf_symbol(first_child);
		self->first_leaf.parse_state = ts_subtree_leaf_parse_state(first_child);

		if (ts_subtree_fragile_left(first_child))
			self->fragile_left = true;
		if (ts_subtree_fragile_right(last_child))
			self->fragile_right = true;

		if (self->child_count >= 2 && !self->visible && !self->named && ts_subtree_symbol(first_child) == self->symbol)
		{
			if (ts_subtree_repeat_depth(first_child) > ts_subtree_repeat_depth(last_child))
				self->repeat_depth = ts_subtree_repeat_depth(first_child) + 1;
			else
				self->repeat_depth = ts_subtree_repeat_depth(last_child) + 1;
		}
	}
}

// Create a new parent node with the given children.
//
// This takes ownership of the children array.
t_subtree ts_subtree_new_node(TSSymbol symbol, t_vec_subtree *children, t_u32 production_id, const TSLanguage *language)
{
	TSSymbolMetadata metadata;
	bool			 fragile;
	t_usize			 new_byte_size;
	t_subtree		 data;

	metadata = ts_language_symbol_metadata(language, symbol);
	fragile = symbol == ts_builtin_sym_error || symbol == ts_builtin_sym_error_repeat;
	new_byte_size = ts_subtree_alloc_size(children->len);
	if (children->capacity * sizeof(t_subtree) < new_byte_size)
	{
		children->buffer = mem_realloc(children->buffer, new_byte_size);
		children->capacity = (t_u32)(new_byte_size / sizeof(t_subtree));
	}
	data = (t_subtree)&children->buffer[children->len];
	*data = (t_subtree_data){.ref_count = 1,
							 .symbol = symbol,
							 .child_count = children->len,
							 .visible = metadata.visible,
							 .named = metadata.named,
							 .has_changes = false,
							 .has_external_scanner_state_change = false,
							 .fragile_left = fragile,
							 .fragile_right = fragile,
							 .is_keyword = false,
							 {{
								 .visible_descendant_count = 0,
								 .production_id = production_id,
								 .first_leaf = {.symbol = 0, .parse_state = 0},
							 }}};
	ts_subtree_summarize_children(data, language);
	return (data);
}

// Create a new error node containing the given children.
//
// This node is treated as 'extra'. Its children are prevented from having
// having any effect on the parse state.
t_subtree ts_subtree_new_error_node(t_vec_subtree *children, bool extra, const TSLanguage *language)
{
	t_subtree result;

	result = ts_subtree_new_node(ts_builtin_sym_error, children, 0, language);
	result->extra = extra;
	return (result);
}

// Create a new 'missing leaf' node.
//
// This node is treated as 'extra'. Its children are prevented from having
// having any effect on the parse state.
t_subtree ts_subtree_new_missing_leaf(TSSymbol symbol, Length padding, t_u32 lookahead_bytes, const TSLanguage *language)
{
	t_subtree result;

	result = ts_subtree_new_leaf(symbol, padding, length_zero(), lookahead_bytes, 0, false, false, false, language);
	result->is_missing = true;
	return (result);
}
