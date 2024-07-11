/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   blx.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 17:05:45 by maiboyer          #+#    #+#             */
/*   Updated: 2024/07/11 18:56:47 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BLX_H
# define BLX_H

# include "me/blx/blx_key.h"
# include "me/blx/colors.h"
# include "me/blx/inputs.h"
# include "me/blx/sprite.h"
# include "me/types.h"
# include "me/vec2/vec2.h"

typedef struct s_blx		t_blx;

typedef struct s_blx_app
{
	t_str					title;
	t_u32					size_x;
	t_u32					size_y;
	t_u32					pixel_size;
	void					*data;
}							t_blx_app;

typedef bool				(*t_run_function)(t_blx *ctx);
typedef void				(*t_free_function)(t_blx_app app);

typedef enum e_draw_mode
{
	REPLACE,
	MASK,
	ALPHA,
}							t_draw_mode;

typedef struct s_blx_data
{
	t_sprite				screen;
	bool					exit;
	t_draw_mode				draw_mode;
	t_sprite				font;
}							t_blx_data;

typedef struct s_blx
{
	void					*mlx;
	void					*win;
	t_blx_input				inputs;
	t_run_function			func;
	t_free_function			mem_free;
	t_blx_app				app;
	t_blx_data				_data;
}							t_blx;

/// @brief The main loop function
/// @param ctx the BLX context
/// @note this is the function that will be called every frame
/// @note this is an internal function, you should not call it yourself
int							blx_loop_func(t_blx *ctx);

/// @brief Initialize the BLX context
/// @param func the main loop function
/// @param free_fn the free function
/// @param data the application data
/// @return 
t_blx						blx_initialize(t_run_function func, \
		t_free_function free_fn, t_blx_app data);

/// @brief Draw a sprite onto the screen
/// @param app The blx context
/// @param pos The position to draw the sprite at
/// @param spr The sprite to draw
void						draw_sprite(t_blx *app, t_vi2d pos, t_sprite *spr);

/// @brief is the key pressed
/// @param ctx the BLX context
/// @param input the key to check
/// @return true if the key is pressed, false otherwise
bool						is_key_pressed(t_blx *ctx, t_keysym input);

/// @brief is the key held
/// @param ctx the BLX context
/// @param input the key to check
/// @return true if the key is held, false otherwise
bool						is_key_held(t_blx *ctx, t_keysym input);

/// @brief is the key released
/// @param ctx the BLX context
/// @param input the key to check
/// @return true if the key is released, false otherwise
bool						is_key_released(t_blx *ctx, t_keysym input);

/// @brief Start the game
/// @param app the BLX context
void						blx_run(t_blx app);

/// @brief Free the game
/// @param app the BLX context
void						blx_free(t_blx app);

/// @brief Draw a pixel onto the screen
/// @param app the BLX context
/// @param pos the position to draw the pixel at
/// @param col the color of the pixel
void						blx_draw(t_blx *app, t_vi2d pos, t_color col);

/// @brief Clear the screen with a color
/// @param app the BLX context
/// @param col the color to clear the screen with
void						blx_clear(t_blx *app, t_color col);

/// @brief Draw a sprite onto another sprite
/// @param dest the sprite to be drawn onto
/// @param pos the position to draw the sprite at
/// @param source the sprite to draw
void						sprite_draw_onto(t_sprite *dest, t_vi2d pos,
								t_sprite *source);

/// @brief Draw a string onto the screen
/// @param app the BLX context
/// @param pos the position to draw the string at
/// @param s the string to draw
/// @param col  the color of the string
void						blx_draw_string(t_blx *app, t_vi2d pos,
								t_const_str s, t_color col);

static inline t_draw_mode	get_draw_mode(t_blx *app)
{
	return (app->_data.draw_mode);
}

static inline void	set_draw_mode(t_blx *app, t_draw_mode mode)
{
	app->_data.draw_mode = mode;
}

#endif
