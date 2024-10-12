/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   from_bytes.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 14:30:56 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:52:36 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/num/u64.h"

t_u64	u64_from_7bytes(t_u8 *msg, t_usize start, t_usize len)
{
	t_usize	i;
	t_usize	out;
	t_u64	temp_val;

	i = 0;
	out = 0;
	if (i + 3 < len)
	{
		temp_val = (t_u64)(msg[start + i]);
		temp_val |= (t_u64)(msg[start + i + 1]) << (8 * 1);
		temp_val |= (t_u64)(msg[start + i + 2]) << (8 * 2);
		temp_val |= (t_u64)(msg[start + i + 3]) << (8 * 3);
		out = temp_val;
		i += 4;
	}
	if (i + 1 < len)
	{
		temp_val = ((t_u64)(msg[start + i + 1]) << (8 * 1)) | (t_u64)(msg[start \
			+ i]);
		out |= temp_val << (i * 8);
		i += 2;
	}
	if (i++ < len)
		out |= (t_u64)(msg[start + i - 1]) << ((i - 1) * 8);
	return (out);
}

t_u64	u64_from_bytes(t_u8 *bytes, t_usize len)
{
	t_u64	out;
	t_usize	i;

	i = 0;
	out = 0;
	while (i < len && i < 8)
	{
		out |= ((t_u64)(bytes[i])) << (8 * i);
		i++;
	}
	return (out);
}
