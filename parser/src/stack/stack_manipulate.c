/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_manipulate.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 16:50:04 by maiboyer          #+#    #+#             */
/*   Updated: 2024/08/31 17:00:34 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser/_inner/stack.h"
#include "parser/language.h"

void	ts_stack_push(t_stack *self, t_stack_version version, t_subtree subtree,
		bool pending, TSStateId state)
{
	t_stack_head	*head;
	t_stack_node	*new_node;

	head = array_get(&self->heads, version);
	new_node = stack_node_new(head->node, subtree, pending, state);
	if (!subtree)
		head->node_count_at_last_error = new_node->node_count;
	head->node = new_node;
}

t_stack_action	pop_count_callback(void *payload,
		const t_stack_iterator *iterator)
{
	t_u32	*goal_subtree_count;

	goal_subtree_count = payload;
	if (iterator->subtree_count == *goal_subtree_count)
	{
		return (SActionPop | SActionStop);
	}
	else
	{
		return (SActionNone);
	}
}

t_stack_slice_array	ts_stack_pop_count(t_stack *self, t_stack_version version,
		t_u32 count)
{
	return (stack__iter(self, version, pop_count_callback, &count, (int)count));
}

t_stack_action	pop_pending_callback(void *payload,
		const t_stack_iterator *iterator)
{
	(void)payload;
	if (iterator->subtree_count >= 1)
	{
		if (iterator->is_pending)
			return (SActionPop | SActionStop);
		else
			return (SActionStop);
	}
	else
		return (SActionNone);
}

t_stack_slice_array	ts_stack_pop_pending(t_stack *self, t_stack_version version)
{
	t_stack_slice_array	pop;

	pop = stack__iter(self, version, pop_pending_callback, NULL, 0);
	if (pop.size > 0)
	{
		ts_stack_renumber_version(self, pop.contents[0].version, version);
		pop.contents[0].version = version;
	}
	return (pop);
}
