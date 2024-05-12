/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   internal_vg_funcs.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 22:20:30 by maiboyer          #+#    #+#             */
/*   Updated: 2024/05/12 23:14:04 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERNAL_VG_FUNCS_H
#define INTERNAL_VG_FUNCS_H

#include "me/alloc/alloc_internal.h"

#include "me/types.h"
#if !defined(NVALGRIND) || defined(VGHEADER)
# ifdef NVALGRIND
#  undef NVALGRIND
# endif
# define VGFUNCS
# include <valgrind/memcheck.h>
# include <valgrind/valgrind.h>
#endif

#define ZEROED_POOL 1
#define ZEROED_ALLOC 1

static inline t_usize redzone_size(void)
{
	return (sizeof(t_mblock));
}

#ifdef VGFUNCS
static inline bool vg_running(void)
{
	return (RUNNING_ON_VALGRIND != 0);
}
#else
static inline bool vg_running(void)
{
	return (false);
}
#endif

void vg_block_malloc(void *ptr, t_usize size);
void vg_block_resize(void *ptr, t_usize oldsize, t_usize newsize);
void vg_block_free(void *ptr);

void vg_mem_no_access(void *ptr, t_usize size);
void vg_mem_undefined(void *ptr, t_usize size);
void vg_mem_defined(void *ptr, t_usize size);

void vg_mempool_create(void *pool);
void vg_mempool_destroy(void *pool);
void vg_mempool_alloc(void *pool, void *addr, t_usize size);
void vg_mempool_free(void *pool, void *addr);

#endif /* INTERNAL_VG_FUNCS_H */
