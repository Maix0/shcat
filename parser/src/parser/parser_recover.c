/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser_recover.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 13:46:43 by maiboyer          #+#    #+#             */
/*   Updated: 2024/09/13 13:47:27 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser/inner/parser_inner.h"

void	ts_parser__recover(TSParser *self, t_stack_version version,
		t_subtree lookahead)
{
	Length					position;
	bool					did_recover;
	bool					would_merge;
	t_stack_slice_array		pop;
	t_stack_summary			*summary;
	t_stack_summary_entry	entry;
	t_subtree				parent;
	t_u32					current_error_cost;
	t_u32					depth;
	t_u32					i;
	t_u32					j;
	t_u32					new_cost;
	t_u32					node_count_since_error;
	t_u32					previous_version_count;
	t_vec_subtree			children;
	t_u32					n;
	const TSParseAction		*actions;
	t_subtree				error_repeat;
	t_subtree				mutable_lookahead;

	did_recover = false;
	previous_version_count = ts_stack_version_count(self->stack);
	position = ts_stack_position(self->stack, version);
	summary = ts_stack_get_summary(self->stack, version);
	node_count_since_error = ts_stack_node_count_since_error(self->stack,
			version);
	current_error_cost = ts_stack_error_cost(self->stack, version);
	if (summary && !ts_subtree_is_error(lookahead))
	{
		i = 0;
		while (i < summary->size)
		{
			entry = summary->contents[i];
			if (entry.state == ERROR_STATE)
			{
				i++;
				continue ;
			}
			if (entry.position.bytes == position.bytes)
			{
				i++;
				continue ;
			}
			depth = entry.depth;
			if (node_count_since_error > 0)
				depth++;
			would_merge = false;
			j = 0;
			while (j < previous_version_count)
			{
				if (ts_stack_state(self->stack, j) == entry.state
					&& ts_stack_position(self->stack,
						j).bytes == position.bytes)
				{
					would_merge = true;
					break ;
				}
				j++;
			}
			if (would_merge)
			{
				i++;
				continue ;
			}
			new_cost = current_error_cost + entry.depth
				* ERROR_COST_PER_SKIPPED_TREE + (position.bytes
					- entry.position.bytes) * ERROR_COST_PER_SKIPPED_CHAR
				+ (position.extent.row - entry.position.extent.row)
				* ERROR_COST_PER_SKIPPED_LINE;
			if (ts_parser__better_version_exists(self, version, false,
					new_cost))
				break ;
			if (ts_language_has_actions(self->language, entry.state,
					ts_subtree_symbol(lookahead)))
			{
				if (ts_parser__recover_to_state(self, version, depth,
						entry.state))
				{
					did_recover = true;
					break ;
				}
			}
			i++;
		}
	}
	i = previous_version_count;
	while (i < ts_stack_version_count(self->stack))
	{
		if (!ts_stack_is_active(self->stack, i))
			ts_stack_remove_version(self->stack, i--);
		i++;
	}
	if (did_recover && ts_stack_version_count(self->stack) > MAX_VERSION_COUNT)
	{
		ts_stack_halt(self->stack, version);
		ts_subtree_release(lookahead);
		return ;
	}
	if (did_recover && ts_subtree_has_external_scanner_state_change(lookahead))
	{
		ts_stack_halt(self->stack, version);
		ts_subtree_release(lookahead);
		return ;
	}
	if (ts_subtree_is_eof(lookahead))
	{
		children = vec_subtree_new(16, NULL);
		parent = ts_subtree_new_error_node(&children, false, self->language);
		ts_stack_push(self->stack, version, parent, false, 1);
		ts_parser__accept(self, version, lookahead);
		return ;
	}
	new_cost = current_error_cost + ERROR_COST_PER_SKIPPED_TREE
		+ ts_subtree_total_bytes(lookahead) * ERROR_COST_PER_SKIPPED_CHAR
		+ ts_subtree_total_size(lookahead).extent.row
		* ERROR_COST_PER_SKIPPED_LINE;
	if (ts_parser__better_version_exists(self, version, false, new_cost))
	{
		ts_stack_halt(self->stack, version);
		ts_subtree_release(lookahead);
		return ;
	}
	actions = ts_language_actions(self->language, 1,
			ts_subtree_symbol(lookahead), &n);
	if (n > 0 && actions[n - 1].type == TSParseActionTypeShift && actions[n \
		- 1].shift.extra)
	{
		mutable_lookahead = ts_subtree_ensure_owner(lookahead);
		ts_subtree_set_extra(&mutable_lookahead, true);
		lookahead = (mutable_lookahead);
	}
	children = vec_subtree_new(1, NULL);
	vec_subtree_push(&children, lookahead);
	error_repeat = ts_subtree_new_node(ts_builtin_sym_error_repeat, &children,
			0, self->language);
	if (node_count_since_error > 0)
	{
		pop = ts_stack_pop_count(self->stack, version, 1);
		if (pop.size > 1)
		{
			i = 1;
			while (i < pop.size)
				ts_subtree_array_delete(&pop.contents[i++].subtrees);
			while (ts_stack_version_count(self->stack) > pop.contents[0].version
				+ 1)
				ts_stack_remove_version(self->stack, pop.contents[0].version
					+ 1);
		}
		ts_stack_renumber_version(self->stack, pop.contents[0].version,
			version);
		vec_subtree_push(&pop.contents[0].subtrees, (error_repeat));
		error_repeat = ts_subtree_new_node(ts_builtin_sym_error_repeat,
				&pop.contents[0].subtrees, 0, self->language);
	}
	ts_stack_push(self->stack, version, (error_repeat), false, ERROR_STATE);
	if (ts_subtree_has_external_tokens(lookahead))
		ts_stack_set_last_external_token(self->stack, version,
			ts_subtree_last_external_token(lookahead));
}
