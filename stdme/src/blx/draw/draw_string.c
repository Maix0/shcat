/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_string.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 19:02:59 by maiboyer          #+#    #+#             */
/*   Updated: 2023/12/31 15:31:57 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/blx/blx.h"
#include "me/blx/colors.h"
#include "me/blx/sprite.h"
#include "me/types.h"
#include "me/vec2/vec2.h"
#include <stdio.h>

static inline void	inner(t_blx *app, char c, t_vi2d pixel_pos, t_color col)
{
	t_vi2d	o;
	t_color	texel;
	t_vi2d	offset;

	o.x = (c - 32) % 16;
	o.y = (c - 32) / 16;
	texel = new_color(0, 0, 0);
	offset.y = 0;
	while (offset.y < 8)
	{
		offset.x = 0;
		while (offset.x < 8)
		{
			if (!sprite_get_pixel(&app->_data.font, vi2d(offset.x + o.x * 8,
						offset.y + o.y * 8), &texel) && texel.a == 0)
				blx_draw(app, vi2d_add(pixel_pos, offset), col);
			offset.x++;
		}
		offset.y++;
	}
}

static inline t_draw_mode	handle_draw_mode(t_blx *app, t_color col)
{
	t_draw_mode	m;

	m = get_draw_mode(app);
	if (col.a != 0x00)
		set_draw_mode(app, ALPHA);
	else
		set_draw_mode(app, MASK);
	return (m);
}

void	blx_draw_string(t_blx *app, t_vi2d pos, t_const_str sText, t_color col)
{
	t_vi2d		s;
	t_draw_mode	m;
	char		c;

	s.x = 0;
	s.y = 0;
	m = handle_draw_mode(app, col);
	while (*sText)
	{
		c = *sText++;
		if (c == '\n')
		{
			s.x = 0;
			s.y += 8;
		}
		else if (c == '\t')
			s.x += 8 * 4;
		else
		{
			inner(app, c, vi2d(pos.x + s.x, pos.y + s.y), col);
			s.x += 8;
		}
	}
	set_draw_mode(app, m);
}
