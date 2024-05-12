/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alloc_dumb.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 15:02:37 by maiboyer          #+#    #+#             */
/*   Updated: 2024/05/12 23:05:55 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/alloc/alloc.h"
#include "me/alloc/alloc_dumb_internal.h"
#include "me/fs/putendl_fd.h"
#include "me/mem/mem_copy.h"
#include "me/mem/mem_set_zero.h"
#include <stdlib.h>

void *__libc_malloc(size_t size);
void  __libc_free(void *ptr);

// t_ptr_table *get_table(void)
// {
// 	static t_ptr_table *table = NULL;
//
// 	if (table == NULL)
// 	{
// 		table = __libc_malloc(sizeof(*table));
// 		if (table == NULL)
// 			(me_putendl_fd("Failed to alloc ptr array", 2), exit(1));
// 		mem_set_zero(table, sizeof(*table));
// 	}
// 	return (table);
// }
//
// t_ptr *find_ptr(void *ptr)
// {
// 	t_usize		 i;
// 	t_ptr_table *t;
//
// 	t = get_table();
// 	i = 0;
// 	while (t)
// 	{
// 		while (i < PTR_LENS)
// 		{
// 			if (t->table[i].ptr == ptr)
// 				return (&t->table[i]);
// 			i++;
// 		}
// 		t = t->next;
// 	}
// 	return (NULL);
// }
//
// void print_pages_info(void)
// {
// }
//
// #include <stdio.h>
//
// void *me_malloc(t_usize size)
// {
// 	t_ptr_table *table;
// 	t_ptr		*ret;
//
// 	// printf("ALLOC %zu\n", size);
// 	ret = find_ptr(NULL);
// 	if (ret == NULL)
// 	{
// 		table = get_table();
// 		while (table->next != NULL)
// 			table = table->next;
// 		table->next = __libc_malloc(size);
// 		if (table->next == NULL)
// 			(me_abort("Failed to alloc ptr array"));
// 		mem_set_zero(table->next, sizeof(*table));
// 		ret = &table->next->table[0];
// 	}
// 	ret->ptr = __libc_malloc(size);
// 	if (ret->ptr == NULL)
// 		me_abort("Failed to malloc!");
// 	ret->size = size;
// 	mem_set_zero(ret->ptr, size);
// 	return (ret->ptr);
// }
//
// void *me_calloc(t_usize elem_count, t_usize elem_size)
// {
// 	// printf("CALLOC %zu * %zu\n", elem_count, elem_size);
// 	if (elem_size != 0 && elem_count > SIZE_MAX / elem_size)
// 		return (me_abort("calloc overflow!"), NULL);
// 	return (me_malloc(elem_size * elem_count));
// }
//
// void *me_realloc(void *ptr, t_usize size)
// {
// 	t_ptr *p;
// 	t_ptr  tmp;
//
// 	if (ptr == NULL)
// 		return (me_malloc(size));
// 	// printf("REALLOC %p %zu\n", ptr, size);
// 	p = find_ptr(ptr);
// 	if (p == NULL)
// 		return (me_abort("realloc with wrong ptr"), NULL);
// 	if (p->size >= size)
// 		return (p->ptr);
// 	tmp.size = size;
// 	tmp.ptr = __libc_malloc(size);
// 	if (tmp.ptr == NULL)
// 		me_abort("failed to malloc...");
// 	mem_copy(tmp.ptr, p->ptr, p->size);
// 	__libc_free(p->ptr);
// 	*p = tmp;
// 	return (tmp.ptr);
// }
//
// void *me_realloc_array(void *ptr, t_usize elem_size, t_usize elem_count)
// {
// 	// printf("CALLOC %zu * %zu\n", elem_count, elem_size);
// 	if (elem_size != 0 && elem_count > SIZE_MAX / elem_size)
// 		return (me_abort("realloc_array overflow !"), NULL);
// 	return (me_realloc(ptr, elem_size * elem_count));
// }
//
// void me_free(void *ptr)
// {
// 	t_ptr *p;
//
// 	// printf("FREE\n");
// 	p = find_ptr(ptr);
// 	if (p != NULL)
// 	{
// 		__libc_free(p->ptr);
// 		p->ptr = NULL;
// 		p->size = 0;
// 	}
// }
