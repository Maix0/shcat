/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   external_scanner_state2.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 17:37:45 by maiboyer          #+#    #+#             */
/*   Updated: 2024/09/02 18:06:09 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser/external_scanner_state.h"
#include "parser/subtree.h"

const t_external_scanner_state	*ts_subtree_external_scanner_state(\
		t_subtree self)
{
	static const t_external_scanner_state	empty_state = {NULL, .length = 0};

	if (self && self->has_external_tokens && self->child_count == 0)
		return (&self->external_scanner_state);
	else
		return (&empty_state);
}

bool	ts_subtree_external_scanner_state_eq(t_subtree self, t_subtree other)
{
	const t_external_scanner_state	*state_self = \
		ts_subtree_external_scanner_state(self);
	const t_external_scanner_state	*state_other = \
		ts_subtree_external_scanner_state(other);

	return (ts_external_scanner_state_eq(state_self,
			ts_external_scanner_state_data(state_other), state_other->length));
}
