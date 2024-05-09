/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_arena.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 09:47:50 by maiboyer          #+#    #+#             */
/*   Updated: 2024/05/09 18:21:33 by maiboyer         ###   ########.fr       */
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

t_mpage *alloc_page(t_usize size)
{
	t_mpage *val;

	size = usize_round_up_to(size, PAGE_SIZE_DEFAULT);
	val = __libc_malloc(PAGE_SIZE_DEFAULT);
	if (val == NULL || sizeof(t_mpage) >= PAGE_SIZE_DEFAULT)
		return (NULL);
	val->next = NULL;
	val->page_size = PAGE_SIZE_DEFAULT;
	val->first = (t_mblock *)(((t_usize)val) + sizeof(t_mpage));
	val->first->page = val;
	val->first->next = NULL;
	mem_copy(val->first->padding, BLOCK_PADDING, 7);
	val->first->used = false;
	val->first->size = PAGE_SIZE_DEFAULT - sizeof(t_mpage);
	me_putstr_fd("Allocating a page of size ", 2);
	me_putnbr_fd(size, 2);
	me_putendl_fd("", 2);
	return (val);
}

t_mpage *get_head_arena(void)
{
	static t_mpage *val = NULL;

	if (val == NULL)
		val = alloc_page(PAGE_SIZE_DEFAULT);
	if (val == NULL)
		(me_putstr_fd("Failed to alloc first page", 2), exit(1));
	return (val);
}

t_mblock *split_block(t_mblock *self, t_usize min_size)
{
	t_usize	  remaining;
	t_mblock *old_next;

	min_size = usize_round_up_to(min_size, 16);
	if (self->size > (min_size + sizeof(t_mpage) + 16))
	{
		remaining = self->size - min_size - sizeof(t_mpage);
		printf("Splitting %zu into %zu and %zu\n", self->size, min_size,
			   remaining);
		self->size = min_size;
		old_next = self->next;
		self->next =
			(t_mblock *)(((t_usize)self) + self->size + sizeof(t_mpage));
		self->next->page = self->page;
		self->next->next = old_next;
		self->next->used = false;
		self->next->size = remaining;
		mem_copy(self->next->padding, BLOCK_PADDING, 7);
	}
	return (self);
}

t_mblock *get_block_for_size(t_usize size)
{
	t_mblock *last;
	t_mblock *cur;

	last = NULL;
	cur = get_head_arena()->first;
	while (cur)
	{
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
