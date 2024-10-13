/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fs_internal.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 15:53:50 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/13 15:03:54 by maiboyer         ###   ########.fr       */
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

t_fd_array	*get_fd_arrays(void)
{
	static t_fd_array	val = {};

	return (&val);
}

struct s_file_slot	*get_unused_fd_slot(void)
{
	t_usize		i;
	t_fd_array	*arr;

	arr = get_fd_arrays();
	i = 0;
	while (i < FILE_SLOT_LEN)
	{
		if (arr->storage[i].ty == SLOT_UNUSED)
			return (&arr->storage[i]);
		i++;
	}
	me_abort(
		"Unable to find slot for a file descriptor, increate FILE_SLOT_LEN");
	return (NULL);
}

__attribute__((destructor(201)))
void	close_all_slots(void)
{
	t_usize		i;
	t_fd_array	*arr;

	arr = get_fd_arrays();
	i = 0;
	while (i < FILE_SLOT_LEN)
		close_slot(&arr->storage[i++]);
}

// This is to remove the f<name> function from being there...
//	else if (slot->ty == SLOT_FILE)
//		;//close_file(&slot->slot.file);
void	close_slot(struct s_file_slot *slot)
{
	if (slot == NULL)
		return ;
	if (slot->ty == SLOT_UNUSED)
		;
	else if (slot->ty == SLOT_FD)
		close_fd(&slot->slot.fd);
	else if (slot->ty == SLOT_DIR)
		close_dir(&slot->slot.dir);
	else
		(void)!write(2, "Unknown SLOT type", 17);
	mem_set_zero(slot, sizeof(*slot));
}
