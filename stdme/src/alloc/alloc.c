/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alloc.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 10:13:06 by maiboyer          #+#    #+#             */
/*   Updated: 2024/05/08 19:37:39 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/alloc/alloc.h"
#include "me/alloc/alloc_internal.h"
#include "me/fs/putstr_fd.h"
#include "me/mem/mem_copy.h"
#include "me/mem/mem_set_zero.h"
#include "me/num/usize.h"
#include <stdalign.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

t_arena_page *find_page_for(t_usize data_size, t_arena_page *page)
{
	t_arena_block *block;
	t_arena_page  *last_page;

	last_page = NULL;
	while (page != NULL)
	{
		if (page->page_size <= data_size + sizeof(t_arena_block))
		{
			if (page->next == NULL &&
				alloc_arena_page(usize_round_up_to(data_size + sizeof(*block),
												   ARENA_SIZE_DEFAULT),
								 &page->next))
				return (me_abort("Failed Malloc"), NULL);
			last_page = page;
			page = page->next;
		}
		block = (t_arena_block *)(&page[1]);
		while (block)
		{
			if ((t_u8 *)block >= (t_u8 *)page + sizeof(*page) + page->page_size)
				break;
			if (!block->used && block->size >= data_size)
				return (page);
			block = (void *)((t_u8 *)block + block->size + sizeof(*block));
		}
		last_page = page;
		page = page->next;
	}
	if (last_page != NULL)
	{
		if (alloc_arena_page(usize_round_up_to(data_size + sizeof(*block),
											   ARENA_SIZE_DEFAULT),
							 &last_page->next))
			return (me_abort("Failed Malloc"), NULL);
		return (last_page->next);
	}
	return ((me_abort("Found no pages for memory"), NULL));
}

// the is twice the size of size_t, only to stay aligned on a 16 byte
// alignement
void *me_malloc(t_usize size)
{
	t_arena_page  *arena;
	t_arena_block *block;

	size = usize_round_up_to(size, 16);
	arena = find_page_for(size, get_head_arena());
	if (get_block_for_page(size, arena, &block))
		return (me_abort("Found no page for me_malloc"), NULL);
	block->used = true;
	return ((t_u8 *)block + sizeof(*block));
}

void *me_calloc(t_usize elem_size, t_usize elem_count)
{
	if (elem_size != 0 && elem_count > SIZE_MAX / elem_size)
		return (NULL);
	return (me_malloc(elem_size * elem_count));
}

void *me_realloc(void *ptr, t_usize new_size)
{
	t_arena_block *block;
	void		  *ret;

	if (ptr == NULL)
		return (me_malloc(new_size));
	block = (void *)((t_u8 *)(ptr) - sizeof(t_arena_block));
	if (block->size <= new_size)
		return (ptr);
	ret = me_malloc(new_size);

	mem_copy(ret, ptr, block->size);
	me_free(ptr);
	return (ret);
}

void me_free(void *ptr)
{
	t_arena_page  *page;
	t_arena_block *cur;
	t_arena_block *next;

	print_trace();
	page = get_page_from_ptr(ptr);
	if (page == NULL)
		me_abort("Tried to me_free with me_free something that isn't allocated "
				 "with me_alloc");
	cur = (void *)(((t_usize)ptr) - sizeof(*cur));
	cur->used = false;
	next = (void *)(((t_usize)cur) + sizeof(*cur) + cur->size);
	if (((t_usize)page) <= ((t_usize)next) &&
		((t_usize)next) <= ((t_usize)page) + page->page_size + sizeof(*page))
	{
		if (!next->used)
			cur->size += next->size + sizeof(*cur);
	}
}
