/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   language_getters2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 17:50:29 by maiboyer          #+#    #+#             */
/*   Updated: 2024/08/31 17:54:52 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/types.h"
#include "parser/api.h"
#include "parser/language.h"
#include "parser/parser.h"

bool	ts_language_has_actions(const TSLanguage *self, TSStateId state,
		TSSymbol symbol)
{
	return (ts_language_lookup(self, state, symbol) != 0);
}

const bool	*ts_language_enabled_external_tokens(const TSLanguage *self,
		t_u32 external_scanner_state)
{
	if (external_scanner_state == 0)
		return (NULL);
	else
		return (self->external_scanner.states \
	+ self->external_token_count * external_scanner_state);
}

const TSSymbol	*ts_language_alias_sequence(const TSLanguage *self,
		t_u32 production_id)
{
	if (production_id)
		return (&self->alias_sequences[production_id \
			* self->max_alias_sequence_length]);
	else
		return (NULL);
}

TSSymbol	ts_language_alias_at(const TSLanguage *self, t_u32 production_id,
		t_u32 child_index)
{
	if (production_id)
		return (self->alias_sequences[production_id \
			* self->max_alias_sequence_length + child_index]);
	else
		return (0);
}
