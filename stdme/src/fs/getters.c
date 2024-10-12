/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getters.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 16:27:28 by rparodi           #+#    #+#             */
/*   Updated: 2024/10/12 17:52:28 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/fs/fs.h"
#include "me/mem/mem.h"
#include "me/str/str.h"
#include "me/types.h"
#include "unistd.h"

#include <dirent.h>
#include <errno.h>
#include <stdio.h>
#include <sys/stat.h>

t_fd	*get_stdin(void)
{
	t_fd				*out;
	struct s_file_slot	*slot;
	static t_fd			*value = NULL;

	if (value == NULL)
	{
		slot = get_unused_fd_slot();
		out = &slot->slot.fd;
		out->fd = STDIN_FILENO;
		out->perms = FD_READ;
		out->name = str_clone("<stdin>");
		slot->ty = SLOT_FD;
		value = out;
	}
	return (value);
}

t_fd	*get_stdout(void)
{
	t_fd				*out;
	struct s_file_slot	*slot;
	static t_fd			*value = NULL;

	if (value == NULL)
	{
		slot = get_unused_fd_slot();
		out = &slot->slot.fd;
		out->fd = STDOUT_FILENO;
		out->perms = FD_WRITE;
		out->name = str_clone("<stdout>");
		slot->ty = SLOT_FD;
		value = out;
	}
	return (value);
}

t_fd	*get_stderr(void)
{
	t_fd				*out;
	struct s_file_slot	*slot;
	static t_fd			*value = NULL;

	if (value == NULL)
	{
		slot = get_unused_fd_slot();
		out = &slot->slot.fd;
		out->fd = STDERR_FILENO;
		out->perms = FD_WRITE;
		out->name = str_clone("<stderr>");
		slot->ty = SLOT_FD;
		value = out;
	}
	return (value);
}
