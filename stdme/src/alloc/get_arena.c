/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_arena.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 09:47:50 by maiboyer          #+#    #+#             */
/*   Updated: 2024/05/12 14:03:55 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/alloc/alloc.h"
#include "me/alloc/alloc_internal.h"
#include "me/fs/putendl_fd.h"
#include "me/fs/putnbr_fd.h"
#include "me/fs/putstr_fd.h"
#include "me/mem/mem_compare.h"
#include "me/mem/mem_copy.h"
#include "me/mem/mem_set_zero.h"
#include "me/num/usize.h"
#include <stdio.h>
#include <stdlib.h>

void *__libc_malloc(size_t size);
void  __libc_free(void *ptr);

void free_ifn(void *ptr)
{
	if (ptr != NULL)
		__libc_free(ptr);
}

t_mpage *alloc_page(t_usize size)
{
	t_mpage	 *page;
	void	 *data;
	t_mblock *block;

	size = usize_round_up_to(size, PAGE_SIZE_DEFAULT);
	page = __libc_malloc(sizeof(t_mpage));
	block = __libc_malloc(sizeof(t_mblock));
	data = __libc_malloc(size);
	if (page == NULL || data == NULL || block == NULL || PAGE_SIZE_DEFAULT <= 0)
		return (free_ifn(page), free_ifn(data), free_ifn(block), NULL);
	page->data = data;
	page->next = NULL;
	page->page_size = size;
	page->first = block;
	block->offset = 0;
	block->page = page;
	block->next = NULL;
	block->used = false;
	block->size = size;
	mem_copy(block->padding, BLOCK_PADDING, 7);
	return (page);
}

t_mpage *get_head_arena(void)
{
	static t_mpage *val = NULL;

	if (val == NULL)
	{
		val = alloc_page(PAGE_SIZE_DEFAULT);
		if (val == NULL)
			(me_putstr_fd("Failed to alloc first page", 2), exit(1));
	}
	return (val);
}

t_mblock *split_block(t_mblock *self, t_usize min_size)
{
	t_usize	  remaining;
	t_mblock *old_next;
	t_mblock *new_next;

	min_size = usize_round_up_to(min_size, 16);
	if (self->size > min_size)
	{
		remaining = self->size - min_size;
		new_next = __libc_malloc(sizeof(t_mblock));
		if (new_next == NULL)
			return (me_abort("Failed to alloc block"), NULL);
		printf("splitting %zu into %zu and %zu\n", self->size, min_size,
			   remaining);
		self->size = min_size;
		old_next = self->next;
		new_next->page = self->page;
		new_next->next = old_next;
		new_next->offset = self->offset + self->size;
		new_next->used = false;
		new_next->size = remaining;
		mem_copy(new_next->padding, BLOCK_PADDING, 7);
		self->next = new_next;
	}
	return (self);
}

t_mblock *get_block_for_size(t_usize size)
{
	t_mblock *last;
	t_mblock *cur;

	last = NULL;
	cur = get_head_arena()->first;
	printf("cur == %p\n", cur);
	while (cur)
	{
		if (cur->page == NULL)
			me_abort("block doesn't have a page ?????");
		if (!cur->used && cur->size >= size)
			return (split_block(cur, size));
		last = cur;
		cur = cur->next;
	}
	if (last == NULL)
		return (NULL);
	last->page->next = alloc_page(size);
	if (last->page->next == NULL)
		me_abort("Failed to alloc page!");
	last->next = last->page->next->first;
	return (split_block(last->page->next->first, size));
}

t_mblock *get_block_from_ptr(void *ptr)
{
	t_mpage	 *page;
	t_mblock *block;

	page = get_page_from_ptr(ptr);
	if (page == NULL)
		return (NULL);
	block = page->first;
	while (block && block->page == page)
	{
		if ((t_u8 *)page->data + block->offset == (t_u8 *)ptr)
			return (block);
		block = block->next;
	}
	return (NULL);
}

t_mpage *get_page_from_ptr(void *ptr)
{
	t_mpage *page;

	page = get_head_arena();
	while (page)
	{
		if ((t_u8 *)page->data <= (t_u8 *)ptr &&
			(t_u8 *)ptr < ((t_u8 *)page->data + page->page_size))
			return (page);
		page = page->next;
	}
	return (NULL);
}

void print_pages_info(void)
{
	t_mpage *page;
	t_i32	 page_nb;

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

t_error merge_next_block(t_mblock *cur, t_usize min_size)
{
	t_mblock *next;

	if (cur->next != NULL && cur->page == cur->next->page && !cur->next->used &&
		cur->size + cur->next->size >= min_size)
	{
		cur->size += cur->next->size;
		next = cur->next;
		cur->next = cur->next->next;
		printf("merging two blocks %p and %p\n", cur, cur->next);
		__libc_free(next);
		return (NO_ERROR);
	}
	return (ERROR);
}
