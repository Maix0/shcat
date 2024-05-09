/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alloc.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 10:13:06 by maiboyer          #+#    #+#             */
/*   Updated: 2024/05/09 17:57:54 by maiboyer         ###   ########.fr       */
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

void *me_malloc(t_usize size)
{
	t_mblock *block;

	size = usize_round_up_to(size, 16);
	block = get_block_for_size(size);
	if (block == NULL)
		return (me_abort("Found no page for me_malloc"), NULL);
	block->used = true;
	return ((void *)(((t_usize)block) + sizeof(t_mblock)));
}

void *me_calloc(t_usize elem_size, t_usize elem_count)
{
	if (elem_size != 0 && elem_count > SIZE_MAX / elem_size)
		return (NULL);
	return (me_malloc(elem_size * elem_count));
}

void *me_realloc(void *ptr, t_usize new_size)
{
	t_mblock *block;
	void	 *ret;

	if (ptr == NULL)
		return (me_malloc(new_size));
	block = (void *)((t_u8 *)(ptr) - sizeof(t_mblock));
	if (block->size <= new_size)
		return (ptr);
	ret = me_malloc(new_size);
	mem_copy(ret, ptr, block->size);
	me_free(ptr);
	return (ret);
}

void me_free(void *ptr)
{
	t_mblock *cur;

	cur = (void *)(((t_usize)ptr) - sizeof(t_mblock));
	cur->used = false;
	if (cur->next != NULL && cur->page == cur->next->page && !cur->next->used)
	{
		cur->size += sizeof(t_mblock) + cur->next->size;
		mem_set_zero(cur->next->padding, 7);
		cur->next = cur->next->next;
	}
}
