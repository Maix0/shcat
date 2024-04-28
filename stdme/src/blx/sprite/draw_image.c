/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_image.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 22:43:04 by maiboyer          #+#    #+#             */
/*   Updated: 2023/12/31 15:20:24 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/blx/blx.h"
#include "me/blx/colors.h"
#include "me/blx/sprite.h"
#include <mlx.h>

void	blx_draw_sprite_raw(t_blx *ctx, t_vi2d pos, t_sprite *img)
{
	mlx_put_image_to_window(ctx->mlx, ctx->win, img->img, pos.x, pos.y);
}
