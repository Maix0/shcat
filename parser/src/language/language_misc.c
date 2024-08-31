/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   language_misc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 17:51:00 by maiboyer          #+#    #+#             */
/*   Updated: 2024/08/31 17:55:29 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/types.h"
#include "parser/api.h"
#include "parser/language.h"
#include "parser/parser.h"

void	ts_language_table_entry(const TSLanguage *self, TSStateId state,
		TSSymbol symbol, TableEntry *result)
{
	t_u32						action_index;
	const TSParseActionEntry	*entry;

	if (symbol == ts_builtin_sym_error || symbol == ts_builtin_sym_error_repeat)
	{
		result->action_count = 0;
		result->is_reusable = false;
		result->actions = NULL;
	}
	else
	{
		action_index = ts_language_lookup(self, state, symbol);
		entry = &self->parse_actions[action_index];
		result->action_count = entry->entry.count;
		result->is_reusable = entry->entry.reusable;
		result->actions = (const TSParseAction *)(entry + 1);
	}
}

TSStateId	ts_language_next_state(const TSLanguage *self, TSStateId state,
		TSSymbol symbol)
{
	t_u32				count;
	const TSParseAction	*actions;
	TSParseAction		action;

	if (symbol == ts_builtin_sym_error || symbol == ts_builtin_sym_error_repeat)
	{
		return (0);
	}
	else if (symbol < self->token_count)
	{
		actions = ts_language_actions(self, state, symbol, &count);
		if (count > 0)
		{
			action = actions[count - 1];
			if (action.type == TSParseActionTypeShift)
			{
				if (action.shift.extra)
					return (state);
				return (action.shift.state);
			}
		}
		return (0);
	}
	else
		return (ts_language_lookup(self, state, symbol));
}

const TSParseAction	*ts_language_actions(const TSLanguage *self,
		TSStateId state, TSSymbol symbol, t_u32 *count)
{
	TableEntry	entry;

	ts_language_table_entry(self, state, symbol, &entry);
	*count = entry.action_count;
	return (entry.actions);
}

bool	ts_language_has_reduce_action(const TSLanguage *self, TSStateId state,
		TSSymbol symbol)
{
	TableEntry	entry;

	ts_language_table_entry(self, state, symbol, &entry);
	return (entry.action_count > 0
		&& entry.actions[0].type == TSParseActionTypeReduce);
}

// Lookup the table value for a given symbol and state.
//
// For non-terminal symbols, the table value represents a successor state.
// For terminal symbols, it represents an index in the actions table.
// For 'large' parse states, this is a direct lookup. For 'small' parse
// states, this requires searching through the symbol groups to find
// the given symbol.
t_u16	ts_language_lookup(const TSLanguage *self, TSStateId state,
		TSSymbol symbol)
{
	if (state >= self->large_state_count)
		return (me_abort("we got a small parse table, which isn't supported"),
			-1);
	return (self->parse_table[state * self->symbol_count + symbol]);
}
