/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 20:19:59 by maiboyer          #+#    #+#             */
/*   Updated: 2023/12/31 15:05:17 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/blx/blx.h"
#include "me/blx/sprite.h"
#include <mlx.h>
#include <stdio.h>

void	blx_clear(t_blx *app, t_color col)
{
	sprite_clear(&app->_data.screen, col);
}

void	blx_draw(t_blx *app, t_vi2d pos, t_color col)
{
	t_usize	i;
	t_usize	j;

	if (get_draw_mode(app) == MASK && col.a != 0)
		return ;
	i = 0;
	while (i < app->app.pixel_size)
	{
		j = 0;
		while (j < app->app.pixel_size)
		{
			sprite_draw(&app->_data.screen, vi2d(pos.x * app->app.pixel_size
					+ j, pos.y * app->app.pixel_size + i), col);
			j++;
		}
		i++;
	}
}
