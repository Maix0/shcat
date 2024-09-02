/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_iter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 16:46:43 by maiboyer          #+#    #+#             */
/*   Updated: 2024/09/02 21:22:19 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/vec/vec_subtree.h"
#include "parser/inner/stack.h"
#include "parser/stack.h"

t_stack_slice_array	stack__iter(t_stack *self, t_stack_version version,
		t_stack_callback callback, void *payload, int goal_subtree_count)
{
	t_stack_head		*head;
	bool				include_subtrees;
	t_stack_iterator	*iterator;
	t_stack_node		*node;
	t_stack_action		action;
	bool				should_pop;
	bool				should_stop;
	t_vec_subtree		subtrees;
	t_stack_iterator	*next_iterator;
	t_stack_link		link;
	t_stack_iterator	current_iterator;
	t_stack_iterator	new_iterator;
	t_usize				i;
	t_usize				j;
	t_usize				size;

	array_clear(&self->slices);
	array_clear(&self->iterators);
	head = array_get(&self->heads, version);
	new_iterator = (t_stack_iterator){
		.node = head->node,
		.subtrees = vec_subtree_new(16, NULL),
		.subtree_count = 0,
		.is_pending = true,
	};
	include_subtrees = false;
	if (goal_subtree_count >= 0)
	{
		include_subtrees = true;
		vec_subtree_reserve(&new_iterator.subtrees,
			ts_subtree_alloc_size(goal_subtree_count) / sizeof(t_subtree));
	}
	array_push(&self->iterators, new_iterator);
	while (self->iterators.size > 0)
	{
		i = 0;
		size = self->iterators.size;
		while (i < size)
		{
			iterator = &self->iterators.contents[i];
			node = iterator->node;
			action = callback(payload, iterator);
			should_pop = action & SActionPop;
			should_stop = action & SActionStop || node->link_count == 0;
			if (should_pop)
			{
				subtrees = iterator->subtrees;
				if (!should_stop)
					ts_subtree_array_copy(subtrees, &subtrees);
				vec_subtree_reverse(&subtrees);
				ts_stack__add_slice(self, version, node, &subtrees);
			}
			if (should_stop)
			{
				if (!should_pop)
					ts_subtree_array_delete(&iterator->subtrees);
				array_erase(&self->iterators, i);
				i--;
				i++;
				size--;
				continue ;
			}
			j = 1;
			while (j <= node->link_count)
			{
				if (j == node->link_count)
				{
					link = node->links[0];
					next_iterator = &self->iterators.contents[i];
				}
				else
				{
					if (self->iterators.size >= MAX_ITERATOR_COUNT)
					{
						j++;
						continue ;
					}
					link = node->links[j];
					current_iterator = self->iterators.contents[i];
					array_push(&self->iterators, current_iterator);
					next_iterator = array_back(&self->iterators);
					ts_subtree_array_copy(next_iterator->subtrees,
						&next_iterator->subtrees);
				}
				next_iterator->node = link.node;
				if (link.subtree)
				{
					if (include_subtrees)
					{
						vec_subtree_push(&next_iterator->subtrees,
							link.subtree);
						link.subtree->ref_count++;
					}
					if (!ts_subtree_extra(link.subtree))
					{
						next_iterator->subtree_count++;
						if (!link.is_pending)
							next_iterator->is_pending = false;
					}
				}
				else
				{
					next_iterator->subtree_count++;
					next_iterator->is_pending = false;
				}
				j++;
			}
			i++;
		}
	}
	return (self->slices);
}
