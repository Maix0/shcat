/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipe.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 17:59:48 by maiboyer          #+#    #+#             */
/*   Updated: 2024/07/30 14:48:48 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "exec/spawn_cmd/pipe.h"
#include "me/fs/fs.h"
#include "me/str/str.h"

t_error exec_create_pipe(t_exec_pipe *out)
{
	int					fd[2];
	struct s_file_slot *read;
	struct s_file_slot *write;

	if (pipe(fd))
		return (ERROR);
	read = get_unused_fd_slot();
	if (read == NULL)
		return (close(fd[0]), close(fd[1]), ERROR);
	read->ty = SLOT_FD;
	write = get_unused_fd_slot();
	if (write == NULL)
		return (read->ty = SLOT_UNUSED, close(fd[0]), close(fd[1]), ERROR);
	write->ty = SLOT_FD;
	read->slot.fd = (t_fd){.fd = fd[0], .type = FD_PIPE, .name = str_clone("<pipe[R]>"), .perms = FD_READ};
	read->slot.fd = (t_fd){.fd = fd[1], .type = FD_PIPE, .name = str_clone("<pipe[W]>"), .perms = FD_WRITE};
	out->read = &read->slot.fd;
	out->write = &write->slot.fd;
	return (NO_ERROR);
}
