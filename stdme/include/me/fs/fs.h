/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fs.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 15:12:18 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:52:03 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FS_H
# define FS_H

# include "me/types.h"
# include <dirent.h>
# include <fcntl.h>
# include <stdio.h>
# include <sys/types.h>

# if (!defined(FILE_SLOT_LEN)) || FILE_SLOT_LEN < 64
#  ifdef FILE_SLOT_LEN
#   undef FILE_SLOT_LEN
#  endif
#  define FILE_SLOT_LEN 512
# endif

/// The tag of slot, used to know what is in the slot
/// A slot can only have one type at a time
/// @note you should never set this value yourself
/// `Unused` means the slot is not used
/// `FD` means the slot is used by a file descriptor
/// `DIR` means the slot is used by a directory stream
/// `FILE` means the slot is used by a file stream
enum						e_file_slot_kind
{
	SLOT_UNUSED = 0 << 0,
	SLOT_FD = 1 << 0,
	SLOT_DIR = 1 << 1,
	SLOT_FILE = 1 << 2,
};

/// The type of an open file descriptor
/// You should never set this value yourself
typedef enum e_fd_type
{
	FD_FILE = 1 << 0,
	FD_PIPE = 1 << 1,
	FD_SOCK = 1 << 2,
	FD_UNKNOWN = 1 << 7,
}							t_fd_type;

/// @brief File descriptor permission
/// @note you can combine them with the `|` operator
typedef enum e_fd_perm
{
	FD_READ = 1 << 0,
	FD_WRITE = 1 << 1,
}							t_fd_perm;

/// @brief File open options
/// @note you can combine them with the `|` operator
/// They are named rather explicitely
/// They are just an alias to the "Raw" options using the `O` prefix
typedef enum e_file_open_option
{
	FD_CREATE = O_CREAT,
	FD_EXCLUSIVE = O_EXCL,
	FD_CLOSE_ON_EXEC = O_CLOEXEC,
	FD_TRUNCATE = O_TRUNC,
	FD_NON_BLOCKING = O_NONBLOCK,
}							t_file_open_option;

/// @brief File permission
/// `O` means owner
/// `G` means group
/// `U` means user
/// `ALL` means all
/// There are the raw permission, you can combine them to get the permission you
/// want And there are "aliases" that are common permission set
/// @note you can combine them with the `|` operator
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
}							t_file_perm;

/// @brief File descriptor structure
/// name: the name of the file, NULL if unknown
/// fd: the file descriptor itself
/// perms: the permission of the file descriptor
/// type: the type of the file descriptor
typedef struct s_fd
{
	t_str					name;
	int						fd;
	t_fd_perm				perms;
	t_fd_type				type;
}							t_fd;

/// @brief Directory structure
/// name: the name of the directory, NULL if unknown
/// ptr: the directory stream itself
typedef struct s_dir
{
	DIR						*ptr;
	t_str					name;
}							t_dir;

/// @brief File structure
/// name: the name of the file, NULL if unknown
/// ptr: the file stream itself
typedef struct s_file
{
	FILE					*ptr;
	t_str					name;
}							t_file;

/// @brief Union of the file slot
/// @note if you use this, you should know what you are doing
union						u_file_slot
{
	t_fd					fd;
	t_dir					dir;
	t_file					file;
};

/// @brief File slot structure
/// ty: the type of the slot
/// slot: the slot itself
/// @note you should know what you are doing if you use this
struct						s_file_slot
{
	enum e_file_slot_kind	ty;
	union u_file_slot		slot;
};

/// An array of file slots
/// @note you should know what you are doing if you use this
typedef struct s_fd_array
{
	struct s_file_slot		storage[FILE_SLOT_LEN];
}							t_fd_array;

/// @brief A mode used to open a file
typedef t_const_str			t_mode;

/// @brief Stat structure
/// @note this is a simple typedef because I hate the struct keyword
typedef struct stat			t_stat;

/// @brief Directory entry structure
/// @note this is a simple typedef because I hate the struct keyword and it is
/// always behind a pointer
typedef struct dirent		*t_dir_entry;

/*_____ _   _ _______ ______ _____  _   _          _
 |_   _| \ | |__   __|  ____|  __ \| \ | |   /\   | |
   | | |  \| |  | |  | |__  | |__) |  \| |  /  \  | |
   | | | . ` |  | |  |  __| |  _  /| . ` | / /\ \ | |
  _| |_| |\  |  | |  | |____| | \ \| |\  |/ ____ \| |____
 |_____|_| \_|  |_|  |______|_|  \_\_| \_/_/    \_\______|
*/

/// @brief Get the fd arrays object
/// @return pointer to the files's array
/// @note internal function used to get the files array
t_fd_array					*get_fd_arrays(void);

/// @brief Get the unused fd slot object
/// @return pointer to the unused file slot
/// @note Will abort if no slot is available
struct s_file_slot			*get_unused_fd_slot(void);

/// @brief Close all slots
/// @note This is probably NOT what you want
void						close_all_slots(void);

/// @note Close the given slot
/// @param[in] slot the slot to close
/// @note this is probably NOT what you want
void						close_slot(struct s_file_slot *slot);

/* ______ _____
  |  ____|  __ \
  | |__  | |  | |
  |  __| | |  | |
  | |    | |__| |
  |_|    |_____/
*/

/// @brief Open a file descriptor
/// @param pathname the path to the file
/// @param permission the permission given to open the file (read, write, ...)
/// @param open_options the options to open the file
/// @param fileperm the file permission
/// @return the file descriptor* on success, NULL otherwise
t_fd						*open_fd(t_str name, t_fd_perm perms,
								t_file_open_option open_options,
								t_file_perm file_perm);

/// @brief Read from a file descriptor
/// @param[in] fd the file descriptor
/// @param[out] buffer the buffer to read into
/// @param[in] size the size of the buffer
/// @param[out] read_count the number of bytes read
/// @return true on error, false otherwise
t_error						read_fd(t_fd *fd, t_u8 *buffer, t_usize size,
								t_isize *read_count);

/// @brief Write to a file descriptor
/// @param[in] fd the file descriptor
/// @param[in] buffer the buffer to write from
/// @param[in] size the size of the buffer
/// @param[out] write_count the number of bytes written
/// @return true on error, false otherwise
/// @note write_count can be NULL
t_error						write_fd(t_fd *fd, t_u8 *buffer, t_usize size,
								t_isize *write_count);

/// @brief Get the file descriptor's information through stat
/// @param[in] fd the file descriptor
/// @param[out] stat the stat structure to fill
/// @return true on error, false otherwise
t_error						stat_fd(t_fd *fd, t_stat *stat);

/// @brief Close a file descriptor
/// @param[in] fd the file descriptor
/// @note Will close the file descriptor and free the slot
void						close_fd(t_fd *fd);

/// @brief write a number to a file descriptor
/// @note will fail silently if the fd is not open in write mode
void						put_number_fd(t_fd *fd, t_u64 number);

/// @brief write a string to a file descriptor
/// @note will fail silently if the fd is not open in write mode
void						put_string_fd(t_fd *fd, t_const_str string);

/// @brief write a char to a file descriptor
/// @note will fail silently if the fd is not open in write mode
void						put_char_fd(t_fd *fd, t_u8 c);

/// @brief Duplicate a t_fd using the dup syscall
/// @note will return NULL in case of error (either fd is null or dup failed)
t_fd						*dup_fd(t_fd *fd);
/* _____ _____ _____  ______ _____ _______ ____  _______     __
  |  __ \_   _|  __ \|  ____/ ____|__   __/ __ \|  __ \ \   / /
  | |  | || | | |__) | |__ | |       | | | |  | | |__) \ \_/ /
  | |  | || | |  _  /|  __|| |       | | | |  | |  _  / \   /
  | |__| || |_| | \ \| |___| |____   | | | |__| | | \ \  | |
  |_____/_____|_|  \_\______\_____|  |_|  \____/|_|  \_\ |_|
*/

/// @brief Open a file
/// @param[in] name the name of the file
/// @param[out] dir the file structure to fill
/// @return true on error, false otherwise
t_error						open_dir(t_str name, t_dir **dir);

/// @brief Read a directory, advancing in the directory stream
/// @param[in] dir the directory to read from
/// @param[out] out the directory entry to fill
/// @return true on error, false otherwise
/// @note you need to open the dir again to read from the begining
/// @note you will get an NULL at the end of the directory stream
t_error						read_dir(t_dir *dir, t_dir_entry *out);

/// @brief Close a directory
/// @param[in] dir the directory to close
/// @note Will close the directory and free the slot
void						close_dir(t_dir *dir);

/*______ _____ _      ______
 |  ____|_   _| |    |  ____|
 | |__    | | | |    | |__
 |  __|   | | | |    |  __|
 | |     _| |_| |____| |____
 |_|    |_____|______|______|
*/

/// @brief Open a file using a file stream
/// @param[in] name the name of the file
/// @param[in] mode the mode to open the file
/// @param[out] file the file structure to fill
/// @return true on error, false otherwise
t_error						open_file(t_str name, t_mode mode, t_file **file);

/// @brief Read a file
/// @param[in] file the file to read from
/// @param[out] buffer the buffer to read into
/// @param[in] size the size of the buffer
/// @param[out] read_count the number of bytes read
/// @return true on error, false otherwise
t_error						read_file(t_file *file, t_u8 *buffer, t_usize size,
								t_isize *read_count);

/// @brief Write to a file
/// @param[in] file the file to write to
/// @param[in] buffer the buffer to write from
/// @param[in] size the size of the buffer
/// @param[out] write_count the number of bytes written
/// @return true on error, false otherwise
/// @note write_count can be NULL
t_error						write_file(t_file *file, t_u8 *buffer, t_usize size,
								t_isize *write_count);

/// @brief Close the underlying file stream
/// @param[in] file the file to close
/// @note Will close the file and free the slot
void						close_file(t_file *file);

/* _____ ______ _______ _______ ______ _____   _____
  / ____|  ____|__   __|__   __|  ____|  __ \ / ____|
 | |  __| |__     | |     | |  | |__  | |__) | (___
 | | |_ |  __|    | |     | |  |  __| |  _  / \___ \
 | |__| | |____   | |     | |  | |____| | \ \ ____) |
  \_____|______|  |_|     |_|  |______|_|  \_\_____/
*/

// TODO: Documentation!
t_fd						*get_stdin(void);
t_fd						*get_stdout(void);
t_fd						*get_stderr(void);

#endif /* FS_H */
