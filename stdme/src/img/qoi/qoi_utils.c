/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   qoi_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 19:02:03 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:52:32 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/img/qoi/qoi_utils.h"
#include "me/types.h"

void	qoi_write_32(t_u8 *bytes, t_i32 *p, t_u32 v)
{
	bytes[(*p)++] = (0xff000000 & v) >> 24;
	bytes[(*p)++] = (0x00ff0000 & v) >> 16;
	bytes[(*p)++] = (0x0000ff00 & v) >> 8;
	bytes[(*p)++] = (0x000000ff & v);
}

t_u32	qoi_read_32(const t_u8 *bytes, t_i32 *p)
{
	t_u32	a;
	t_u32	b;
	t_u32	c;
	t_u32	d;

	a = bytes[(*p)++];
	b = bytes[(*p)++];
	c = bytes[(*p)++];
	d = bytes[(*p)++];
	return (a << 24 | b << 16 | c << 8 | d);
}
