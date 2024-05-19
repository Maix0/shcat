/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fs.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 15:12:18 by maiboyer          #+#    #+#             */
/*   Updated: 2024/05/19 17:08:38 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FS_H
#define FS_H

#include "me/types.h"
#include <dirent.h>
#include <stdio.h>
#include <sys/types.h>

#if !defined(FILE_SLOT_LEN) || FILE_SLOT_LEN < 64
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

typedef struct s_fd
{
	char	 *name;
	int		  fd;
	t_fd_perm perms;
	t_fd_type type;
} t_fd;

typedef struct s_dir
{
	DIR	 *ptr;
	char *name;
} t_dir;

typedef struct s_file_data
{
	FILE *ptr;
	char *name;
} t_file_data;

union u_file_slot {
	t_fd		fd;
	t_dir		dir;
	t_file_data file;
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

t_fd_array		   *get_fd_arrays(void);
struct s_file_slot *get_unused_fd_slot(void);
void				close_all_fds(void);

#endif /* FS_H */
