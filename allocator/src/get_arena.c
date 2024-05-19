/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_arena.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 09:47:50 by maiboyer          #+#    #+#             */
/*   Updated: 2024/05/14 16:52:37 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "aq/alloc.h"
#include "aq/alloc_internal.h"
#include "aq/internal_vg_funcs.h"
#include "me/fs/putendl_fd.h"
#include "me/fs/putnbr_fd.h"
#include "me/fs/putstr_fd.h"
#include "me/mem/mem.h"
#include "me/mem/mem.h"
#include "me/mem/mem.h"
#include "me/num/usize.h"
#include <stdio.h>
#include <stdlib.h>
/*

void *__libc_malloc(size_t size);
void  __libc_free(void *ptr);

t_mpage *alloc_page(t_usize size)
{
	t_mpage *val;

	size = usize_round_up_to(size + sizeof(t_mpage), PAGE_SIZE_DEFAULT);
	val = __libc_malloc(size);
	if (val == NULL)
		return (NULL);
	mem_set_zero(val, size);
	val->next = NULL;
	val->page_size = size - sizeof(*val);
	val->first = (t_mblock *)(((t_usize)val) + sizeof(t_mpage));
	val->first->page = val;
	val->first->next = NULL;
	val->first->used = false;
	val->first->size = size - sizeof(t_mpage) - sizeof(t_mblock) * 2;
	mem_copy(val->first->padding, BLOCK_PADDING, 7);
	vg_mem_no_access(val, size);
	return (val);
}

t_mpage *get_head_arena(void)
{
	static t_mpage *val = NULL;

	if (val == NULL &&
		PAGE_SIZE_DEFAULT > sizeof(t_mpage) + sizeof(t_mblock) * 2 + 16)
	{
		vg_mempool_create(POOL_ADDR);
		val = alloc_page(PAGE_SIZE_DEFAULT - sizeof(t_mpage));
	}
	if (val == NULL)
		(me_putstr_fd("Failed to alloc first page", 2), exit(1));
	return (val);
}

t_mblock *split_block(t_mblock *self, t_usize min_size)
{
	t_usize	  remaining;
	t_mblock *old_next;

	vg_mem_defined(self, sizeof(*self));
	min_size = usize_round_up_to(min_size, 16);
	if (self->size > (min_size + sizeof(t_mblock) + 16))
	{
		remaining = self->size - min_size - sizeof(t_mblock);
		printf("splitting %zu into %zu and %zu\n", self->size, min_size,
			   remaining);
		self->size = min_size;
		old_next = self->next;
		self->next = (t_mblock *)(((t_usize)self) + sizeof(*self) + self->size);
		vg_mem_defined(self->next, sizeof(*self->next));
		self->next->page = self->page;
		self->next->next = old_next;
		self->next->used = false;
		self->next->size = remaining;
		mem_copy(self->next->padding, BLOCK_PADDING, 7);
		vg_mem_no_access(self->next, sizeof(*self->next));
	}
	vg_mem_no_access(self, sizeof(*self));
	return (self);
}

t_mblock *get_block_for_size(t_usize size)
{
	t_mblock *last;
	t_mblock *cur;
	t_mpage	 *head;

	last = NULL;
	head = get_head_arena();
	vg_mem_defined(head, sizeof(*head));
	cur = head->first;
	vg_mem_no_access(head, sizeof(*head));
	while (cur)
	{
		vg_mem_defined(cur, sizeof(*cur));
		if (!cur->used && cur->size >= size)
			return (split_block(cur, size));
		last = cur;
		cur = cur->next;
		vg_mem_no_access(last, sizeof(*last));
	}
	if (last == NULL)
		return (NULL);
	vg_mem_defined(last, sizeof(*last));
	vg_mem_defined(last->page, sizeof(*last->page));
	last->page->next = alloc_page(size + sizeof(t_mblock));
	if (last->page->next == NULL)
		me_abort("Failed to alloc page!");
	vg_mem_defined(last->page->next, sizeof(*last->page->next));
	last->next = last->page->next->first;
	cur = last->page->next->first;
	vg_mem_no_access(last->page->next, sizeof(*last->page->next));
	vg_mem_no_access(last->page, sizeof(*last->page));
	vg_mem_no_access(last, sizeof(*last));
	return (split_block(cur, size));
}

void print_pages_info(void)
{
	t_mpage *page;
	t_mpage *old;
	t_i32	 page_nb;

	page = get_head_arena();
	page_nb = 0;
	while (page != NULL)
	{
		vg_mem_defined(page, sizeof(*page));
		me_putstr_fd("Page ", 2);
		me_putnbr_fd(page_nb++, 2);
		me_putstr_fd(" with size ", 2);
		me_putnbr_fd((t_i32)page->page_size, 2);
		me_putstr_fd("\n", 2);
		old = page;
		page = page->next;
		vg_mem_no_access(old, sizeof(*old));
	}
}

bool merge_block(t_mblock *self, t_usize min_size)
{
	t_mblock *old_next;

	vg_mem_defined(self, sizeof(*self));
	vg_mem_defined(self->next, sizeof(*self->next));
	if (!(self->next && !self->next->used && self->next->page == self->page &&
		  self->size + self->next->size + sizeof(t_mblock) >= min_size))
		return (vg_mem_no_access(self->next, sizeof(*self->next)),
				vg_mem_no_access(self, sizeof(*self)), false);
	old_next = self->next;
	self->size += sizeof(*self) + self->next->size;
	self->next = self->next->next;
	vg_mem_no_access(self, sizeof(*self));
	vg_mem_no_access(old_next, sizeof(*old_next));
	return (true);
}

void uninit_allocator(void)
{
	t_mpage	 *page;
	void	 *tmp;
	t_mblock *block;
	t_usize	  count_block;

	page = get_head_arena();
	count_block = 0;
	vg_mem_defined(page, sizeof(*page));
	block = page->first;
	while (block)
	{
		vg_mem_defined(block, sizeof(*block));
		if (block->used)
			count_block += 1;
		block = block->next;
	}
	while (page)
	{
		vg_mem_defined(page, sizeof(*page));
		tmp = page->next;
		__libc_free(page);
		page = tmp;
	}
	if (count_block != 0)
		(me_putnbr_fd(count_block, 2),
		 me_putendl_fd(" Blocks weren't freed when exiting !", 2));
}*/

//
// void free_ifn(void *ptr)
// {
// 	if (ptr != NULL)
// 		__libc_free(ptr);
// }
//
// t_mpage *alloc_page(t_usize size)
// {
// 	t_mpage	 *page;
// 	void	 *data;
// 	t_mblock *block;
//
// 	size = usize_round_up_to(size, PAGE_SIZE_DEFAULT);
// 	page = __libc_malloc(sizeof(t_mpage));
// 	block = __libc_malloc(sizeof(t_mblock));
// 	data = __libc_malloc(size);
// 	if (page == NULL || data == NULL || block == NULL ||
// 		PAGE_SIZE_DEFAULT <= (t_usize)0)
// 		return (free_ifn(page), free_ifn(data), free_ifn(block), NULL);
// 	page->data = data;
// 	page->next = NULL;
// 	page->page_size = size;
// 	page->first = block;
// 	block->offset = 0;
// 	block->page = page;
// 	block->next = NULL;
// 	block->used = false;
// 	block->size = size;
// 	mem_copy(block->padding, BLOCK_PADDING, 7);
// 	return (page);
// }
//
// t_mpage *get_head_arena(void)
// {
// 	static t_mpage *val = NULL;
//
// 	if (val == NULL)
// 	{
// 		val = alloc_page(PAGE_SIZE_DEFAULT);
// 		if (val == NULL)
// 			(me_putstr_fd("Failed to alloc first page", 2), exit(1));
// 	}
// 	return (val);
// }
//
// t_mblock *split_block(t_mblock *self, t_usize min_size)
// {
// 	t_usize	  remaining;
// 	t_mblock *new_next;
//
// 	min_size = usize_round_up_to(min_size, 16);
// 	if (self->size > min_size)
// 	{
// 		remaining = self->size - min_size - 1;
// 		new_next = __libc_malloc(sizeof(t_mblock));
// 		if (new_next == NULL)
// 			return (me_abort("Failed to alloc block"), NULL);
// 		printf("splitting %zu into %zu and %zu\n", self->size, min_size,
// 			   remaining);
// 		self->size = min_size;
// 		new_next->page = self->page;
// 		new_next->next = self->next;
// 		new_next->offset = self->offset + self->size + 1;
// 		new_next->used = false;
// 		new_next->size = remaining;
// 		mem_copy(new_next->padding, BLOCK_PADDING, 7);
// 		self->next = new_next;
// 	}
// 	return (self);
// }
//
// t_mblock *get_block_for_size(t_usize size)
// {
// 	t_mblock *last;
// 	t_mblock *cur;
//
// 	last = NULL;
// 	cur = get_head_arena()->first;
// 	while (cur)
// 	{
// 		if (cur->page == NULL)
// 			me_abort("block doesn't have a page ?????");
// 		if (!cur->used && cur->size >= size)
// 			return (split_block(cur, size));
// 		last = cur;
// 		cur = cur->next;
// 	}
// 	if (last == NULL)
// 		return (NULL);
// 	last->page->next = alloc_page(size);
// 	if (last->page->next == NULL)
// 		me_abort("Failed to alloc page!");
// 	last->next = last->page->next->first;
// 	return (split_block(last->page->next->first, size));
// }
//
// t_mblock *get_block_from_ptr(void *ptr)
// {
// 	t_mpage	 *page;
// 	t_mblock *block;
//
// 	page = get_page_from_ptr(ptr);
// 	if (page == NULL)
// 		return (NULL);
// 	block = page->first;
// 	while (block && block->page == page)
// 	{
// 		if (((t_u8 *)page->data) + block->offset == (t_u8 *)ptr)
// 			return (block);
// 		block = block->next;
// 	}
// 	return (NULL);
// }
//
// t_mpage *get_page_from_ptr(void *ptr)
// {
// 	t_mpage *page;
//
// 	page = get_head_arena();
// 	while (page)
// 	{
// 		if ((t_u8 *)page->data <= (t_u8 *)ptr &&
// 			(t_u8 *)ptr < (((t_u8 *)page->data) + page->page_size))
// 			return (page);
// 		page = page->next;
// 	}
// 	return (NULL);
// }
//
// void print_pages_info(void)
// {
// 	t_mpage *page;
// 	t_i32	 page_nb;
//
// 	page = get_head_arena();
// 	page_nb = 0;
// 	while (page != NULL)
// 	{
// 		me_putstr_fd("Page ", 2);
// 		me_putnbr_fd(page_nb++, 2);
// 		me_putstr_fd(" with size ", 2);
// 		me_putnbr_fd((t_i32)page->page_size, 2);
// 		me_putstr_fd("\n", 2);
// 		page = page->next;
// 	}
// }
//
// bool merge_next_block(t_mblock *cur, t_usize min_size)
// {
// 	t_mblock *next;
//
// 	if (cur->next != NULL && cur->page == cur->next->page && !cur->next->used &&
// 		cur->size + cur->next->size >= min_size)
// 	{
// 		cur->size += cur->next->size;
// 		next = cur->next;
// 		cur->next = cur->next->next;
// 		printf("merging two blocks %p and %p\n", cur, cur->next);
// 		__libc_free(next);
// 		return (NO_ERROR);
// 	}
// 	return (ERROR);
// }
