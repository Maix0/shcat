/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mem_alloc_array.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:53:21 by maiboyer          #+#    #+#             */
/*   Updated: 2024/07/10 17:47:03 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/mem/mem.h"
#include "me/mem/_allocator.h"

void	*mem_alloc_array(t_usize size, t_usize count)
{
	t_allocator	*a;

	a = global_allocator();
	return (a->alloc_array(a, size, count));
}
