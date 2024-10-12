/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _run_exp_operators.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 12:40:01 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:54:46 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "exec/_run_ast.h"
#include "me/mem/mem.h"
#include "me/str/str.h"
#include "me/convert/numbers_to_str.h"

t_error	_handle_len_operator(t_ast_expansion *self, t_state *state,
		t_expansion_result *value)
{
	t_str	len_str;
	t_usize	len;

	(void)(self);
	(void)(state);
	(void)(value);
	if (value->exists && value->value != NULL)
		len = str_len(value->value);
	else
		len = 0;
	if (u64_to_str(len, &len_str))
		return (ERROR);
	mem_free(value->value);
	value->exists = true;
	value->value = len_str;
	return (NO_ERROR);
}

t_error	_handle_no_operator(t_ast_expansion *self, t_state *state,
		t_expansion_result *value)
{
	t_str	*val;

	if (self == NULL || state == NULL || value == NULL)
		return (ERROR);
	val = hmap_env_get(state->tmp_var, &self->var_name);
	if (val == NULL)
		val = hmap_env_get(state->env, &self->var_name);
	if (val == NULL)
		return (value->exists = false, NO_ERROR);
	value->exists = true;
	value->value = str_clone(*val);
	return (NO_ERROR);
}

t_error	_get_op_func(t_ast_expansion *self,
		t_error (**op_func)(t_ast_expansion *self, t_state *state,
			t_expansion_result *value))
{
	if (self == NULL || op_func == NULL)
		return (ERROR);
	if (self->kind == E_OP_NONE)
		return (*op_func = _handle_no_operator, NO_ERROR);
	return (ERROR);
}

// t_error (*op_func)(t_ast_expansion * self, t_state * state, 
// 	t_expansion_result * value);
// 	if (self == NULL || state == NULL || value == NULL)
// 		return (ERROR);
// 	if (_get_op_func(self, &op_func))
// 		return (ERROR);
// 	if (op_func(self, state, value))
// 		return (ERROR);
// 	return (NO_ERROR);

t_error	_handle_expansion_operator(t_ast_expansion *self, t_state *state,
		t_expansion_result *value)
{
	return (_handle_no_operator(self, state, value));
}
