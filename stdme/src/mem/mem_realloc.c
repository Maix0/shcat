/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mem_realloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 12:46:18 by maiboyer          #+#    #+#             */
/*   Updated: 2024/05/07 12:47:12 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "me/mem/mem_realloc.h"
#include "me/alloc/alloc.h"

void *mem_realloc(void *ptr, t_usize size)
{
	return (me_realloc(ptr, size));
}
