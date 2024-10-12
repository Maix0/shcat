/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 18:02:12 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:51:05 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "aq/allocator.h"
#include "aq/internal_vg_funcs.h"
#include "aq/melloc_interal.h"
#include "me/mem/mem.h"
#include "me/types.h"
#include <assert.h>
#include <errno.h>

void		*__libc_malloc(t_usize size);
void		__libc_free(void *ptr);

void	*m_malloc(struct s_allocator_melloc *self, t_usize size)
{
	return (m_realloc(self, NULL, size));
}

void	*m_alloc_array(struct s_allocator_melloc *self, t_usize size,
		t_usize count)
{
	if (size != 0 && count > SIZE_MAX / size)
		return (m_alloc_error(self, "Alloc array overflow"));
	return (m_realloc(self, NULL, size * count));
}

void	m_free(struct s_allocator_melloc *self, void *ptr)
{
	t_chunk	*chunk;

	(void)(self);
	if (ptr == NULL)
		return ;
	vg_block_free(ptr);
	chunk = ptr - sizeof(*chunk);
	vg_mem_defined(chunk, sizeof(*chunk));
	chunk->used = false;
	vg_mem_no_access(chunk, sizeof(*chunk));
}

void	m_uninit(struct s_allocator_melloc *self)
{
	t_page_list	*list;
	t_page_list	*list_next;
	t_usize		idx;

	list = self->list;
	while (list)
	{
		vg_mem_defined(list, sizeof(*list));
		idx = 0;
		while (idx < list->len)
		{
			if (list->pages[idx].data != NULL)
			{
				vg_mempool_free(list, list->pages[idx].data);
				__libc_free(list->pages[idx].data);
				list->pages[idx].size = 0;
				list->pages[idx].data = NULL;
			}
			idx++;
		}
		list_next = list->next;
		(__libc_free(list), vg_mempool_destroy(list), \
		vg_mem_no_access(list, sizeof(*list)));
		list = list_next;
	}
}

t_allocator	m_init(void)
{
	t_allocator	out;

	out.free = (t_allocator_free)m_free;
	out.alloc = (t_allocator_alloc)m_malloc;
	out.alloc_array = (t_allocator_alloc_array)m_alloc_array;
	out.realloc = (t_allocator_realloc)m_realloc;
	out.realloc_array = (t_allocator_realloc_array)m_realloc_array;
	out.uninit = (t_allocator_uninit)m_uninit;
	out.alloc_data = NULL;
	return (out);
}
