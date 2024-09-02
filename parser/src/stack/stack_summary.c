/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_summary.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 16:50:56 by maiboyer          #+#    #+#             */
/*   Updated: 2024/09/02 17:20:31 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser/stack.h"
#include "parser/inner/stack.h"

t_stack_action	summarize_stack_callback(void *payload,
		const t_stack_iterator *iterator)
{
	t_summarize_stack_session	*session;
	TSStateId					state;
	t_u32						depth;
	t_stack_summary_entry		entry;
	t_usize						i;

	session = payload;
	state = iterator->node->state;
	depth = iterator->subtree_count;
	if (depth > session->max_depth)
		return (SActionStop);
	i = session->summary->size - 1;
	while (i + 1 > 0)
	{
		if (session->summary->contents == NULL)
			return (SActionNone);
		entry = session->summary->contents[i--];
		if (entry.depth < depth)
			break ;
		if (entry.depth == depth && entry.state == state)
			return (SActionNone);
	}
	array_push(session->summary, ((t_stack_summary_entry){\
	.position = iterator->node->position, .depth = depth, .state = state, }));
	return (SActionNone);
}

void	ts_stack_record_summary(t_stack *self, t_stack_version version,
		t_u32 max_depth)
{
	t_summarize_stack_session	session;
	t_stack_head				*head;

	session = (t_summarize_stack_session){.summary = \
	mem_alloc(sizeof(t_stack_summary)), .max_depth = max_depth};
	array_init(session.summary);
	stack__iter(self, version, summarize_stack_callback, &session, -1);
	head = &self->heads.contents[version];
	if (head->summary)
	{
		array_delete(head->summary);
		mem_free(head->summary);
	}
	head->summary = session.summary;
}

t_stack_summary	*ts_stack_get_summary(t_stack *self, t_stack_version version)
{
	return (array_get(&self->heads, version)->summary);
}
