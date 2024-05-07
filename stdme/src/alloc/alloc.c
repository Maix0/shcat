/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alloc.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 10:13:06 by maiboyer          #+#    #+#             */
/*   Updated: 2024/05/07 14:54:56 by maiboyer         ###   ########.fr       */
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
#include <stdlib.h>

// the `+ 16` is twice the size of size_t, only to stay aligned on a 16 byte
// alignement
void *me_malloc(t_usize size)
{
	t_arena_page *arena;
	void		 *ret;

	size = usize_round_up_to(size, 16);
	if (size + 16 > ARENA_SIZE)
		me_abort();
	arena = get_head_arena();
	while (arena->next != NULL && arena->current_index + 16 + size > ARENA_SIZE)
		arena = arena->next;
	if (arena->current_index + 16 + size > ARENA_SIZE)
	{
		if (alloc_arena(&arena->next))
			me_abort();
		arena = arena->next;
	}
	*(t_usize *)&arena->bytes[arena->current_index] = size;
	ret = (void *)&arena->bytes[arena->current_index + 16];
	arena->current_index += 16 + size;
	return (ret);
}

void *me_calloc(t_usize elem_size, t_usize elem_count)
{
	if (elem_size != 0 && elem_count > SIZE_MAX / elem_size)
		return (NULL);
	return (me_malloc(elem_size * elem_count));
}

void *me_realloc(void *ptr, t_usize new_size)
{
	t_arena_page *arena;
	t_usize		  size;
	void		 *ret;

	arena = get_head_arena();
	while (arena != NULL && !((void *)&arena->bytes <= ptr &&
							  ptr <= (void *)(&arena->bytes) + ARENA_SIZE))
		arena = arena->next;
	if (arena == NULL)
		return (NULL);
	size = *(t_usize *)((t_u8 *)(ptr)-16);
	if (size <= new_size)
		return (ptr);
	ret = me_malloc(new_size);
	mem_copy(ret, ptr, size);
	return (ret);
}

void me_free(void *ptr)
{
	t_arena_page *arena;

	arena = get_head_arena();
	while (arena != NULL && !((void *)&arena->bytes <= ptr &&
							  ptr <= (void *)(&arena->bytes) + ARENA_SIZE))
		arena = arena->next;
	if (arena == NULL)
	{
		me_putstr_fd("Tried to free with me_free !\n", 2);
		free(ptr);
	}
}
