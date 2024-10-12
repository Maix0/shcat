/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mem_realloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 12:46:18 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:52:34 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/mem/_allocator.h"

void	*mem_realloc(void *ptr, t_usize size)
{
	t_allocator	*a;

	a = global_allocator();
	return (a->realloc(a, ptr, size));
}

void	*mem_realloc_array(void *ptr, t_usize size, t_usize count)
{
	t_allocator	*a;

	a = global_allocator();
	return (a->realloc_array(a, ptr, size, count));
}
