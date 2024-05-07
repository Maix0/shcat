/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_arena.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 09:47:50 by maiboyer          #+#    #+#             */
/*   Updated: 2024/05/07 22:04:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/alloc/alloc.h"
#include "me/alloc/alloc_internal.h"
#include "me/fs/putstr_fd.h"
#include "me/mem/mem_set_zero.h"
#include "me/num/usize.h"
#include <stdlib.h>

void *__libc_malloc(size_t size);

t_arena_page *get_head_arena(void)
{
	static t_arena_page *val = NULL;

	if (val == NULL)
	{
		if (alloc_arena_page(ARENA_SIZE_DEFAULT, &val))
		{
			me_putstr_fd("Error: malloc failed\n", 2);
			exit(1);
		}
	}
	return (val);
}

t_error alloc_arena_page(t_usize min_size, t_arena_page **out)
{
	t_arena_block *block;
	min_size = usize_round_up_to(min_size, ARENA_SIZE_DEFAULT);
	if (out == NULL)
		return (ERROR);
	*out = __libc_malloc(sizeof(t_arena_page) + min_size);
	if (*out == NULL)
		return (ERROR);
	mem_set_zero((t_u8 *)*out + sizeof(**out), min_size);
	(*out)->page_size = min_size;
	(*out)->next = NULL;
	block = (t_arena_block *)((t_u8 *)*out + sizeof(**out));
	block->end = true;
	block->free = true;
	block->size = min_size - sizeof(*block);
	return (NO_ERROR);
}

t_error get_block_for_page(t_usize size, t_arena_page *page,
						   t_arena_block **out)
{
	t_arena_block *cur;
	t_arena_block *next;
	t_usize		   leftover;

	if (page == NULL || out == NULL)
		return (ERROR);
	if (page->page_size - sizeof(t_arena_block) <= size)
		return (ERROR);
	cur = (void *)((t_u8 *)page + sizeof(*page));
	while ((t_u8 *)cur < (t_u8 *)page + page->page_size + sizeof(*page))
	{
		if (cur->free && cur->size >= size)
		{
			if (cur->size > size + sizeof(*cur))
			{
				leftover = cur->size - size - sizeof(*cur);
				cur->size = size;
				next = (void *)((t_u8 *)cur + cur->size + sizeof(*cur));
				next->size = leftover;
				next->end = cur->end;
				cur->end = false;
			}
			*out = cur;
			return (NO_ERROR);
		}
		cur = (void *)((t_u8 *)cur + cur->size + sizeof(*cur));
	}
	return (ERROR);
}
