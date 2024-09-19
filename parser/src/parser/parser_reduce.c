/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser_reduce.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 14:03:09 by maiboyer          #+#    #+#             */
/*   Updated: 2024/09/19 17:20:24 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser/inner/parser_inner.h"

t_stack_version	ts_parser__reduce(t_parser *self, t_stack_version version,
		t_symbol symbol, t_u32 count, int dynamic_precedence,
		t_u16 production_id, bool is_fragile, bool end_of_non_terminal_extra)
{
	t_state_id			next_state;
	t_state_id			state;
	t_stack_slice		next_slice;
	t_stack_slice		slice;
	t_stack_slice_array	pop;
	t_stack_version		k;
	t_stack_version		slice_version;
	t_subtree			parent;
	t_u32				i;
	t_u32				initial_version_count;
	t_u32				j;
	t_u32				removed_version_count;
	t_vec_subtree		children;
	t_vec_subtree		next_slice_children;

	initial_version_count = ts_stack_version_count(self->stack);
	pop = ts_stack_pop_count(self->stack, version, count);
	removed_version_count = 0;
	i = 0;
	while (i < pop.size)
	{
		slice = pop.contents[i];
		slice_version = slice.version - removed_version_count;
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
			i++;
			continue ;
		}
		children = slice.subtrees;
		ts_subtree_array_remove_trailing_extras(&children,
			&self->trailing_extras);
		parent = ts_subtree_new_node(symbol, &children, production_id,
				self->language);
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
				ts_subtree_array_clear(&self->trailing_extras);
				ts_subtree_release(parent);
				array_swap(&self->trailing_extras, &self->trailing_extras2);
				parent = ts_subtree_new_node(symbol, &next_slice_children,
						production_id, self->language);
			}
			else
			{
				self->trailing_extras2.len = 0;
				ts_subtree_array_delete(&next_slice.subtrees);
			}
		}
		state = ts_stack_state(self->stack, slice_version);
		next_state = ts_language_next_state(self->language, state, symbol);
		if (end_of_non_terminal_extra && next_state == state)
			parent->extra = true;
		if (is_fragile || pop.size > 1 || initial_version_count > 1)
		{
			parent->fragile_left = true;
			parent->fragile_right = true;
			parent->parse_state = TS_TREE_STATE_NONE;
		}
		else
			parent->parse_state = state;
		parent->dynamic_precedence += dynamic_precedence;
		ts_stack_push(self->stack, (struct s_stack_push_arg){slice_version, (parent), false, next_state});
		j = 0;
		while (j < self->trailing_extras.len)
		{
			ts_stack_push(self->stack, (struct s_stack_push_arg){slice_version,
				self->trailing_extras.buffer[j], false, next_state});
			j++;
		}
		k = 0;
		while (k < slice_version)
		{
			if (k == version)
			{
				k++;
				continue ;
			}
			if (ts_stack_merge(self->stack, k, slice_version))
			{
				removed_version_count++;
				break ;
			}
			k++;
		}
		i++;
	}
	if (ts_stack_version_count(self->stack) > initial_version_count)
		return (initial_version_count);
	return (STACK_VERSION_NONE);
}
