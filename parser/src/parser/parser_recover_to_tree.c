/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser_recover_to_tree.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 13:48:22 by maiboyer          #+#    #+#             */
/*   Updated: 2024/09/19 17:23:55 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser/inner/parser_inner.h"

bool	ts_parser__recover_to_state(t_parser *self, t_stack_version version,
		t_u32 depth, t_state_id goal_state)
{
	t_stack_slice		slice;
	t_stack_slice_array	pop;
	t_stack_version		previous_version;
	t_subtree			error;
	t_subtree			error_tree;
	t_subtree			tree;
	t_u32				error_child_count;
	t_u32				i;
	t_u32				j;
	t_vec_subtree		error_trees;

	previous_version = STACK_VERSION_NONE;
	pop = ts_stack_pop_count(self->stack, version, depth);
	i = 0;
	while (i < pop.size)
	{
		slice = pop.contents[i];
		if (slice.version == previous_version)
		{
			ts_subtree_array_delete(&slice.subtrees);
			array_erase(&pop, i--);
			i++;
			continue ;
		}
		if (ts_stack_state(self->stack, slice.version) != goal_state)
		{
			ts_stack_halt(self->stack, slice.version);
			ts_subtree_array_delete(&slice.subtrees);
			array_erase(&pop, i--);
			i++;
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
				j = 0;
				while (j < error_child_count)
				{
					slice.subtrees.buffer[j]->ref_count++;
					j++;
				}
			}
			ts_subtree_array_delete(&error_trees);
		}
		ts_subtree_array_remove_trailing_extras(&slice.subtrees,
			&self->trailing_extras);
		if (slice.subtrees.len > 0)
		{
			error = ts_subtree_new_error_node(&slice.subtrees, true,
					self->language);
			ts_stack_push(self->stack, (struct s_stack_push_arg){slice.version, error, false, goal_state});
		}
		else
		{
			vec_subtree_free(slice.subtrees);
		}
		j = 0;
		while (j < self->trailing_extras.len)
		{
			tree = self->trailing_extras.buffer[j];
			ts_stack_push(self->stack, (struct s_stack_push_arg){slice.version, tree, false, goal_state});
			j++;
		}
		previous_version = slice.version;
		i++;
	}
	return (previous_version != (t_stack_version)STACK_VERSION_NONE);
}
