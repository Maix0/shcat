/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   line_history.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 18:10:24 by maiboyer          #+#    #+#             */
/*   Updated: 2024/07/11 18:17:26 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "line/_line_functions.h"
#include "line/_line_internal.h"
#include "me/gnl/gnl.h"
#include "me/str/str.h"
#include "me/string/string.h"
#include "me/types.h"

/* ================================ History ================================= */

/* This is the API call to add a new entry in the linenoise history.
 * It uses a fixed array of char pointers that are shifted (memmoved)
 * when the history max length is reached in order to remove the older
 * entry and make room for the new one, so it is not exactly suitable for huge
 * histories, but will work well for a few hundred of entries.
 *
 * Using a circular buffer is smarter, but a bit more complex to handle. */
bool	line_history_add(t_const_str line)
{
	t_str		linecopy;
	t_vec_str	*history;

	history = get_history();
	if (history->len != 0 && \
		str_compare(history->buffer[history->len - 1], line))
		return (false);
	linecopy = str_clone(line);
	if (linecopy == NULL)
		return (false);
	vec_str_push(history, linecopy);
	return (true);
}

/* Save the history in the specified file. On success 0 is returned
 * otherwise -1 is returned. */
t_error	line_history_save(t_str name)
{
	t_fd		*fd;
	t_usize		j;
	t_vec_str	*history;

	history = get_history();
	fd = open_fd(name, FD_READ, FD_CLOSE_ON_EXEC | FD_TRUNCATE | FD_CREATE, \
		FP_OWRITE);
	if (fd == NULL)
		return (ERROR);
	j = 0;
	while (j < history->len)
	{
		write_fd(fd, (t_u8 *)history->buffer[j], str_len(history->buffer[j]),
			NULL);
		write_fd(fd, (t_u8 *)"\n", 1, NULL);
		j++;
	}
	close_fd(fd);
	return (NO_ERROR);
}

t_error	gnl_wrapper(t_fd *fd, t_string *out)
{
	bool		error;
	t_string	value;

	if (out == NULL || fd == NULL)
		return (ERROR);
	value = get_next_line(fd->fd, &error);
	if (error)
		return (ERROR);
	return (*out = value, NO_ERROR);
}

/* Load the history from the specified file. If the file does not exist
 * zero is returned and no operation is performed.
 *
 * If the file exists and the operation succeeded 0 is returned, otherwise
 * on error -1 is returned. */
t_error	line_history_load(t_str name)
{
	t_fd		*fd;
	t_string	tmp;
	t_vec_str	*history;

	fd = open_fd(name, FD_READ, FD_CLOSE_ON_EXEC, FP_ALL_READ);
	if (fd == NULL)
		return (ERROR);
	history = get_history();
	while (!gnl_wrapper(fd, &tmp))
	{
		while (tmp.len != 0 && (tmp.buf[tmp.len - 1] == '\n' || \
			tmp.buf[tmp.len - 1] == '\r'))
			string_pop(&tmp);
		vec_str_push(history, tmp.buf);
	}
	close_fd(fd);
	return (NO_ERROR);
}
