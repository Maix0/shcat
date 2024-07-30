/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 15:43:08 by maiboyer          #+#    #+#             */
/*   Updated: 2024/07/30 13:23:00 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROCESS_H
#define PROCESS_H

#include "me/types.h"
#include "me/vec/vec_str.h"
#include "me/vec/vec_u8.h"

typedef t_i32 t_pid;
typedef t_i32 t_exit_code;

enum e_redirection
{
	R_INHERITED = 0,
	R_PIPED = 1,
	R_FD = 2,
};

union u_redirection {
	struct s_fd_redirection
	{
		int value;
	} fd;
	struct s_piped_redirection
	{
	} piped;
	struct s_inherited_redirection
	{
	} inherited;
};

/// @brief Redirection for spawning a process
typedef struct s_redirection
{
	enum e_redirection	tag;
	union u_redirection vals;
} t_redirection;

/// @brief Create a piped redirection
/// @param void
/// @return the redirection
static inline t_redirection piped(void)
{
	return ((t_redirection){
		.tag = R_PIPED,
	});
}

/// @brief Create an inherited redirection (inherit from the parent process)
/// @param void
/// @return the redirection
static inline t_redirection inherited(void)
{
	return ((t_redirection){
		.tag = R_INHERITED,
	});
}

/// @brief Create a file descriptor redirection
/// @param fd file descriptor to redirect
/// @return the redirection
static inline t_redirection fd(int fd)
{
	return ((t_redirection){.tag = R_FD,
							.vals = (union u_redirection){
								.fd = {.value = fd},
							}});
}

/// @brief Wrapped file descriptor tag
enum e_wrapped_fd_tag
{
	READ_ONLY,
	WRITE_ONLY,
	READ_WRITE,
	INVALID,
};

/// @brief Wrapped file descriptor
union u_wrapped_fd {
	struct s_read_only
	{
		int fd;
	} ro;
	struct s_write_only
	{
		int fd;
	} wo;
	struct s_read_write
	{
		int fd;
	} rw;
};

/// @brief Wrapped file descriptor
typedef struct s_wrapped_fd
{
	enum e_wrapped_fd_tag tag;
	union u_wrapped_fd	  vals;
} t_wrapped_fd;

/// @brief Create a Read only wrapped file descriptor
/// @param fd file descriptor to wrap
/// @return the wrapped file descriptor
static inline t_wrapped_fd ro(int fd)
{
	return ((t_wrapped_fd){.tag = READ_ONLY,
						   .vals = (union u_wrapped_fd){
							   .ro = {.fd = fd},
						   }});
}

/// @brief Create a Write only wrapped file descriptor
/// @param fd file descriptor to wrap
/// @return the wrapped file descriptor
static inline t_wrapped_fd wo(int fd)
{
	return ((t_wrapped_fd){.tag = WRITE_ONLY, .vals = (union u_wrapped_fd){.wo = {.fd = fd}}});
}

/// @brief Spawn information
typedef struct s_spawn_info
{
	t_redirection stdin;
	t_redirection stdout;
	t_redirection stderr;
	t_vec_str	  arguments;
	t_vec_str	  environement;
	t_str		  binary_path;
	void (*forked_free)(void *);
	void *forked_free_args;
} t_spawn_info;

/// @brief Process information
typedef struct s_process
{
	t_wrapped_fd stdin;
	t_wrapped_fd stdout;
	t_wrapped_fd stderr;
	t_pid		 pid;
} t_process;
/// @struct Process output
/// @brief Process output information
typedef struct s_process_output
{
	t_pid		pid;
	t_vec_u8	stdout;
	t_vec_u8	stderr;
	t_exit_code exit_code;
} t_process_output;

/// @brief Spawn a new process with the given information
/// @param info the information to spawn the process
/// @param process data returned by the function
/// @return true if an error occured, false otherwise
t_error spawn_process(t_spawn_info info, t_process *process);

#endif /* PROCESS_H */
