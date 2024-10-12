/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valgrind_mem_status.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 23:08:47 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:51:10 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "aq/internal_vg_funcs.h"

#ifdef VGFUNCS

void	vg_mem_no_access(void *ptr, t_usize size)
{
	VALGRIND_MAKE_MEM_NOACCESS(ptr, size);
}

void	vg_mem_undefined(void *ptr, t_usize size)
{
	VALGRIND_MAKE_MEM_UNDEFINED(ptr, size);
}

void	vg_mem_defined(void *ptr, t_usize size)
{
	VALGRIND_MAKE_MEM_DEFINED(ptr, size);
}

#endif
