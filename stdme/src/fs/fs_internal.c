/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fs_internal.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 15:53:50 by maiboyer          #+#    #+#             */
/*   Updated: 2024/05/24 14:44:45 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/types.h"
#include "me/fs/fs.h"
#include "me/mem/mem.h"
#include "me/str/str.h"

#include <stdio.h>
#include <dirent.h>
#include <sys/stat.h>
#include <errno.h>

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
		close_fd(&slot->slot.fd);
	else if (slot->ty == SLOT_DIR)
		close_dir(&slot->slot.dir);
	else if (slot->ty == SLOT_FILE)
		close_file(&slot->slot.file);
	else
		write(2, "Unknown SLOT type", 17);
	mem_set_zero(slot, sizeof(*slot));
}

/* ______ _____  
  |  ____|  __ \ 
  | |__  | |  | |
  |  __| | |  | |
  | |    | |__| |
  |_|    |_____/   
*/

t_fd   *open_fd(t_str name, t_fd_perm perms, t_file_open_option open_options,
				t_file_perm file_perm)
{
	t_fd				*fd;
	struct s_file_slot	*slot;
	int 				actual_perms;

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

t_error read_fd(t_fd *fd, t_u8 *buffer, t_usize size, t_isize *read_count)
{
	t_isize ret;

	if (fd == NULL || buffer == NULL || read_count == NULL || fd->fd == -1 || !(fd->perms & FD_READ))
		return (ERROR);
	ret = read(fd->fd, buffer, size);
	if (ret == -1)
		return (ERROR);
	*read_count = ret;
	return (NO_ERROR);
}

t_error write_fd(t_fd *fd, t_u8 *buffer, t_usize size, t_isize *write_count)
{
	t_isize ret;
	t_isize fake_ret;

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

t_error stat_fd(t_fd *fd, t_stat *stat)
{
	if (fd == NULL || stat == NULL || fd->fd == -1)
		return (ERROR);
	if (fstat(fd->fd, stat) == -1)
		return (ERROR);
	return (NO_ERROR);
}

void close_fd(t_fd *fd)
{
	struct s_file_slot	*slot;

	if (fd == NULL)
		return ;
	if (close(fd->fd) == -1)
		return ;
	slot = (void*)(fd) - offsetof(struct s_file_slot, slot.fd);
	mem_set_zero(slot, sizeof(*slot));
}

#define INLINE_BUFFER_SIZE 128

void put_number_fd(t_fd *fd, t_u64 number)
{
	t_u8 buffer[INLINE_BUFFER_SIZE];
	t_usize i;

	i = 0;
	while (number > 0)
	{
		buffer[i++] = number % 10 + '0';
		number /= 10;
	}
	while (i > 0)
		write_fd(fd, &buffer[--i], 1, NULL);
}

void put_string_fd(t_fd *fd, t_const_str string)
{
	write_fd(fd, (t_u8*)string, str_len(string), NULL);
}

void put_char_fd(t_fd *fd, t_u8 c)
{
	write_fd(fd, &c, 1, NULL);
}

/* _____ _____ _____  ______ _____ _______ ____  _______     __
  |  __ \_   _|  __ \|  ____/ ____|__   __/ __ \|  __ \ \   / /
  | |  | || | | |__) | |__ | |       | | | |  | | |__) \ \_/ / 
  | |  | || | |  _  /|  __|| |       | | | |  | |  _  / \   /  
  | |__| || |_| | \ \| |___| |____   | | | |__| | | \ \  | |   
  |_____/_____|_|  \_\______\_____|  |_|  \____/|_|  \_\ |_|                                                                                                                        
*/

t_error open_dir(t_str name, t_dir **dir)
{
	t_dir *out;
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

t_error read_dir(t_dir *dir, t_dir_entry *out)
{
	struct dirent *entry;

	if (dir == NULL || out == NULL || dir->ptr == NULL)
		return (ERROR);
	errno = 0;
	entry = readdir(dir->ptr);
	if (entry == NULL && errno != 0)
		return (ERROR);
	*out = entry;
	return (NO_ERROR);
}

void close_dir(t_dir *dir)
{
	struct s_file_slot	*slot;

	if (dir == NULL)
		return ;
	if (closedir(dir->ptr) == -1)
		return ;
	slot = (void*)(dir) - offsetof(struct s_file_slot, slot.dir);
	mem_set_zero(slot, sizeof(*slot));
}

/*______ _____ _      ______ 
 |  ____|_   _| |    |  ____|
 | |__    | | | |    | |__   
 |  __|   | | | |    |  __|  
 | |     _| |_| |____| |____ 
 |_|    |_____|______|______|
*/

t_error open_file(t_str name, t_mode mode, t_file **file)
{
	t_file *out;
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

t_error write_file(t_file *file, t_u8 *buffer, t_usize size, t_isize *write_count)
{
	t_isize ret;
	t_isize fake_ret;

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

t_error read_file(t_file *file, t_u8 *buffer, t_usize size, t_isize *read_count)
{
	t_isize ret;

	if (file == NULL || buffer == NULL || read_count == NULL || file->ptr == NULL)
		return (ERROR);
	ret = fread(buffer, size, 1, file->ptr);
	if (ret == -1)
		return (ERROR);
	*read_count = ret;
	return (NO_ERROR);
}

void close_file(t_file *file)
{
	struct s_file_slot	*slot;

	if (file == NULL)
		return ;
	if (fclose(file->ptr) == -1)
		return ;
	slot = (void*)(file) - offsetof(struct s_file_slot, slot.file);
	mem_set_zero(slot, sizeof(*slot));
}