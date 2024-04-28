/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mem_find.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:16:02 by maiboyer          #+#    #+#             */
/*   Updated: 2023/12/09 15:01:36 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/mem/mem_find.h"

void	*mem_find(void *buf, t_u8 find, t_usize count)
{
	t_usize	i;
	t_u8	*buf_bytes;

	i = 0;
	buf_bytes = (t_u8 *)buf;
	while (i < count)
	{
		if (buf_bytes[i] == find)
			return ((void *)&buf_bytes[i]);
		i++;
	}
	return (NULL);
}
