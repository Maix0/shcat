/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _ast_into_str6.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 12:26:51 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:51:22 by rparodi          ###   ########.fr       */
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

t_error	_word_into_str_inner3(struct s_word_str_args args)
{
	t_usize		j;
	t_usize		len;

	j = 0;
	while (j + 1 < args.splitted->len)
	{
		if (vec_str_pop_front(args.splitted, args.tmp_str))
			return (vec_estr_free(args.res->value), ERROR);
		vec_str_push(args.append, *args.tmp_str);
		j++;
	}
	len = str_len(args.res->value.buffer[args.i].value);
	if (len != 0 && str_find_chr(args.ifs,
			args.res->value.buffer[args.i].value[len - 1]) == NULL)
		(string_push(args.tmp, *args.tmp_str), str_free(*args.tmp_str));
	else
		vec_str_push(args.append, *args.tmp_str);
	return (NO_ERROR);
}

t_error	_word_into_str_inner2(struct s_word_str_args args)
{
	t_str		ifs;
	t_str		tmp_str;
	t_vec_str	splitted;

	ifs = _get_ifs_value(args.state);
	if (str_split(args.res->value.buffer[args.i].value, ifs, &splitted))
		return (vec_estr_free(args.res->value), ERROR);
	if (!vec_str_pop_front(&splitted, &tmp_str))
	{
		if (str_find_chr(ifs,
				args.res->value.buffer[args.i].value[0]) == NULL)
			(string_push(args.tmp, tmp_str), str_free(tmp_str));
		else
		{
			vec_str_push(args.append, args.tmp->buf);
			*args.tmp = string_new(64);
			string_push(args.tmp, tmp_str);
			str_free(tmp_str);
		}
		if (_word_into_str_inner3((struct s_word_str_args){args.i, args.state, \
		args.tmp, args.res, args.append, &tmp_str, &splitted, ifs}))
			return (ERROR);
	}
	return (NO_ERROR);
}

t_error	_word_into_str_inner(struct s_word_str_args args)
{
	t_str		ifs;

	ifs = _get_ifs_value(args.state);
	while (ifs != NULL && *ifs != '\0'
		&& str_find_chr(args.res->value.buffer[args.i].value, *ifs) == NULL)
		ifs++;
	if (ifs == NULL || *ifs == '\0')
		string_push(args.tmp, args.res->value.buffer[args.i].value);
	else if (_word_into_str_inner2((struct s_word_str_args){args.i, \
		args.state, args.tmp, args.res, args.append, NULL, NULL, NULL}))
		return (ERROR);
	return (NO_ERROR);
}
