/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser_breakdown_top_of_stack.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 13:36:06 by maiboyer          #+#    #+#             */
/*   Updated: 2024/09/19 17:19:45 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser/inner/parser_inner.h"

bool	ts_parser__breakdown_top_of_stack(t_parser *self,
		t_stack_version version)
{
	t_state_id			state;
	bool				did_break_down;
	bool				pending;
	t_stack_slice		slice;
	t_stack_slice_array	pop;
	t_subtree			child;
	t_subtree			parent;
	t_subtree			tree;
	t_u32				i;
	t_u32				j;
	t_u32				n;
	bool				first;

	first = true;
	did_break_down = false;
	pending = false;
	while (pending || first)
	{
		first = false;
		pop = ts_stack_pop_pending(self->stack, version);
		if (!pop.size)
			break ;
		did_break_down = true;
		pending = false;
		i = 0;
		while (i < pop.size)
		{
			slice = pop.contents[i];
			state = ts_stack_state(self->stack, slice.version);
			parent = *slice.subtrees.buffer;
			j = 0;
			n = ts_subtree_child_count(parent);
			while (j < n)
			{
				child = ts_subtree_children(parent)[j];
				pending = ts_subtree_child_count(child) > 0;
				if (ts_subtree_is_error(child))
					state = ERROR_STATE;
				else if (!ts_subtree_extra(child))
					state = ts_language_next_state(self->language, state,
							ts_subtree_symbol(child));
				child->ref_count++;
				ts_stack_push(self->stack, \
(struct s_stack_push_arg){slice.version, child, pending, state});
				j++;
			}
			j = 1;
			while (j < slice.subtrees.len)
			{
				tree = slice.subtrees.buffer[j];
				ts_stack_push(self->stack, (struct s_stack_push_arg){slice.version, tree, false, state});
				j++;
			}
			ts_subtree_release(parent);
			array_delete(&slice.subtrees);
			i++;
		}
	}
	return (did_break_down);
}
