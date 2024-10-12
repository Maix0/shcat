/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 16:26:32 by rparodi           #+#    #+#             */
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

/* TODO: REMOVE THIS COMMENT SURROUNDING THE FUNCTION
t_error	open_file(t_str name, t_mode mode, t_file **file)
{
	t_file				*out;
	struct s_file_slot	*slot;

	slot = get_unused_fd_slot();
	out = &slot->slot.file;
	out->ptr = fopen(name, mode);
	if (out->ptr == NULL)
		return (ERROR);
	slot->ty = SLOT_FILE;
	out->name = str_clone(name);
	*file = out;
	return (NO_ERROR);
}

t_error	write_file(t_file *file, t_u8 *buffer, t_usize size,
					t_isize *write_count)
{
	t_isize	ret;
	t_isize	fake_ret;

	if (write_count == NULL)
		write_count = &fake_ret;
	if (file == NULL || buffer == NULL || file->ptr == NULL)
		return (ERROR);
	ret = fwrite(buffer, size, 1, file->ptr);
	if (ret == -1)
		return (ERROR);
	*write_count = ret;
	return (NO_ERROR);
}

t_error	read_file(t_file *file, t_u8 *buffer, t_usize size, t_isize *read_count)
{
	t_isize	ret;

	if (file == NULL || buffer == NULL || read_count == NULL || \
		file->ptr == NULL)
		return (ERROR);
	ret = fread(buffer, size, 1, file->ptr);
	if (ret == -1)
		return (ERROR);
	*read_count = ret;
	return (NO_ERROR);
}

void	close_file(t_file *file)
{
	struct s_file_slot	*slot;

	if (file == NULL)
		return ;
	if (fclose(file->ptr) == -1)
		return ;
	if (file->name != NULL)
		mem_free(file->name);
	slot = (void *)(file)-offsetof(struct s_file_slot, slot.file);
	mem_set_zero(slot, sizeof(*slot));
	slot->ty = SLOT_UNUSED;
}
*/
