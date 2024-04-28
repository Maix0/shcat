/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_pixel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 00:48:23 by maiboyer          #+#    #+#             */
/*   Updated: 2023/12/31 15:27:55 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/blx/colors.h"
#include "me/blx/sprite.h"

static bool	sprite_get_pixel_other_bpp(t_sprite *spr, t_vi2d pos, t_color *out)
{
	(void)(spr);
	(void)(pos);
	(void)(out);
	return (true);
}

bool	sprite_get_pixel(t_sprite *spr, t_vi2d pos, t_color *out)
{
	t_u8	*addr;
	t_color	col;

	if (!(pos.x >= 0 && pos.x < spr->width && pos.y >= 0
			&& pos.y < spr->height))
		return (true);
	if (spr->bpp != 32)
		return (sprite_get_pixel_other_bpp(spr, pos, out));
	addr = &(spr->data)[pos.y * spr->line_size + pos.x * 4];
	if (spr->big_endian)
	{
		col.a = addr[0];
		col.r = addr[1];
		col.g = addr[2];
		col.b = addr[3];
	}
	else
	{
		col.a = addr[3];
		col.r = addr[2];
		col.g = addr[1];
		col.b = addr[0];
	}
	*out = col;
	return (false);
}
