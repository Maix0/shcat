/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser_condense_stack.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 13:57:20 by maiboyer          #+#    #+#             */
/*   Updated: 2024/09/13 13:57:41 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser/inner/parser_inner.h"

t_u32	ts_parser__condense_stack(t_parser *self)
{
	bool				has_unpaused_version;
	t_error_comparison	cmp;
	t_error_status		status_i;
	t_error_status		status_j;
	t_stack_version		i;
	t_stack_version		j;
	t_stack_version		n;
	t_subtree			lookahead;
	t_u32				min_error_cost;

	min_error_cost = UINT_MAX;
	i = 0;
	while (i < ts_stack_version_count(self->stack))
	{
		if (ts_stack_is_halted(self->stack, i))
		{
			ts_stack_remove_version(self->stack, i);
			continue ;
		}
		status_i = ts_parser__version_status(self, i);
		if (!status_i.is_in_error && status_i.cost < min_error_cost)
			min_error_cost = status_i.cost;
		j = 0;
		while (j < i)
		{
			status_j = ts_parser__version_status(self, j);
			cmp = ts_parser__compare_versions(self, status_j, status_i);
			if (cmp == ECTakeLeft)
			{
				ts_stack_remove_version(self->stack, i);
				i--;
				j = i;
			}
			if ((cmp == ECPreferLeft || cmp == ECNone)
				&& ts_stack_merge(self->stack, j, i))
			{
				i--;
				j = i;
			}
			if (cmp == ECPreferRight)
			{
				if (ts_stack_merge(self->stack, j, i))
				{
					i--;
					j = i;
				}
				else
					ts_stack_swap_versions(self->stack, i, j);
			}
			if (cmp == ECTakeRight)
			{
				ts_stack_remove_version(self->stack, j);
				i--;
				j--;
			}
			j++;
		}
		i++;
	}
	while (ts_stack_version_count(self->stack) > MAX_VERSION_COUNT)
		ts_stack_remove_version(self->stack, MAX_VERSION_COUNT);
	if (ts_stack_version_count(self->stack) > 0)
	{
		has_unpaused_version = false;
		i = 0;
		n = ts_stack_version_count(self->stack);
		while (i < n)
		{
			if (ts_stack_is_paused(self->stack, i))
			{
				if (!has_unpaused_version
					&& self->accept_count < MAX_VERSION_COUNT)
				{
					min_error_cost = ts_stack_error_cost(self->stack, i);
					lookahead = ts_stack_resume(self->stack, i);
					ts_parser__handle_error(self, i, lookahead);
					has_unpaused_version = true;
				}
				else
				{
					ts_stack_remove_version(self->stack, i);
					i--;
					n--;
				}
			}
			else
				has_unpaused_version = true;
			i++;
		}
	}
	return (min_error_cost);
}
