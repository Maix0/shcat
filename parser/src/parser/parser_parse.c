/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser_parse.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 13:56:28 by maiboyer          #+#    #+#             */
/*   Updated: 2024/09/13 13:56:36 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser/inner/parser_inner.h"

bool	_parse_condition(TSParser *self, t_u32 *version_count,
		t_stack_version *version)
{
	*version_count = ts_stack_version_count(self->stack);
	return (*version < *version_count);
}

TSTree	*ts_parser_parse(TSParser *self, TSInput input)
{
	TSTree			*result;
	t_u32			position;
	t_u32			last_position;
	t_u32			version_count;
	t_stack_version	version;
	t_u32			min_error_cost;
	bool			first;

	result = NULL;
	if (!self->language || !input.read)
		return (NULL);
	ts_lexer_set_input(&self->lexer, input);
	if (!ts_parser_has_outstanding_parse(self))
	{
		ts_parser__external_scanner_create(self);
		if (self->has_scanner_error)
			return (ts_parser_reset(self), result);
	}
	self->operation_count = 0;
	position = 0;
	last_position = 0;
	version_count = 0;
	version = 0;
	first = true;
	while (first || version_count != 0)
	{
		first = false;
		version = 0;
		while (_parse_condition(self, &version_count, &version))
		{
			while (ts_stack_is_active(self->stack, version))
			{
				if (!ts_parser__advance(self, version))
				{
					if (self->has_scanner_error)
						return (ts_parser_reset(self), result);
					return (NULL);
				}
				position = ts_stack_position(self->stack, version).bytes;
				if (position > last_position || (version > 0
						&& position == last_position))
				{
					last_position = position;
					break ;
				}
			}
			version++;
		}
		min_error_cost = ts_parser__condense_stack(self);
		if (self->finished_tree
			&& ts_subtree_error_cost(self->finished_tree) < min_error_cost)
		{
			ts_stack_clear(self->stack);
			break ;
		}
	}
	if (self->finished_tree == NULL)
		me_abort("self->finished_tree == NULL");
	ts_subtree_balance(self->finished_tree, self->language);
	result = ts_tree_new(self->finished_tree, self->language);
	self->finished_tree = NULL;
	ts_parser_reset(self);
	return (result);
}

