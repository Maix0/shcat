/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_image.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 21:59:04 by maiboyer          #+#    #+#             */
/*   Updated: 2023/12/26 15:40:08 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/blx/blx.h"
#include "me/blx/colors.h"
#include "me/blx/sprite.h"
#include <mlx.h>

bool	blx_sprite_from_xpm(t_blx *ctx, t_str path, t_sprite *out)
{
	t_sprite	spr;
	t_i32		bpp;
	t_i32		size_line;
	t_i32		endian;

	spr.ctx = ctx;
	spr.img = mlx_xpm_file_to_image(ctx->mlx, path, &spr.width, &spr.height);
	if (spr.img == NULL)
		return (false);
	spr.data = (t_u8 *)mlx_get_data_addr(spr.img, &bpp, &size_line, &endian);
	spr.bpp = bpp;
	spr.line_size = (t_usize)size_line;
	spr.big_endian = endian == 1;
	*out = spr;
	return (true);
}

bool	blx_sprite_new(t_blx *ctx, t_i32 width, t_i32 height, t_sprite *out)
{
	t_sprite	spr;
	t_i32		bpp;
	t_i32		size_line;
	t_i32		endian;

	spr.ctx = ctx;
	spr.img = mlx_new_image(ctx->mlx, width, height);
	if (spr.img == NULL)
		return (false);
	spr.data = (t_u8 *)mlx_get_data_addr(spr.img, &bpp, &size_line, &endian);
	spr.bpp = bpp;
	spr.line_size = (t_usize)size_line;
	spr.big_endian = endian == 1;
	spr.width = width;
	spr.height = height;
	*out = spr;
	return (true);
}
