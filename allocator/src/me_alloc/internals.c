/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   internals.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 16:49:31 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:51:06 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "aq/internal_vg_funcs.h"
#include "aq/melloc_interal.h"
#include "me/types.h"

t_chunk	*get_first_block(t_page *page)
{
	t_chunk	*chunk;

	if (page == NULL)
		return (NULL);
	vg_mem_defined(page, sizeof(*page));
	chunk = page->data;
	vg_mem_no_access(page, sizeof(*page));
	return (chunk);
}

t_chunk	*get_next_block(t_chunk *chunk, bool find_zero)
{
	t_chunk	*next;

	if (chunk == NULL)
		return (NULL);
	vg_mem_defined(chunk, sizeof(*chunk));
	next = (void *)(chunk) + sizeof(*chunk) + chunk->size;
	vg_mem_no_access(chunk, sizeof(*chunk));
	vg_mem_defined(next, sizeof(*next));
	if (!find_zero && next->size == 0)
	{
		vg_mem_no_access(next, sizeof(*next));
		return (NULL);
	}
	vg_mem_no_access(next, sizeof(*next));
	return (next);
}

t_chunk	*split_block(t_chunk *chunk, t_usize size)
{
	t_usize	remaining;
	t_chunk	*ac_next;

	if (chunk == NULL)
		return (NULL);
	vg_mem_defined(chunk, sizeof(*chunk));
	if (chunk->size > size + sizeof(*chunk) + (2 << PAGE_ALIGN))
	{
		remaining = chunk->size - size - sizeof(*chunk);
		vg_mem_defined(chunk, sizeof(*chunk));
		chunk->size = size;
		ac_next = get_next_block(chunk, true);
		vg_mem_defined(ac_next, sizeof(*ac_next));
		ac_next->used = false;
		ac_next->size = remaining;
		vg_mem_no_access(ac_next, sizeof(*ac_next));
	}
	vg_mem_no_access(chunk, sizeof(*chunk));
	return (chunk);
}
