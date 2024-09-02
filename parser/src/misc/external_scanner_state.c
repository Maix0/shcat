/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   external_scanner_state.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 13:55:33 by maiboyer          #+#    #+#             */
/*   Updated: 2024/09/02 18:05:53 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser/external_scanner_state.h"
#include "parser/subtree.h"

void	ts_external_scanner_state_init(t_external_scanner_state *self,
		const t_u8 *data, t_u32 length)
{
	self->length = length;
	self->long_data = mem_alloc(length);
	mem_copy(self->long_data, data, length);
}

t_external_scanner_state	ts_external_scanner_state_copy(\
									const t_external_scanner_state *self)
{
	t_external_scanner_state	result;

	result = *self;
	result.long_data = mem_alloc(self->length);
	mem_copy(result.long_data, self->long_data, self->length);
	return (result);
}

void	ts_external_scanner_state_delete(t_external_scanner_state *self)
{
	mem_free(self->long_data);
}

const t_u8	*ts_external_scanner_state_data(\
		const t_external_scanner_state *self)
{
	return ((const t_u8 *)self->long_data);
}

bool	ts_external_scanner_state_eq(const t_external_scanner_state *self,
		const t_u8 *buffer, t_u32 length)
{
	return (self->length == length
		&& mem_compare(ts_external_scanner_state_data(self), buffer, length));
}
