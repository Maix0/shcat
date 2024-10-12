/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valgrind_block.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 22:51:55 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:51:10 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "aq/internal_vg_funcs.h"

#ifdef VGFUNCS

void	vg_block_malloc(void *ptr, t_usize size)
{
	VALGRIND_MALLOCLIKE_BLOCK(ptr, size, redzone_size(), ZEROED_ALLOC);
}

void	vg_block_resize(void *ptr, t_usize oldsize, t_usize newsize)
{
	VALGRIND_RESIZEINPLACE_BLOCK(ptr, oldsize, newsize, redzone_size());
}

void	vg_block_free(void *ptr)
{
	VALGRIND_FREELIKE_BLOCK(ptr, redzone_size());
}

#endif
