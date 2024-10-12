/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 18:02:12 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:51:03 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "aq/allocator.h"
#include "aq/libc_wrapper.h"
#include "me/types.h"

void	*__libc_malloc(t_usize size);
void	*__libc_calloc(t_usize size, t_usize elem);
void	*__libc_realloc(void *ptr, t_usize size);
void	*__libc_reallocarray(void *ptr, t_usize size, t_usize elem);
void	__libc_free(void *ptr);

void	*lc_malloc(t_allocator *self, t_usize size)
{
	(void)(self);
	return (__libc_malloc(size));
}

void	*lc_calloc(t_allocator *self, t_usize size, t_usize elem)
{
	(void)(self);
	return (__libc_calloc(size, elem));
}

void	*lc_realloc(t_allocator *self, void *ptr, t_usize size)
{
	(void)(self);
	return (__libc_realloc(ptr, size));
}

void	*lc_realloc_array(t_allocator *self, void *ptr, t_usize size,
		t_usize elem)
{
	(void)(self);
	return (__libc_reallocarray(ptr, size, elem));
}

void	lc_free(t_allocator *self, void *ptr)
{
	(void)(self);
	return (__libc_free(ptr));
}
