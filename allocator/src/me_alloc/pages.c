/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pages.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 16:51:10 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:51:07 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "aq/allocator.h"
#include "aq/internal_vg_funcs.h"
#include "aq/melloc_interal.h"
#include "me/mem/mem.h"
#include "me/types.h"
#include <errno.h>

void		*__libc_malloc(t_usize size);
void		__libc_free(void *ptr);

t_error	alloc_page_list(t_page_list **out)
{
	t_page_list	*val;

	if (out == NULL)
		return (ERROR);
	val = __libc_malloc(sizeof(*val));
	if (val == NULL)
		return (ERROR);
	mem_set_zero(val, sizeof(*val));
	*out = val;
	vg_mem_no_access(val, sizeof(*val));
	vg_mempool_create_ext(val, MEMPOOL_FLAG_MALLOCLIKE);
	return (NO_ERROR);
}

t_error	_alloc_new_page_inner(t_usize page_size, t_page_list *list)
{
	t_chunk		*chunk;

	if (list == NULL)
		return (ERROR);
	vg_mem_defined(list, sizeof(*list));
	list->pages[list->len].data = __libc_malloc(page_size);
	mem_set_zero(list->pages[list->len].data, page_size);
	if (list->pages[list->len].data == NULL)
		return (ERROR);
	list->pages[list->len].size = page_size;
	vg_mempool_alloc(list, list->pages[list->len].data, page_size);
	chunk = get_first_block(&list->pages[list->len]);
	chunk->used = false;
	chunk->size = page_size - sizeof(*chunk) * 2;
	vg_mem_no_access(chunk, sizeof(*chunk));
	list->len++;
	vg_mem_no_access(list, sizeof(*list));
	return (NO_ERROR);
}

t_error	alloc_new_page(struct s_allocator_melloc *alloc, t_usize page_size)
{
	t_page_list	*list;
	t_page_list	*list_bis;

	page_size = round_to_pow2(page_size, PAGE_POW_2);
	if (alloc->list == NULL && alloc_page_list(&alloc->list))
		return (ERROR);
	list = alloc->list;
	while (list)
	{
		vg_mem_defined(list, sizeof(*list));
		if (list->len != PAGE_LIST_MAX)
			break ;
		if (list->next == NULL && alloc_page_list(&list->next))
			return (vg_mem_no_access(list, sizeof(*list)), ERROR);
		list_bis = list;
		list = list->next;
		vg_mem_no_access(list_bis, sizeof(*list_bis));
	}
	return (_alloc_new_page_inner(page_size, list));
}
