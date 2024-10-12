/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   os.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 15:43:08 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:52:10 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OS_H
# define OS_H

# include "me/fs/fs.h"
# include "me/types.h"
# include "me/vec/vec_str.h"
# include "me/vec/vec_u8.h"

/// @brief A process ID
typedef int						t_pid;
/// @brief A process exit_code
typedef int						t_exit_code;

/// @brief Redirection for spawning a process
typedef union u_redirection		t_redirection;

/// @brief Pipe structure
typedef struct s_pipe			t_pipe;

/// @brief Spawn information
typedef struct s_spawn_info		t_spawn_info;

/// @brief Process information
typedef struct s_process		t_process;

/// @struct Process output
/// @brief Process output information
typedef struct s_process_output	t_process_output;

enum							e_redirection
{
	R_INHERITED = 0,
	R_PIPED = 1,
	R_FD = 2,
	R_NONE,
};

union							u_redirection
{
	enum e_redirection			tag;
	struct						s_fd_redirection
	{
		enum e_redirection		tag;
		t_fd					*fd;
	} fd;
	struct						s_piped_redirection
	{
		enum e_redirection		tag;
	} piped;
	struct						s_inherited_redirection
	{
		enum e_redirection		tag;
	} inherited;
};

struct							s_spawn_info
{
	t_redirection				stdin;
	t_redirection				stdout;
	t_redirection				stderr;
	t_vec_str					arguments;
	t_vec_str					environement;
	t_str						binary_path;
	void						(*forked_free)(void *);
	void						*forked_free_args;
};

struct							s_process
{
	t_fd						*stdin;
	t_fd						*stdout;
	t_fd						*stderr;
	t_pid						pid;
};

struct							s_process_output
{
	t_pid						pid;
	t_vec_u8					stdout;
	t_vec_u8					stderr;
	t_exit_code					exit_code;
};

struct							s_pipe
{
	t_fd						*read;
	t_fd						*write;
};

/// @brief Spawn a new process with the given information
/// @param info the information to spawn the process
/// @param process data returned by the function
/// @return true if an error occured, false otherwise
t_error							spawn_process(t_spawn_info info,
									t_process *process);

/// @brief Create a pipe
/// @param[out] out the created pipe
/// @return the error
t_error							create_pipe(t_pipe *out);

/// @brief Create a piped redirection
/// @param void
/// @return the redirection
static inline t_redirection	piped(void)
{
	return ((t_redirection){.tag = R_PIPED});
}

/// @brief Create an inherited redirection (inherit from the parent process)
/// @param void
/// @return the redirection
static inline t_redirection	inherited(void)
{
	return ((t_redirection){.tag = R_INHERITED});
}

/// @brief Create a file descriptor redirection
/// @param fd file descriptor to redirect
/// @return the redirection
static inline t_redirection	fd(t_fd *fd)
{
	return ((t_redirection){.fd = {.tag = R_FD, fd}});
}

#endif /* PROCESS_H */
