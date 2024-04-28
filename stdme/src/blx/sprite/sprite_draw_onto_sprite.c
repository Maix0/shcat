/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sprite_draw_onto_sprite.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 19:33:22 by maiboyer          #+#    #+#             */
/*   Updated: 2023/12/31 15:26:41 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/blx/blx.h"
#include "me/blx/colors.h"
#include "me/blx/sprite.h"
#include "me/types.h"
#include "me/vec2/vec2.h"

void	sprite_draw_onto(t_sprite *dest, t_vi2d pos, t_sprite *source)
{
	t_vi2d	p;
	t_color	col;

	p.y = 0;
	while (p.y < source->height)
	{
		p.x = 0;
		while (p.x < source->width)
		{
			sprite_get_pixel(source, p, &col);
			sprite_draw(dest, vi2d_add(pos, p), col);
			p.x++;
		}
		p.y++;
	}
}
