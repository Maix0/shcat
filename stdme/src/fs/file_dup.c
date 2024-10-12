/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_dup.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 06:59:44 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:52:27 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/fs/fs.h"
#include "me/str/str.h"
#include "me/types.h"
#include <unistd.h>

t_fd	*dup_fd(t_fd *fd)
{
	struct s_file_slot	*slot;
	int					tmp;

	if (fd == NULL)
		return (NULL);
	slot = get_unused_fd_slot();
	if (slot == NULL)
		return (NULL);
	tmp = dup(fd->fd);
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
