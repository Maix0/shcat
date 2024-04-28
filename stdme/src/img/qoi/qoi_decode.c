/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   qoi_decode.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 22:31:40 by maiboyer          #+#    #+#             */
/*   Updated: 2023/12/25 22:35:44 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/img/qoi.h"
#include "me/img/qoi/qoi_utils.h"
#include "me/img/qoi/qoi_decode.h"

static inline void	*qoi_decode_inner(t_decode_vals *vals, const t_u8 *bytes,
					t_i32 channels, t_i32 size)
{
	t_u8			*pixels;

	pixels = (t_u8 *)mem_alloc(vals->px_len);
	if (!pixels)
		return (NULL);
	mem_set_zero(vals->index, sizeof(vals->index));
	vals->px.v = 0;
	vals->px.rgba.a = 255;
	vals->chunks_len = size - (t_i32) sizeof(t_u8[8]);
	vals->px_pos = 0;
	while (vals->px_pos < vals->px_len)
	{
		if (vals->run > 0)
			vals->run--;
		else if (vals->p < vals->chunks_len)
			qoi_decode_inner_inner(vals, bytes);
		pixels[vals->px_pos + 0] = vals->px.rgba.r;
		pixels[vals->px_pos + 1] = vals->px.rgba.g;
		pixels[vals->px_pos + 2] = vals->px.rgba.b;
		if (channels == 4)
			pixels[vals->px_pos + 3] = vals->px.rgba.a;
		vals->px_pos += channels;
	}
	return (pixels);
}

void	*qoi_decode(const void *data, t_i32 size, t_qoi_desc *desc,
		t_i32 channels)
{
	const t_u8		*bytes;
	t_decode_vals	vals;

	vals.p = 0;
	vals.run = 0;
	if (data == NULL || desc == NULL || (channels != 0 && channels != 3
			&& channels != 4) || size < QOI_HEADER_SIZE
		+ (t_i32) sizeof(t_u8[8]))
		return (NULL);
	bytes = (const t_u8 *)data;
	vals.header_magic = qoi_read_32(bytes, &vals.p);
	desc->width = qoi_read_32(bytes, &vals.p);
	desc->height = qoi_read_32(bytes, &vals.p);
	desc->channels = bytes[vals.p++];
	desc->colorspace = bytes[vals.p++];
	if (desc->width == 0 || desc->height == 0 || desc->channels < 3
		|| desc->channels > 4 || desc->colorspace > 1
		|| vals.header_magic != QOI_MAGIC || desc->height >= QOI_PIXELS_MAX
		/ desc->width)
		return (NULL);
	if (channels == 0)
		channels = desc->channels;
	vals.px_len = desc->width * desc->height * channels;
	return (qoi_decode_inner(&vals, bytes, channels, size));
}
