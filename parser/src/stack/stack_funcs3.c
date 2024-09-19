/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_funcs3.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 16:56:40 by maiboyer          #+#    #+#             */
/*   Updated: 2024/08/31 16:56:49 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser/inner/stack_inner.h"
#include "parser/inner/stack_inner.h"

bool	stack__subtree_is_equivalent(t_subtree left, t_subtree right)
{
	if (left == right)
		return (true);
	if (!left || !right)
		return (false);
	if (ts_subtree_symbol(left) != ts_subtree_symbol(right))
		return (false);
	if (ts_subtree_error_cost(left) > 0 && ts_subtree_error_cost(right) > 0)
		return (true);
	return (ts_subtree_padding(left).bytes == ts_subtree_padding(right).bytes
		&& ts_subtree_size(left).bytes == ts_subtree_size(right).bytes
		&& ts_subtree_child_count(left) == ts_subtree_child_count(right)
		&& ts_subtree_extra(left) == ts_subtree_extra(right)
		&& ts_subtree_external_scanner_state_eq(left, right));
}

void	stack_head_delete(t_stack_head *self)
{
	if (self->node)
	{
		if (self->last_external_token)
		{
			ts_subtree_release(self->last_external_token);
		}
		if (self->lookahead_when_paused)
		{
			ts_subtree_release(self->lookahead_when_paused);
		}
		if (self->summary)
		{
			array_delete(self->summary);
			mem_free(self->summary);
		}
		stack_node_release(self->node);
	}
}

t_stack_version	ts_stack__add_version(t_stack *self,
		t_stack_version original_version, t_stack_node *node)
{
	t_stack_head	head;

	head = (t_stack_head){
		.node = node,
		.node_count_at_last_error = \
		self->heads.contents[original_version].node_count_at_last_error,
		.last_external_token = \
		self->heads.contents[original_version].last_external_token,
		.status = SStatusActive,
		.lookahead_when_paused = NULL,
	};
	array_push(&self->heads, head);
	stack_node_retain(node);
	if (head.last_external_token)
		(head.last_external_token->ref_count++);
	return ((t_stack_version)(self->heads.size - 1));
}

void	ts_stack__add_slice(t_stack *self, \
t_stack_version original_version, t_stack_node *node, t_vec_subtree *subtrees)
{
	t_u32			i;
	t_stack_version	version;
	t_stack_slice	slice;

	i = self->slices.size - 1;
	while (i + 1 > 0)
	{
		version = self->slices.contents[i].version;
		if (self->heads.contents[version].node == node)
		{
			slice = (t_stack_slice){.subtrees = *subtrees, .version = version};
			array_insert(&self->slices, i + 1, slice);
			return ;
		}
		i--;
	}
	version = ts_stack__add_version(self, original_version, node);
	slice = (t_stack_slice){.subtrees = *subtrees, .version = version};
	array_push(&self->slices, slice);
}

void	ts_stack_set_last_external_token(t_stack *self, t_stack_version version,
		t_subtree token)
{
	t_stack_head	*head;

	head = array_get(&self->heads, version);
	if (token)
		(token->ref_count++);
	if (head->last_external_token)
		ts_subtree_release(head->last_external_token);
	head->last_external_token = token;
}
