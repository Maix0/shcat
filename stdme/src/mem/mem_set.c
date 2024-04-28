/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mem_set.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:16:02 by maiboyer          #+#    #+#             */
/*   Updated: 2023/12/09 18:15:22 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/mem/mem_set.h"

void	mem_set(void *buf, t_u8 fill_by, t_usize count)
{
	t_usize	i;
	t_u8	*buf_bytes;

	i = 0;
	buf_bytes = (t_u8 *)buf;
	while (i < count)
	{
		buf_bytes[i] = fill_by;
		i++;
	}
}
