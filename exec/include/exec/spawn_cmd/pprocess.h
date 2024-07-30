/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pprocess.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 15:43:08 by maiboyer          #+#    #+#             */
/*   Updated: 2024/07/30 17:06:38 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PPROCESS_H
#define PPROCESS_H

#include "me/fs/fs.h"
#include "me/types.h"
#include "me/vec/vec_str.h"
#include "me/vec/vec_u8.h"

typedef t_i32 t_pid;
typedef t_i32 t_exit_code;

enum e_p_redirection
{
	PR_INHERITED = 0,
	PR_PIPED = 1,
	PR_FD = 2,
};

union u_p_redirection {
	struct s_pfd_redirection
	{
		t_fd *value;
	} fd;
	struct s_ppiped_redirection
	{
	} piped;
	struct s_pinherited_redirection
	{
	} inherited;
};

/// @brief Redirection for spawning a process
typedef struct s_p_redirection
{
	enum e_p_redirection  tag;
	union u_p_redirection vals;
} t_p_redirection;

/// @brief Create a piped redirection
/// @param void
/// @return the redirection
static inline t_p_redirection ppiped(void)
{
	return ((t_p_redirection){
		.tag = PR_PIPED,
	});
}

/// @brief Create an inherited redirection (inherit from the parent process)
/// @param void
/// @return the redirection
static inline t_p_redirection pinherited(void)
{
	return ((t_p_redirection){
		.tag = PR_INHERITED,
	});
}

/// @brief Create a file descriptor redirection
/// @param fd file descriptor to redirect
/// @return the redirection
static inline t_p_redirection pfd(t_fd *fd)
{
	return ((t_p_redirection){.tag = PR_FD,
							  .vals = (union u_p_redirection){
								  .fd = {.value = fd},
							  }});
}

/// @brief Spawn information
typedef struct s_p_spawn_info
{
	t_p_redirection stdin;
	t_p_redirection stdout;
	t_p_redirection stderr;
	t_vec_str		arguments;
	t_vec_str		environement;
	t_str			binary_path;
	void (*forked_free)(void *);
	void *forked_free_args;
} t_p_spawn_info;

/// @brief Process information
typedef struct s_p_process
{
	t_fd *stdin;
	t_fd *stderr;
	t_fd *stdout;
	t_pid pid;
} t_p_process;

/// @brief Spawn a new process with the given information
/// @param info the information to spawn the process
/// @param process data returned by the function
/// @return true if an error occured, false otherwise
t_error pspawn_process(t_p_spawn_info info, t_p_process *process);

#endif /* PROCESS_H */
