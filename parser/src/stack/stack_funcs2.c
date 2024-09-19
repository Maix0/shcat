/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_funcs2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 16:55:52 by maiboyer          #+#    #+#             */
/*   Updated: 2024/09/19 18:38:38 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser/inner/stack_inner.h"
#include "parser/inner/stack_inner.h"

t_u32	ts_stack_error_cost(const t_stack *self, t_stack_version version)
{
	t_stack_head	*head;
	t_u32			result;

	head = array_get(&self->heads, version);
	result = head->node->error_cost;
	if (head->status == SStatusPaused || (head->node->state == ERROR_STATE
			&& !head->node->links[0].subtree))
	{
		result += ERROR_COST_PER_RECOVERY;
	}
	return (result);
}

t_u32	ts_stack_node_count_since_error(const t_stack *self,
		t_stack_version version)
{
	t_stack_head	*head;

	head = array_get(&self->heads, version);
	if (head->node->node_count < head->node_count_at_last_error)
	{
		head->node_count_at_last_error = head->node->node_count;
	}
	return (head->node->node_count - head->node_count_at_last_error);
}

int	ts_stack_dynamic_precedence(t_stack *self, t_stack_version version)
{
	return (array_get(&self->heads, version)->node->dynamic_precedence);
}

bool	ts_stack_has_advanced_since_error(const t_stack *self,
		t_stack_version version)
{
	const t_stack_head	*head = array_get(&self->heads, version);
	const t_stack_node	*node = head->node;
	t_subtree			subtree;

	if (node->error_cost == 0)
		return (true);
	while (node)
	{
		if (node->link_count == 0)
			break ;
		subtree = node->links[0].subtree;
		if (subtree)
		{
			if (ts_subtree_total_bytes(subtree) > 0)
				return (true);
			else if (node->node_count > head->node_count_at_last_error
				&& ts_subtree_error_cost(subtree) == 0)
			{
				node = node->links[0].node;
				continue ;
			}
		}
	}
	return (false);
}
