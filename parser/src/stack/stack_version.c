/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_version.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 16:55:04 by maiboyer          #+#    #+#             */
/*   Updated: 2024/08/31 16:55:34 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser/stack.h"
#include "parser/inner/stack.h"

void	ts_stack_remove_version(t_stack *self, t_stack_version version)
{
	stack_head_delete(array_get(&self->heads, version));
	array_erase(&self->heads, version);
}

void	ts_stack_renumber_version(t_stack *self, t_stack_version v1,
		t_stack_version v2)
{
	t_stack_head	*source_head;
	t_stack_head	*target_head;

	if (v1 == v2)
		return ;
	assert(v2 < v1);
	assert((t_u32)v1 < self->heads.size);
	source_head = &self->heads.contents[v1];
	target_head = &self->heads.contents[v2];
	if (target_head->summary && !source_head->summary)
	{
		source_head->summary = target_head->summary;
		target_head->summary = NULL;
	}
	stack_head_delete(target_head);
	*target_head = *source_head;
	array_erase(&self->heads, v1);
}

void	ts_stack_swap_versions(t_stack *self, t_stack_version v1,
		t_stack_version v2)
{
	t_stack_head	temporary_head;

	temporary_head = self->heads.contents[v1];
	self->heads.contents[v1] = self->heads.contents[v2];
	self->heads.contents[v2] = temporary_head;
}

t_stack_version	ts_stack_copy_version(t_stack *self, t_stack_version version)
{
	t_stack_head	*head;

	assert(version < self->heads.size);
	array_push(&self->heads, self->heads.contents[version]);
	head = array_back(&self->heads);
	stack_node_retain(head->node);
	if (head->last_external_token)
		(head->last_external_token->ref_count++);
	head->summary = NULL;
	return (self->heads.size - 1);
}
