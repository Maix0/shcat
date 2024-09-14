/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_builtins.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 12:24:49 by maiboyer          #+#    #+#             */
/*   Updated: 2024/09/14 12:25:48 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "exec/_run_ast.h"
#include "exec/builtins.h"
#include "me/mem/mem.h"
#include "me/str/str.h"

void	_ffree_func(struct s_ffree_state *state)
{
	if (state == NULL)
		return ;
	hmap_env_free(state->state->env);
	hmap_env_free(state->state->tmp_var);
	close_fd(state->cmd_pipe.input);
}

bool	_is_builtin(t_const_str argv0)
{
	t_usize		i;
	const t_str	value[] = {"cd", "echo", "env", "exit", "export", "pwd", \
			"unset", "_debug", NULL};

	i = 0;
	if (argv0 == NULL)
		return (false);
	while (value[i] != NULL)
		if (str_compare(argv0, value[i++]))
			return (true);
	return (false);
}

t_error	_handle_builtin(t_spawn_info info, t_state *state, t_cmd_pipe cmd_pipe,
		t_command_result *out)
{
	t_usize					i;
	const t_const_str		argv0 = info.binary_path;
	const t_str				value[] = {"cd", "echo", "env", "exit", "export", \
	"pwd", "unset", "_debug", NULL};
	const t_builtin_func	funcs[] = {builtin_cd____, builtin_echo__, \
	builtin_env___, builtin_exit__, builtin_export, builtin_pwd___, \
	builtin_unset_, builtin_debug_, NULL};
	t_builtin_func			actual_func;
	t_builtin_spawn_info	binfo;
	t_pipe					pipe_fd;
	bool					do_fork;
	t_i32					exit_code;

	i = 0;
	if (argv0 == NULL)
		return (ERROR);
	actual_func = NULL;
	while (value[i] != NULL)
	{
		if (str_compare(argv0, value[i]))
		{
			actual_func = funcs[i];
			break ;
		}
		i++;
	}
	if (actual_func == NULL)
		return (me_abort("Builtin found but no function found..."), ERROR);
	mem_set_zero(out, sizeof(*out));
	if (info.stdin.tag == R_FD)
		binfo.stdin = info.stdin.fd.fd;
	if (info.stdin.tag == R_INHERITED)
		binfo.stdin = dup_fd(get_stdin());
	if (info.stderr.tag == R_FD)
		binfo.stderr = info.stderr.fd.fd;
	if (info.stderr.tag == R_INHERITED)
		binfo.stderr = dup_fd(get_stderr());
	if (info.stdout.tag == R_FD)
		binfo.stdout = info.stdout.fd.fd;
	if (info.stdout.tag == R_INHERITED)
		binfo.stdout = dup_fd(get_stdout());
	if (info.stdout.tag == R_PIPED)
	{
		if (create_pipe(&pipe_fd))
			return (ERROR);
		out->process.stdout = pipe_fd.read;
		binfo.stdout = pipe_fd.write;
	}
	binfo.args = info.arguments;
	do_fork = cmd_pipe.input != NULL || cmd_pipe.create_output;
	if (do_fork)
	{
		out->process.pid = fork();
		if (out->process.pid == 0)
		{
			if (actual_func(state, binfo, &exit_code))
				me_exit(127);
			me_exit(exit_code);
		}
		if (out->process.pid == -1)
			out->exit = 126;
		else
			out->exit = -1;
	}
	else
	{
		if (actual_func(state, binfo, &exit_code))
			out->exit = 126;
		else
			out->exit = exit_code;
	}
	if (binfo.stdin)
		close_fd(binfo.stdin);
	if (binfo.stdout)
		close_fd(binfo.stdout);
	if (binfo.stderr)
		close_fd(binfo.stderr);
	vec_str_free(info.arguments);
	str_free(info.binary_path);
	return (NO_ERROR);
}
