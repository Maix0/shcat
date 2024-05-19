/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mem_alloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 14:47:49 by maiboyer          #+#    #+#             */
/*   Updated: 2024/05/14 18:32:31 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/mem/mem.h"
#include "me/mem/_allocator.h"

void *mem_alloc(t_usize size)
{
	t_allocator *a;

	a = global_allocator();
	return (a->alloc(a, size));
}

void mem_free(void *ptr)
{
	t_allocator *a;

	a = global_allocator();
	return (a->free(a, ptr));
}
