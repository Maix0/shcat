/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_add_link.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 16:52:46 by maiboyer          #+#    #+#             */
/*   Updated: 2024/08/31 16:59:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser/stack.h"
#include "parser/_inner/stack.h"

// In general,
// we preserve ambiguities until they are removed from the stack
// during a pop operation where multiple paths lead to the same node. But in
// the special case where two links directly connect the same pair of nodes,
// we can safely remove the ambiguity ahead of time without changing behavior.
void	stack_node_add_link(t_stack_node *self, t_stack_link link)
{
	t_stack_link	*existing_link;
	t_i32			dynamic_precedence;
	t_u32			node_count;
	t_usize			i;
	t_usize			j;

	if (link.node == self)
		return ;
	i = 0;
	while (i < self->link_count)
	{
		existing_link = &self->links[i];
		if (stack__subtree_is_equivalent(existing_link->subtree, link.subtree))
		{
			if (existing_link->node == link.node)
			{
				if (ts_subtree_dynamic_precedence(\
		link.subtree) > ts_subtree_dynamic_precedence(existing_link->subtree))
				{
					ts_subtree_retain(link.subtree);
					ts_subtree_release(existing_link->subtree);
					existing_link->subtree = link.subtree;
					self->dynamic_precedence = link.node->dynamic_precedence
						+ ts_subtree_dynamic_precedence(link.subtree);
				}
				return ;
			}
			if (existing_link->node->state == link.node->state \
	&& existing_link->node->position.bytes == link.node->position.bytes
				&& existing_link->node->error_cost == link.node->error_cost)
			{
				j = 0;
				while (j < link.node->link_count)
					stack_node_add_link(existing_link->node,
						link.node->links[j++]);
				dynamic_precedence = link.node->dynamic_precedence;
				if (link.subtree)
					dynamic_precedence
						+= ts_subtree_dynamic_precedence(link.subtree);
				if (dynamic_precedence > self->dynamic_precedence)
					self->dynamic_precedence = dynamic_precedence;
				return ;
			}
		}
		i++;
	}
	if (self->link_count == MAX_LINK_COUNT)
		return ;
	stack_node_retain(link.node);
	node_count = link.node->node_count;
	dynamic_precedence = link.node->dynamic_precedence;
	self->links[self->link_count++] = link;
	if (link.subtree)
	{
		ts_subtree_retain(link.subtree);
		node_count += stack__subtree_node_count(link.subtree);
		dynamic_precedence += ts_subtree_dynamic_precedence(link.subtree);
	}
	if (node_count > self->node_count)
		self->node_count = node_count;
	if (dynamic_precedence > self->dynamic_precedence)
		self->dynamic_precedence = dynamic_precedence;
}
