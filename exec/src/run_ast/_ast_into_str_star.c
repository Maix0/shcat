/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _ast_into_str_star.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 12:26:51 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/25 15:52:50 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "exec/_run_ast.h"
#include "me/string/string.h"
#include "me/str/str.h"
#include "me/convert/numbers_to_str.h"
#include "me/vec/vec_str.h"

t_error	list_files_in_current_directory(t_vec_str *out);

bool	_word_is_star(t_ast_word *word)
{
	return (BONUS && word->kind == AST_WORD_NO_QUOTE && word->inner.len == 1 \
	&& word->inner.buffer[0]->kind == AST_RAW_STRING \
	&& str_find_chr(word->inner.buffer[0]->data.raw_string.str, '*') != NULL);
}

bool	match(t_const_str pattern, t_const_str str)
{
	while (*pattern)
	{
		if (*pattern == '*')
		{
			if (!*(pattern + 1))
				return (true);
			while (*str)
			{
				if (match(pattern + 1, str))
					return (true);
				str++;
			}
			return (false);
		}
		else if (*pattern != *str)
			return (false);
		pattern++;
		str++;
	}
	return (!*pattern && !*str);
}

t_error	_word_handle_star(t_ast_word *word, t_state *state, t_vec_str *out)
{
	t_vec_str		files;
	t_str			s;

	(void)(state);
	(void)(word);
	if (list_files_in_current_directory(&files))
		return (ERROR);
	while (!vec_str_pop_front(&files, &s))
	{
		if (match(word->inner.buffer[0]->data.raw_string.str, s))
			vec_str_push(out, s);
		else
			str_free(s);
	}
	vec_str_free(files);
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
