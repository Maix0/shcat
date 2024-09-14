/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _run_exit_code.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 12:31:28 by maiboyer          #+#    #+#             */
/*   Updated: 2024/09/14 12:31:47 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "exec/_run_ast.h"

t_error	_run_get_exit_code(t_ast_node self, t_state *state, int *out)
{
	t_command_result	cmd_res;
	t_pipeline_result	pipe_res;
	t_list_result		list_res;
	t_subshell_result	subshell_res;

	if (self->kind == AST_COMMAND)
	{
		if (run_command(\
	&self->data.command, state, (t_cmd_pipe){NULL, false}, &cmd_res))
			return (ERROR);
		if (cmd_res.process.stdin != NULL)
			close_fd(cmd_res.process.stdin);
		if (cmd_res.process.stdout != NULL)
			close_fd(cmd_res.process.stdout);
		if (cmd_res.process.stderr != NULL)
			close_fd(cmd_res.process.stderr);
		*out = cmd_res.exit;
	}
	if (self->kind == AST_PIPELINE)
	{
		if (run_pipeline(&self->data.pipeline, state, &pipe_res))
			return (ERROR);
		*out = pipe_res.exit;
	}
	if (self->kind == AST_LIST)
	{
		if (run_list(&self->data.list, state, &list_res))
			return (ERROR);
		*out = list_res.exit;
	}
	if (self->kind == AST_SUBSHELL)
	{
		if (run_subshell(\
	&self->data.subshell, state, (t_cmd_pipe){NULL, false}, &subshell_res))
			return (ERROR);
		*out = subshell_res.exit;
	}
	return (NO_ERROR);
}
