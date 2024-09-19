/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser_advance.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 14:01:20 by maiboyer          #+#    #+#             */
/*   Updated: 2024/09/19 22:17:53 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser/inner/parser_inner.h"

bool	_parser_advance_do_lex(\
			t_parser *self, t_stack_version version, \
			struct s_parser_advance_state *state);
bool	_parser_advance_shift(\
			t_parser *self, t_stack_version version, \
			struct s_parser_advance_state *state);

bool	_process_single_action(\
			t_parser *self, t_stack_version version, \
			struct s_parser_advance_state *state)
{
	state->action = state->table_entry.actions[state->i];
	if (state->action.type == TSParseActionTypeShift)
	{
		if (_parser_advance_shift(self, version, state))
			return (true);
		return (false);
	}
	if (state->action.type == TSParseActionTypeReduce)
	{
		state->is_fragile = state->table_entry.action_count > 1;
		state->end_of_non_terminal_extra = state->lookahead == NULL;
		state->reduction_version = ts_parser__reduce(self, version,
				state->action.reduce.symbol, state->action.reduce.child_count,
				state->action.reduce.dynamic_precedence,
				state->action.reduce.production_id, state->is_fragile,
				state->end_of_non_terminal_extra);
		if (state->reduction_version != (t_stack_version)STACK_VERSION_NONE)
			state->last_reduction_version = state->reduction_version;
		state->i++;
	}
	if (state->action.type == TSParseActionTypeAccept)
		return (ts_parser__accept(self, version, state->lookahead), true);
	if (state->action.type == TSParseActionTypeRecover)
		return (ts_parser__recover(self, version, state->lookahead), true);
	return (false);
}

bool	_parser_handle_first_reduction(\
			t_parser *self, t_stack_version version, \
			struct s_parser_advance_state *state)
{
	if (state->last_reduction_version != (t_stack_version)STACK_VERSION_NONE)
	{
		ts_stack_renumber_version(self->stack, state->last_reduction_version,
			version);
		state->state = ts_stack_state(self->stack, version);
		if (!state->lookahead)
			state->needs_lex = true;
		else
			ts_language_table_entry(self->language, state->state,
				ts_subtree_leaf_symbol(state->lookahead), &state->table_entry);
		return (true);
	}
	return (false);
}

bool	_parser_handle_keyword(\
			t_parser *self, t_stack_version version, \
			struct s_parser_advance_state *state)
{
	(void)(version);
	if (ts_subtree_is_keyword(state->lookahead)
		&& ts_subtree_symbol(state->lookahead) \
			!= self->language->keyword_capture_token)
	{
		ts_language_table_entry(self->language, state->state,
			self->language->keyword_capture_token, &state->table_entry);
		if (state->table_entry.action_count > 0)
		{
			state->mutable_lookahead = ts_subtree_ensure_owner(\
											state->lookahead);
			ts_subtree_set_symbol(&state->mutable_lookahead,
				self->language->keyword_capture_token, self->language);
			state->lookahead = state->mutable_lookahead;
			return (true);
		}
	}
	return (false);
}

bool	_parser_loop_inner(\
			t_parser *self, t_stack_version version, \
			struct s_parser_advance_state *state)
{
	while (state->i < state->table_entry.action_count)
		if (_process_single_action(self, version, state))
			return (true);
	if (_parser_handle_first_reduction(self, version, state))
		return (false);
	if (!state->lookahead)
		return (ts_stack_halt(self->stack, version), true);
	if (_parser_handle_keyword(self, version, state))
		return (false);
	if (state->state == ERROR_STATE)
		return (ts_parser__recover(self, version, state->lookahead), true);
	if (ts_parser__breakdown_top_of_stack(self, version))
	{
		state->state = ts_stack_state(self->stack, version);
		ts_subtree_release(state->lookahead);
		state->needs_lex = true;
		return (false);
	}
	return (ts_stack_pause(self->stack, version, state->lookahead), true);
}

bool	ts_parser__advance(t_parser *self, t_stack_version version)
{
	struct s_parser_advance_state	state;

	state.lookahead = NULL;
	state.table_entry = (TableEntry){.action_count = 0};
	state.state = ts_stack_state(self->stack, version);
	state.needs_lex = true;
	while (true)
	{
		if (_parser_advance_do_lex(self, version, &state))
			return (false);
		if (_parser_loop_inner(self, version, &state))
			return (true);
	}
}
