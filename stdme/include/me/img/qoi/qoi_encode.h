/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   qoi_encode.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 22:36:06 by maiboyer          #+#    #+#             */
/*   Updated: 2023/12/25 22:56:36 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef QOI_ENCODE_H
# define QOI_ENCODE_H

# include "me/img/qoi.h"
# include "me/img/qoi/qoi_utils.h"

typedef struct s_encode_vals
{
	t_i32		i;
	t_i32		max_size;
	t_i32		p;
	t_i32		run;
	t_i32		px_len;
	t_i32		px_end;
	t_i32		px_pos;
	t_i32		channels;
	t_i32		index_pos;
	t_qoi_rgba	index[64];
	t_qoi_rgba	px;
	t_qoi_rgba	px_prev;
}				t_encode_vals;

typedef struct s_v
{
	t_i8		r;
	t_i8		g;
	t_i8		b;
	t_i8		g_r;
	t_i8		g_b;
}				t_v;

static inline void	qoi_encode_if_thingy1(t_encode_vals *vals,
										t_v *v, t_u8 *bytes)
{
	v->r = vals->px.rgba.r - vals->px_prev.rgba.r;
	v->g = vals->px.rgba.g - vals->px_prev.rgba.g;
	v->b = vals->px.rgba.b - vals->px_prev.rgba.b;
	v->g_r = v->r - v->g;
	v->g_b = v->b - v->g;
	if (v->r > -3 && v->r < 2 && v->g > -3 && v->g < 2 && v->b > -3
		&& v->b < 2)
		bytes[vals->p++] = QOI_OP_DIFF | (v->r + 2) << 4 | (v->g
				+ 2) << 2 | (v->b + 2);
	else if (v->g_r > -9 && v->g_r < 8 && v->g > -33 && v->g < 32
		&& v->g_b > -9 && v->g_b < 8)
	{
		bytes[vals->p++] = QOI_OP_LUMA | (v->g + 32);
		bytes[vals->p++] = (v->g_r + 8) << 4 | (v->g_b + 8);
	}
	else
	{
		bytes[vals->p++] = QOI_OP_RGB;
		bytes[vals->p++] = vals->px.rgba.r;
		bytes[vals->p++] = vals->px.rgba.g;
		bytes[vals->p++] = vals->px.rgba.b;
	}
}

static inline void	qoi_encode_inner_inner_inner(t_encode_vals *vals,
							t_v *v, t_u8 *bytes)
{
	if (vals->run > 0)
	{
		bytes[vals->p++] = QOI_OP_RUN | (vals->run - 1);
		vals->run = 0;
	}
	vals->index_pos = qoi_color_hash(vals->px) % 64;
	if (vals->index[vals->index_pos].v == vals->px.v)
		bytes[vals->p++] = QOI_OP_INDEX | vals->index_pos;
	else
	{
		vals->index[vals->index_pos] = vals->px;
		if (vals->px.rgba.a == vals->px_prev.rgba.a)
			qoi_encode_if_thingy1(vals, v, bytes);
		else
		{
			bytes[vals->p++] = QOI_OP_RGBA;
			bytes[vals->p++] = vals->px.rgba.r;
			bytes[vals->p++] = vals->px.rgba.g;
			bytes[vals->p++] = vals->px.rgba.b;
			bytes[vals->p++] = vals->px.rgba.a;
		}
	}
}

static inline void	qoi_encode_inner_inner(t_encode_vals *vals,
							const t_u8 *pixels, t_u8 *bytes)
{
	t_v				v;

	v = (t_v){0};
	while (vals->px_pos < vals->px_len)
	{
		vals->px.rgba.r = pixels[vals->px_pos + 0];
		vals->px.rgba.g = pixels[vals->px_pos + 1];
		vals->px.rgba.b = pixels[vals->px_pos + 2];
		if (vals->channels == 4)
			vals->px.rgba.a = pixels[vals->px_pos + 3];
		if (vals->px.v == vals->px_prev.v)
		{
			vals->run++;
			if (vals->run == 62 || vals->px_pos == vals->px_end)
			{
				bytes[vals->p++] = QOI_OP_RUN | (vals->run - 1);
				vals->run = 0;
			}
		}
		else
			qoi_encode_inner_inner_inner(vals, &v, bytes);
		vals->px_prev = vals->px;
		vals->px_pos += vals->channels;
	}
}

static inline void	*qoi_encode_inner(t_encode_vals *vals,
					const t_qoi_desc *desc,
					const t_u8 *pixels, t_i32 *out_len)
{
	t_u8	*bytes;

	bytes = (t_u8 *)mem_alloc(vals->max_size);
	if (!bytes)
		return (NULL);
	qoi_write_32(bytes, &vals->p, QOI_MAGIC);
	qoi_write_32(bytes, &vals->p, desc->width);
	qoi_write_32(bytes, &vals->p, desc->height);
	bytes[vals->p++] = desc->channels;
	bytes[vals->p++] = desc->colorspace;
	mem_set_zero(vals->index, sizeof(vals->index));
	vals->px_prev.rgba.a = 255;
	vals->px = vals->px_prev;
	vals->px_len = desc->width * desc->height * desc->channels;
	vals->px_end = vals->px_len - desc->channels;
	vals->channels = desc->channels;
	qoi_encode_inner_inner(vals, pixels, bytes);
	vals->i = 0;
	while (vals->i < (t_i32) sizeof(t_u8[8]))
		bytes[vals->p++] = ((t_u8[8]){0, 0, 0, 0, 0, 0, 0, 1})[vals->i++];
	*out_len = vals->p;
	return (bytes);
}

#endif /* QOI_ENCODE_H */
