/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _spawn_cmd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 12:30:09 by maiboyer          #+#    #+#             */
/*   Updated: 2024/09/16 17:34:45 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "app/env.h"
#include "exec/_run_ast.h"
#include "me/fs/fs.h"
#include "me/os/os.h"
#include "me/str/str.h"
#include <sys/wait.h>
#include <unistd.h>
#include <errno.h>
#include "line/line.h"

t_error	_get_heredoc_input(t_fd *write, t_str delim)
{
	struct s_line_state	lstate;
	t_str				line;

	if (write == NULL || delim == NULL)
		return (ERROR);
	while (true)
	{
		if (line_edit_start(&lstate, get_stdin(), get_stdout(), "> "))
			return (ERROR);
		while (!line_edit_feed(&lstate, &line))
		{
			if (errno == EAGAIN)
			{
				errno = 0;
				return (lstate.pos = 0, string_clear(&lstate.buf), \
put_string_fd(lstate.output_fd, "^C\n"), line_refresh_line(&lstate), ERROR);
			}
		}
		line_edit_stop(&lstate);
		if (line == NULL || str_compare(delim, line))
			break ;
		(put_string_fd(write, line), put_char_fd(write, '\n'), str_free(line));
	}
	return (NO_ERROR);
}

t_error _redirection_fd(t_spawn_info *info, t_state *state, t_cmd_pipe cmd_pipe, t_ast_node red)
{
	t_vec_str	filename_args;
	t_fd		*red_fd;
	
	filename_args = vec_str_new(16, str_free);
	if (red->data.file_redirection.op == AST_REDIR_INPUT)
	{
		if (info->stdin.tag == R_FD)
			close_fd(info->stdin.fd.fd);
		info->stdin.tag = R_INHERITED;
		if (_ast_into_str(red->data.file_redirection.output, state,
				&filename_args))
			return (ERROR);
		if (filename_args.len != 1)
			return (vec_str_free(filename_args), ERROR);
		red_fd = open_fd(filename_args.buffer[0], FD_READ, O_CLOEXEC,
				0);
		if (red_fd == NULL)
			return (vec_str_free(filename_args), ERROR);
		info->stdin = fd(red_fd);
	}
	if (red->data.file_redirection.op == AST_REDIR_OUTPUT)
	{
		if (info->stdout.tag == R_FD)
			close_fd(info->stdout.fd.fd);
		info->stdout.tag = R_INHERITED;
		if (_ast_into_str(red->data.file_redirection.output, state,
				&filename_args))
			return (ERROR);
		if (filename_args.len != 1)
			return (vec_str_free(filename_args), ERROR);
		red_fd = open_fd(filename_args.buffer[0], FD_WRITE,
				O_TRUNC | O_CREAT | O_CLOEXEC,
				FP_ALL_READ | FP_ALL_WRITE);
		if (red_fd == NULL)
			return (vec_str_free(filename_args), ERROR);
		info->stdout = fd(red_fd);
	}
	if (red->data.file_redirection.op == AST_REDIR_APPEND)
	{
		if (info->stdout.tag == R_FD)
			close_fd(info->stdout.fd.fd);
		info->stdout.tag = R_INHERITED;
		if (_ast_into_str(red->data.file_redirection.output, state,
				&filename_args))
			return (ERROR);
		if (filename_args.len != 1)
			return (vec_str_free(filename_args), ERROR);
		red_fd = open_fd(filename_args.buffer[0], FD_WRITE,
				O_TRUNC | O_CREAT | O_CLOEXEC,
				FP_ALL_READ | FP_ALL_WRITE);
		if (red_fd == NULL)
			return (vec_str_free(filename_args), ERROR);
		info->stdout = fd(red_fd);
	}
	if (red->data.file_redirection.op == AST_REDIR_DUP_INPUT
		|| red->data.file_redirection.op == AST_REDIR_DUP_OUTPUT
		|| red->data.file_redirection.op == AST_REDIR_CLOSE_INPUT
		|| red->data.file_redirection.op == AST_REDIR_CLOSE_OUTPUT
		|| red->data.file_redirection.op == AST_REDIR_INPUT_OUTPUT
		|| red->data.file_redirection.op == AST_REDIR_OUTPUT_CLOBBER)
		return (ERROR);
	vec_str_free(filename_args);
	return (NO_ERROR);
}

t_error _redirection_heredoc(t_spawn_info *info, t_state *state, t_cmd_pipe cmd_pipe, t_ast_node red)
{
	t_pipe					heredoc_pipe;
			
	if (red->data.heredoc_redirection.op == AST_REDIR_HEREDOC)
	{
		if (info->stdout.tag == R_FD)
			close_fd(info->stdout.fd.fd);
		info->stdout.tag = R_INHERITED;
		if (create_pipe(&heredoc_pipe))
			return (ERROR);
		if (_get_heredoc_input(heredoc_pipe.write, \
			red->data.heredoc_redirection.delimiter))
			return (close_fd(heredoc_pipe.write), ERROR);
		close_fd(heredoc_pipe.write);
		info->stdin = fd(heredoc_pipe.read);
	}
	if (red->data.heredoc_redirection.op == AST_REDIR_HEREDOC_INDENT)
		return (ERROR);
	return (NO_ERROR);
}

t_error	_setup_redirection(t_spawn_info *info, t_state *state, t_cmd_pipe cmd_pipe, t_vec_ast *redirection)
{
	t_usize		i;
	t_ast_node	red;

	if (cmd_pipe.input != NULL)
		info->stdin = fd(cmd_pipe.input);
	if (cmd_pipe.create_output)
		info->stdout = piped();
	i = 0;
	while (i < redirection->len)
	{
		red = redirection->buffer[i];
		if (red == NULL)
			continue ;
		if (red->kind == AST_FILE_REDIRECTION)
		{
		}
		if (red->kind == AST_HEREDOC_REDIRECTION)
		{
		}
		i++;
	}
	return (NO_ERROR);
}

t_error	_spawn_cmd_and_run(t_vec_str args, t_vec_ast redirection,
		t_state *state, t_cmd_pipe cmd_pipe, t_command_result *out)
{
	t_spawn_info			info;
	struct s_ffree_state	ffree;
	int						status;

	info = (t_spawn_info){};
	ffree = (struct s_ffree_state){.state = state, .cmd_pipe = cmd_pipe};
	redirection.len = 0;
	vec_ast_free(redirection);
	info.arguments = args;
	if (args.len == 0)
		return (vec_str_free(args), ERROR);
	info.binary_path = str_clone(info.arguments.buffer[0]);
	if (_is_builtin(info.binary_path))
		return (_handle_builtin(info, state, cmd_pipe, out));
	if (build_envp(state->env, state->tmp_var, &info.environement))
		return (str_free(info.binary_path), ERROR);
	info.forked_free_args = &ffree;
	info.forked_free = (void (*)(void *))_ffree_func;
	signal(SIGINT, SIG_IGN);
	signal(SIGQUIT, SIG_IGN);
	if (spawn_process(info, &out->process))
		return (close_fd(cmd_pipe.input), out->exit = 127, ERROR);
	if (cmd_pipe.create_output || cmd_pipe.input != NULL)
		return (out->exit = -1, NO_ERROR);
	if (waitpid(out->process.pid, &status, 0) == -1)
		return (ERROR);
	if (WIFEXITED(status))
		out->exit = WEXITSTATUS(status);
	if (WIFSIGNALED(status))
		out->exit = WTERMSIG(status);
	return (NO_ERROR);
}
