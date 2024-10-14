/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _spawn_cmd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 12:30:09 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/14 15:07:42 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "app/env.h"
#include "exec/_run_ast.h"
#include "line/line.h"
#include "me/fs/fs.h"
#include "me/os/os.h"
#include "me/printf/printf.h"
#include "me/str/str.h"
#include "me/types.h"
#include <errno.h>
#include <sys/wait.h>
#include <unistd.h>

t_error	_redirection_fd(\
	t_spawn_info *info, t_state *state, t_ast_node red);
t_error	_redirection_heredoc(\
	t_spawn_info *info, t_state *state, t_ast_node red);

t_error	_setup_redirection(\
	t_spawn_info *info, t_state *state, \
	t_cmd_pipe cmd_pipe, t_vec_ast *redirection)
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
		if (red == NULL && (++i))
			continue ;
		if (red->kind == AST_FILE_REDIRECTION && \
	_redirection_fd(info, state, red))
			return (ERROR);
		if (red->kind == AST_HEREDOC_REDIRECTION && \
	_redirection_heredoc(info, state, red))
			return (ERROR);
		i++;
	}
	return (NO_ERROR);
}

static t_error	_err_cmd(t_str bpath)
{
	me_eprintf("failed to execute %s\n", bpath);
	str_free(bpath);
	return (ERROR);
}

t_error	_spawn_cmd_and_run_end(\
	t_spawn_info info, t_state *state, \
	t_cmd_pipe cmd_pipe, t_command_result *out)
{
	struct s_ffree_state	ffree;
	int						status;
	t_str					bpath;

	status = 0;
	ffree = (struct s_ffree_state){.state = state, .cmd_pipe = cmd_pipe};
	info.forked_free_args = &ffree;
	info.forked_free = (void (*)(void *))_ffree_func;
	signal(SIGINT, SIG_IGN);
	signal(SIGQUIT, SIG_IGN);
	bpath = str_clone(info.binary_path);
	if (spawn_process(info, &out->process))
		return (close_fd(cmd_pipe.input), out->exit = 127, _err_cmd(bpath));
	str_free(bpath);
	if (cmd_pipe.create_output || cmd_pipe.input != NULL)
		return (out->exit = -1, NO_ERROR);
	if (waitpid(out->process.pid, &status, 0) == -1 && errno != ECHILD)
		return (ERROR);
	if (WIFEXITED(status))
		out->exit = WEXITSTATUS(status);
	if (WIFSIGNALED(status))
		out->exit = WTERMSIG(status) + 128;
	state->last_exit = out->exit;
	return (NO_ERROR);
}

t_error	_spawn_cmd_and_run(t_vec_str args, t_redirections redirs,
		t_state *state, t_command_result *out)
{
	t_spawn_info			info;

	info = (t_spawn_info){};
	if (_setup_redirection(&info, state, redirs.cmd_pipe, &redirs.redirections))
		return (ERROR);
	redirs.redirections.len = 0;
	vec_ast_free(redirs.redirections);
	info.arguments = args;
	if (args.len == 0)
		return (vec_str_free(args), ERROR);
	info.binary_path = str_clone(info.arguments.buffer[0]);
	if (_is_builtin(info.binary_path))
		return (_handle_builtin(info, state, redirs.cmd_pipe, out));
	if (build_envp(state->env, state->tmp_var, &info.environement))
		return (str_free(info.binary_path), ERROR);
	return (_spawn_cmd_and_run_end(info, state, redirs.cmd_pipe, out));
}
