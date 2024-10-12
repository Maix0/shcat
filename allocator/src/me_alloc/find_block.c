/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_block.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 17:40:12 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:51:04 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "aq/internal_vg_funcs.h"
#include "aq/melloc_interal.h"
#include "me/types.h"

static bool	_find_chunk_of_size_inner(t_usize size, t_page_list *list, \
				t_chunk **chunk)
{
	vg_mem_defined(*chunk, sizeof(**chunk));
	if (!(*chunk)->used && (*chunk)->size >= size)
	{
		vg_mem_no_access(*chunk, sizeof(**chunk));
		vg_mem_no_access(list, sizeof(*list));
		return (*chunk = split_block(*chunk, size), true);
	}
	vg_mem_no_access(*chunk, sizeof(**chunk));
	*chunk = get_next_block(*chunk, false);
	return (false);
}

t_chunk	*find_chunk_of_size(struct s_allocator_melloc *alloc, t_usize size)
{
	t_page_list	*list;
	t_page_list	*list_next;
	t_usize		idx;
	t_chunk		*chunk;

	list = alloc->list;
	while (list != NULL)
	{
		vg_mem_defined(list, sizeof(*list));
		idx = 0;
		while (idx < list->len)
		{
			chunk = get_first_block(&list->pages[idx++]);
			while (chunk)
				if (_find_chunk_of_size_inner(size, list, &chunk))
					return (chunk);
		}
		list_next = list->next;
		vg_mem_no_access(list, sizeof(*list));
		list = list_next;
	}
	return (NULL);
}
