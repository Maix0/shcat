/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fd.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 16:17:17 by rparodi           #+#    #+#             */
/*   Updated: 2024/10/12 17:52:27 by rparodi          ###   ########.fr       */
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

t_fd	*open_fd(t_str name, t_fd_perm perms, t_file_open_option open_options,
			t_file_perm file_perm)
{
	t_fd				*fd;
	struct s_file_slot	*slot;
	int					actual_perms;

	if (perms & FD_READ && perms & FD_WRITE)
		actual_perms = O_RDWR;
	else if (perms & FD_READ)
		actual_perms = O_RDONLY;
	else if (perms & FD_WRITE)
		actual_perms = O_WRONLY;
	else
		return (NULL);
	actual_perms |= open_options;
	slot = get_unused_fd_slot();
	fd = &slot->slot.fd;
	fd->fd = open(name, actual_perms, file_perm);
	if (fd->fd == -1)
		return (fd->fd = 0, NULL);
	slot->ty = SLOT_FD;
	fd->name = str_clone(name);
	fd->perms = perms;
	fd->type = FD_FILE;
	return (fd);
}

t_error	read_fd(t_fd *fd, t_u8 *buffer, t_usize size, t_isize *read_count)
{
	t_isize	ret;
	t_isize	false_ret;

	if (read_count == NULL)
		read_count = &false_ret;
	if (fd == NULL || buffer == NULL || fd->fd == -1 || \
		!(fd->perms & FD_READ))
		return (ERROR);
	ret = read(fd->fd, buffer, size);
	if (ret == -1)
		return (ERROR);
	*read_count = ret;
	return (NO_ERROR);
}

t_error	write_fd(t_fd *fd, t_u8 *buffer, t_usize size, t_isize *write_count)
{
	t_isize	ret;
	t_isize	fake_ret;

	if (write_count == NULL)
		write_count = &fake_ret;
	if (fd == NULL || buffer == NULL || fd->fd == -1 || !(fd->perms & FD_WRITE))
		return (ERROR);
	ret = write(fd->fd, buffer, size);
	if (ret == -1)
		return (ERROR);
	*write_count = ret;
	return (NO_ERROR);
}

/* TODO: REMOVE THIS COMMENT SURROUNDING THE FUNCTION
t_error	stat_fd(t_fd *fd, t_stat *stat)
{
	if (fd == NULL || stat == NULL || fd->fd == -1)
		return (ERROR);
	if (fstat(fd->fd, stat) == -1)
		return (ERROR);
	return (NO_ERROR);
}
*/

void	close_fd(t_fd *fd)
{
	struct s_file_slot	*slot;

	if (fd == NULL)
		return ;
	if (close(fd->fd) == -1)
		return ;
	if (fd->name != NULL)
		mem_free(fd->name);
	slot = (void *)(fd)-offsetof(struct s_file_slot, slot.fd);
	mem_set_zero(slot, sizeof(*slot));
	slot->ty = SLOT_UNUSED;
}
