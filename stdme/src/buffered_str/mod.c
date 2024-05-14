/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mod.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 17:52:12 by maiboyer          #+#    #+#             */
/*   Updated: 2024/05/14 15:33:43 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/mem/mem.h"
#include "me/buffered_str/buf_str.h"
#include "me/mem/mem_set_zero.h"
#include "me/string/str_l_cat.h"
#include "me/string/str_len.h"
#include "me/types.h"
#include <stdlib.h>

t_error str_reserve(t_buffer_str *buf, t_usize size)
{
	t_str	temp_buffer;
	t_usize new_capacity;

	if (buf == NULL)
		return (ERROR);
	if (buf->capacity >= size)
		return (NO_ERROR);
	while (size > buf->capacity)
		new_capacity = (buf->capacity * 3) / 2 + 1;
	temp_buffer = mem_realloc_array(buf->buf, new_capacity, sizeof(char));
	if (temp_buffer == NULL)
		return (ERROR);
	buf->buf = temp_buffer;
	buf->capacity = new_capacity;
	return (NO_ERROR);
}

t_error push_str_buffer(t_buffer_str *buf, t_const_str to_push)
{
	t_usize to_push_len;

	if (buf == NULL || to_push == NULL)
		return (ERROR);
	to_push_len = str_len(to_push);
	if (str_reserve(buf, buf->len + to_push_len + 2))
		return (ERROR);
	buf->len += to_push_len;
	str_l_cat(buf->buf, to_push, buf->capacity);
	return (NO_ERROR);
}

bool push_str_char(t_buffer_str *buf, char to_push)
{
	char push_str[2];

	push_str[0] = to_push;
	push_str[1] = 0;
	return (push_str_buffer(buf, push_str));
}

void str_clear(t_buffer_str *buf)
{
	mem_set_zero(buf->buf, buf->capacity);
	buf->len = 0;
	return;
}

t_buffer_str alloc_new_buffer(t_usize capacity)
{
	t_buffer_str out;
	t_str		 buf;

	if (capacity == 0)
		capacity = 16;
	buf = mem_alloc_array(sizeof(char), capacity);
	if (buf == NULL)
	{
		out.buf = NULL;
		out.capacity = 0;
		out.len = 0;
		return (out);
	}
	out.buf = buf;
	out.capacity = capacity;
	out.len = 0;
	return (out);
}
