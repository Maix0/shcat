/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_inner2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 22:27:00 by maiboyer          #+#    #+#             */
/*   Updated: 2024/01/04 23:01:03 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/types.h"
#include "me/os/process.h"
#include "me/os/pipe.h"

void	handle_redirections_second(t_spawn_info *info, t_process *process)
{
	(void)(process);
	if (info->stdin.tag == R_INHERITED)
	{
		info->stdin = fd(dup(0));
		process->stdin = ro(dup(0));
	}
	if (info->stdout.tag == R_INHERITED)
	{
		info->stdout = fd(dup(1));
		process->stdout = wo(dup(1));
	}
	if (info->stderr.tag == R_INHERITED)
	{
		info->stderr = fd(dup(2));
		process->stderr = wo(dup(2));
	}
}

void	handle_redirections_fds(t_spawn_info *info, t_process *process)
{
	if (info->stdin.tag == R_FD)
	{
		info->stdin = fd(dup(info->stdin.vals.fd.value));
		process->stdin = wo(dup(info->stdin.vals.fd.value));
	}
	if (info->stdout.tag == R_FD)
	{
		info->stdout = fd(dup(info->stdout.vals.fd.value));
		process->stdout = ro(dup(info->stdout.vals.fd.value));
	}
	if (info->stderr.tag == R_FD)
	{
		info->stderr = fd(dup(info->stderr.vals.fd.value));
		process->stderr = ro(dup(info->stderr.vals.fd.value));
	}
}

static inline void	redirection_inner(t_spawn_info *info, t_process *process)
{
	process->stderr.tag = INVALID;
	process->stdout.tag = INVALID;
	process->stdin.tag = INVALID;
	handle_redirections_fds(info, process);
	handle_redirections_second(info, process);
}

t_error	handle_redirections(t_spawn_info *info, t_process *process)
{
	t_pipe	pipe_fd;

	redirection_inner(info, process);
	if (info->stdin.tag == R_PIPED)
	{
		if (create_pipe(&pipe_fd))
			return (ERROR);
		process->stdin = wo(pipe_fd.write);
		info->stdin = fd(pipe_fd.read);
	}
	if (info->stdout.tag == R_PIPED)
	{
		if (create_pipe(&pipe_fd))
			return (ERROR);
		process->stdout = ro(pipe_fd.read);
		info->stdout = fd(pipe_fd.write);
	}
	if (info->stderr.tag == R_PIPED)
	{
		if (create_pipe(&pipe_fd))
			return (ERROR);
		process->stderr = ro(pipe_fd.read);
		info->stderr = fd(pipe_fd.write);
	}
	return (NO_ERROR);
}
