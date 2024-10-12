/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   directory.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 16:24:53 by rparodi           #+#    #+#             */
/*   Updated: 2024/10/12 17:52:26 by rparodi          ###   ########.fr       */
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

t_error	open_dir(t_str name, t_dir **dir)
{
	t_dir				*out;
	struct s_file_slot	*slot;

	slot = get_unused_fd_slot();
	out = &slot->slot.dir;
	out->ptr = opendir(name);
	if (out->ptr == NULL)
		return (ERROR);
	slot->ty = SLOT_DIR;
	out->name = str_clone(name);
	*dir = out;
	return (NO_ERROR);
}

t_error	read_dir(t_dir *dir, t_dir_entry *out)
{
	struct dirent	*entry;

	if (dir == NULL || out == NULL || dir->ptr == NULL)
		return (ERROR);
	errno = 0;
	entry = readdir(dir->ptr);
	if (entry == NULL && errno != 0)
		return (ERROR);
	*out = entry;
	return (NO_ERROR);
}

void	close_dir(t_dir *dir)
{
	struct s_file_slot	*slot;

	if (dir == NULL)
		return ;
	if (closedir(dir->ptr) == -1)
		return ;
	if (dir->name != NULL)
		mem_free(dir->name);
	slot = (void *)(dir)-offsetof(struct s_file_slot, slot.dir);
	mem_set_zero(slot, sizeof(*slot));
	slot->ty = SLOT_UNUSED;
}
