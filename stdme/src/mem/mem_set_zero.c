/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mem_set_zero.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:58:11 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:52:35 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/mem/mem.h"

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
