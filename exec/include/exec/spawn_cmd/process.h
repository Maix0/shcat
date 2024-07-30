/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 15:43:08 by maiboyer          #+#    #+#             */
/*   Updated: 2024/07/30 16:28:05 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROCESS_H
#define PROCESS_H

#include "me/fs/fs.h"
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
		t_fd *value;
	} fd;
	struct s_piped_redirection
	{
	} piped;
	struct s_inherited_redirection
	{
	} inherited;
};

/// @brief Redirection for spawning a process
typedef struct s_process_redirection
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
static inline t_redirection fd(t_fd *fd)
{
	return ((t_redirection){.tag = R_FD,
							.vals = (union u_redirection){
								.fd = {.value = fd},
							}});
}

/// @brief Spawn information
typedef struct s_exec_spawn_info
{
	t_redirection stdin;
	t_redirection stdout;
	t_redirection stderr;
	t_vec_str	  arguments;
	t_vec_str	  environement;
	t_str		  binary_path;
	void (*forked_free)(void *);
	void *forked_free_args;
} t_exec_spawn_info;

/// @brief Process information
typedef struct s_process
{
	t_pid		 pid;
} t_exec_process;

/// @brief Spawn a new process with the given information
/// @param info the information to spawn the process
/// @param process data returned by the function
/// @return true if an error occured, false otherwise
t_error spawn_process(t_exec_spawn_info info, t_exec_process *process);

#endif /* PROCESS_H */
