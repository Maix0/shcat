/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser_handle_error.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 14:04:50 by maiboyer          #+#    #+#             */
/*   Updated: 2024/09/13 14:05:26 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser/inner/parser_inner.h"

void	ts_lexer__mark_end(TSLexer *_self);

void	ts_parser__handle_error(TSParser *self, t_stack_version version,
		t_subtree lookahead)
{
	Length			padding;
	Length			position;
	TSStateId		state;
	TSStateId		state_after_missing_symbol;
	TSSymbol		missing_symbol;
	bool			did_insert_missing_token;
	t_stack_version	v;
	t_stack_version	version_with_missing_tree;
	t_subtree		missing_tree;
	t_u32			i;
	t_u32			lookahead_bytes;
	t_u32			previous_version_count;
	t_u32			version_count;

	previous_version_count = ts_stack_version_count(self->stack);
	ts_parser__do_all_potential_reductions(self, version, 0);
	version_count = ts_stack_version_count(self->stack);
	position = ts_stack_position(self->stack, version);
	did_insert_missing_token = false;
	v = version;
	while (v < version_count)
	{
		if (!did_insert_missing_token)
		{
			state = ts_stack_state(self->stack, v);
			missing_symbol = 1;
			while (missing_symbol < (t_u16)self->language->token_count)
			{
				state_after_missing_symbol = ts_language_next_state(self->language,
						state, missing_symbol);
				if (state_after_missing_symbol == 0
					|| state_after_missing_symbol == state)
				{
					missing_symbol++;
					continue ;
				}
				if (ts_language_has_reduce_action(self->language,
						state_after_missing_symbol,
						ts_subtree_leaf_symbol(lookahead)))
				{
					ts_lexer_reset(&self->lexer, position);
					ts_lexer__mark_end((void *)&self->lexer);
					padding = length_sub(self->lexer.token_end_position,
							position);
					lookahead_bytes = ts_subtree_total_bytes(lookahead)
						+ ts_subtree_lookahead_bytes(lookahead);
					version_with_missing_tree = ts_stack_copy_version(self->stack,
							v);
					missing_tree = ts_subtree_new_missing_leaf(missing_symbol,
							padding, lookahead_bytes, self->language);
					ts_stack_push(self->stack, version_with_missing_tree,
						missing_tree, false, state_after_missing_symbol);
					if (ts_parser__do_all_potential_reductions(self,
							version_with_missing_tree,
							ts_subtree_leaf_symbol(lookahead)))
					{
						did_insert_missing_token = true;
						break ;
					}
				}
				missing_symbol++;
			}
		}
		ts_stack_push(self->stack, v, NULL, false, ERROR_STATE);
		if (v == version)
			v = previous_version_count;
		else
			v += 1;
	}
	i = previous_version_count;
	while (i < version_count)
	{
		ts_stack_merge(self->stack, version, previous_version_count);
		i++;
	}
	ts_stack_record_summary(self->stack, version, MAX_SUMMARY_DEPTH);
	ts_parser__recover(self, version, lookahead);
}
