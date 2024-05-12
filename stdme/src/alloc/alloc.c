/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alloc.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 10:13:06 by maiboyer          #+#    #+#             */
/*   Updated: 2024/05/12 15:02:27 by maiboyer         ###   ########.fr       */
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

void __libc_free(void *ptr);

// void *me_malloc(t_usize size)
// {
// 	t_mblock *block;
// 	void	 *ret;
//
// 	size = usize_round_up_to(size, 16);
// 	printf("Allocating %zu.\n", size);
// 	block = get_block_for_size(size);
// 	if (block 
// 	== NULL)
// 		return (me_abort("Found no page for me_malloc"), NULL);
// 	block->used = true;
// 	ret = ((t_u8 *)block->page->data) + block->offset;
// 	mem_set_zero(ret, block->size);
// 	return (ret);
// }
//
// void *me_calloc(t_usize elem_size, t_usize elem_count)
// {
// 	if (elem_size != 0 && elem_count > SIZE_MAX / elem_size)
// 		return (NULL);
// 	return (me_malloc(elem_size * elem_count));
// }
//
// void *me_realloc(void *ptr, t_usize new_size)
// {
// 	t_mblock *block;
// 	void	 *ret;
//
// 	if (ptr == NULL)
// 		return (me_malloc(new_size));
// 	block = get_block_from_ptr(ptr);
// 	if (block == NULL || block->size <= new_size)
// 		return (ptr);
// 	if (!merge_next_block(block, new_size))
// 		return (ptr);
// 	else
// 	{
// 		ret = me_malloc(new_size);
// 		mem_copy(ret, ptr, block->size);
// 		me_free(ptr);
// 		return (ret);
// 	}
// }
//
// void me_free(void *ptr)
// {
// 	t_mblock *cur;
//
// 	if (ptr == NULL)
// 		return;
// 	cur = get_block_from_ptr(ptr);
// 	if (cur == NULL)
// 		return (me_abort("Invalid free (not allocated with me_*alloc)!"));
// 	cur->used = false;
// 	merge_next_block(cur, ~(t_usize)0);
// }
