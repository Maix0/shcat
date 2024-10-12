/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 18:06:34 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:51:04 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "aq/allocator.h"
#include "aq/libc_wrapper.h"

void	lc_uninit(t_allocator *self)
{
	(void)(self);
}

t_allocator	lc_init(void)
{
	return ((t_allocator){
		.alloc = lc_malloc,
		.alloc_array = lc_calloc,
		.realloc = lc_realloc,
		.realloc_array = lc_realloc_array,
		.free = lc_free,
		.uninit = lc_uninit,
		.alloc_data = NULL,
	});
}
