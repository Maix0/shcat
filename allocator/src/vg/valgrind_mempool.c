/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valgrind_mempool.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 22:33:30 by maiboyer          #+#    #+#             */
/*   Updated: 2024/05/16 17:44:29 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "aq/internal_vg_funcs.h"
#include "valgrind/valgrind.h"

#ifdef VGFUNCS

void vg_mempool_create_ext(void *pool, t_usize flags)
{
	t_usize actual_flags;

	actual_flags = 0;
	if (flags & MEMPOOL_FLAG_MALLOCLIKE)
		actual_flags |= VALGRIND_MEMPOOL_METAPOOL;
	if (flags & MEMPOOL_FLAG_AUTOFREE)
		actual_flags |= VALGRIND_MEMPOOL_AUTO_FREE;

	VALGRIND_CREATE_MEMPOOL_EXT(pool, 0, ZEROED_POOL, actual_flags);
}

void vg_mempool_resize(void *pool, void *ptr, t_usize size)
{
	VALGRIND_MEMPOOL_CHANGE(pool, ptr, ptr, size);
}

void vg_mempool_create(void *pool)
{
	VALGRIND_CREATE_MEMPOOL(pool, 0, ZEROED_POOL);
}

void vg_mempool_destroy(void *pool)
{
	VALGRIND_DESTROY_MEMPOOL(pool);
}

void vg_mempool_alloc(void *pool, void *addr, t_usize size)
{
	VALGRIND_MEMPOOL_ALLOC(pool, addr, size);
}

void vg_mempool_free(void *pool, void *addr)
{
	VALGRIND_MEMPOOL_FREE(pool, addr);
}

#endif
