/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   blx.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 18:01:06 by maiboyer          #+#    #+#             */
/*   Updated: 2023/12/31 20:14:31 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/blx/blx.h"
#include "me/blx/blx_handlers.h"
#include "me/blx/sprite.h"
#include "me/blx/inputs.h"
#include "me/blx/xdata.h"
#include "me/types.h"
#include "me/vec/vec_u8.h"
#include "me/printf/printf.h"
#include <mlx.h>
#include <stdio.h>
#include <stdlib.h>

void	blx_create_fontsheet(t_blx *app);

t_blx	blx_initialize(t_run_function func, t_free_function free_fn,
		t_blx_app data)
{
	t_blx	ctx;

	ctx = (t_blx){.func = func, .app = data, .free = free_fn};
	ctx.mlx = mlx_init();
	if (ctx.mlx == NULL)
		(me_eprintf("Error:\nfailed to inialize blx (mlx) !\n"), exit(1));
	ctx.inputs = create_inputs_manager(&ctx);
	ctx.win = mlx_new_window(ctx.mlx, data.size_x * data.pixel_size, data.size_y
			* data.pixel_size, data.title);
	if (!blx_sprite_new(&ctx, data.size_x * data.pixel_size, data.size_y
			* data.pixel_size, &ctx._data.screen))
		(me_eprintf("Error:\nfailed to inialize blx (screen) !\n"), exit(1));
	blx_create_fontsheet(&ctx);
	return (ctx);
}

//mlx_do_key_autorepeatoff(app.mlx);
void	blx_run(t_blx app)
{
	mlx_hook(app.win, KEYPRESS, KEYPRESSMASK, &blx_key_pressed_handler, &app);
	mlx_hook(app.win, KEYRELEASE, KEYRELEASEMASK, &blx_key_released_handler,
		&app);
	mlx_hook(app.win, DESTROYNOTIFY, NOEVENTMASK, &blx_key_exit_handler, &app);
	mlx_loop_hook(app.mlx, &blx_loop_func, &app);
	mlx_loop(app.mlx);
}

void	blx_free(t_blx app)
{
	blx_sprite_free(app._data.screen);
	blx_sprite_free(app._data.font);
	mlx_do_key_autorepeaton(app.mlx);
	if (app.free)
		app.free(app.app);
	if (app.win)
		mlx_destroy_window(app.mlx, app.win);
	if (app.mlx)
	{
		mlx_destroy_display(app.mlx);
		free(app.mlx);
	}
	vec_u8_free(app.inputs.keysyms_held);
	vec_u8_free(app.inputs.keysyms_pressed);
	vec_u8_free(app.inputs.keysyms_released);
}
