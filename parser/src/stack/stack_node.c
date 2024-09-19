/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_node.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 16:48:48 by maiboyer          #+#    #+#             */
/*   Updated: 2024/09/19 18:37:07 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser/inner/stack_inner.h"
#include "parser/language.h"
#include "parser/inner/stack_inner.h"

void	stack_node_retain(t_stack_node *self)
{
	if (!self)
		return ;
	assert(self->ref_count > 0);
	self->ref_count++;
	assert(self->ref_count != 0);
}

void	_stack_node_release_inner(\
		t_stack_node **self, bool *continue_, t_stack_link *link)
{
	t_stack_node	*first_predecessor;
	t_usize			i;

	first_predecessor = NULL;
	if ((*self)->link_count > 0)
	{
		i = (*self)->link_count - 1;
		while (i > 0)
		{
			*link = (*self)->links[i];
			if (link->subtree)
				ts_subtree_release(link->subtree);
			stack_node_release(link->node);
			i--;
		}
		*link = (*self)->links[0];
		if (link->subtree)
			ts_subtree_release(link->subtree);
		first_predecessor = (*self)->links[0].node;
	}
	if (mem_free(*self), first_predecessor)
	{
		*self = first_predecessor;
		*continue_ = true;
	}
}

void	stack_node_release(t_stack_node *self)
{
	t_stack_link	link;
	bool			continue_;

	continue_ = true;
	while (continue_)
	{
		continue_ = false;
		self->ref_count--;
		if (self->ref_count > 0)
			return ;
		_stack_node_release_inner(&self, &continue_, &link);
	}
}

void	_node_new_from_previous(t_stack_node *node, t_stack_node *prev, \
		t_subtree subtree, bool is_pending)
{
	node->link_count = prev != NULL;
	node->links[0] = (t_stack_link){prev, subtree, is_pending};
	node->position = prev->position;
	node->error_cost = prev->error_cost;
	node->dynamic_precedence = prev->dynamic_precedence;
	node->node_count = prev->node_count;
	if (subtree)
	{
		node->error_cost += ts_subtree_error_cost(subtree);
		node->position = length_add(node->position, ts_subtree_total_size(\
								subtree));
		node->node_count += stack__subtree_node_count(subtree);
		node->dynamic_precedence += ts_subtree_dynamic_precedence(subtree);
	}
}

t_stack_node	*stack_node_new(t_stack_node *prev,
		t_subtree subtree, bool is_pending, t_state_id state)
{
	t_stack_node	*node;

	node = mem_alloc(sizeof(t_stack_node));
	*node = (typeof(*node)){.ref_count = 1, .link_count = 0, .state = state};
	if (prev != NULL)
		_node_new_from_previous(node, prev, subtree, is_pending);
	else
	{
		node->position = length_zero();
		node->error_cost = 0;
	}
	return (node);
}
