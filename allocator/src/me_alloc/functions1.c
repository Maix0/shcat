/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 18:02:12 by maiboyer          #+#    #+#             */
/*   Updated: 2024/05/23 14:35:35 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/mem/mem.h"
#include "me/types.h"

#include "aq/allocator.h"
#include "aq/internal_vg_funcs.h"
#include "aq/melloc_interal.h"
#include "valgrind/valgrind.h"

#include <assert.h>
#include <errno.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

#define eprintf(...) fprintf(stderr, __VA_ARGS__)

void *__libc_malloc(t_usize size);
void *__libc_calloc(t_usize size, t_usize elem);
void *__libc_realloc(void *ptr, t_usize size);
void *__libc_realloc_array(void *ptr, t_usize size, t_usize elem);
void  __libc_free(void *ptr);

t_chunk *get_first_block(t_page *page)
{
	t_chunk *chunk;
	if (page == NULL)
		return (NULL);
	vg_mem_defined(page, sizeof(*page));
	chunk = page->data;
	vg_mem_no_access(page, sizeof(*page));
	return (chunk);
}

t_chunk *get_next_block(t_chunk *chunk, bool find_zero)
{
	t_chunk *next;

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
	vg_mempool_create_ext(val, MEMPOOL_FLAG_MALLOCLIKE);
	return (NO_ERROR);
}

void merge_blocks(t_page *page)
{
	t_chunk *cur;
	t_chunk *next;
	bool	 did_merge;

	did_merge = true;
	while (did_merge)
	{
		cur = get_first_block(page);
		next = get_next_block(cur, false);
		did_merge = false;
		while (cur != NULL && next != NULL)
		{
			(vg_mem_defined(cur, sizeof(*cur)),
			 vg_mem_defined(next, sizeof(*next)));
			if (!cur->used && !next->used)
			{
				did_merge = true;
				cur->size += sizeof(*cur);
				cur->size += next->size;
				(vg_mem_no_access(cur, sizeof(*cur)),
				 vg_mem_no_access(next, sizeof(*next)));
				next = get_next_block(cur, false);
			}
			else
			{
				(vg_mem_no_access(cur, sizeof(*cur)),
				 vg_mem_no_access(next, sizeof(*next)));
				cur = next;
				next = get_next_block(cur, false);
			}
		}
	}
}

t_chunk *split_block(t_chunk *chunk, t_usize size)
{
	t_usize	 remaining;
	t_chunk *next;
	t_chunk *ac_next;

	if (chunk == NULL)
		return (NULL);
	vg_mem_defined(chunk, sizeof(*chunk));
	if (chunk->size > size + sizeof(*chunk) + (2 << PAGE_ALIGN))
	{
		remaining = chunk->size - size - sizeof(*chunk);
		next = get_next_block(chunk, true);
		vg_mem_defined(chunk, sizeof(*chunk));
		// eprintf("before size = %zu\n", (t_usize)chunk->size);
		chunk->size = size;
		// eprintf("after size = %zu\n", (t_usize)chunk->size);
		ac_next = get_next_block(chunk, true);
		// eprintf("chunk = %p\n", chunk);
		// eprintf("next = %p\n", next);
		// eprintf("ac_next = %p\n", ac_next);
		// eprintf("get_next_block(ac_next, true) = %p\n",
		// 			get_next_block(ac_next, true));
		vg_mem_defined(ac_next, sizeof(*ac_next));
		ac_next->used = false;
		ac_next->size = remaining;
		assert(next == get_next_block(ac_next, true));
		vg_mem_no_access(ac_next, sizeof(*ac_next));
	}
	vg_mem_no_access(chunk, sizeof(*chunk));
	return (chunk);
}

t_chunk *find_chunk_of_size(struct s_allocator_melloc *alloc, t_usize size)
{
	t_page_list *list;
	t_page_list *list_next;
	t_usize		 idx;
	t_chunk		*chunk;

	list = alloc->list;
	while (list != NULL)
	{
		vg_mem_defined(list, sizeof(*list));
		idx = 0;
		while (idx < list->len)
		{
			// printf("[%zu]list\n", idx);
			chunk = get_first_block(&list->pages[idx++]);
			while (chunk)
			{
				vg_mem_defined(chunk, sizeof(*chunk));
				if (!chunk->used && chunk->size >= size)
				{
					vg_mem_no_access(chunk, sizeof(*chunk));
					vg_mem_no_access(list, sizeof(*list));
					return (split_block(chunk, size));
				}
				vg_mem_no_access(chunk, sizeof(*chunk));
				chunk = get_next_block(chunk, false);
			}
		}
		list_next = list->next;
		vg_mem_no_access(list, sizeof(*list));
		list = list_next;
	}
	return (NULL);
}

t_error alloc_new_page(struct s_allocator_melloc *alloc, t_usize page_size)
{
	t_page_list *list;
	t_page_list *list_bis;
	t_chunk		*chunk;

	page_size = round_to_pow2(page_size, PAGE_POW_2);
	if (alloc->list == NULL && alloc_page_list(&alloc->list))
		return (eprintf("Oups\n"), ERROR);
	list = alloc->list;
	while (list)
	{
		vg_mem_defined(list, sizeof(*list));
		if (list->len != PAGE_LIST_MAX)
			break;
		if (list->next == NULL && alloc_page_list(&list->next))
			return (vg_mem_no_access(list, sizeof(*list)), ERROR);
		list_bis = list;
		list = list->next;
		vg_mem_no_access(list_bis, sizeof(*list_bis));
	}
	if (list == NULL)
		return (ERROR);
	vg_mem_defined(list, sizeof(*list));
	list->pages[list->len].data = __libc_calloc(page_size, 1);
	if (list->pages[list->len].data == NULL)
		return (ERROR);
	list->pages[list->len].size = page_size;

	// eprintf("thingy!\n");
	// eprintf("(%p)pool_exist = %s\n", list,
	// VALGRIND_MEMPOOL_EXISTS(list) ? "true" : "false");
	vg_mempool_alloc(list, list->pages[list->len].data, page_size);
	chunk = get_first_block(&list->pages[list->len]);
	chunk->used = false;
	chunk->size = page_size - sizeof(*chunk) * 2;
	vg_mem_no_access(chunk, sizeof(*chunk));
	list->len++;
	vg_mem_no_access(list, sizeof(*list));
	return (NO_ERROR);
}

void *m_alloc_error(struct s_allocator_melloc *self, t_str msg)
{
	self->uninit((void *)self);
	me_abort(msg);
	return (NULL);
}

void *m_malloc(struct s_allocator_melloc *self, t_usize size)
{
	return (m_realloc(self, NULL, size));
}

void *m_alloc_array(struct s_allocator_melloc *self, t_usize size,
					t_usize count)
{
	if (size != 0 && count > SIZE_MAX / size)
		return (m_alloc_error(self, "Alloc array overflow"));
	return (m_realloc(self, NULL, size * count));
}

#include "stdlib.h"

void *m_realloc(struct s_allocator_melloc *self, void *ptr, t_usize size)
{
	t_chunk *chunk;
	t_chunk *next;
	t_usize	 old_size;

	if (size > INT32_MAX - sizeof(t_chunk) * 10)
		return (errno = ENOMEM, NULL);
	size = round_to_pow2(size, PAGE_ALIGN);
	if (ptr != NULL && size == 0)
		return (m_free(self, ptr), NULL);
	if (ptr == NULL)
	{
		chunk = find_chunk_of_size(self, size);
		if (chunk == NULL)
		{
			if (alloc_new_page(self, size + sizeof(t_chunk) * 2))
				return (m_alloc_error(self, "Unable to alloc page"));
			chunk = find_chunk_of_size(self, size);
			if (chunk == NULL)
				return (m_alloc_error(self, "Unable to find block"));
		}
		vg_mem_defined((void *)chunk, sizeof(*chunk));
		chunk->used = true;
		vg_mem_defined((void *)chunk + sizeof(*chunk), chunk->size);
		mem_set_zero((void *)chunk + sizeof(*chunk), chunk->size);
		vg_block_malloc((void *)chunk + sizeof(*chunk), chunk->size);
		vg_mem_no_access((void *)chunk, sizeof(*chunk));
		return ((void *)chunk + sizeof(*chunk));
	}
	else
	{
		chunk = ptr - sizeof(*chunk);
		vg_mem_defined(chunk, sizeof(*chunk));
		if (chunk->size >= size)
			return (vg_mem_no_access(chunk, sizeof(*chunk)), ptr);
		next = get_next_block(chunk, false);
		vg_mem_defined(next, sizeof(*next));
		vg_mem_defined(chunk, sizeof(*chunk));
		if (next != NULL && !next->used &&
			chunk->size + next->size + sizeof(*next) >= size)
		{
			old_size = chunk->size;
			chunk->size += next->size + sizeof(*next);
			vg_mem_undefined(next, next->size + sizeof(*next));
			vg_block_resize((void *)chunk + sizeof(*chunk), old_size,
							chunk->size);
			vg_mem_no_access(chunk, sizeof(*chunk));
			return (ptr);
		}
		else
		{
			vg_mem_no_access(next, sizeof(*next));
			next = m_realloc(self, NULL, size);
			vg_mem_defined(chunk, sizeof(*chunk));
			mem_move(next, ptr, chunk->size);
			vg_mem_no_access(chunk, sizeof(*chunk));
			m_free(self, ptr);
			return (next);
		}
	}
}

void *m_realloc_array(struct s_allocator_melloc *self, void *ptr, t_usize size,
					  t_usize count)
{
	if (size != 0 && count > SIZE_MAX / size)
		return (m_alloc_error(self, "Realloc array overflow"));
	return (m_realloc(self, ptr, size * count));
}

void m_free(struct s_allocator_melloc *self, void *ptr)
{
	t_chunk *chunk;

	(void)(self);
	if (ptr == NULL)
		return;
	vg_block_free(ptr);
	chunk = ptr - sizeof(*chunk);
	vg_mem_defined(chunk, sizeof(*chunk));
	chunk->used = false;
	vg_mem_no_access(chunk, sizeof(*chunk));
}

void m_uninit(struct s_allocator_melloc *self)
{
	t_page_list *list;
	t_page_list *list_next;
	t_usize		 idx;

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
		__libc_free(list);
		vg_mempool_destroy(list);
		vg_mem_no_access(list, sizeof(*list));
		list = list_next;
	}
}

t_allocator m_init(void)
{
	t_allocator out;

	out.free = (t_allocator_free)m_free;
	out.alloc = (t_allocator_alloc)m_malloc;
	out.alloc_array = (t_allocator_alloc_array)m_alloc_array;
	out.realloc = (t_allocator_realloc)m_realloc;
	out.realloc_array = (t_allocator_realloc_array)m_realloc_array;
	out.uninit = (t_allocator_uninit)m_uninit;
	out.alloc_data = NULL;
	return (out);
}
