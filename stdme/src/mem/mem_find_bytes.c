/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mem_find_bytes.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:16:02 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:52:33 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/mem/mem.h"
#include "stdio.h"

void	*mem_find_bytes(void *buf, t_u8 *find, t_usize find_len, t_usize count)
{
	t_usize	i;
	t_usize	j;
	t_u8	*buf_bytes;

	i = 0;
	buf_bytes = (t_u8 *)buf;
	while (i < count)
	{
		j = 0;
		while (j < find_len && i + j < count)
		{
			if (buf_bytes[i + j] != find[j])
				break ;
			j++;
		}
		if (j == find_len)
			return ((void *)&buf_bytes[i]);
		i++;
	}
	return (NULL);
}
