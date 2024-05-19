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

/// @brief Create a sprite from an XPM file
/// @param ctx the BLX context
/// @param path the path to the XPM file
/// @param[out] out the output sprite
/// @return true if an error occured, false otherwise
t_error					blx_sprite_from_xpm(t_blx *ctx, t_str path,
							t_sprite *out);

/// @brief Create a new sprite
/// @param ctx the BLX context
/// @param width the width of the sprite in pixels
/// @param height the height of the sprite in pixels
/// @param out[out] the output sprite
/// @return true if an error occured, false otherwise
t_error					blx_sprite_new(t_blx *ctx, t_i32 width, t_i32 height,
							t_sprite *out);
/// @brief Free a sprite
/// @param img the sprite to free
void					blx_sprite_free(t_sprite img);
/// @brief Draw a sprite at a position onto the screen
/// @param ctx the BLX context
/// @param pos the position to draw the sprite at
/// @param img the sprite to draw
void					blx_draw_sprite_raw(t_blx *ctx, t_vi2d pos,
							t_sprite *img);

/// @brief Draw a pixel onto the sprite
/// @param img the sprite to draw onto
/// @param pos the position to draw the pixel at
/// @param col the color of the pixel
void					sprite_draw(t_sprite *img, t_vi2d pos, t_color col);

/// @brief Clear a sprite with a color
/// @param img the sprite to clear
/// @param col the color to clear the sprite with
void					sprite_clear(t_sprite *img, t_color col);

/// @brief Get the color of a pixel on a sprite
/// @param spr the sprite to get the pixel from
/// @param pos the position of the pixel
/// @param[out] out the color of the pixel
/// @return true if an error occured, false otherwise
t_error					sprite_get_pixel(t_sprite *spr, t_vi2d pos,
							t_color *out);

/// @brief Draw a sprite onto another sprite
/// @param dest The sprite to be drawn onto
/// @param pos The position to draw the sprite at
/// @param source The sprite to draw
void					sprite_draw_onto(t_sprite *dest, t_vi2d pos,
							t_sprite *source);

/// @brief Draw a string onto a sprite
/// @param spr The sprite to draw onto
/// @param pos The position to draw the string at
/// @param sText The string to draw
/// @param col The color of the string
void					sprite_draw_string(t_sprite *spr, t_vi2d pos,
							t_const_str sText, t_color col);

#endif
