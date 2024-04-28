/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sprite.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 21:59:18 by maiboyer          #+#    #+#             */
/*   Updated: 2024/01/05 00:09:47 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPRITE_H
# define SPRITE_H

# include "me/blx/colors.h"
# include "me/types.h"
# include "me/vec2/vec2.h"

# ifndef BLX_H

typedef struct s_blx	t_blx;

# endif

typedef struct s_sprite
{
	t_blx				*ctx;
	void				*img;
	t_i32				width;
	t_i32				height;
	t_u8				*data;
	t_i32				bpp;
	t_usize				line_size;
	bool				big_endian;
}						t_sprite;

bool					blx_sprite_from_xpm(t_blx *ctx, t_str path,
							t_sprite *out);
bool					blx_sprite_new(t_blx *ctx, t_i32 width, t_i32 height,
							t_sprite *out);
void					blx_sprite_free(t_sprite img);
void					blx_draw_sprite_raw(t_blx *ctx, t_vi2d pos,
							t_sprite *img);
void					sprite_draw(t_sprite *img, t_vi2d pos, t_color col);
void					sprite_clear(t_sprite *img, t_color col);
bool					sprite_get_pixel(t_sprite *spr, t_vi2d pos,
							t_color *out);
void					sprite_draw_onto(t_sprite *dest, t_vi2d pos,
							t_sprite *source);
void					sprite_draw_string(t_sprite *spr, t_vi2d pos,
							t_const_str sText, t_color col);

#endif
