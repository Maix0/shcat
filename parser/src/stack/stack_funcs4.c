/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_funcs4.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 16:58:39 by maiboyer          #+#    #+#             */
/*   Updated: 2024/09/19 18:37:14 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser/inner/stack_inner.h"
#include "parser/inner/stack_inner.h"
#include "parser/language.h"

t_u32	ts_stack_version_count(const t_stack *self)
{
	return (self->heads.size);
}

t_state_id	ts_stack_state(const t_stack *self, t_stack_version version)
{
	return (array_get(&self->heads, version)->node->state);
}

t_length	ts_stack_position(const t_stack *self, t_stack_version version)
{
	return (array_get(&self->heads, version)->node->position);
}

t_subtree	ts_stack_last_external_token(const t_stack *self,
		t_stack_version version)
{
	return (array_get(&self->heads, version)->last_external_token);
}

/// Get the number of nodes in the subtree, for the purpose of measuring
/// how much progress has been made by a given version of the stack.
//
// Count intermediate error nodes even though they are not visible,
// because a stack version's node count is used to check whether it
// has made any progress since the last time it encountered an error.
t_u32	stack__subtree_node_count(t_subtree subtree)
{
	t_u32	count;

	count = ts_subtree_visible_descendant_count(subtree);
	if (ts_subtree_visible(subtree))
		count++;
	if (ts_subtree_symbol(subtree) == ts_builtin_sym_error_repeat)
		count++;
	return (count);
}
