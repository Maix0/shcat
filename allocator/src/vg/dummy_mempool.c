/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dummy_mempool.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 22:33:30 by maiboyer          #+#    #+#             */
/*   Updated: 2024/05/17 15:29:59 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "aq/internal_vg_funcs.h"

#ifndef VGFUNCS

void vg_mempool_create_ext(void *pool, t_usize flags)
{
	(void)(pool);
	(void)(flags);
}

void vg_mempool_resize(void *pool, void *ptr, t_usize size)
{
	(void)(pool);
	(void)(ptr);
	(void)(size);
}

void vg_mempool_create(void *pool)
{
	(void)(pool);
}

void vg_mempool_destroy(void *pool)
{
	(void)(pool);
}

void vg_mempool_alloc(void *pool, void *addr, t_usize size)
{
	(void)(pool);
	(void)(addr);
	(void)(size);
}

void vg_mempool_free(void *pool, void *addr)
{
	(void)(pool);
	(void)(addr);
}

#endif