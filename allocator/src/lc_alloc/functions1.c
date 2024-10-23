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

void	*malloc(t_usize size);
void	*calloc(t_usize size, t_usize elem);
void	*realloc(void *ptr, t_usize size);
void	*reallocarray(void *ptr, t_usize size, t_usize elem);
void	free(void *ptr);

void	*lc_malloc(t_allocator *self, t_usize size)
{
	(void)(self);
	return (malloc(size));
}

void	*lc_calloc(t_allocator *self, t_usize size, t_usize elem)
{
	(void)(self);
	return (calloc(size, elem));
}

void	*lc_realloc(t_allocator *self, void *ptr, t_usize size)
{
	(void)(self);
	return (realloc(ptr, size));
}

void	*lc_realloc_array(t_allocator *self, void *ptr, t_usize size,
		t_usize elem)
{
	(void)(self);
	return (reallocarray(ptr, size, elem));
}

void	lc_free(t_allocator *self, void *ptr)
{
	(void)(self);
	return (free(ptr));
}
