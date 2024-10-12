/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_remove.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 21:50:27 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:52:49 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/mem/mem.h"
#include "me/str/str.h"
#include "me/string/string.h"
#include "me/types.h"

t_error	string_remove(t_string *self, t_usize pos, char *out)
{
	char	fake_out;

	if (out == NULL)
		out = &fake_out;
	if (self == NULL || pos >= self->len)
		return (ERROR);
	*out = self->buf[pos];
	mem_move(&self->buf[pos], &self->buf[pos] + 1, self->len - pos);
	self->len--;
	self->buf[self->len] = '\0';
	return (NO_ERROR);
}

t_error	string_clear_after(t_string *self, t_usize pos)
{
	if (self == NULL || pos >= self->len)
		return (ERROR);
	mem_set_zero(&self->buf[pos], self->len - pos);
	self->len = pos;
	self->buf[self->len] = '\0';
	return (NO_ERROR);
}
