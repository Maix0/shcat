/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 16:22:41 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:52:38 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fcntl.h"
#include "me/fs/fs.h"
#include "me/mem/mem.h"
#include "me/os/os.h"
#include "me/printf/printf.h"
#include "me/str/str.h"
#include "me/string/string.h"
#include "me/types.h"
#include "me/vec/vec_str.h"
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

bool		_find_path(const t_str *s);
bool		_find_null(const t_str *s);
t_error		handle_redirections(t_spawn_info *info, t_process *process);

t_error	spawn_process_exec(t_spawn_info info, t_process *process)
{
	(void)(process);
	if (info.forked_free)
		info.forked_free(info.forked_free_args);
	signal(SIGINT, SIG_DFL);
	signal(SIGQUIT, SIG_DFL);
	dup2(info.stdin.fd.fd->fd, 0);
	dup2(info.stdout.fd.fd->fd, 1);
	dup2(info.stderr.fd.fd->fd, 2);
	if (info.stdin.fd.fd->fd != 0)
		close_fd(info.stdin.fd.fd);
	if (info.stdout.fd.fd->fd != 1)
		close_fd(info.stdout.fd.fd);
	if (info.stderr.fd.fd->fd != 2)
		close_fd(info.stderr.fd.fd);
	vec_str_push(&info.arguments, NULL);
	vec_str_push(&info.environement, NULL);
	execve(info.binary_path, info.arguments.buffer, info.environement.buffer);
	return (ERROR);
}

t_error	in_path(t_spawn_info *info, t_process *process, t_const_str path_raw,
		t_string *s)
{
	t_vec_str	path;
	t_usize		idx;

	(void)(process);
	if (str_split(path_raw + 5, ":", &path))
		return (string_free(*s), ERROR);
	idx = 0;
	while (idx < path.len)
	{
		string_clear(s);
		me_printf_str(s, "%s/%s", path.buffer[idx++], info->binary_path);
		if (access(s->buf, X_OK) == 0)
			return (vec_str_free(path), NO_ERROR);
	}
	return (vec_str_free(path), ERROR);
}

t_error	find_binary(t_spawn_info *info, t_process *process)
{
	t_usize		p_idx;
	t_string	s;

	(void)(process);
	if (info->binary_path == NULL)
		return (ERROR);
	s = string_new(256);
	if (str_find_chr(info->binary_path, '/') != NULL)
		string_push(&s, info->binary_path);
	else
	{
		if (vec_str_find(&info->environement, _find_path, &p_idx))
			return (string_free(s), ERROR);
		if (in_path(info, process, info->environement.buffer[p_idx], &s))
			return (string_free(s), ERROR);
	}
	if (access(s.buf, X_OK) == 0)
	{
		mem_free(info->binary_path);
		info->binary_path = s.buf;
		return (NO_ERROR);
	}
	return (string_free(s), ERROR);
}

static void	_process_cleanup(t_spawn_info info, t_process *process, \
							bool cleanup_process)
{
	if (cleanup_process && process->stdin)
		close_fd(process->stdin);
	if (cleanup_process && process->stdout)
		close_fd(process->stdout);
	if (cleanup_process && process->stderr)
		close_fd(process->stderr);
	if (info.stdin.fd.fd->fd != 0)
		close_fd(info.stdin.fd.fd);
	if (info.stdout.fd.fd->fd != 1)
		close_fd(info.stdout.fd.fd);
	if (info.stderr.fd.fd->fd != 2)
		close_fd(info.stderr.fd.fd);
	vec_str_free(info.arguments);
	vec_str_free(info.environement);
	mem_free(info.binary_path);
}

t_error	spawn_process(t_spawn_info info, t_process *process)
{
	if (process == NULL)
		return (ERROR);
	if (handle_redirections(&info, process))
		return (_process_cleanup(info, process, true), ERROR);
	if (find_binary(&info, process))
		return (_process_cleanup(info, process, true), ERROR);
	process->pid = fork();
	if (process->pid == 0)
		(spawn_process_exec(info, process), exit(1));
	else
	{
		_process_cleanup(info, process, process->pid == -1);
		if (process->pid == -1)
			return (ERROR);
	}
	return (NO_ERROR);
}
