/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   external_scanner_state.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 13:55:33 by maiboyer          #+#    #+#             */
/*   Updated: 2024/08/24 14:01:34 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser/external_scanner_state.h"
#include "parser/subtree.h"

void ts_external_scanner_state_init(ExternalScannerState *self, const t_u8 *data, t_u32 length)
{
	self->length = length;
	self->long_data = mem_alloc(length);
	mem_copy(self->long_data, data, length);
}

ExternalScannerState ts_external_scanner_state_copy(const ExternalScannerState *self)
{
	ExternalScannerState result = *self;
	result.long_data = mem_alloc(self->length);
	mem_copy(result.long_data, self->long_data, self->length);
	return result;
}

void ts_external_scanner_state_delete(ExternalScannerState *self)
{
	mem_free(self->long_data);
}

const t_u8 *ts_external_scanner_state_data(const ExternalScannerState *self)
{
	return (const t_u8 *)self->long_data;
}

bool ts_external_scanner_state_eq(const ExternalScannerState *self, const t_u8 *buffer, t_u32 length)
{
	return self->length == length && mem_compare(ts_external_scanner_state_data(self), buffer, length);
}

const ExternalScannerState *ts_subtree_external_scanner_state(Subtree self)
{
#ifdef static
# undef static
# define __REAPPLY_STATIC
#endif
	static const ExternalScannerState empty_state = {NULL, .length = 0};
#ifdef __REAPPLY_STATIC
# define static
#endif
	if (self && self->has_external_tokens && self->child_count == 0)
	{
		return &self->external_scanner_state;
	}
	else
	{
		return &empty_state;
	}
}

bool ts_subtree_external_scanner_state_eq(Subtree self, Subtree other)
{
	const ExternalScannerState *state_self = ts_subtree_external_scanner_state(self);
	const ExternalScannerState *state_other = ts_subtree_external_scanner_state(other);
	return ts_external_scanner_state_eq(state_self, ts_external_scanner_state_data(state_other), state_other->length);
}
