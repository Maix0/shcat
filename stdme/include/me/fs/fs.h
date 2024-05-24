/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fs.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 15:12:18 by maiboyer          #+#    #+#             */
/*   Updated: 2024/05/24 15:03:40 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FS_H
#define FS_H

#include "me/types.h"
#include <dirent.h>
#include <fcntl.h>
#include <stdio.h>
#include <sys/types.h>

#if (!defined(FILE_SLOT_LEN)) || FILE_SLOT_LEN < 64
# ifdef FILE_SLOT_LEN
#  undef FILE_SLOT_LEN
# endif
# define FILE_SLOT_LEN 512
#endif

enum e_file_slot_kind
{
	SLOT_UNUSED = 0 << 0,
	SLOT_FD = 1 << 0,
	SLOT_DIR = 1 << 1,
	SLOT_FILE = 1 << 2,
};

typedef enum e_fd_type
{
	FD_FILE = 1 << 0,
	FD_PIPE = 1 << 1,
	FD_SOCK = 1 << 2,
	FD_UNKNOWN = 1 << 7,
} t_fd_type;

typedef enum e_fd_perm
{
	FD_READ = 1 << 0,
	FD_WRITE = 1 << 1,
} t_fd_perm;

typedef enum e_file_open_option
{
	FD_CREATE = O_CREAT,
	FD_EXCLUSIVE = O_EXCL,
	FD_CLOSE_ON_EXEC = O_CLOEXEC,
	FD_TRUNCATE = O_TRUNC,
	FD_NON_BLOCKING = O_NONBLOCK,
} t_file_open_option;

typedef enum e_file_perm
{
	FP_OEXEC = 1 << 0,
	FP_OWRITE = 1 << 1,
	FP_OREAD = 1 << 2,
	FP_GEXEC = 1 << 3,
	FP_GWRITE = 1 << 3,
	FP_GREAD = 1 << 5,
	FP_UEXEC = 1 << 6,
	FP_UWRITE = 1 << 7,
	FP_UREAD = 1 << 8,

	FP_ALL_READ = FP_UREAD | FP_GREAD | FP_OREAD,
	FP_ALL_WRITE = FP_UWRITE | FP_GWRITE | FP_OWRITE,
	FP_ALL_EXEC = FP_UEXEC | FP_GEXEC | FP_OEXEC,
	FP_DEFAULT = FP_UWRITE | FP_ALL_READ,
	FP_DEFAULT_EXEC = FP_UWRITE | FP_ALL_EXEC | FP_ALL_READ,
} t_file_perm;

typedef struct s_fd
{
	t_str	  name;
	int		  fd;
	t_fd_perm perms;
	t_fd_type type;
} t_fd;

typedef struct s_dir
{
	DIR	 *ptr;
	t_str name;
} t_dir;

typedef struct s_file
{
	FILE *ptr;
	t_str name;
} t_file;

union u_file_slot {
	t_fd   fd;
	t_dir  dir;
	t_file file;
};

struct s_file_slot
{
	enum e_file_slot_kind ty;
	union u_file_slot	  slot;
};

typedef struct s_fd_array
{
	struct s_file_slot storage[FILE_SLOT_LEN];
} t_fd_array;

typedef struct stat t_stat;

typedef struct dirent *t_dir_entry;

/// @brief Get the fd arrays object
/// @return fd_arrays  
/// @note internal function used to get the fd arrays
t_fd_array		   *get_fd_arrays(void);
struct s_file_slot *get_unused_fd_slot(void);
void				close_all_slots(void);
void				close_slot(struct s_file_slot *slot);
t_fd   *open_fd(t_str name, t_fd_perm perms, t_file_open_option open_options,
				t_file_perm file_perm);
t_error read_fd(t_fd *fd, t_u8 *buffer, t_usize size, t_isize *read_count);
t_error write_fd(t_fd *fd, t_u8 *buffer, t_usize size, t_isize *read_count);
t_error stat_fd(t_fd *fd, t_stat *stat);
void	close_fd(t_fd *fd);

t_error open_dir(t_str name, t_dir *dir);
t_error read_dir(t_dir *dir, t_dir_entry *out);
t_error close_dir(t_dir *dir);

#endif /* FS_H */
