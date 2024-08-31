/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_funcs4.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 16:58:39 by maiboyer          #+#    #+#             */
/*   Updated: 2024/08/31 16:58:51 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser/stack.h"
#include "parser/_inner/stack.h"

t_u32	ts_stack_version_count(const t_stack *self)
{
	return (self->heads.size);
}

TSStateId	ts_stack_state(const t_stack *self, t_stack_version version)
{
	return (array_get(&self->heads, version)->node->state);
}

Length	ts_stack_position(const t_stack *self, t_stack_version version)
{
	return (array_get(&self->heads, version)->node->position);
}

Subtree	ts_stack_last_external_token(const t_stack *self,
		t_stack_version version)
{
	return (array_get(&self->heads, version)->last_external_token);
}
