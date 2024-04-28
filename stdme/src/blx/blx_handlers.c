/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   blx_handlers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 17:44:55 by maiboyer          #+#    #+#             */
/*   Updated: 2023/12/21 19:59:47 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/blx/blx.h"
#include "me/blx/blx_handlers.h"
#include "me/blx/blx_key.h"
#include <mlx.h>
#include <stdio.h>

int	blx_key_pressed_handler(t_keysym keysym, t_blx *ctx)
{
	t_usize	bit_index;

	bit_index = keysym_to_bit_index(keysym);
	if (bit_index / 8 >= ctx->inputs.keysyms_pressed.len)
		return (0);
	if (is_key_held(ctx, bit_index))
		return (0);
	ctx->inputs.keysyms_pressed.buffer[bit_index / 8] |= ((t_u8)1 << (bit_index
				% 8));
	return (1);
}

int	blx_key_released_handler(t_keysym keysym, t_blx *ctx)
{
	t_usize	bit_index;

	bit_index = keysym_to_bit_index(keysym);
	if (bit_index / 8 >= ctx->inputs.keysyms_released.len)
		return (0);
	ctx->inputs.keysyms_held.buffer[bit_index / 8] &= ~((t_u8)1 << (bit_index
				% 8));
	ctx->inputs.keysyms_pressed.buffer[bit_index / 8] &= ~((t_u8)1 << (bit_index
				% 8));
	ctx->inputs.keysyms_released.buffer[bit_index / 8] |= ((t_u8)1 << (bit_index
				% 8));
	return (1);
}

int	blx_key_exit_handler(t_blx *app)
{
	app->_data.exit = true;
	return (1);
}
