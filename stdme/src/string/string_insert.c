/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_insert.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 21:32:17 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:52:48 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/mem/mem.h"
#include "me/str/str.h"
#include "me/string/string.h"
#include "me/types.h"

t_error	string_insert(t_string *self, t_usize pos, t_str str)
{
	t_usize	len;

	if (self == NULL || str == NULL || pos > self->len)
		return (ERROR);
	if (pos == self->len)
		return (string_push(self, str));
	len = str_len(str);
	if (string_reserve(self, self->len + len))
		return (ERROR);
	mem_move(&self->buf[pos + len], &self->buf[pos], self->len - pos);
	mem_copy(&self->buf[pos], str, len);
	self->len += len;
	self->buf[self->len] = '\0';
	return (NO_ERROR);
}

t_error	string_insert_char(t_string *self, t_usize pos, char chr)
{
	char	tmp[2];

	if (chr == '\0')
		return (ERROR);
	tmp[0] = chr;
	tmp[1] = '\0';
	return (string_insert(self, pos, tmp));
}
