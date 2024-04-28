/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   qoi_decode.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 22:33:19 by maiboyer          #+#    #+#             */
/*   Updated: 2023/12/25 22:58:27 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef QOI_DECODE_H
# define QOI_DECODE_H

# include "me/img/qoi.h"
# include "me/img/qoi/qoi_utils.h"

typedef struct s_decode_vals
{
	t_i32		px_len;
	t_i32		chunks_len;
	t_i32		px_pos;
	t_i32		p;
	t_i32		run;
	t_i32		b1;
	t_i32		b2;
	t_i32		vg;
	t_u32		header_magic;
	t_qoi_rgba	index[64];
	t_qoi_rgba	px;

}				t_decode_vals;

static inline void	qoi_op_luma_decode(t_decode_vals *vals, const t_u8 *bytes)
{
	vals->b2 = bytes[vals->p++];
	vals->vg = (vals->b1 & 0x3f) - 32;
	vals->px.rgba.r += vals->vg - 8 + ((vals->b2 >> 4) & 0x0f);
	vals->px.rgba.g += vals->vg;
	vals->px.rgba.b += vals->vg - 8 + (vals->b2 & 0x0f);
}

static inline void	qoi_op_diff_decode(t_decode_vals *vals, const t_u8 *bytes)
{
	(void)(bytes);
	vals->px.rgba.r += ((vals->b1 >> 4) & 0x03) - 2;
	vals->px.rgba.g += ((vals->b1 >> 2) & 0x03) - 2;
	vals->px.rgba.b += (vals->b1 & 0x03) - 2;
}

static inline void	qoi_op_rgba_decode(t_decode_vals *vals, const t_u8 *bytes)
{
	vals->px.rgba.r = bytes[vals->p++];
	vals->px.rgba.g = bytes[vals->p++];
	vals->px.rgba.b = bytes[vals->p++];
	vals->px.rgba.a = bytes[vals->p++];
}

static inline void	qoi_op_rgb_decode(t_decode_vals *vals, const t_u8 *bytes)
{
	vals->px.rgba.r = bytes[vals->p++];
	vals->px.rgba.g = bytes[vals->p++];
	vals->px.rgba.b = bytes[vals->p++];
}

static inline void	qoi_decode_inner_inner(t_decode_vals *vals, \
			const t_u8 *bytes)
{
	vals->b1 = bytes[vals->p++];
	if (vals->b1 == QOI_OP_RGB)
		qoi_op_rgb_decode(vals, bytes);
	else if (vals->b1 == QOI_OP_RGBA)
		qoi_op_rgba_decode(vals, bytes);
	else if ((vals->b1 & QOI_MASK_2) == QOI_OP_INDEX)
		vals->px = vals->index[vals->b1];
	else if ((vals->b1 & QOI_MASK_2) == QOI_OP_DIFF)
		qoi_op_diff_decode(vals, bytes);
	else if ((vals->b1 & QOI_MASK_2) == QOI_OP_LUMA)
		qoi_op_luma_decode(vals, bytes);
	else if ((vals->b1 & QOI_MASK_2) == QOI_OP_RUN)
		vals->run = (vals->b1 & 0x3f);
	vals->index[qoi_color_hash(vals->px) % 64] = vals->px;
}

#endif /* QOI_DECODE_H */
