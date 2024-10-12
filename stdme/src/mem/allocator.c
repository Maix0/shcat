/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allocator.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 18:26:27 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:52:32 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "aq/allocator.h"
#include "aq/internal_vg_funcs.h"
#include "aq/libc_wrapper.h"
#include "aq/melloc.h"
#include "me/types.h"
#include <stdio.h>

t_allocator	*global_allocator(void)
{
	static t_allocator	global_alloc = {};
	static bool			init = false;

	if (!init)
	{
		init = true;
		global_alloc = m_init();
	}
	return (&global_alloc);
}

__attribute__((destructor(200)))
void	uninit_global_allocator(void)
{
	t_allocator	*allocator;

	allocator = global_allocator();
	vg_mem_defined(allocator, sizeof(*allocator));
	allocator->uninit(allocator);
}
