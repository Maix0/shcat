/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sip_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maix <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 20:02:12 by maix              #+#    #+#             */
/*   Updated: 2023/12/11 19:09:32 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/hash/sip.h"
#include "me/hash/sip/sip_utils.h"
#include "me/num/u64.h"
#include "me/num/usize.h"
#include <stdio.h>
#include <stdlib.h>

static t_usize	me_min(t_usize lhs, t_usize rhs)
{
	if (lhs < rhs)
		return (lhs);
	return (rhs);
}

static t_usize	handle_remaining(t_sip13 *self, t_u8 *msg, t_usize count,
		bool *exit_early)
{
	t_usize	needed;

	needed = 0;
	*exit_early = false;
	if (self->ntail != 0)
	{
		needed = 8 - self->ntail;
		self->tail |= u64_from_bytes(msg, me_min(count, needed)) << (8 \
			* self->ntail);
		if (count < needed)
		{
			self->ntail += count;
			*exit_early = true;
			return (needed);
		}
		else
		{
			self->state.v3 ^= self->tail;
			compress(&self->state);
			self->state.v0 ^= self->tail;
			self->ntail = 0;
		}
	}
	return (needed);
}

t_usize	read_u8_to_u64(t_u8 p[])
{
	return (((t_u64)((p)[0])) | ((t_u64)((p)[1]) << 8) | \
	((t_u64)((p)[2]) << 16) | ((t_u64)((p)[3]) << 24) | \
	((t_u64)((p)[4]) << 32) | ((t_u64)((p)[5]) << 40) | \
	((t_u64)((p)[6]) << 48) | ((t_u64)((p)[7]) << 56));
}

void	sip13_write_bytes(t_sip13 *self, t_u8 *msg, t_usize count)
{
	bool	exit_early;
	t_usize	needed;
	t_usize	left;
	t_usize	i;
	t_u64	mi;

	self->length += count;
	needed = handle_remaining(self, msg, count, &exit_early);
	if (exit_early)
		return ;
	count = count - needed;
	left = count & 0x7;
	i = needed;
	while (i < count - left)
	{
		mi = read_u8_to_u64(msg + i);
		self->state.v3 ^= mi;
		compress(&self->state);
		self->state.v0 ^= mi;
		i += 8;
	}
	self->tail = u64_from_7bytes(msg, i, left);
	self->ntail = left;
}

t_u64	sip13_finish(t_sip13 *self)
{
	t_sip_state	state;
	t_u64		b;

	state = self->state;
	b = (((t_u64)self->length & 0xff) << 56) | self->tail;
	state.v3 ^= b;
	compress(&state);
	state.v0 ^= b;
	state.v2 ^= 0xff;
	compress(&state);
	compress(&state);
	free(self);
	return (state.v0 ^ state.v1 ^ state.v2 ^ state.v3);
}
