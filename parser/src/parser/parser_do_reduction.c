/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser_do_reduction.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 14:04:20 by maiboyer          #+#    #+#             */
/*   Updated: 2024/09/19 17:21:23 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser/inner/parser_inner.h"

bool	ts_parser__do_all_potential_reductions(t_parser *self,
		t_stack_version starting_version, t_symbol lookahead_symbol)
{
	t_u32			initial_version_count;
	bool			can_shift_lookahead_symbol;
	t_stack_version	version;
	t_u32			i;
	t_u32			version_count;
	bool			merged;
	t_stack_version	j;
	t_state_id		state;
	bool			has_shift_action;
	t_symbol		first_symbol;
	t_symbol		end_symbol;
	t_stack_version	reduction_version;
	t_reduce_action	reduce_action;
	t_u32			k;
	t_symbol		symbol;
	TableEntry		entry;
	TSParseAction	action;

	initial_version_count = ts_stack_version_count(self->stack);
	can_shift_lookahead_symbol = false;
	version = starting_version;
	i = 0;
	while (true)
	{
		version_count = ts_stack_version_count(self->stack);
		if (version >= version_count)
			break ;
		merged = false;
		j = initial_version_count;
		while (j < version)
		{
			if (ts_stack_merge(self->stack, j, version))
			{
				merged = true;
				break ;
			}
			j++;
		}
		if (merged)
		{
			i++;
			continue ;
		}
		state = ts_stack_state(self->stack, version);
		has_shift_action = false;
		self->reduce_actions.len = 0;
		if (lookahead_symbol != 0)
		{
			first_symbol = lookahead_symbol;
			end_symbol = lookahead_symbol + 1;
		}
		else
		{
			first_symbol = 1;
			end_symbol = self->language->token_count;
		}
		symbol = first_symbol;
		while (symbol < end_symbol)
		{
			ts_language_table_entry(self->language, state, symbol, &entry);
			k = 0;
			while (k < entry.action_count)
			{
				action = entry.actions[k];
				if ((action.type == TSParseActionTypeShift
						|| action.type == TSParseActionTypeRecover)
					&& (!action.shift.extra && !action.shift.repetition))
					has_shift_action = true;
				if ((action.type == TSParseActionTypeReduce)
					&& (action.reduce.child_count > 0))
					ts_reduce_action_set_add(&self->reduce_actions,
												(t_reduce_action){
													.symbol = action.reduce.symbol,
													.count = action.reduce.child_count,
													.dynamic_precedence = action.reduce.dynamic_precedence,
													.production_id = action.reduce.production_id,
												});
				k++;
			}
			symbol++;
		}
		reduction_version = STACK_VERSION_NONE;
		k = 0;
		while (k < self->reduce_actions.len)
		{
			reduce_action = self->reduce_actions.buffer[k];
			reduction_version = ts_parser__reduce(self, version,
					reduce_action.symbol, reduce_action.count,
					reduce_action.dynamic_precedence,
					reduce_action.production_id, true, false);
			k++;
		}
		if (has_shift_action)
			can_shift_lookahead_symbol = true;
		else if (reduction_version != (t_stack_version)STACK_VERSION_NONE
			&& i < MAX_VERSION_COUNT)
		{
			ts_stack_renumber_version(self->stack, reduction_version, version);
			i++;
			continue ;
		}
		else if (lookahead_symbol != 0)
			ts_stack_remove_version(self->stack, version);
		if (version == starting_version)
			version = version_count;
		else
			version++;
		i++;
	}
	return (can_shift_lookahead_symbol);
}
