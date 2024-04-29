/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 15:43:08 by maiboyer          #+#    #+#             */
/*   Updated: 2024/01/06 18:39:58 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROCESS_H
# define PROCESS_H

# include "me/types.h"
# include "me/vec/vec_str.h"
# include "me/vec/vec_u8.h"

typedef t_i32				t_pid;
typedef t_i32				t_exit_code;

enum						e_redirection
{
	R_INHERITED = 0,
	R_PIPED = 1,
	R_FD = 2,
};

union						u_redirection
{
	struct					s_fd
	{
		t_file				value;
	} fd;
	struct					s_piped
	{
	} piped;
	struct					s_inherited
	{
	} inherited;
};

typedef struct s_redirection
{
	enum e_redirection		tag;
	union u_redirection		vals;
}							t_redirection;

static inline t_redirection	piped(void)
{
	return ((t_redirection){
		.tag = R_PIPED,
	});
}

static inline t_redirection	inherited(void)
{
	return ((t_redirection){
		.tag = R_INHERITED,
	});
}

static inline t_redirection	fd(t_file fd)
{
	return ((t_redirection){.tag = R_FD, \
		.vals = (union u_redirection){.fd = {.value = fd},}});
}

enum						e_wrapped_fd_tag
{
	READ_ONLY,
	WRITE_ONLY,
	READ_WRITE,
	INVALID,
};

union						u_wrapped_fd
{
	struct					s_read_only
	{
		t_file				fd;
	} ro;
	struct					s_write_only
	{
		t_file				fd;
	} wo;
	struct					s_read_write
	{
		t_file				fd;
	} rw;
};

typedef struct s_wrapped_fd
{
	enum e_wrapped_fd_tag	tag;
	union u_wrapped_fd		vals;
}							t_wrapped_fd;

static inline t_wrapped_fd	ro(t_file fd)
{
	return ((t_wrapped_fd){.tag = READ_ONLY,
		.vals = (union u_wrapped_fd){
		.ro = {.fd = fd},
	}});
}

static inline t_wrapped_fd	wo(t_file fd)
{
	return ((t_wrapped_fd){.tag = WRITE_ONLY,
		.vals = (union u_wrapped_fd){.wo = {.fd = fd}}});
}

typedef struct s_spawn_info
{
	t_redirection			stdin;
	t_redirection			stdout;
	t_redirection			stderr;
	t_vec_str				arguments;
	t_vec_str				environement;
	t_str					binary_path;
	void					(*forked_free)(void *);
	void					*forked_free_args;
}							t_spawn_info;

typedef struct s_process
{
	t_wrapped_fd			stdin;
	t_wrapped_fd			stdout;
	t_wrapped_fd			stderr;
	t_pid					pid;
}							t_process;

typedef struct s_process_output
{
	t_pid					pid;
	t_vec_u8				stdout;
	t_vec_u8				stderr;
	t_exit_code				exit_code;
}							t_process_output;

t_error						spawn_process(t_spawn_info info,
								t_process *process);

#endif /* PROCESS_H */
