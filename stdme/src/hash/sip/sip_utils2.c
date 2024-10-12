/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sip_utils2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 14:29:03 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:52:30 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/hash/sip/sip_utils.h"
#include "me/num/usize.h"

void	compress(t_sip_state *state)
{
	state->v0 = state->v0 + state->v1;
	state->v1 = usize_rotate_left(state->v1, 13);
	state->v1 ^= state->v0;
	state->v0 = usize_rotate_left(state->v0, 32);
	state->v2 = state->v2 + state->v3;
	state->v3 = usize_rotate_left(state->v3, 16);
	state->v3 ^= state->v2;
	state->v0 = state->v0 + state->v3;
	state->v3 = usize_rotate_left(state->v3, 21);
	state->v3 ^= state->v0;
	state->v2 = state->v2 + state->v1;
	state->v1 = usize_rotate_left(state->v1, 17);
	state->v1 ^= state->v2;
	state->v2 = usize_rotate_left(state->v2, 32);
}

t_sip_state	create_state_with_key(t_u64 k0, t_u64 k1)
{
	t_sip_state	state;

	state = (t_sip_state){.v0 = 0, .v1 = 0, .v2 = 0, .v3 = 0};
	state.v0 = k0 ^ 0x736f6d6570736575;
	state.v1 = k1 ^ 0x646f72616e646f6d;
	state.v2 = k0 ^ 0x6c7967656e657261;
	state.v3 = k1 ^ 0x7465646279746573;
	return (state);
}

t_u64	sip13_reset_and_finish(t_sip13 *self)
{
	t_sip_state	state;
	t_u64		b;
	t_u64		ret;

	state = self->state;
	b = (((t_u64)self->length & 0xff) << 56) | self->tail;
	state.v3 ^= b;
	compress(&state);
	state.v0 ^= b;
	state.v2 ^= 0xff;
	compress(&state);
	compress(&state);
	ret = (state.v0 ^ state.v1 ^ state.v2 ^ state.v3);
	self->length = 0;
	self->state.v0 = self->k0 ^ 0x736f6d6570736575;
	self->state.v1 = self->k1 ^ 0x646f72616e646f6d;
	self->state.v2 = self->k0 ^ 0x6c7967656e657261;
	self->state.v3 = self->k1 ^ 0x7465646279746573;
	self->ntail = 0;
	return (ret);
}
