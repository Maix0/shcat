/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipe.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 17:59:48 by maiboyer          #+#    #+#             */
/*   Updated: 2024/08/14 17:51:38 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/fs/fs.h"
#include "me/os/os.h"
#include "me/str/str.h"

static t_error	_pipe_get_fd_slot(struct s_file_slot **read,
		struct s_file_slot **write)
{
	(*read) = get_unused_fd_slot();
	if ((*read) == NULL)
		return (ERROR);
	(*read)->ty = SLOT_FD;
	(*write) = get_unused_fd_slot();
	if ((*write) == NULL)
		return ((*read)->ty = SLOT_UNUSED, ERROR);
	(*write)->ty = SLOT_FD;
	return (NO_ERROR);
}

t_error	create_pipe(t_pipe *out)
{
	int					fd[2];
	struct s_file_slot	*read;
	struct s_file_slot	*write;

	if (_pipe_get_fd_slot(&read, &write))
		return (ERROR);
	if (pipe(fd))
	{
		read->ty = SLOT_UNUSED;
		write->ty = SLOT_UNUSED;
		return (ERROR);
	}
	read->slot.fd.fd = fd[0];
	write->slot.fd.fd = fd[1];
	read->slot.fd.type = FD_PIPE;
	write->slot.fd.type = FD_PIPE;
	read->slot.fd.perms = FD_READ;
	write->slot.fd.perms = FD_WRITE;
	read->slot.fd.name = str_clone("<pipe[read]>");
	write->slot.fd.name = str_clone("<pipe[write]>");
	out->read = &read->slot.fd;
	out->write = &write->slot.fd;
	return (NO_ERROR);
}
