/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_pixel_onto.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 16:32:19 by maiboyer          #+#    #+#             */
/*   Updated: 2023/12/31 15:21:33 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/blx/blx.h"
#include "me/blx/sprite.h"
#include <stdio.h>
#include <stdlib.h>

void	sprite_draw_other_bpp(t_sprite *spr, t_vi2d pos, t_color col)
{
	(void)(spr);
	(void)(pos);
	(void)(col);
	return ;
}

void	sprite_draw(t_sprite *spr, t_vi2d pos, t_color col)
{
	t_u8	*addr;

	if (!(pos.x >= 0 && pos.x < spr->width && pos.y >= 0
			&& pos.y < spr->height))
		return ;
	if (spr->bpp != 32)
		return (sprite_draw_other_bpp(spr, pos, col));
	addr = &(spr->data)[pos.y * spr->line_size + pos.x * 4];
	if (!spr->big_endian)
	{
		addr[0] = col.b;
		addr[1] = col.g;
		addr[2] = col.r;
		addr[3] = col.a;
	}
	else
	{
		addr[0] = col.a;
		addr[1] = col.r;
		addr[2] = col.g;
		addr[3] = col.b;
	}
}

/*
	addr = &(img->data)[y * img->line_size + (x << 2)];
	if (!img->big_endian)
		out = ((unsigned long)addr[0] << 24 | (unsigned long)addr[1] << 16 |
				(unsigned long)addr[2] << 8 | addr[3]);
	else
		out = ((unsigned long)addr[3] << 24 | (unsigned long)addr[2] << 16 |
				(unsigned long)addr[1] << 8 | addr[0]);
	return (out);
*/

void	sprite_clear(t_sprite *img, t_color col)
{
	t_vi2d	pos;

	pos.y = 0;
	while (pos.y < img->height)
	{
		pos.x = 0;
		while (pos.x < img->width)
		{
			sprite_draw(img, pos, col);
			pos.x++;
		}
		pos.y++;
	}
}
