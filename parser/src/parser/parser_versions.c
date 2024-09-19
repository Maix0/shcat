/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser_versions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 13:42:50 by maiboyer          #+#    #+#             */
/*   Updated: 2024/09/13 13:42:58 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser/inner/parser_inner.h"

t_error_comparison	ts_parser__compare_versions(t_parser *self,
		t_error_status a, t_error_status b)
{
	(void)self;
	if (!a.is_in_error && b.is_in_error)
	{
		if (a.cost < b.cost)
			return (ECTakeLeft);
		else
			return (ECPreferLeft);
	}
	if (a.is_in_error && !b.is_in_error)
	{
		if (b.cost < a.cost)
			return (ECTakeRight);
		else
			return (ECPreferRight);
	}
	if (a.cost < b.cost)
	{
		if ((b.cost - a.cost) * (1 + a.node_count) > MAX_COST_DIFFERENCE)
			return (ECTakeLeft);
		else
			return (ECPreferLeft);
	}
	if (b.cost < a.cost)
	{
		if ((a.cost - b.cost) * (1 + b.node_count) > MAX_COST_DIFFERENCE)
			return (ECTakeRight);
		else
			return (ECPreferRight);
	}
	if (a.dynamic_precedence > b.dynamic_precedence)
		return (ECPreferLeft);
	if (b.dynamic_precedence > a.dynamic_precedence)
		return (ECPreferRight);
	return (ECNone);
}

t_error_status	ts_parser__version_status(t_parser *self,
		t_stack_version version)
{
	t_u32	cost;
	bool	is_paused;

	cost = ts_stack_error_cost(self->stack, version);
	is_paused = ts_stack_is_paused(self->stack, version);
	if (is_paused)
		cost += ERROR_COST_PER_SKIPPED_TREE;
	return ((t_error_status){.cost = cost,
		.node_count = ts_stack_node_count_since_error(self->stack, version),
		.dynamic_precedence = ts_stack_dynamic_precedence(self->stack, version),
		.is_in_error = is_paused || ts_stack_state(self->stack,
			version) == ERROR_STATE});
}

bool	ts_parser__better_version_exists(t_parser *self,
		t_stack_version version, bool is_in_error, t_u32 cost)
{
	t_error_status		status_i;
	t_length				position;
	t_error_status		status;
	t_stack_version		i;
	t_stack_version		n;
	t_error_comparison	cmp;

	if (self->finished_tree
		&& ts_subtree_error_cost(self->finished_tree) <= cost)
		return (true);
	position = ts_stack_position(self->stack, version);
	status = (t_error_status){
		.cost = cost,
		.is_in_error = is_in_error,
		.dynamic_precedence = ts_stack_dynamic_precedence(self->stack, version),
		.node_count = ts_stack_node_count_since_error(self->stack, version),
	};
	i = 0;
	n = ts_stack_version_count(self->stack);
	while (i < n)
	{
		if (i == version || !ts_stack_is_active(self->stack, i)
			|| ts_stack_position(self->stack, i).bytes < position.bytes)
		{
			i++;
			continue ;
		}
		status_i = ts_parser__version_status(self, i);
		cmp = ts_parser__compare_versions(self, status, status_i);
		if (cmp == ECTakeRight)
		{
			return (true);
		}
		if (cmp == ECPreferRight && ts_stack_can_merge(self->stack, i, version))
			return (true);
		i++;
	}
	return (false);
}
