/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_literals_escaped.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 14:44:48 by maiboyer          #+#    #+#             */
/*   Updated: 2024/01/05 00:06:48 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/buffered_str/buf_str.h"
#include "me/char/isspace.h"
#include "me/char/tolower.h"
#include "me/string/inner/inner_split_literals.h"
#include "me/string/split_literals.h"
#include "me/vec/vec_str.h"
#include <stdio.h>
#include <stdlib.h>

static inline char	escape_oct(t_const_str s, t_usize *current_index,
		bool *did_escape, t_error *error)
{
	char	out;
	char	first;

	first = s[*current_index];
	out = first - '0';
	(*current_index)++;
	first = s[(*current_index)];
	if (first >= '0' && first <= '7')
	{
		out = out * 8 + (first - '0');
		(*current_index)++;
		first = s[(*current_index)];
		if (first >= '0' && first <= '7')
		{
			out = out * 8 + (first - '0');
			(*current_index)++;
			first = s[(*current_index)];
		}
	}
	return (out);
}

static inline char	escape_hex(t_const_str s, t_usize *current_index,
		bool *did_escape, t_error *error)
{
	char	out;
	char	first;

	out = 0;
	first = me_tolower(s[++(*current_index)]);
	if (first >= '0' && first <= '9')
		out = first - '0';
	else if (first >= 'a' && first <= 'f')
		out = 10 + first - 'a';
	else
	{
		(*current_index)--;
		return ('\0');
	}
	first = me_tolower(s[++(*current_index)]);
	if (first >= '0' && first <= '9')
		out = out * 16 + first - '0';
	else if (first >= 'a' && first <= 'f')
		out = out * 16 + 10 + first - 'a';
	return (out);
}

char	unescape_single(char first)
{
	if (first == '\\')
		return ('\\');
	if (first == 'a')
		return ('\a');
	if (first == 'b')
		return ('\b');
	if (first == 't')
		return ('\t');
	if (first == 'n')
		return ('\n');
	if (first == 'v')
		return ('\v');
	if (first == 'f')
		return ('\f');
	if (first == 'r')
		return ('\r');
	if (first == 'e')
		return ('\e');
	if (first == 'E')
		return ('\e');
	return ('\0');
}

char	unescape(t_const_str s, t_usize *current_index, bool *did_escape,
		t_error *error)
{
	char	first;
	char	out;

	*did_escape = false;
	if (s[(*current_index)] != '\\')
		return (s[(*current_index)]);
	(*current_index)++;
	first = s[(*current_index)];
	*did_escape = true;
	if (unescape_single(first))
		return (unescape_single(first));
	if (first >= '0' && first <= '7')
		return (escape_oct(s, current_index, did_escape, error));
	if (first == 'x')
		return (escape_hex(s, current_index, did_escape, error));
	*did_escape = false;
	(*current_index)--;
	return ('\\');
}
