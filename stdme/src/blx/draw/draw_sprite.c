/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_sprite.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 22:12:31 by maiboyer          #+#    #+#             */
/*   Updated: 2023/12/31 15:06:55 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/blx/blx.h"
#include "me/blx/sprite.h"
#include "me/types.h"

void	draw_sprite(t_blx *app, t_vi2d pos, t_sprite *spr)
{
	t_vi2d	p;
	t_color	col;

	p.y = 0;
	while (p.y < spr->height)
	{
		p.x = 0;
		while (p.x < spr->width)
		{
			sprite_get_pixel(spr, p, &col);
			blx_draw(app, vi2d_add(pos, p), col);
			p.x++;
		}
		p.y++;
	}
}
