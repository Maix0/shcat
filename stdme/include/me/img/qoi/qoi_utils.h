/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   qoi_utils.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 18:59:56 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:52:06 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef QOI_UTILS_H
# define QOI_UTILS_H

# include "me/img/qoi.h"
# include "me/types.h"

# define QOI_OP_INDEX 0x00 /* 00xxxxxx */
# define QOI_OP_DIFF 0x40  /* 01xxxxxx */
# define QOI_OP_LUMA 0x80  /* 10xxxxxx */
# define QOI_OP_RUN 0xc0   /* 11xxxxxx */
# define QOI_OP_RGB 0xfe   /* 11111110 */
# define QOI_OP_RGBA 0xff  /* 11111111 */
# define QOI_MASK_2 0xc0 /* 11000000 */
# define QOI_MAGIC 0x716f6966u
//(((t_u32)'q') << 24 | ((t_u32)'o') << 16 | ((t_u32)'i') << 8 | ((t_u32)'f'))
# define QOI_HEADER_SIZE 14
/* 2GB is the max file size that this implementation can safely handle. We guard
against anything larger than that, assuming the worst case with 5 bytes per
pixel, rounded down to a nice clean value. 400 million pixels ought to be
enough for anybody. */
# define QOI_PIXELS_MAX 400000000u

typedef union u_qoi_rgba
{
	struct			s_qoi_rgba
	{
		t_u8		r;
		t_u8		g;
		t_u8		b;
		t_u8		a;
	} rgba;
	t_u32			v;
}					t_qoi_rgba;

void				qoi_write_32(t_u8 *bytes, t_i32 *p, t_u32 v);

t_u32				qoi_read_32(const t_u8 *bytes, t_i32 *p);

static inline t_u32	qoi_color_hash(t_qoi_rgba c)
{
	return (c.rgba.r * 3 + c.rgba.g * 5 + c.rgba.b * 7 + c.rgba.a * 11);
}

#endif /* QOI_UTILS_H */
