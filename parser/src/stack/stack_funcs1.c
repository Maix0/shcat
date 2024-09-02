/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_funcs1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 16:52:03 by maiboyer          #+#    #+#             */
/*   Updated: 2024/09/02 18:06:48 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser/stack.h"
#include "parser/inner/stack.h"

bool	ts_stack_is_active(const t_stack *self, t_stack_version version)
{
	return (array_get(&self->heads, version)->status == SStatusActive);
}

bool	ts_stack_is_halted(const t_stack *self, t_stack_version version)
{
	return (array_get(&self->heads, version)->status == SStatusHalted);
}

bool	ts_stack_is_paused(const t_stack *self, t_stack_version version)
{
	return (array_get(&self->heads, version)->status == SStatusPaused);
}

t_subtree	ts_stack_resume(t_stack *self, t_stack_version version)
{
	t_stack_head	*head;
	t_subtree		result;

	head = array_get(&self->heads, version);
	assert(head->status == SStatusPaused);
	result = head->lookahead_when_paused;
	head->status = SStatusActive;
	head->lookahead_when_paused = NULL;
	return (result);
}

void	ts_stack_clear(t_stack *self)
{
	t_usize	i;

	stack_node_retain(self->base_node);
	i = 0;
	while (i < self->heads.size)
		stack_head_delete(&self->heads.contents[i++]);
	array_clear(&self->heads);
	array_push(&self->heads, ((t_stack_head){.node = self->base_node, \
	.status = SStatusActive, .last_external_token = NULL, \
	.lookahead_when_paused = NULL, }));
}
