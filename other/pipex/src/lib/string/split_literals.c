/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_literals.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 14:28:23 by maiboyer          #+#    #+#             */
/*   Updated: 2024/01/06 18:43:33 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/buffered_str/buf_str.h"
#include "me/char/isspace.h"
#include "me/string/inner/inner_split_literals.h"
#include "me/string/split_literals.h"
#include "me/string/str_clone.h"
#include "me/vec/vec_str.h"
#include <stdio.h>
#include <stdlib.h>

static inline void	flip_and_set_false(bool *flip, bool *false_)
{
	*flip = !(*flip);
	*false_ = false;
}

static inline bool	is_word_splitter(char c, t_str prefix)
{
	(void)(prefix);
	return (c == ' ' || c == '\n' || c == '\t');
}

static inline char	set_thingy(t_const_str s, t_usize *idx, bool *esc,
		bool *lit_sq)
{
	char	c;
	bool	error;

	if (!lit_sq)
	{
		(*idx)++;
		c = unescape(s, idx, esc, &error);
	}
	else
	{
		(*idx)++;
		c = s[*idx];
	}
	return (c);
}

static inline void	yes(t_const_str s, t_usize *idx, t_buffer_str *temp,
		t_usize *len)
{
	t_booleans	b;
	char		c;

	b.lit_sq = false;
	b.lit_dq = false;
	c = unescape(s, idx, &b.esc, &b.error);
	while (c != '\0' && !b.esc && is_word_splitter(c, "\t@"))
		c = unescape(s, ((*idx)++, idx), &b.esc, &b.error);
	while (c != '\0')
	{
		if (((!b.lit_sq && !b.lit_dq && !b.esc) && is_word_splitter(c, ".")))
			break ;
		b.append = true;
		if (c == '\'' && !b.esc && !b.lit_dq)
			(flip_and_set_false(&b.lit_sq, &b.append), (*len)++);
		if (c == '"' && !b.esc && !b.lit_sq)
			(flip_and_set_false(&b.lit_dq, &b.append), (*len)++);
		if (b.append)
			(push_str_char(temp, c), (*len)++);
		c = set_thingy(s, idx, &b.esc, &b.lit_sq);
	}
}

t_error	split_literals(t_const_str s, t_vec_str *out)
{
	t_usize			idx;
	t_usize			len;
	t_buffer_str	temp;

	*out = vec_str_new(16, (t_free_str_item)free);
	temp = alloc_new_buffer(64);
	idx = 0;
	while (s[idx])
	{
		len = 0;
		yes(s, &idx, &temp, &len);
		if (len == 0)
			continue ;
		if (vec_str_push(out, temp.buf))
			return (str_free(temp), vec_str_free(*out), ERROR);
		temp = alloc_new_buffer(64);
	}
	str_free(temp);
	return (NO_ERROR);
}
