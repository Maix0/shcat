/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   subtree_summarize.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 21:35:24 by maiboyer          #+#    #+#             */
/*   Updated: 2024/09/02 21:44:43 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser/language.h"
#include "parser/subtree.h"

// Assign all of the node's properties that depend on its children.
void	ts_subtree_summarize_children(t_subtree self,
		const TSLanguage *language)
{
	t_u32			structural_index;
	const TSSymbol	*alias_sequence;
	t_u32			lookahead_end_byte;
	t_subtree		*children;
	t_subtree		child;
	t_u32			child_lookahead_end_byte;
	t_u32			grandchild_count;
	t_subtree		first_child;
	t_subtree		last_child;
	t_usize			i;

	alias_sequence = ts_language_alias_sequence(language, self->production_id);
	self->named_child_count = 0;
	self->visible_child_count = 0;
	self->error_cost = 0;
	self->repeat_depth = 0;
	self->visible_descendant_count = 0;
	self->has_external_tokens = false;
	self->depends_on_column = false;
	self->has_external_scanner_state_change = false;
	self->dynamic_precedence = 0;
	structural_index = 0;
	lookahead_end_byte = 0;
	children = ts_subtree_children(self);
	i = 0;
	while (i < self->child_count)
	{
		child = children[i];
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
		child_lookahead_end_byte = self->padding.bytes + self->size.bytes
			+ ts_subtree_lookahead_bytes(child);
		if (child_lookahead_end_byte > lookahead_end_byte)
			lookahead_end_byte = child_lookahead_end_byte;
		if (ts_subtree_symbol(child) != ts_builtin_sym_error_repeat)
			self->error_cost += ts_subtree_error_cost(child);
		grandchild_count = ts_subtree_child_count(child);
		if (self->symbol == ts_builtin_sym_error
			|| self->symbol == ts_builtin_sym_error_repeat)
		{
			if (!ts_subtree_extra(child) && !(ts_subtree_is_error(child)
					&& grandchild_count == 0))
			{
				if (ts_subtree_visible(child))
					self->error_cost += ERROR_COST_PER_SKIPPED_TREE;
				else if (grandchild_count > 0)
					self->error_cost += ERROR_COST_PER_SKIPPED_TREE
						* child->visible_child_count;
			}
		}
		self->dynamic_precedence += ts_subtree_dynamic_precedence(child);
		self->visible_descendant_count
			+= ts_subtree_visible_descendant_count(child);
		if (alias_sequence && alias_sequence[structural_index] != 0
			&& !ts_subtree_extra(child))
		{
			self->visible_descendant_count++;
			self->visible_child_count++;
			if (ts_language_symbol_metadata(language,
					alias_sequence[structural_index]).named)
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
			self->fragile_left = true;
			self->fragile_right = true;
			self->parse_state = TS_TREE_STATE_NONE;
		}
		if (!ts_subtree_extra(child))
			structural_index++;
		i++;
	}
	self->lookahead_bytes = lookahead_end_byte - self->size.bytes
		- self->padding.bytes;
	if (self->symbol == ts_builtin_sym_error
		|| self->symbol == ts_builtin_sym_error_repeat)
		self->error_cost += ERROR_COST_PER_RECOVERY
			+ ERROR_COST_PER_SKIPPED_CHAR * self->size.bytes
			+ ERROR_COST_PER_SKIPPED_LINE * self->size.extent.row;
	if (self->child_count > 0)
	{
		first_child = children[0];
		last_child = children[self->child_count - 1];
		self->first_leaf.symbol = ts_subtree_leaf_symbol(first_child);
		self->first_leaf.parse_state = ts_subtree_leaf_parse_state(first_child);
		if (ts_subtree_fragile_left(first_child))
			self->fragile_left = true;
		if (ts_subtree_fragile_right(last_child))
			self->fragile_right = true;
		if (self->child_count >= 2 && !self->visible && !self->named
			&& ts_subtree_symbol(first_child) == self->symbol)
		{
			if (ts_subtree_repeat_depth(first_child) > \
				ts_subtree_repeat_depth(last_child))
				self->repeat_depth = ts_subtree_repeat_depth(first_child) + 1;
			else
				self->repeat_depth = ts_subtree_repeat_depth(last_child) + 1;
		}
	}
}
