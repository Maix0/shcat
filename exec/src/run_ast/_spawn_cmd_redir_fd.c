/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _spawn_cmd_redir_fd.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 12:30:09 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/14 15:10:40 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "app/env.h"
#include "exec/_run_ast.h"
#include "me/fs/fs.h"
#include "me/os/os.h"
#include "me/printf/printf.h"
#include "me/str/str.h"
#include <sys/wait.h>
#include <unistd.h>
#include <errno.h>
#include "line/line.h"
#include "me/types.h"

#define ARG "Error: too may args for redirection\n"
#define ERR "Error: failed to open %s\n"

t_error	_redir_input(\
	t_spawn_info *info, t_state *state, t_vec_str *fn, t_ast_node red)
{
	t_fd	*red_fd;

	if (red->data.file_redirection.op == AST_REDIR_INPUT)
	{
		(void)((info->stdin.tag == R_FD) && (close_fd(info->stdin.fd.fd), 1));
		info->stdin.tag = R_INHERITED;
		if (_ast_into_str(red->data.file_redirection.output, state, fn))
			return (ERROR);
		if (fn->len != 1)
			return (me_eprintf(ARG), vec_str_free(*fn), ERROR);
		red_fd = open_fd(fn->buffer[0], FD_READ, O_CLOEXEC, 0);
		if (red_fd == NULL)
			return (me_eprintf(ERR, fn->buffer[0]), vec_str_free(*fn), ERROR);
		info->stdin = fd(red_fd);
	}
	return (NO_ERROR);
}

t_error	_redir_output(\
	t_spawn_info *info, t_state *state, t_vec_str *fn, t_ast_node red)
{
	t_fd	*red_fd;

	if (red->data.file_redirection.op == AST_REDIR_OUTPUT)
	{
		(void)((info->stdout.tag == R_FD) && (close_fd(info->stdout.fd.fd), 1));
		info->stdout.tag = R_INHERITED;
		if (_ast_into_str(red->data.file_redirection.output, state, fn))
			return (ERROR);
		if (fn->len != 1)
			return (me_eprintf(ARG), vec_str_free(*fn), ERROR);
		red_fd = open_fd(fn->buffer[0], FD_WRITE, \
			O_TRUNC | O_CREAT | O_CLOEXEC, FP_ALL_READ | FP_ALL_WRITE);
		if (red_fd == NULL)
			return (me_eprintf(ERR, fn->buffer[0]), vec_str_free(*fn), ERROR);
		info->stdout = fd(red_fd);
	}
	return (NO_ERROR);
}

t_error	_redir_output_append(\
	t_spawn_info *info, t_state *state, t_vec_str *fn, t_ast_node red)
{
	t_fd	*red_fd;

	if (red->data.file_redirection.op == AST_REDIR_APPEND)
	{
		(void)((info->stdout.tag == R_FD) && (close_fd(info->stdout.fd.fd), 1));
		info->stdout.tag = R_INHERITED;
		if (_ast_into_str(red->data.file_redirection.output, state, fn))
			return (ERROR);
		if (fn->len != 1)
			return (me_eprintf(ARG), vec_str_free(*fn), ERROR);
		red_fd = open_fd(fn->buffer[0], FD_WRITE, \
			O_APPEND | O_CREAT | O_CLOEXEC, FP_ALL_READ | FP_ALL_WRITE);
		if (red_fd == NULL)
			return (me_eprintf(ERR, fn->buffer[0]), vec_str_free(*fn), ERROR);
		info->stdout = fd(red_fd);
	}
	return (NO_ERROR);
}

t_error	_redirection_fd(\
	t_spawn_info *info, t_state *state, t_ast_node red)
{
	t_vec_str	fname;

	fname = vec_str_new(16, str_free);
	if (_redir_input(info, state, &fname, red))
		return (ERROR);
	if (_redir_output(info, state, &fname, red))
		return (ERROR);
	if (_redir_output_append(info, state, &fname, red))
		return (ERROR);
	if (red->data.file_redirection.op == AST_REDIR_DUP_INPUT
		|| red->data.file_redirection.op == AST_REDIR_DUP_OUTPUT
		|| red->data.file_redirection.op == AST_REDIR_CLOSE_INPUT
		|| red->data.file_redirection.op == AST_REDIR_CLOSE_OUTPUT
		|| red->data.file_redirection.op == AST_REDIR_INPUT_OUTPUT
		|| red->data.file_redirection.op == AST_REDIR_OUTPUT_CLOBBER)
		return (ERROR);
	vec_str_free(fname);
	return (NO_ERROR);
}
