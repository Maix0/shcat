/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mem_set_zero.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:58:11 by maiboyer          #+#    #+#             */
/*   Updated: 2023/12/09 15:01:57 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/mem/mem_set_zero.h"

void	mem_set_zero(void *buf, t_usize count)
{
	t_u8	*buffer;
	t_usize	index;

	index = 0;
	buffer = (t_u8 *)buf;
	while (index < count)
	{
		buffer[index] = 0;
		index++;
	}
}
