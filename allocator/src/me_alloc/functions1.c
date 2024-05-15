/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 18:02:12 by maiboyer          #+#    #+#             */
/*   Updated: 2024/05/15 16:18:19 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "aq/allocator.h"
#include "aq/internal_vg_funcs.h"
#include "aq/melloc_interal.h"
#include "me/types.h"

void *__libc_malloc(t_usize size);
void *__libc_calloc(t_usize size, t_usize elem);
void *__libc_realloc(void *ptr, t_usize size);
void *__libc_realloc_array(void *ptr, t_usize size, t_usize elem);
void  __libc_free(void *ptr);

t_usize round_to_pow2(t_usize val, t_usize pow)
{
	pow = (1 << pow) - 1;

	return ((val + pow) & (~pow));
}

t_error alloc_page_list(t_page_list **out)
{
	t_page_list *val;

	if (out == NULL)
		return (ERROR);
	val = __libc_calloc(sizeof(*val), 1);
	if (val == NULL)
		return (ERROR);
	*out = val;
	vg_mem_no_access(val, sizeof(*val));
	vg_mempool_create_ext(val, 0);
	return (NO_ERROR);
}

t_error alloc_new_page(struct s_allocator_melloc *alloc, t_usize page_size)
{
	t_page_list *list;

	if (alloc->list == NULL && alloc_page_list(&alloc->list))
		return (ERROR);
	list = alloc->list;
	while (list)
	{
		if (list->len != PAGE_LIST_MAX)
			break;
		if (list->next == NULL && alloc_page_list(&list->next))
			return (ERROR);
		list = list->next;
	}
	if (list == NULL)
		return (ERROR);
	list->pages[list->len].data = __libc_calloc(page_size, 1);
	if (list->pages[list->len].data)
		return (ERROR);
	list->pages[list->len].size = page_size;
	list->len++;
	return (NO_ERROR);
}

void *m_malloc(struct s_allocator_melloc *self, t_usize size)
{
	(void)(self);
	(void)(size);
	return (NULL);
}

void *m_alloc_array(struct s_allocator_melloc *self, t_usize size,
					t_usize count)
{
	(void)(self);
	(void)(size);
	(void)(count);
	return (NULL);
}

void *m_realloc(struct s_allocator_melloc *self, void *ptr, t_usize min_size)
{
	(void)(self);
	(void)(ptr);
	(void)(min_size);
	return (NULL);
}

void *m_realloc_array(struct s_allocator_melloc *self, void *ptr, t_usize size,
					  t_usize count)
{
	(void)(self);
	(void)(ptr);
	(void)(size);
	(void)(count);
	return (NULL);
}

void m_free(struct s_allocator_melloc *self, void *ptr)
{
	(void)(self);
	(void)(ptr);
}

void m_uninit(struct s_allocator_melloc *self)
{
	(void)(self);
}
