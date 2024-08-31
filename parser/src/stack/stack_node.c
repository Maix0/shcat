/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_node.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 16:48:48 by maiboyer          #+#    #+#             */
/*   Updated: 2024/08/31 16:49:38 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser/_inner/stack.h"
#include "parser/language.h"
#include "parser/stack.h"

void	stack_node_retain(t_stack_node *self)
{
	if (!self)
		return ;
	assert(self->ref_count > 0);
	self->ref_count++;
	assert(self->ref_count != 0);
}

void	stack_node_release(t_stack_node *self)
{
	t_stack_node	*first_predecessor;
	t_stack_link	link;
	bool			continue_;
	t_usize			i;

	continue_ = true;
	while (continue_)
	{
		continue_ = false;
		assert(self->ref_count != 0);
		self->ref_count--;
		if (self->ref_count > 0)
			return ;
		first_predecessor = NULL;
		if (self->link_count > 0)
		{
			i = self->link_count - 1;
			while (i > 0)
			{
				link = self->links[i];
				if (link.subtree)
					ts_subtree_release(link.subtree);
				stack_node_release(link.node);
				i--;
			}
			link = self->links[0];
			if (link.subtree)
				ts_subtree_release(link.subtree);
			first_predecessor = self->links[0].node;
		}
		mem_free(self);
		if (first_predecessor)
		{
			self = first_predecessor;
			continue_ = true;
		}
	}
}

/// Get the number of nodes in the subtree, for the purpose of measuring
/// how much progress has been made by a given version of the stack.
//
// Count intermediate error nodes even though they are not visible,
// because a stack version's node count is used to check whether it
// has made any progress since the last time it encountered an error.
t_u32	stack__subtree_node_count(Subtree subtree)
{
	t_u32	count;

	count = ts_subtree_visible_descendant_count(subtree);
	if (ts_subtree_visible(subtree))
		count++;
	if (ts_subtree_symbol(subtree) == ts_builtin_sym_error_repeat)
		count++;
	return (count);
}

t_stack_node	*stack_node_new(t_stack_node *previous_node,
		Subtree subtree, bool is_pending, TSStateId state)
{
	t_stack_node	*node;

	node = mem_alloc(sizeof(t_stack_node));
	*node = (t_stack_node){.ref_count = 1, .link_count = 0, .state = state};
	if (previous_node != NULL)
	{
		node->link_count = 1;
		node->links[0] = (t_stack_link){
			.node = previous_node,
			.subtree = subtree,
			.is_pending = is_pending,
		};
		node->position = previous_node->position;
		node->error_cost = previous_node->error_cost;
		node->dynamic_precedence = previous_node->dynamic_precedence;
		node->node_count = previous_node->node_count;
		if (subtree)
		{
			node->error_cost += ts_subtree_error_cost(subtree);
			node->position = length_add(node->position,
					ts_subtree_total_size(subtree));
			node->node_count += stack__subtree_node_count(subtree);
			node->dynamic_precedence += ts_subtree_dynamic_precedence(subtree);
		}
	}
	else
	{
		node->position = length_zero();
		node->error_cost = 0;
	}
	return (node);
}
