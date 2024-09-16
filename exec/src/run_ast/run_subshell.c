/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_subshell.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 12:35:02 by maiboyer          #+#    #+#             */
/*   Updated: 2024/09/16 19:02:01 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "exec/_run_ast.h"
#include "me/os/os.h"
#include <sys/wait.h>

t_error	_spawn_info_to_subshell(\
	t_spawn_info *info, struct s_subshell_info *sinfo)
{
	t_pipe	pip;

	if (info->stdout.tag == R_PIPED)
	{
		if (create_pipe(&pip))
			return (ERROR);
		sinfo->ret_stdout = pip.read;
		sinfo->stdout = pip.write;
	}
	if (info->stdin.tag == R_FD)
		sinfo->stdout = info->stdin.fd.fd;
	if (info->stderr.tag == R_FD)
		sinfo->stderr = info->stderr.fd.fd;
	return (NO_ERROR);
}

void	_in_fork(\
	struct s_subshell_info *sinfo, t_ast_subshell *subshell, t_state *state)
{
	t_usize	i;
	int		code;

	if (sinfo->ret_stdout != NULL)
		close_fd(sinfo->ret_stdout);
	if (sinfo->stdin != NULL)
		(dup2(sinfo->stdin->fd, 0), close_fd(sinfo->stdin));
	if (sinfo->stdout != NULL)
		(dup2(sinfo->stdout->fd, 1), close_fd(sinfo->stdout));
	if (sinfo->stderr != NULL)
		(dup2(sinfo->stderr->fd, 2), close_fd(sinfo->stderr));
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

t_error	_wait_subshell(\
	struct s_subshell_info sinfo, t_pid forked, \
	t_cmd_pipe cmd_pipe, t_subshell_result *out)
{
	int	status;

	out->exit = -1;
	out->pid = forked;
	if (sinfo.stdin != NULL)
		(dup2(sinfo.stdin->fd, 0), close_fd(sinfo.stdin));
	if (sinfo.stdout != NULL)
		(dup2(sinfo.stdout->fd, 1), close_fd(sinfo.stdout));
	if (sinfo.stderr != NULL)
		(dup2(sinfo.stderr->fd, 2), close_fd(sinfo.stderr));
	if (cmd_pipe.create_output || cmd_pipe.input != NULL)
		return (out->stdout = sinfo.ret_stdout, NO_ERROR);
	if (waitpid(forked, &status, 0) == -1)
		return (ERROR);
	if (WIFEXITED(status))
		out->exit = WEXITSTATUS(status);
	if (WIFSIGNALED(status))
		out->exit = WTERMSIG(status);
	return (NO_ERROR);
}

t_error	run_subshell(t_ast_subshell *subshell, t_state *state,
		t_cmd_pipe cmd_pipe, t_subshell_result *out)
{
	struct s_subshell_info	sinfo;
	t_spawn_info			info;
	t_pid					forked;

	if (subshell == NULL || state == NULL || out == NULL)
		return (ERROR);
	if (_setup_redirection(&info, state, cmd_pipe, \
		&subshell->suffixes_redirections))
		return (ERROR);
	if (_spawn_info_to_subshell(&info, &sinfo))
		return (ERROR);
	forked = fork();
	if (forked == 0)
		_in_fork(&sinfo, subshell, state);
	if (forked == -1)
		return (ERROR);
	return (_wait_subshell(sinfo, forked, cmd_pipe, out));
}
