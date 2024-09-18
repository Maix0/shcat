/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _ast_into_str2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 12:26:51 by maiboyer          #+#    #+#             */
/*   Updated: 2024/09/18 20:59:06 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "exec/_run_ast.h"
#include "me/string/string.h"
#include "me/str/str.h"
#include "me/convert/numbers_to_str.h"

t_error	_ast_get_str__raw__no_quote(t_ast_node elem, t_word_iterator *state,
		t_vec_estr *out)
{
	bool		last_backslash;
	t_string	ret;
	t_usize		i;

	if (elem == NULL || state == NULL || out == NULL
		|| elem->kind != AST_RAW_STRING
		|| elem->data.raw_string.kind != AST_WORD_NO_QUOTE)
		return (ERROR);
	i = 0;
	ret = string_new(elem->data.raw_string.len);
	last_backslash = false;
	while (elem->data.raw_string.str[i])
	{
		if (elem->data.raw_string.str[i] != '\\' || last_backslash)
			string_push_char(&ret, elem->data.raw_string.str[i]);
		last_backslash = false;
		if (elem->data.raw_string.str[i] == '\\' && !last_backslash)
			last_backslash = true;
		i++;
	}
	return (vec_estr_push(out, (t_expandable_str){.do_expand = false,
			.value = ret.buf}), NO_ERROR);
}

t_error	_ast_get_str__raw__single_quote(t_ast_node elem, t_word_iterator *state,
		t_vec_estr *out)
{
	t_string	ret;
	t_usize		i;

	if (elem == NULL || state == NULL || out == NULL
		|| elem->kind != AST_RAW_STRING
		|| elem->data.raw_string.kind != AST_WORD_SINGLE_QUOTE)
		return (ERROR);
	i = 1;
	ret = string_new(elem->data.raw_string.len);
	while (elem->data.raw_string.str[i])
		string_push_char(&ret, elem->data.raw_string.str[i++]);
	string_pop(&ret);
	return (vec_estr_push(out, (t_expandable_str){.do_expand = false,
			.value = ret.buf}), NO_ERROR);
}

t_error	_ast_get_str__raw__double_quote(t_ast_node elem, t_word_iterator *state,
		t_vec_estr *out)
{
	bool		last_backslash;
	t_string	ret;
	t_usize		i;

	if (elem == NULL || state == NULL || out == NULL
		|| elem->kind != AST_RAW_STRING
		|| elem->data.raw_string.kind != AST_WORD_DOUBLE_QUOTE)
		return (ERROR);
	i = 0;
	ret = string_new(elem->data.raw_string.len);
	last_backslash = false;
	while (elem->data.raw_string.str[i])
	{
		if (elem->data.raw_string.str[i] != '\\' || last_backslash)
			string_push_char(&ret, elem->data.raw_string.str[i]);
		last_backslash = false;
		if (elem->data.raw_string.str[i] == '\\' && !last_backslash)
			last_backslash = true;
		i++;
	}
	return (vec_estr_push(out, (t_expandable_str){.do_expand = false,
			.value = ret.buf}), NO_ERROR);
}

t_error	_ast_get_str__raw(t_ast_node elem, t_word_iterator *state,
		t_vec_estr *out)
{
	if (elem == NULL || state == NULL || out == NULL
		|| elem->kind != AST_RAW_STRING)
		return (ERROR);
	if (elem->data.raw_string.kind == AST_WORD_NO_QUOTE)
		return (_ast_get_str__raw__no_quote(elem, state, out));
	if (elem->data.raw_string.kind == AST_WORD_SINGLE_QUOTE)
		return (_ast_get_str__raw__single_quote(elem, state, out));
	if (elem->data.raw_string.kind == AST_WORD_DOUBLE_QUOTE)
		return (_ast_get_str__raw__double_quote(elem, state, out));
	return (ERROR);
}

t_str	_get_ifs_value(t_state *state)
{
	t_str	ifs;
	t_str	*ifs_entry;
	t_str	ifs_key;

	ifs_key = "IFS";
	ifs = NULL;
	ifs_entry = hmap_env_get(state->tmp_var, (t_str *)&ifs_key);
	if (ifs_entry != NULL)
		ifs_entry = hmap_env_get(state->env, (t_str *)&ifs_key);
	if (ifs_entry != NULL)
		ifs = *ifs_entry;
	if (ifs == NULL)
		ifs = " \t\n";
	return (ifs);
}
