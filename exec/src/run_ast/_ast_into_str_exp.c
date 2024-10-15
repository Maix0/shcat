/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _ast_into_str_exp.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 12:26:51 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:51:21 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "exec/_run_ast.h"
#include "me/string/string.h"
#include "me/str/str.h"
#include "me/convert/numbers_to_str.h"

t_error	_ast_get_str__expansion(t_ast_node elem, t_word_iterator *state,
		t_vec_estr *out)
{
	t_expansion_result	exp_ret;

	if (elem == NULL || state == NULL || out == NULL
		|| elem->kind != AST_EXPANSION)
		return (ERROR);
	if (run_expansion(&elem->data.expansion, state->state, &exp_ret))
		return (ERROR);
	return (vec_estr_push(out,
			(t_expandable_str){.do_expand = \
	state->res.kind == AST_WORD_NO_QUOTE, .value = \
	exp_ret.value}), NO_ERROR);
}

t_error	_ast_get_str__arimethic_expansion(t_ast_node elem,
		t_word_iterator *state, t_vec_estr *out)
{
	t_str	out_str;
	t_i64	out_num;

	if (elem == NULL || state == NULL || out == NULL
		|| elem->kind != AST_ARITHMETIC_EXPANSION)
		return (ERROR);
	if (run_arithmetic_expansion(&elem->data.arithmetic_expansion, state->state,
			&out_num))
		return (ERROR);
	if (i64_to_str(out_num, &out_str))
		return (ERROR);
	vec_estr_push(out,
		(t_expandable_str){.do_expand = state->res.kind == AST_WORD_NO_QUOTE,
		.value = out_str});
	return (NO_ERROR);
}

// vec_estr_push(out, (t_expandable_str){.do_expand =
// state->res.kind == AST_WORD_NO_QUOTE, .value =
// str_clone(exp_out.value)});
t_error	_ast_get_str__command_substitution(t_ast_node elem,
		t_word_iterator *state, t_vec_estr *out)
{
	if (elem == NULL || state == NULL || out == NULL
		|| elem->kind != AST_COMMAND_SUBSTITUTION)
		return (ERROR);
	return (ERROR);
}

t_error	_ast_get_str__word(t_ast_node elem, t_word_iterator *state,
		t_vec_estr *out)
{
	t_vec_str	res;
	t_str		tmp;

	if (elem == NULL || state == NULL || out == NULL || elem->kind != AST_WORD)
		return (ERROR);
	res = vec_str_new(16, str_free);
	if (_ast_into_str(elem, state->state, &res))
		return (vec_str_free(res), ERROR);
	while (!vec_str_pop_front(&res, &tmp))
		vec_estr_push(out, (t_expandable_str){.do_expand = false,
			.value = tmp});
	vec_str_free(res);
	return (NO_ERROR);
}

t_error	_ast_get_str(t_ast_node elem, t_word_iterator *state, t_vec_estr *out)
{
	if (elem == NULL || state == NULL || out == NULL)
		return (ERROR);
	if (elem->kind == AST_RAW_STRING)
		return (_ast_get_str__raw(elem, state, out));
	if (elem->kind == AST_EXPANSION)
		return (_ast_get_str__expansion(elem, state, out));
	if (elem->kind == AST_ARITHMETIC_EXPANSION)
		return (_ast_get_str__arimethic_expansion(elem, state, out));
	if (elem->kind == AST_COMMAND_SUBSTITUTION)
		return (_ast_get_str__command_substitution(elem, state, out));
	if (elem->kind == AST_WORD)
		return (_ast_get_str__word(elem, state, out));
	return (ERROR);
}
