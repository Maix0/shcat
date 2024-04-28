/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   blx_keysym.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 15:07:52 by maiboyer          #+#    #+#             */
/*   Updated: 2023/12/14 15:58:17 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/blx/blx.h"
#include "me/blx/blx_key.h"
#include "me/types.h"
#include "me/vec/vec_u8.h"

t_usize	keysym_to_bit_index(t_keysym key)
{
	if (key < 0xff00)
		return ((((t_usize)key) & 0xff) + 0x0000);
	if (key >= 0xff00)
		return ((((t_usize)key) & 0xff) + 0x0100);
	return (0);
}

bool	get_key(t_vec_u8 *key_storage, t_keysym keysym)
{
	t_usize	index;

	index = keysym_to_bit_index(keysym);
	if (index == 0 || index / 8 > key_storage->len)
		return (false);
	return (!!(key_storage->buffer[index / 8] & (1 << (index % 8))));
}

bool	is_key_pressed(t_blx *ctx, t_keysym key)
{
	return (get_key(&ctx->inputs.keysyms_pressed, key));
}

bool	is_key_held(t_blx *ctx, t_keysym key)
{
	return (get_key(&ctx->inputs.keysyms_held, key));
}

bool	is_key_released(t_blx *ctx, t_keysym key)
{
	return (get_key(&ctx->inputs.keysyms_released, key));
}
