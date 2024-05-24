/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fd_array_buffer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 15:53:50 by maiboyer          #+#    #+#             */
/*   Updated: 2024/05/24 14:44:45 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/fs/fs.h"
#include "me/mem/mem.h"
#include "me/types.h"
#include <stdio.h>

t_fd_array *get_fd_arrays(void)
{
	static t_fd_array val = {};

	return (&val);
}

struct s_file_slot *get_unused_fd_slot(void)
{
	t_usize		i;
	t_fd_array *arr;

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

void close_all_slots(void)
{
	t_usize		i;
	t_fd_array *arr;

	arr = get_fd_arrays();
	i = 0;
	while (i < FILE_SLOT_LEN)
		close_slot(&arr->storage[i++]);
}

void close_slot(struct s_file_slot *slot)
{
	if (slot == NULL)
		return;
	if (slot->ty == SLOT_UNUSED)
		;
	else if (slot->ty == SLOT_FD)
		close(slot->slot.fd.fd);
	else if (slot->ty == SLOT_DIR)
		closedir(slot->slot.dir.ptr);
	else if (slot->ty == SLOT_FILE)
		fclose(slot->slot.file.ptr);
	else
		write(2, "Unknown SLOT type", 17);
	mem_set_zero(slot, sizeof(*slot));
}

t_fd *me_open(char *pathname, t_fd_perm permission,
			  t_file_open_option open_options, t_file_perm fileperm)
{
	return (NULL);
}
