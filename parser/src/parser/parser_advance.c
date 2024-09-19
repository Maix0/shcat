/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser_advance.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 14:01:20 by maiboyer          #+#    #+#             */
/*   Updated: 2024/09/19 17:24:14 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser/inner/parser_inner.h"

bool	ts_parser__advance(t_parser *self, t_stack_version version)
{
	t_state_id		state;
	t_subtree		mutable_lookahead;
	t_subtree		lookahead;
	TableEntry		table_entry;
	bool			needs_lex;
	t_u32			i;
	t_stack_version	last_reduction_version;
	TSParseAction	action;
	t_state_id		next_state;
	bool			is_fragile;
	bool			end_of_non_terminal_extra;
	t_stack_version	reduction_version;

	lookahead = NULL;
	table_entry = (TableEntry){.action_count = 0};
	state = ts_stack_state(self->stack, version);
	needs_lex = true;
	while (true)
	{
		if (needs_lex)
		{
			needs_lex = false;
			lookahead = ts_parser__lex(self, version, state);
			if (self->has_scanner_error)
				return (false);
			if (lookahead)
				ts_language_table_entry(self->language, state,
					ts_subtree_symbol(lookahead), &table_entry);
			else
				ts_language_table_entry(self->language, state,
					ts_builtin_sym_end, &table_entry);
		}
		last_reduction_version = STACK_VERSION_NONE;
		i = 0;
		while (i < table_entry.action_count)
		{
			action = table_entry.actions[i];
			if (action.type == TSParseActionTypeShift)
			{
				if (action.shift.repetition)
				{
					i++;
					continue ;
				}
				if (action.shift.extra)
					next_state = state;
				else
					next_state = action.shift.state;
				if (ts_subtree_child_count(lookahead) > 0)
					next_state = ts_language_next_state(self->language, state,
							ts_subtree_symbol(lookahead));
				ts_parser__shift(self, version, next_state, lookahead,
					action.shift.extra);
				return (true);
			}
			if (action.type == TSParseActionTypeReduce)
			{
				is_fragile = table_entry.action_count > 1;
				end_of_non_terminal_extra = lookahead == NULL;
				reduction_version = ts_parser__reduce(self, version,
						action.reduce.symbol, action.reduce.child_count,
						action.reduce.dynamic_precedence,
						action.reduce.production_id, is_fragile,
						end_of_non_terminal_extra);
				if (reduction_version != (t_stack_version)STACK_VERSION_NONE)
					last_reduction_version = reduction_version;
				i++;
			}
			if (action.type == TSParseActionTypeAccept)
				return (ts_parser__accept(self, version, lookahead), true);
			if (action.type == TSParseActionTypeRecover)
				return (ts_parser__recover(self, version, lookahead), true);
		}
		if (last_reduction_version != (t_stack_version)STACK_VERSION_NONE)
		{
			ts_stack_renumber_version(self->stack, last_reduction_version,
				version);
			state = ts_stack_state(self->stack, version);
			if (!lookahead)
				needs_lex = true;
			else
				ts_language_table_entry(self->language, state,
					ts_subtree_leaf_symbol(lookahead), &table_entry);
			continue ;
		}
		if (!lookahead)
		{
			ts_stack_halt(self->stack, version);
			return (true);
		}
		if (ts_subtree_is_keyword(lookahead)
			&& ts_subtree_symbol(lookahead) != self->language->keyword_capture_token)
		{
			ts_language_table_entry(self->language, state,
				self->language->keyword_capture_token, &table_entry);
			if (table_entry.action_count > 0)
			{
				mutable_lookahead = ts_subtree_ensure_owner(lookahead);
				ts_subtree_set_symbol(&mutable_lookahead,
					self->language->keyword_capture_token, self->language);
				lookahead = mutable_lookahead;
				continue ;
			}
		}
		if (state == ERROR_STATE)
		{
			ts_parser__recover(self, version, lookahead);
			return (true);
		}
		if (ts_parser__breakdown_top_of_stack(self, version))
		{
			state = ts_stack_state(self->stack, version);
			ts_subtree_release(lookahead);
			needs_lex = true;
			continue ;
		}
		ts_stack_pause(self->stack, version, lookahead);
		return (true);
	}
}
