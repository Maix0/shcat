/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_pipeline.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 12:32:37 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/13 13:58:31 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "exec/_run_ast.h"
#include "me/vec/vec_ast.h"
#include "me/vec/vec_pid.h"
#include <errno.h>
#include <sys/wait.h>

t_usize	_pipeline_set_vars(\
	t_error *ret, t_vec_pid *pids, t_cmd_pipe *cpipe, t_pipeline_result *out);

void	_append_redir_to_pipeline(t_ast_pipeline *pipeline)
{
	t_ast_node	tmp_ast;
	t_ast_node	child;
	t_vec_ast	*append;

	child = pipeline->statements.buffer[pipeline->statements.len - 1];
	append = NULL;
	if (child->kind == AST_COMMAND)
		append = &child->data.command.suffixes_redirections;
	if (child->kind == AST_SUBSHELL)
		append = &child->data.subshell.suffixes_redirections;
	if (child->kind == AST_LIST)
		append = &child->data.list.suffixes_redirections;
	if (child->kind == AST_PIPELINE)
		append = &child->data.pipeline.suffixes_redirections;
	if (append == NULL)
		return ;
	while (!vec_ast_pop_front(&pipeline->suffixes_redirections, &tmp_ast))
		vec_ast_push(append, tmp_ast);
}

void	_wait_pipeline(t_vec_pid pids, t_state *state, t_pipeline_result *out)
{
	int	waitpid_status;

	if (pids.len != 0)
	{
		while (waitpid(pids.buffer[pids.len - 1], &waitpid_status, 0) < 0 \
			&& errno != ESRCH)
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
	state->last_exit = out->exit;
	vec_pid_free(pids);
}

t_error	_pipeline_cmd(\
	t_ast_node cmd, t_state *state, t_cmd_pipe *cmd_pipe, t_vec_pid *pids)
{
	t_command_result	cmd_result;

	if (run_command(&cmd->data.command, state, *cmd_pipe, &cmd_result))
	{
		cmd_pipe->input = NULL;
		return (ERROR);
	}
	else
	{
		vec_pid_push(pids, cmd_result.process.pid);
		if (cmd_result.process.stdout != NULL)
			cmd_pipe->input = cmd_result.process.stdout;
		if (cmd_result.process.stdin != NULL)
			close_fd(cmd_result.process.stdin);
		if (cmd_result.process.stderr != NULL)
			close_fd(cmd_result.process.stderr);
	}
	return (NO_ERROR);
}

t_error	_subshell_cmd(\
	t_ast_node subshell, t_state *state, t_cmd_pipe *cmd_pipe, t_vec_pid *pids)
{
	t_subshell_result	ss_result;

	if (run_subshell(&subshell->data.subshell, state, *cmd_pipe, &ss_result))
	{
		cmd_pipe->input = NULL;
		return (ERROR);
	}
	else
	{
		vec_pid_push(pids, ss_result.pid);
		if (ss_result.stdout != NULL)
			cmd_pipe->input = ss_result.stdout;
		if (ss_result.stdin != NULL)
			close_fd(ss_result.stdin);
		if (ss_result.stderr != NULL)
			close_fd(ss_result.stderr);
	}
	return (NO_ERROR);
}

t_error	run_pipeline(t_ast_pipeline *pipeline, t_state *state,
		t_pipeline_result *out)
{
	t_ast_node	child;
	t_cmd_pipe	cpipe;
	t_error		ret;
	t_usize		i;
	t_vec_pid	pids;

	if (pipeline == NULL || state == NULL || out == NULL)
		return (ERROR);
	i = _pipeline_set_vars(&ret, &pids, &cpipe, out);
	_append_redir_to_pipeline(pipeline);
	while (i < pipeline->statements.len)
	{
		cpipe.create_output = i < pipeline->statements.len - 1;
		child = pipeline->statements.buffer[i++];
		if (child->kind == AST_COMMAND)
			ret |= _pipeline_cmd(child, state, &cpipe, &pids);
		else if (child->kind == AST_SUBSHELL)
			ret |= _subshell_cmd(child, state, &cpipe, &pids);
		else
			ret |= ((void)(printf("List in pipelines are unsupported,"\
							" use a subshell !\n")), ERROR);
	}
	return (_wait_pipeline(pids, state, out), ret);
}
