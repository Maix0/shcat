/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_pipeline.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 12:32:37 by maiboyer          #+#    #+#             */
/*   Updated: 2024/09/14 12:33:09 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "exec/_run_ast.h"
#include "me/vec/vec_pid.h"
#include <errno.h>
#include <sys/wait.h>

t_error	run_pipeline(t_ast_pipeline *pipeline, t_state *state,
		t_pipeline_result *out)
{
	int					waitpid_status;
	t_ast_node			child;
	t_ast_node			tmp_ast;
	t_cmd_pipe			cmd_pipe;
	t_command_result	cmd_result;
	t_error				ret;
	t_usize				i;
	t_vec_pid			pids;

	if (pipeline == NULL || state == NULL || out == NULL)
		return (ERROR);
	i = 0;
	ret = NO_ERROR;
	cmd_pipe.input = NULL;
	cmd_pipe.create_output = true;
	out->exit = 127;
	pids = vec_pid_new(32, NULL);
	while (i < pipeline->statements.len - 1)
	{
		child = pipeline->statements.buffer[i];
		if (child->kind == AST_COMMAND)
		{
			if (run_command(&child->data.command, state, cmd_pipe, &cmd_result))
			{
				cmd_pipe.input = NULL;
				ret = ERROR;
			}
			else
			{
				vec_pid_push(&pids, cmd_result.process.pid);
				close_fd(cmd_pipe.input);
				if (cmd_result.process.stdout != NULL)
					cmd_pipe.input = cmd_result.process.stdout;
				if (cmd_result.process.stdin != NULL)
					close_fd(cmd_result.process.stdin);
				if (cmd_result.process.stderr != NULL)
					close_fd(cmd_result.process.stderr);
			}
		}
		i++;
	}
	{
		cmd_pipe.create_output = false;
		child = pipeline->statements.buffer[i];
		if (child->kind == AST_COMMAND)
		{
			while (!vec_ast_pop_front(&pipeline->suffixes_redirections,
					&tmp_ast))
				vec_ast_push(&child->data.command.suffixes_redirections,
					tmp_ast);
			if (run_command(&child->data.command, state, cmd_pipe, &cmd_result))
			{
				ret = ERROR;
			}
			else
			{
				vec_pid_push(&pids, cmd_result.process.pid);
				close_fd(cmd_pipe.input);
				if (cmd_result.process.stdout != NULL)
					close_fd(cmd_result.process.stdout);
				if (cmd_result.process.stdin != NULL)
					close_fd(cmd_result.process.stdin);
				if (cmd_result.process.stderr != NULL)
					close_fd(cmd_result.process.stderr);
			}
		}
	}
	if (pids.len != 0)
	{
		if (!(kill(pids.buffer[pids.len - 1], 0) == -1 && errno == ESRCH))
			while (waitpid(pids.buffer[pids.len - 1], &waitpid_status, 0) < 0)
				;
		while (waitpid(-1, NULL, 0) != -1)
			;
		if (WIFEXITED(waitpid_status))
			out->exit = WEXITSTATUS(waitpid_status);
		if (WIFSIGNALED(waitpid_status))
			out->exit = WTERMSIG(waitpid_status);
	}
	else
		out->exit = 127;
	vec_pid_free(pids);
	return (ret);
}
