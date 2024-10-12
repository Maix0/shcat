/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maix <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 17:38:21 by maix              #+#    #+#             */
/*   Updated: 2024/10/12 17:52:28 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/string/string.h"
#include "me/gnl/gnl.h"
#include "me/mem/mem.h"
#include "me/mem/mem.h"
#include "me/str/str.h"
#include "me/types.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

static t_static_buffer	*get_next_line_buffer(int fd)
{
	t_usize					index;
	static t_static_buffer	bufs[BUFFER_LENGTH] = {0};

	index = 0;
	while (index < BUFFER_LENGTH && (bufs[index].fd != fd && bufs[index].used))
		index++;
	if (index == BUFFER_LENGTH)
		return (NULL);
	bufs[index].fd = fd;
	bufs[index].used = true;
	return (&bufs[index]);
}

static bool	copy_next_line_into_buffer(int fd, t_string *out,
		char *temp_buffer, t_usize amount)
{
	char	*buf;
	char	*newline;
	bool	got_newline;
	t_usize	other_part_len;

	buf = get_next_line_buffer(fd)->buf;
	newline = buf;
	while (*newline != '\n' && *newline && newline < buf + amount)
		newline++;
	got_newline = *newline == '\n';
	other_part_len = amount - (t_usize)(newline - buf + !got_newline);
	if (amount < (t_usize)(newline - buf + !got_newline))
		other_part_len = 0;
	mem_move(temp_buffer, buf, (t_usize)(newline - buf + got_newline));
	buf[(t_usize)(newline - buf)] = 0;
	temp_buffer[(t_usize)(newline - buf + got_newline)] = 0;
	mem_move(buf, newline + 1, other_part_len);
	string_push(out, temp_buffer);
	buf[amount - (t_usize)(newline - buf + got_newline)] = 0;
	return (got_newline);
}

static bool	read_and_copy(int fd, t_string *out, char *tmp,
		t_copy_flags *flags)
{
	t_isize			amount;
	t_static_buffer	*buf;

	buf = get_next_line_buffer(fd);
	amount = read(fd, &buf->buf, BUFFER_SIZE);
	flags->error = amount < 0;
	if (flags->error)
		return (true);
	buf->init = true;
	if ((t_isize)amount < (t_isize)BUFFER_SIZE)
	{
		copy_next_line_into_buffer(fd, out, tmp, (t_usize)amount);
		flags->empty_read = (amount == 0 && out->len == 0);
		return (true);
	}
	buf->buf[(t_usize)amount] = 0;
	return (copy_next_line_into_buffer(fd, out, tmp, (t_usize)amount));
}

static bool	handle_leftovers(int fd, char *temp_buffer, t_string *buf)
{
	t_static_buffer	*static_buffer;

	static_buffer = get_next_line_buffer(fd);
	if (static_buffer->init)
	{
		if (copy_next_line_into_buffer(fd, buf, temp_buffer,
				str_len(static_buffer->buf)))
		{
			mem_free(temp_buffer);
			return (true);
		}
	}
	return (false);
}

t_string	get_next_line(int fd, bool *error)
{
	t_string		buf;
	char			*temp_buffer;
	t_copy_flags	flags;

	*error = false;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (*error = true, (t_string){0});
	flags = (t_copy_flags){
		.error = false,
		.empty_read = false,
	};
	temp_buffer = mem_alloc(sizeof(char) * (BUFFER_SIZE + 2));
	buf = string_new(32);
	if (handle_leftovers(fd, temp_buffer, &buf))
		return (buf);
	while (!read_and_copy(fd, &buf, temp_buffer, &flags) && !flags.empty_read)
		;
	mem_free(temp_buffer);
	if (flags.error || flags.empty_read)
	{
		mem_free(buf.buf);
		return (*error = true, (t_string){0});
	}
	return (buf);
}
