/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   realloc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 16:48:19 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:51:07 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "aq/allocator.h"
#include "aq/internal_vg_funcs.h"
#include "aq/melloc_interal.h"
#include "me/mem/mem.h"
#include "me/types.h"
#include <errno.h>

static void	*_realloc_inner_copy(struct s_allocator_melloc *self, void *ptr, \
								t_usize size, t_chunk *next)
{
	t_chunk	*chk;

	chk = ptr - sizeof(*chk);
	vg_mem_no_access(next, sizeof(*next));
	next = m_realloc(self, NULL, size);
	vg_mem_defined(chk, sizeof(*chk));
	mem_move(next, ptr, chk->size);
	vg_mem_no_access(chk, sizeof(*chk));
	m_free(self, ptr);
	return (next);
}

static void	*_realloc_inner(struct s_allocator_melloc *self, void *ptr, \
				t_usize size)
{
	t_usize	old_size;
	t_chunk	*chk;
	t_chunk	*next;

	chk = ptr - sizeof(*chk);
	vg_mem_defined(chk, sizeof(*chk));
	if (chk->size >= size)
		return (vg_mem_no_access(chk, sizeof(*chk)), ptr);
	next = get_next_block(chk, false);
	(vg_mem_defined(next, sizeof(*next)), vg_mem_defined(chk, sizeof(*chk)));
	if (next != NULL && !next->used && chk->size + next->size
		+ sizeof(*next) >= size)
	{
		old_size = chk->size;
		chk->size += next->size + sizeof(*next);
		return (vg_mem_undefined(next, next->size + sizeof(*next)), \
	vg_block_resize((void *)chk + sizeof(*chk), old_size, chk->size), \
	vg_mem_no_access(chk, sizeof(*chk)), ptr);
	}
	else
		return (_realloc_inner_copy(self, ptr, size, next));
}

static void	*_realloc_alloc(struct s_allocator_melloc *self, t_usize size)
{
	t_chunk	*chunk;

	chunk = find_chunk_of_size(self, size);
	if (chunk == NULL)
	{
		if (alloc_new_page(self, size + sizeof(t_chunk) * 2))
			return (m_alloc_error(self, "Unable to alloc page"));
		chunk = find_chunk_of_size(self, size);
		if (chunk == NULL)
			return (m_alloc_error(self, "Unable to find block"));
	}
	vg_mem_defined((void *)chunk, sizeof(*chunk));
	chunk->used = true;
	vg_mem_defined((void *)chunk + sizeof(*chunk), chunk->size);
	mem_set_zero((void *)chunk + sizeof(*chunk), chunk->size);
	vg_block_malloc((void *)chunk + sizeof(*chunk), chunk->size);
	vg_mem_no_access((void *)chunk, sizeof(*chunk));
	return ((void *)chunk + sizeof(*chunk));
}

void	*m_realloc(struct s_allocator_melloc *self, void *ptr, t_usize size)
{
	if (size > INT32_MAX - sizeof(t_chunk) * 10)
		return (errno = ENOMEM, NULL);
	size = round_to_pow2(size, PAGE_ALIGN);
	if (ptr != NULL && size == 0)
		return (m_free(self, ptr), NULL);
	if (ptr == NULL)
		return (_realloc_alloc(self, size));
	else
		return (_realloc_inner(self, ptr, size));
}

void	*m_realloc_array(struct s_allocator_melloc *self, void *ptr,
		t_usize size, t_usize count)
{
	if (size != 0 && count > SIZE_MAX / size)
		return (m_alloc_error(self, "Realloc array overflow"));
	return (m_realloc(self, ptr, size * count));
}
