/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_split.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 15:56:59 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:52:47 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/str/str.h"
#include "me/string/string.h"
#include "me/vec/vec_str.h"
#include <stdlib.h>

t_error	str_split(t_const_str str, t_const_str chr, t_vec_str *out)
{
	t_vec_str	ret;
	t_usize		idx;
	t_string	buf;

	if (out == NULL || chr == NULL || str == NULL)
		return (ERROR);
	idx = 0;
	buf = string_new(16);
	ret = vec_str_new(16, str_free);
	while (str[idx] != '\0')
	{
		while (str[idx] != '\0' && str_find_chr(chr, str[idx]) != NULL)
			idx++;
		while (str[idx] != '\0' && str_find_chr(chr, str[idx]) == NULL)
			string_push_char(&buf, str[idx++]);
		if (buf.len != 0)
		{
			vec_str_push(&ret, buf.buf);
			buf = string_new(16);
		}
	}
	string_free(buf);
	return (*out = ret, NO_ERROR);
}
