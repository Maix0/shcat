/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   external_scanner_state2.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 17:37:45 by maiboyer          #+#    #+#             */
/*   Updated: 2024/08/31 17:38:07 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser/external_scanner_state.h"
#include "parser/subtree.h"

const ExternalScannerState	*ts_subtree_external_scanner_state(Subtree self)
{
	static const ExternalScannerState	empty_state = {NULL, .length = 0};

	if (self && self->has_external_tokens && self->child_count == 0)
		return (&self->external_scanner_state);
	else
		return (&empty_state);
}

bool	ts_subtree_external_scanner_state_eq(Subtree self, Subtree other)
{
	const ExternalScannerState	*state_self = \
		ts_subtree_external_scanner_state(self);
	const ExternalScannerState	*state_other = \
		ts_subtree_external_scanner_state(other);

	return (ts_external_scanner_state_eq(state_self,
			ts_external_scanner_state_data(state_other), state_other->length));
}
