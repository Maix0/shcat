/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_arena.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 09:47:50 by maiboyer          #+#    #+#             */
/*   Updated: 2024/05/08 22:05:36 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/alloc/alloc.h"
#include "me/alloc/alloc_internal.h"
#include "me/fs/putendl_fd.h"
#include "me/fs/putnbr_fd.h"
#include "me/fs/putstr_fd.h"
#include "me/mem/mem_set_zero.h"
#include "me/num/usize.h"
#include <stdio.h>
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

	printf("Allocating page with size %zu\n", min_size);
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
	block->used = false;
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
	while ((t_usize)((t_u8 *)cur - (t_u8 *)page) <
		   page->page_size - sizeof(*page))
	{
		if (!cur->used && cur->size >= size)
		{
			if (cur->size > size + sizeof(*cur) * 2)
			{
				leftover = cur->size - size - sizeof(*cur);
				cur->size = size;
				next = (void *)(((t_usize)cur) + size);
				next->size = leftover;
				next->end = cur->end;
				next->used = false;
				cur->end = false;
			}
			*out = cur;
			return (NO_ERROR);
		}
		cur = (void *)((t_u8 *)cur + cur->size + sizeof(*cur));
	}
	return (ERROR);
}

void print_pages_info(void)
{
	t_arena_page *page;
	t_i32		  page_nb;

	page = get_head_arena();
	page_nb = 0;
	while (page != NULL)
	{
		me_putstr_fd("Page ", 2);
		me_putnbr_fd(page_nb++, 2);
		me_putstr_fd(" with size ", 2);
		me_putnbr_fd((t_i32)page->page_size, 2);
		me_putstr_fd("\n", 2);
		page = page->next;
	}
}
