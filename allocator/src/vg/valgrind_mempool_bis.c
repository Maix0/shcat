/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valgrind_mempool_bis.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 22:33:30 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:51:10 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "aq/internal_vg_funcs.h"

#ifdef VGFUNCS

void	vg_mempool_create_ext(void *pool, t_usize flags)
{
	t_usize	actual_flags;

	actual_flags = 0;
	if (flags & MEMPOOL_FLAG_MALLOCLIKE)
		actual_flags |= VALGRIND_MEMPOOL_METAPOOL;
	if (flags & MEMPOOL_FLAG_AUTOFREE)
		actual_flags |= VALGRIND_MEMPOOL_AUTO_FREE;
	VALGRIND_CREATE_MEMPOOL_EXT(pool, 0, ZEROED_POOL, actual_flags);
}

#endif
