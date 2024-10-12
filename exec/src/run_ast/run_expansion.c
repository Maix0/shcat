/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_expansion.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 12:41:23 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:51:25 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "exec/_run_ast.h"

t_error	_get_expansion_value(t_ast_expansion *self, t_state *state,
		t_expansion_result *out)
{
	t_str				*hmap_ret;
	t_expansion_result	ret;

	if (self == NULL || state == NULL || out == NULL)
		return (ERROR);
	hmap_ret = hmap_env_get(state->tmp_var, &self->var_name);
	if (hmap_ret == NULL)
		hmap_ret = hmap_env_get(state->env, &self->var_name);
	ret = (t_expansion_result){.exists = (hmap_ret != NULL), .value = NULL};
	if (ret.exists)
		ret.value = *hmap_ret;
	return (*out = ret, NO_ERROR);
}

/// this functons returns different things depending on the
/// operator and/or the state of the shell NULL != empty
/// string for example
t_error	run_expansion(t_ast_expansion *self, t_state *state,
		t_expansion_result *out)
{
	t_expansion_result	ret;
	bool				is_special_var;

	is_special_var = _is_special_var(self);
	if (is_special_var && _run_expansion_special_var(self, state, &ret))
		return (ERROR);
	if (!is_special_var && _get_expansion_value(self, state, &ret))
		return (ERROR);
	if (_handle_expansion_operator(self, state, &ret))
		return (ERROR);
	if (self->len_operator && _handle_len_operator(self, state, &ret))
		return (ERROR);
	return (*out = ret, NO_ERROR);
}
