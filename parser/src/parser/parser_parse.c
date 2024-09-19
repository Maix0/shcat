/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser_parse.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 13:56:28 by maiboyer          #+#    #+#             */
/*   Updated: 2024/09/19 22:18:23 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser/inner/parser_inner.h"

bool	_parse_condition(t_parser *self, t_u32 *version_count,
		t_stack_version *version)
{
	*version_count = ts_stack_version_count(self->stack);
	return (*version < *version_count);
}

t_error	_parser_parse_init_state(\
		t_parser *self, t_input input, struct s_parser_parse_state *state)
{
	self->operation_count = 0;
	state->first = true;
	state->last_position = 0;
	state->position = 0;
	state->result = NULL;
	state->version = 0;
	state->version_count = 0;
	if (!self->language || !input.read)
		return (ERROR);
	ts_lexer_set_input(&self->lexer, input);
	if (!ts_parser_has_outstanding_parse(self))
	{
		ts_parser__external_scanner_create(self);
		if (self->has_scanner_error)
			return (ts_parser_reset(self), ERROR);
	}
	return (NO_ERROR);
}

t_tree	*_parser_parse_end(\
			t_parser *self, t_input input, struct s_parser_parse_state state)
{
	(void)(input);
	if (self->finished_tree == NULL)
		me_abort("self->finished_tree == NULL");
	ts_subtree_balance(self->finished_tree, self->language);
	state.result = ts_tree_new(self->finished_tree, self->language);
	self->finished_tree = NULL;
	ts_parser_reset(self);
	return (state.result);
}

t_error	_parser_parse_mainloop(\
			t_parser *self, t_input input, struct s_parser_parse_state *state)
{
	(void)(input);
	state->first = false;
	state->version = 0;
	while (_parse_condition(self, &state->version_count, &state->version))
	{
		while (ts_stack_is_active(self->stack, state->version))
		{
			if (!ts_parser__advance(self, state->version))
			{
				if (self->has_scanner_error)
					return (ts_parser_reset(self), ERROR);
				return (ERROR);
			}
			state->position = \
				ts_stack_position(self->stack, state->version).bytes;
			if (state->position > state->last_position \
		|| (state->version > 0 && state->position == state->last_position))
			{
				state->last_position = state->position;
				break ;
			}
		}
		state->version++;
	}
	return (NO_ERROR);
}

t_tree	*ts_parser_parse(t_parser *self, t_input input)
{
	struct s_parser_parse_state	state;

	if (_parser_parse_init_state(self, input, &state))
		return (NULL);
	while (state.first || state.version_count != 0)
	{
		if (_parser_parse_mainloop(self, input, &state))
			return (NULL);
		state.min_error_cost = ts_parser__condense_stack(self);
		if (self->finished_tree \
		&& ts_subtree_error_cost(self->finished_tree) < state.min_error_cost)
		{
			ts_stack_clear(self->stack);
			break ;
		}
	}
	return (_parser_parse_end(self, input, state));
}
