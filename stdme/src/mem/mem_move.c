/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mem_move.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:16:02 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:52:34 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/mem/mem.h"

void	*mem_move(void *destination, const void *source, t_usize count)
{
	t_usize	i;
	t_u8	*dst;
	t_u8	*src;

	i = 0;
	dst = (t_u8 *)destination;
	src = (t_u8 *)source;
	if (dst < src)
	{
		while (i < count)
		{
			dst[i] = src[i];
			i++;
		}
	}
	else if (dst > src)
	{
		i = count;
		while (i > 0)
		{
			i--;
			dst[i] = src[i];
		}
	}
	return (destination);
}
