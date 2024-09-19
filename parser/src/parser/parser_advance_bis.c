/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser_advance_bis.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 14:01:20 by maiboyer          #+#    #+#             */
/*   Updated: 2024/09/19 22:00:08 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser/inner/parser_inner.h"

bool	_parser_advance_do_lex(\
			t_parser *self, t_stack_version version, \
			struct s_parser_advance_state *state)
{
	if (state->needs_lex)
	{
		state->needs_lex = false;
		state->lookahead = ts_parser__lex(self, version, state->state);
		if (self->has_scanner_error)
			return (true);
		if (state->lookahead)
			ts_language_table_entry(self->language, state->state,
				ts_subtree_symbol(state->lookahead), &state->table_entry);
		else
			ts_language_table_entry(self->language, state->state,
				ts_builtin_sym_end, &state->table_entry);
	}
	state->last_reduction_version = (t_stack_version)STACK_VERSION_NONE;
	state->i = 0;
	return (false);
}

bool	_parser_advance_shift(\
			t_parser *self, t_stack_version version, \
			struct s_parser_advance_state *state)
{
	if (state->action.shift.repetition)
	{
		state->i++;
		return (false);
	}
	if (state->action.shift.extra)
		state->next_state = state->state;
	else
		state->next_state = state->action.shift.state;
	if (ts_subtree_child_count(state->lookahead) > 0)
		state->next_state = ts_language_next_state(self->language, state->state,
				ts_subtree_symbol(state->lookahead));
	ts_parser__shift(self, version, state->next_state, state->lookahead,
		state->action.shift.extra);
	return (true);
}
