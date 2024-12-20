/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _ast_into_str_main.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 12:26:51 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/28 11:42:11 by maiboyer         ###   ########.fr       */
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

t_error	_word_split_loop_expand(\
		t_expandable_str val, t_vec_str *append, t_string *tmp, bool *exist)
{
	t_vec_str	split;
	t_str		stmp;

	if (val.do_expand && str_find_chr(val.value, ' '))
	{
		if (val.value == NULL)
			val.value = "";
		if (str_split(val.value, " \t\n\r\v", &split))
			return (ERROR);
		if (split.len != 0 && tmp->len != 0)
		{
			vec_str_push(append, tmp->buf);
			*tmp = string_new(16);
		}
		while (!vec_str_pop_front(&split, &stmp))
			vec_str_push(append, stmp);
		vec_str_free(split);
	}
	else
		*exist = (string_push(tmp, val.value), true);
	return (NO_ERROR);
}

t_error	_word_split(\
	bool do_split, t_state *state, t_word_result *res, t_vec_str *append)
{
	t_string	tmp;
	t_usize		i;
	bool		exist;

	tmp = string_new(64);
	i = 0;
	exist = false;
	while (i < res->value.len)
	{
		if (do_split)
			_word_split_loop_expand(res->value.buffer[i], append, &tmp, &exist);
		else
		{
			string_push(&tmp, res->value.buffer[i].value);
			exist = true;
		}
		i++;
	}
	if (!do_split || tmp.len != 0 || exist)
		vec_str_push(append, tmp.buf);
	else
		string_free(tmp);
	return ((void)state, NO_ERROR);
}

t_error	_word_into_str(t_ast_node self, t_state *state, t_vec_str *ap)
{
	t_word_result	res;

	if (self == NULL || state == NULL || ap == NULL
		|| self->kind != AST_WORD)
		return (ERROR);
	if (_word_is_star(&self->data.word))
		return (_word_handle_star(&self->data.word, state, ap));
	if (run_word(&self->data.word, state, &res))
		return (ERROR);
	if (_word_split(self->data.word.kind == AST_WORD_NO_QUOTE, state, &res, ap))
		return (ERROR);
	return (vec_estr_free(res.value), NO_ERROR);
}
