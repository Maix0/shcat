/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 16:22:41 by maiboyer          #+#    #+#             */
/*   Updated: 2024/07/22 15:29:22 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/os/process.h"
#include "me/string/string.h"
#include "me/mem/mem.h"
#include "me/printf/printf.h"
#include "me/os/pipe.h"
#include "me/str/str.h"
#include "me/str/str.h"
#include "me/str/str.h"
#include "me/types.h"
#include "me/vec/vec_str.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

bool	find_path(const t_str *s);
bool	find_null(const t_str *s);
bool	str_start_with(t_const_str s, t_const_str prefix);
t_error	handle_redirections(t_spawn_info *info, t_process *process);

t_error	spawn_process_exec(t_spawn_info info, t_process *process)
{
	bool	res;

	if (info.forked_free)
		info.forked_free(info.forked_free_args);
	dup2(info.stdin.vals.fd.value, 0);
	dup2(info.stdout.vals.fd.value, 1);
	dup2(info.stderr.vals.fd.value, 2);
	close(process->stdin.vals.ro.fd);
	close(process->stdout.vals.ro.fd);
	close(process->stderr.vals.ro.fd);
	close(info.stdin.vals.fd.value);
	close(info.stdout.vals.fd.value);
	close(info.stderr.vals.fd.value);
	if (!vec_str_any(&info.arguments, find_null, &res) && res)
		vec_str_push(&info.arguments, NULL);
	res = false;
	if (!vec_str_any(&info.environement, find_null, &res) && res)
		vec_str_push(&info.environement, NULL);
	execve(info.binary_path, info.arguments.buffer, info.environement.buffer);
	return (NO_ERROR);
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
		if (access(s->buf, X_OK | R_OK) == 0)
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
	if (str_start_with(info->binary_path, "/") || \
		str_find_chr(info->binary_path, '/') != NULL)
		string_push(&s, info->binary_path);
	else
	{
		if (vec_str_find(&info->environement, find_path, &p_idx))
			return (string_free(s), ERROR);
		if (in_path(info, process, info->environement.buffer[p_idx], &s))
			return (ERROR);
	}
	if (access(s.buf, X_OK | R_OK) == 0)
	{
		mem_free(info->binary_path);
		info->binary_path = s.buf;
		return (NO_ERROR);
	}
	return (string_free(s), ERROR);
}

static void	cleanup(t_spawn_info info, t_process *process, \
				bool cleanup_process)
{
	if (cleanup_process && process->stdin.tag != INVALID)
		close(process->stdin.vals.ro.fd);
	if (cleanup_process && process->stdout.tag != INVALID)
		close(process->stdout.vals.ro.fd);
	if (cleanup_process && process->stderr.tag != INVALID)
		close(process->stderr.vals.ro.fd);
	close(info.stdin.vals.fd.value);
	close(info.stdout.vals.fd.value);
	close(info.stderr.vals.fd.value);
	vec_str_free(info.arguments);
	vec_str_free(info.environement);
	mem_free(info.binary_path);
}

t_error	spawn_process(t_spawn_info info, t_process *process)
{
	if (handle_redirections(&info, process))
		return (cleanup(info, process, true), ERROR);
	if (find_binary(&info, process))
		return (cleanup(info, process, true), ERROR);
	process->pid = fork();
	if (process->pid == 0)
		(spawn_process_exec(info, process), exit(1));
	else
	{
		cleanup(info, process, false);
		if (process->pid == -1)
			return (printf("pid\n"), ERROR);
	}
	return (NO_ERROR);
}
