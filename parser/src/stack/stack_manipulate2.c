/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_manipulate2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 16:54:26 by maiboyer          #+#    #+#             */
/*   Updated: 2024/08/31 16:59:43 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/types.h"
#include "parser/inner/stack_inner.h"
#include "parser/inner/stack_inner.h"

bool	ts_stack_merge(t_stack *self, t_stack_version version1,
		t_stack_version version2)
{
	t_stack_head	*head1;
	t_stack_head	*head2;
	t_usize			i;

	if (!ts_stack_can_merge(self, version1, version2))
		return (false);
	head1 = &self->heads.contents[version1];
	head2 = &self->heads.contents[version2];
	i = 0;
	while (i < head2->node->link_count)
		stack_node_add_link(head1->node, head2->node->links[i++]);
	if (head1->node->state == ERROR_STATE)
		head1->node_count_at_last_error = head1->node->node_count;
	ts_stack_remove_version(self, version2);
	return (true);
}

bool	ts_stack_can_merge(t_stack *self, t_stack_version version1,
		t_stack_version version2)
{
	t_stack_head	*head1;
	t_stack_head	*head2;

	head1 = &self->heads.contents[version1];
	head2 = &self->heads.contents[version2];
	return (head1->status == SStatusActive && head2->status == SStatusActive
		&& head1->node->state == head2->node->state
		&& head1->node->position.bytes == head2->node->position.bytes
		&& head1->node->error_cost == head2->node->error_cost
		&& ts_subtree_external_scanner_state_eq(head1->last_external_token,
			head2->last_external_token));
}

void	ts_stack_halt(t_stack *self, t_stack_version version)
{
	array_get(&self->heads, version)->status = SStatusHalted;
}

void	ts_stack_pause(t_stack *self, t_stack_version version,
		t_subtree lookahead)
{
	t_stack_head	*head;

	head = array_get(&self->heads, version);
	head->status = SStatusPaused;
	head->lookahead_when_paused = lookahead;
	head->node_count_at_last_error = head->node->node_count;
}
