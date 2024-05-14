/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allocator.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 18:26:27 by maiboyer          #+#    #+#             */
/*   Updated: 2024/05/14 18:28:24 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "aq/allocator.h"
#include "aq/libc_wrapper.h"

t_allocator *global_allocator(void)
{
	static t_allocator global_alloc = {};
	static bool		   init = false;
	if (!init)
	{
		init = true;
		global_alloc = lc_init();
	}
	return (&global_alloc);
}

void uninit_global_allocator(void)
{
	t_allocator *allocator;

	allocator = global_allocator();
	allocator->uninit(allocator);
}
