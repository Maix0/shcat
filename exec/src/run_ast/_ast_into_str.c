/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _ast_into_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 12:26:51 by maiboyer          #+#    #+#             */
/*   Updated: 2024/09/14 14:37:25 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "exec/_run_ast.h"
#include "me/string/string.h"
#include "me/str/str.h"
#include "me/convert/numbers_to_str.h"

t_error	_word_into_str(t_ast_node self, t_state *state, t_vec_str *append)
{
	t_word_result	res;
	t_vec_str		splitted;
	t_string		tmp;
	t_usize			i;
	t_usize			j;
	t_usize			len;
	t_str			ifs;
	t_str			tmp_str;

	if (self == NULL || state == NULL || append == NULL
		|| self->kind != AST_WORD)
		return (ERROR);
	if (run_word(&self->data.word, state, &res))
		return (ERROR);
	if (res.kind == AST_WORD_NO_QUOTE)
	{
		tmp = string_new(64);
		i = 0;
		while (i < res.value.len)
		{
			if (!res.value.buffer[i].do_expand)
				string_push(&tmp, res.value.buffer[i].value);
			else
			{
				ifs = _get_ifs_value(state);
				while (ifs != NULL && *ifs != '\0'
					&& str_find_chr(res.value.buffer[i].value, *ifs) == NULL)
					ifs++;
				if (ifs == NULL || *ifs == '\0')
					string_push(&tmp, res.value.buffer[i].value);
				else
				{
					ifs = _get_ifs_value(state);
					if (str_split(res.value.buffer[i].value, ifs, &splitted))
						return (vec_estr_free(res.value), ERROR);
					if (!vec_str_pop_front(&splitted, &tmp_str))
					{
						if (str_find_chr(ifs,
								res.value.buffer[i].value[0]) == NULL)
							(string_push(&tmp, tmp_str), str_free(tmp_str));
						else
						{
							vec_str_push(append, tmp.buf);
							tmp = string_new(64);
							string_push(&tmp, tmp_str);
							str_free(tmp_str);
						}
						j = 0;
						while (j + 1 < splitted.len)
						{
							if (vec_str_pop_front(&splitted, &tmp_str))
								return (vec_estr_free(res.value), ERROR);
							vec_str_push(append, tmp_str);
							j++;
						}
						len = str_len(res.value.buffer[i].value);
						if (len != 0 && str_find_chr(ifs,
								res.value.buffer[i].value[len - 1]) == NULL)
							(string_push(&tmp, tmp_str), str_free(tmp_str));
						else
							vec_str_push(append, tmp_str);
					}
				}
			}
			i++;
		}
		vec_str_push(append, tmp.buf);
	}
	else
	{
		tmp = string_new(64);
		i = 0;
		while (i < res.value.len)
		{
			string_push(&tmp, res.value.buffer[i++].value);
		}
		vec_str_push(append, tmp.buf);
	}
	vec_estr_free(res.value);
	return (NO_ERROR);
}

t_error	_raw_str_into_str(t_ast_node self, t_state *state, t_vec_str *append)
{
	if (self == NULL || state == NULL || append == NULL
		|| self->kind != AST_RAW_STRING)
		return (ERROR);
	vec_str_push(append, str_clone(self->data.raw_string.str));
	return (NO_ERROR);
}

t_error	_ast_into_str(t_ast_node self, t_state *state, t_vec_str *append)
{
	if (self == NULL || state == NULL || append == NULL)
		return (ERROR);
	if (self->kind == AST_EXPANSION)
		return (_exp_into_str(self, state, append));
	if (self->kind == AST_ARITHMETIC_EXPANSION)
		return (_arith_into_str(self, state, append));
	if (self->kind == AST_WORD)
		return (_word_into_str(self, state, append));
	if (self->kind == AST_RAW_STRING)
		return (_raw_str_into_str(self, state, append));
	printf("unknown Kind = %#04x\n", self->kind);
	return (ERROR);
}
