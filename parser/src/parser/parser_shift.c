/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser_shift.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 13:55:29 by maiboyer          #+#    #+#             */
/*   Updated: 2024/09/19 17:20:02 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser/inner/parser_inner.h"

void	ts_parser__shift(t_parser *self, t_stack_version version,
		t_state_id state, t_subtree lookahead, bool extra)
{
	bool		is_leaf;
	t_subtree	result;
	t_subtree	subtree_to_push;

	is_leaf = ts_subtree_child_count(lookahead) == 0;
	subtree_to_push = lookahead;
	if (extra != ts_subtree_extra(lookahead) && is_leaf)
	{
		result = ts_subtree_ensure_owner(lookahead);
		ts_subtree_set_extra(&result, extra);
		subtree_to_push = (result);
	}
	ts_stack_push(self->stack,(struct s_stack_push_arg){ version, subtree_to_push, !is_leaf, state});
	if (ts_subtree_has_external_tokens(subtree_to_push))
		ts_stack_set_last_external_token(self->stack, version,
			ts_subtree_last_external_token(subtree_to_push));
}
