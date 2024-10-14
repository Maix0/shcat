/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _ast_into_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 12:26:51 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/14 15:02:01 by maiboyer         ###   ########.fr       */
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

t_error	_word_split_loop(\
		bool do_split, t_expandable_str val, t_vec_str *append, t_string *tmp)
{
	t_vec_str	split;
	t_str		stmp;

	if (do_split)
	{
		if (val.do_expand)
		{
			if (str_split(val.value, " ", &split))
				return (ERROR);
			while (!vec_str_pop_front(&split, &stmp))
				vec_str_push(append, stmp);
			vec_str_free(split);
		}
		else
			vec_str_push(append, str_clone(val.value));
	}
	else
		string_push(tmp, val.value);
	return (NO_ERROR);
}

t_error	_word_split(\
	bool do_split, t_state *state, t_word_result *res, t_vec_str *append)
{
	t_string	tmp;
	t_usize		i;

	tmp = string_new(64);
	i = 0;
	while (i < res->value.len)
	{
		if (_word_split_loop(do_split, res->value.buffer[i++], append, &tmp))
			return (string_free(tmp), ERROR);
	}
	if (!do_split)
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
