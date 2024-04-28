/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   blx.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 17:05:45 by maiboyer          #+#    #+#             */
/*   Updated: 2023/12/31 18:48:40 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BLX_H
# define BLX_H

# include "me/blx/blx_key.h"
# include "me/blx/colors.h"
# include "me/vec2/vec2.h"
# include "me/blx/sprite.h"
# include "me/blx/inputs.h"
# include "me/blx/points.h"
# include "me/types.h"

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
	t_free_function			free;
	t_blx_app				app;
	t_blx_data				_data;
}							t_blx;

int							blx_loop_func(t_blx *ctx);
t_blx						blx_initialize(t_run_function func,
								t_free_function free_fn, t_blx_app data);
void						draw_sprite(t_blx *app, t_vi2d pos,
								t_sprite *spr);
bool						is_key_pressed(t_blx *ctx, t_keysym input);
bool						is_key_held(t_blx *ctx, t_keysym input);
bool						is_key_released(t_blx *ctx, t_keysym input);
void						blx_run(t_blx app);
void						blx_free(t_blx app);
void						blx_draw(t_blx *app, t_vi2d pos, t_color col);
void						blx_clear(t_blx *app, t_color col);
void						sprite_draw_onto(t_sprite *dest, t_vi2d pos,
								t_sprite *source);
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
