/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_subshell.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 12:35:02 by maiboyer          #+#    #+#             */
/*   Updated: 2024/09/15 20:17:24 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "exec/_run_ast.h"
#include "me/mem/mem.h"
#include "me/str/str.h"
#include <sys/wait.h>
#include <errno.h>

t_error	run_subshell(t_ast_subshell *subshell, t_state *state,
		t_cmd_pipe cmd_pipe, t_subshell_result *out)
{
	struct s_subshell_info	info;
	t_pipe					spipe;
	t_usize					i;
	t_vec_str				filename_args;
	t_ast_node				red;
	t_vec_ast				redirection;
	t_fd					*red_fd;
	t_pipe					heredoc_pipe;
	t_pid					forked;
	int						code;
	int						status;

	if (subshell == NULL || state == NULL || out == NULL)
		return (ERROR);
	mem_set_zero(&info, sizeof(info));
	info.stdin = cmd_pipe.input;
	if (cmd_pipe.create_output)
	{
		if (create_pipe(&spipe))
			return (ERROR);
		info.stdout = spipe.write;
		info.ret_stdout = spipe.read;
	}
	i = 0;
	filename_args = vec_str_new(16, str_free);
	redirection = subshell->suffixes_redirections;
	while (i < redirection.len)
	{
		red = redirection.buffer[i];
		if (red == NULL)
			continue ;
		vec_str_free(filename_args);
		filename_args = vec_str_new(16, str_free);
		if (red->kind == AST_FILE_REDIRECTION)
		{
			if (red->data.file_redirection.op == AST_REDIR_INPUT)
			{
				if (info.stdin != NULL)
					close_fd(info.stdin);
				info.stdin = NULL;
				if (_ast_into_str(red->data.file_redirection.output, state,
						&filename_args))
					return (ERROR);
				if (filename_args.len != 1)
					return (vec_str_free(filename_args), ERROR);
				red_fd = open_fd(filename_args.buffer[i], FD_READ, O_CLOEXEC,
						0);
				if (red_fd == NULL)
					return (vec_str_free(filename_args), ERROR);
				info.stdin = red_fd;
			}
			if (red->data.file_redirection.op == AST_REDIR_OUTPUT)
			{
				if (info.stdout != NULL)
					close_fd(info.stdout);
				info.stdout = NULL;
				if (_ast_into_str(red->data.file_redirection.output, state,
						&filename_args))
					return (ERROR);
				if (filename_args.len != 1)
					return (vec_str_free(filename_args), ERROR);
				red_fd = open_fd(filename_args.buffer[i], FD_WRITE,
						O_TRUNC | O_CREAT | O_CLOEXEC,
						FP_ALL_READ | FP_ALL_WRITE);
				if (red_fd == NULL)
					return (vec_str_free(filename_args), ERROR);
				info.stdout = red_fd;
			}
			if (red->data.file_redirection.op == AST_REDIR_APPEND)
			{
				if (info.stdout != NULL)
					close_fd(info.stdout);
				info.stdout = NULL;
				if (_ast_into_str(red->data.file_redirection.output, state,
						&filename_args))
					return (ERROR);
				if (filename_args.len != 1)
					return (vec_str_free(filename_args), ERROR);
				red_fd = open_fd(filename_args.buffer[i], FD_WRITE,
						O_TRUNC | O_CREAT | O_CLOEXEC,
						FP_ALL_READ | FP_ALL_WRITE);
				if (red_fd == NULL)
					return (vec_str_free(filename_args), ERROR);
				info.stdout = red_fd;
			}
			if (red->data.file_redirection.op == AST_REDIR_DUP_INPUT
				|| red->data.file_redirection.op == AST_REDIR_DUP_OUTPUT
				|| red->data.file_redirection.op == AST_REDIR_CLOSE_INPUT
				|| red->data.file_redirection.op == AST_REDIR_CLOSE_OUTPUT
				|| red->data.file_redirection.op == AST_REDIR_INPUT_OUTPUT
				|| red->data.file_redirection.op == AST_REDIR_OUTPUT_CLOBBER)
				return (ERROR);
		}
		if (red->kind == AST_HEREDOC_REDIRECTION)
		{
			if (red->data.heredoc_redirection.op == AST_REDIR_HEREDOC)
			{
				if (info.stdout != NULL)
					close_fd(info.stdout);
				info.stdout = NULL;
				if (create_pipe(&heredoc_pipe))
					return (ERROR);
				//put_string_fd(heredoc_pipe.write,
				//	red->data.heredoc_redirection.content);
				close_fd(heredoc_pipe.write);
				info.stdin = heredoc_pipe.read;
			}
			if (red->data.heredoc_redirection.op == AST_REDIR_HEREDOC_INDENT)
				return (ERROR);
		}
		i++;
	}
	vec_str_free(filename_args);
	forked = fork();
	if (forked == 0)
	{
		if (info.ret_stdout != NULL)
			close_fd(info.ret_stdout);
		if (info.stdin != NULL)
			(dup2(info.stdin->fd, 0), close_fd(info.stdin));
		if (info.stdout != NULL)
			(dup2(info.stdout->fd, 1), close_fd(info.stdout));
		if (info.stderr != NULL)
			(dup2(info.stderr->fd, 2), close_fd(info.stderr));
		i = 0;
		code = 0;
		while (i < subshell->body.len)
		{
			if (_run_get_exit_code(subshell->body.buffer[i], state, &code))
				me_exit(127);
			i++;
		}
		me_exit(code);
	}
	if (forked == -1)
		return (ERROR);
	out->exit = -1;
	out->pid = forked;
	if (info.stdin != NULL)
		(dup2(info.stdin->fd, 0), close_fd(info.stdin));
	if (info.stdout != NULL)
		(dup2(info.stdout->fd, 1), close_fd(info.stdout));
	if (info.stderr != NULL)
		(dup2(info.stderr->fd, 2), close_fd(info.stderr));
	if (cmd_pipe.create_output || cmd_pipe.input != NULL)
		return (out->stdout = info.ret_stdout, NO_ERROR);
	if (waitpid(forked, &status, 0) == -1)
		return (ERROR);
	if (WIFEXITED(status))
		out->exit = WEXITSTATUS(status);
	if (WIFSIGNALED(status))
		out->exit = WTERMSIG(status);
	return (NO_ERROR);
}
