/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_dup.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 06:59:44 by maiboyer          #+#    #+#             */
/*   Updated: 2024/09/18 14:24:59 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fcntl.h"
#include "me/fs/fs.h"
#include "me/printf/printf.h"
#include "me/str/str.h"
#include "me/string/string.h"
#include "me/types.h"
#include <unistd.h>

static int _get_flags(t_fd *fd)
{
	int out;
	out = 0;
	if (fd->perms & FD_READ && fd->perms & FD_WRITE)
		out = O_RDWR;
	else if (fd->perms & FD_READ)
		out = O_RDONLY;
	else if (fd->perms & FD_WRITE)
		out = O_WRONLY;

	return (out);
}

t_fd	*dup_fd(t_fd *fd)
{
	struct s_file_slot	*slot;
	int					tmp;
	t_string			path;

	if (fd == NULL)
		return (NULL);
	slot = get_unused_fd_slot();
	if (slot == NULL)
		return (NULL);
	path = string_new(32);
	me_printf_str(&path, "/proc/self/fd/%i", fd->fd);
	tmp = open(path.buf, O_CLOEXEC | _get_flags(fd));
	string_free(path);
	if (tmp == -1)
		return (printf("There was an error while duping the "\
	"fd %d `%s`\n", fd->fd, fd->name), NULL);
	slot->ty = SLOT_FD;
	slot->slot.fd.fd = tmp;
	slot->slot.fd.perms = fd->perms;
	slot->slot.fd.type = fd->type;
	slot->slot.fd.name = str_clone(fd->name);
	return (&slot->slot.fd);
}
