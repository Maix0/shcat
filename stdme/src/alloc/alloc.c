/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alloc.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 10:13:06 by maiboyer          #+#    #+#             */
/*   Updated: 2024/05/07 22:00:20 by maiboyer         ###   ########.fr       */
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
#include <stdlib.h>

t_arena_page *find_page_for(t_usize data_size, t_arena_page *page)
{
	t_arena_block *block;

	while (page != NULL)
	{
		if (page->page_size <= data_size + sizeof(t_arena_block))
		{
			if (page->next == NULL &&
				alloc_arena_page(usize_round_up_to(data_size + sizeof(*block),
												   ARENA_SIZE_DEFAULT),
								 &page->next))
				return (me_abort(), NULL);
			page = page->next;
		}
		block = (t_arena_block *)(&page[1]);
		while (block)
		{
			if ((t_u8 *)block >= (t_u8 *)page + sizeof(*page) + page->page_size)
				break;
			if (block->free && block->size >= data_size)
				return (page);
			block = (void *)((t_u8 *)block + block->size + sizeof(*block));
		}
		page = page->next;
	}
	return ((me_abort(), NULL));
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
		return (me_abort(), NULL);
	block->free = false;
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
	t_arena_page  *arena;
	t_arena_block *block;
	void		  *ret;

	arena = get_head_arena();
	if (arena == NULL)
		return (NULL);
	block = (void *)((t_u8 *)(ptr) - sizeof(t_arena_block));
	while (arena && !((t_u8 *)arena + arena->page_size + sizeof(*arena) > (t_u8 *)block && (t_u8 *)block > (t_u8 *)arena))
		arena = arena->next;
	if (arena == NULL)
		return (NULL);
	if (block->size <= new_size)
		return (ptr);
	ret = me_malloc(new_size);
	mem_copy(ret, ptr, block->size);
	return (ret);
}

void me_free(void *ptr)
{
	(void)(ptr);
	// t_arena_page *arena;
}
