/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   qoi_encode.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 22:38:42 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:52:31 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/img/qoi.h"
#include "me/img/qoi/qoi_encode.h"
#include "me/img/qoi/qoi_utils.h"

void	*qoi_encode(const void *data, const t_qoi_desc *desc, t_i32 *out_len)
{
	t_encode_vals	vals;

	if (data == NULL || out_len == NULL || desc == NULL || desc->width == 0
		|| desc->height == 0 || desc->channels < 3 || desc->channels > 4
		|| desc->colorspace > 1 || desc->height >= QOI_PIXELS_MAX / desc->width)
		return (NULL);
	vals = (t_encode_vals){0};
	vals.max_size = desc->width * desc->height * (desc->channels + 1)
		+ QOI_HEADER_SIZE + sizeof(t_u8[8]);
	return (qoi_encode_inner(&vals, desc, (const t_u8 *)data, out_len));
}
