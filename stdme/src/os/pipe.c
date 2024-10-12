/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipe.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 17:59:48 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:52:38 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fcntl.h"
#include "me/fs/fs.h"
#include "me/os/os.h"
#include "me/str/str.h"
#include "me/string/string.h"
#include "me/printf/printf.h"
#include "unistd.h"

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

static void	_pipe_set_close_exec(t_fd *fd)
{
	t_string	s;
	int			new_fd;
	int			fd_perm;

	s = string_new(16);
	me_printf_str(&s, "/proc/self/fd/%i", fd->fd);
	fd_perm = O_RDONLY;
	if (fd->perms == FD_WRITE)
		fd_perm = O_WRONLY;
	new_fd = open(s.buf, fd_perm | O_CLOEXEC);
	string_free(s);
	if (new_fd == -1)
		me_abort("pipe close_on_exec failed");
	close(fd->fd);
	fd->fd = new_fd;
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
	(_pipe_set_close_exec(out->read), _pipe_set_close_exec(out->write));
	return (NO_ERROR);
}
