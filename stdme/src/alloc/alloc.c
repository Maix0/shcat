/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alloc.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 10:13:06 by maiboyer          #+#    #+#             */
/*   Updated: 2024/05/12 23:59:10 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/alloc/alloc.h"
#include "me/alloc/alloc_internal.h"
#include "me/alloc/internal_vg_funcs.h"
#include "me/fs/putendl_fd.h"
#include "me/fs/putnbr_fd.h"
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
	vg_mem_defined(block, sizeof(*block));
	block->used = true;
	vg_mem_defined((t_u8 *)block + sizeof(*block), block->size);
	mem_set_zero((t_u8 *)block + sizeof(*block), block->size);
	vg_block_malloc((void *)(((t_usize)block) + sizeof(*block)), block->size);
	vg_mem_no_access(block, sizeof(*block));
	return ((void *)(((t_usize)block) + sizeof(*block)));
}

void *me_calloc(t_usize elem_size, t_usize elem_count)
{
	if (elem_size != 0 && elem_count > SIZE_MAX / elem_size)
		me_abort("calloc overflow !");
	return (me_malloc(elem_size * elem_count));
}

void *me_realloc(void *ptr, t_usize new_size)
{
	t_mblock *block;
	void	 *ret;
	t_usize	  old_size;

	if (ptr == NULL)
		return (me_malloc(new_size));
	block = (void *)((t_u8 *)(ptr) - sizeof(*block));
	vg_mem_defined(block, sizeof(*block));
	if (block->size <= new_size)
		return (vg_mem_no_access(block, sizeof(*block)), ptr);
	old_size = block->size;
	if (merge_block(block, new_size))
	{
		vg_block_resize(ptr, old_size, block->size);
		vg_mem_defined(ptr, block->size);
		mem_set_zero((t_u8 *)ptr + old_size, block->size - old_size);
		vg_mem_no_access(block, sizeof(*block));
		return (ptr);
	}
	else
	{
		ret = me_malloc(new_size);
		mem_copy(ret, ptr, block->size);
		me_free(ptr);
		return (ret);
	}
}

void *me_realloc_array(void *ptr, t_usize elem_size, t_usize elem_count)
{
	if (elem_size != 0 && elem_count > SIZE_MAX / elem_size)
		me_abort("realloc_array overflow !");
	return (me_realloc(ptr, elem_size * elem_count));
}

void me_free(void *ptr)
{
	t_mblock *cur;

	cur = (void *)(((t_usize)ptr) - sizeof(t_mblock));
	vg_block_free(ptr);
	vg_mem_defined(cur, sizeof(t_mblock));
	cur->used = false;
	merge_block(cur, ~(t_usize)0);
	vg_mem_no_access(cur, sizeof(t_mblock));
}

// void uninit_allocator(void)
// {
// 	t_ptr_table *table;
// 	t_ptr_table *table_next;
// 	t_usize		 i;
// 	t_usize		 unfree_count;
//
// 	unfree_count = 0;
// 	table = get_table();
//
// 	while (table)
// 	{
// 		i = 0;
// 		while (i < PTR_LENS)
// 		{
// 			if (table->table[i].ptr != NULL)
// 			{
// 				__libc_free(table->table[i].ptr);
// 				unfree_count++;
// 			}
// 			i++;
// 		}
// 		table_next = table->next;
// 		__libc_free(table);
// 		table = table_next;
// 	}
// 	if (unfree_count != 0)
// 	{
// 		me_putstr_fd("A total of ", 2);
// 		me_putnbr_fd(unfree_count, 2);
// 		me_putendl_fd(" blocks weren't freed !", 2);
// 	}
// }
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
