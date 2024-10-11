/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _ast_into_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 12:26:51 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/11 22:33:02 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "exec/_run_ast.h"
#include "me/string/string.h"
#include "me/str/str.h"
#include "me/convert/numbers_to_str.h"
#include "me/vec/vec_str.h"

bool	_word_is_star(t_ast_word *word);
t_error	_word_handle_star(t_ast_word *word, t_state *state, t_vec_str *out);
t_error	list_files_in_current_directory(t_vec_str *out);
t_error	_word_into_str_inner(struct s_word_str_args args);

t_error	_word_no_quote(t_state *state, t_word_result *res, t_vec_str *append)
{
	t_string	tmp;
	t_usize		i;

	tmp = string_new(64);
	i = 0;
	while (i < res->value.len)
	{
		if (!res->value.buffer[i].do_expand)
			string_push(&tmp, res->value.buffer[i].value);
		else if (_word_into_str_inner((struct s_word_str_args){i, \
				state, &tmp, res, append, NULL, NULL, NULL}))
			return (ERROR);
		i++;
	}
	vec_str_push(append, tmp.buf);
	return (NO_ERROR);
}

t_error	_word_do_quote(t_state *state, t_word_result *res, t_vec_str *append)
{
	t_string	tmp;
	t_usize		i;

	(void)(state);
	tmp = string_new(64);
	i = 0;
	while (i < res->value.len)
		string_push(&tmp, res->value.buffer[i++].value);
	vec_str_push(append, tmp.buf);
	return (NO_ERROR);
}

t_error	_word_into_str(t_ast_node self, t_state *state, t_vec_str *append)
{
	t_word_result	res;

	if (self == NULL || state == NULL || append == NULL
		|| self->kind != AST_WORD)
		return (ERROR);
	if (_word_is_star(&self->data.word))
		return (dprintf(2, "word is star !\n"), _word_handle_star(&self->data.word, state, append));
	if (run_word(&self->data.word, state, &res))
		return (ERROR);
	if (res.kind == AST_WORD_NO_QUOTE)
	{
		if (_word_no_quote(state, &res, append))
			return (ERROR);
	}
	else if (_word_do_quote(state, &res, append))
		return (ERROR);
	return (vec_estr_free(res.value), NO_ERROR);
}
