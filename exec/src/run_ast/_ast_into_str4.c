/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _ast_into_str4.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 12:26:51 by maiboyer          #+#    #+#             */
/*   Updated: 2024/09/14 12:46:00 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "exec/_run_ast.h"
#include "me/string/string.h"
#include "me/str/str.h"
#include "me/convert/numbers_to_str.h"

void	_run_word_into_str(t_usize idx, t_ast_node *elem,
		t_word_iterator *state)
{
	(void)(idx);
	if (elem == NULL || *elem == NULL || state == NULL)
		return ;
	if (_ast_get_str(*elem, state, &state->res.value))
		return ;
}

t_error	_exp_into_str(t_ast_node self, t_state *state, t_vec_str *append)
{
	t_expansion_result	res;
	t_vec_str			splitted;
	t_str				tmp;

	if (self == NULL || state == NULL || append == NULL
		|| self->kind != AST_EXPANSION)
		return (ERROR);
	if (run_expansion(&self->data.expansion, state, &res))
		return (ERROR);
	if (res.value == NULL)
		return (NO_ERROR);
	if (str_split(res.value, _get_ifs_value(state), &splitted))
		return (ERROR);
	while (!vec_str_pop_front(&splitted, &tmp))
		vec_str_push(append, tmp);
	vec_str_free(splitted);
	return (NO_ERROR);
}

t_error	_arith_into_str(t_ast_node self, t_state *state, t_vec_str *append)
{
	if (self == NULL || state == NULL || append == NULL
		|| self->kind != AST_ARITHMETIC_EXPANSION)
		return (ERROR);
	return (NO_ERROR);
}
