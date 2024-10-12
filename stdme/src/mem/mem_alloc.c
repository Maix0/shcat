/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mem_alloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 14:47:49 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:52:32 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/mem/_allocator.h"
#include "me/mem/mem.h"

void	*mem_alloc(t_usize size)
{
	t_allocator	*a;
	void		*ret;

	a = global_allocator();
	ret = a->alloc(a, size);
	if (ret != NULL)
		mem_set_zero(ret, size);
	return (ret);
}

void	mem_free(void *ptr)
{
	t_allocator	*a;

	a = global_allocator();
	return (a->free(a, ptr));
}
