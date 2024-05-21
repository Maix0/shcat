/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alloc.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 10:13:06 by maiboyer          #+#    #+#             */
/*   Updated: 2024/05/14 18:26:01 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "aq/allocator.h"
#include "aq/libc_wrapper.h"

typedef struct s_allocator_page
{
	void   *data;
	t_usize size;
} t_allocator_page;

typedef struct s_page_list
{
	t_usize				allocated;
	t_allocator_page	a[10];
	struct s_page_list *next;
} t_page_list;

/*
void *me_malloc(t_usize size)
{
	t_mblock *block;

	size = usize_round_up_to(size, 16);
	block = get_block_for_size(size);
	if (block == NULL)
		return (me_abort("Found no page for me_malloc"), NULL);
	vg_mem_defined(block, sizeof(*block));
	vg_mempool_alloc(POOL_ADDR, (void *)(((t_usize)block) + sizeof(*block)),
block->size); block->used = true; mem_set_zero((t_u8 *)block + sizeof(*block),
block->size); vg_mem_no_access(block, sizeof(*block)); return ((void
*)(((t_usize)block) + sizeof(*block)));
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
	block = (void *)((t_usize)(ptr) - sizeof(*block));
	vg_mem_defined(block, sizeof(*block));
	VALGRIND_CHECK_MEM_IS_ADDRESSABLE(ptr, block->size);
	block->used = true;
	if (block->size <= new_size)
		return (vg_mem_no_access(block, sizeof(*block)), ptr);
	old_size = block->size;
	vg_mem_no_access(block, sizeof(*block));
	if (false && merge_block(block, new_size))
	{
		vg_mem_defined(block, sizeof(*block));
		vg_mempool_resize(POOL_ADDR, ptr, block->size);
		VALGRIND_CHECK_MEM_IS_ADDRESSABLE(ptr, block->size);
		mem_set_zero((t_u8 *)ptr + old_size, block->size - old_size);
		vg_mem_no_access(block, sizeof(*block));
		return (ptr);
	}
	else
	{
		ret = me_malloc(new_size);
		mem_copy(ret, ptr, block->size);
		mem_free(ptr);
		return (ret);
	}
}

void *me_realloc_array(void *ptr, t_usize elem_size, t_usize elem_count)
{
	if (elem_size != 0 && elem_count > SIZE_MAX / elem_size)
		me_abort("realloc_array overflow !");
	return (me_realloc(ptr, elem_size * elem_count));
}

void mem_free(void *ptr)
{
	t_mblock *cur;

	if (ptr == NULL)
		return;
	cur = (void *)(((t_usize)ptr) - sizeof(t_mblock));
	vg_mempool_free(POOL_ADDR, ptr);
	vg_mem_defined(cur, sizeof(*cur));
	cur->used = false;
	merge_block(cur, ~(t_usize)0);
	vg_mem_no_access(cur, sizeof(*cur));
}
*/
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
// 		mem_free(ptr);
// 		return (ret);
// 	}
// }
//
// void mem_free(void *ptr)
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