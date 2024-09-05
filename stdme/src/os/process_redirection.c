/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_redirection.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 22:27:00 by maiboyer          #+#    #+#             */
/*   Updated: 2024/08/02 19:10:51 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/fs/fs.h"
#include "me/os/os.h"
#include "me/types.h"

t_error	_handle_redirections_inherited(t_spawn_info *info, t_process *process)
{
	(void)(process);
	if (info->stdin.tag == R_INHERITED)
	{
		info->stdin = fd(dup_fd(get_stdin()));
		process->stdin = dup_fd(get_stdin());
	}
	if (info->stdout.tag == R_INHERITED)
	{
		info->stdout = fd(dup_fd(get_stdout()));
		process->stdout = dup_fd(get_stdout());
	}
	if (info->stderr.tag == R_INHERITED)
	{
		info->stderr = fd(dup_fd(get_stderr()));
		process->stderr = dup_fd(get_stderr());
	}
	return (NO_ERROR);
}

t_error	_handle_redirections_fds(t_spawn_info *info, t_process *process)
{
	// t_fd	*tmp;

	if (info->stdin.tag == R_FD)
	{
		// tmp = info->stdin.fd.fd;
		info->stdin = fd(dup_fd(info->stdin.fd.fd));
		process->stdin = dup_fd(info->stdin.fd.fd);
		// close_fd(tmp);
	}
	if (info->stdout.tag == R_FD)
	{
		// tmp = info->stdin.fd.fd;
		info->stdout = fd(dup_fd(info->stdout.fd.fd));
		process->stdout = dup_fd(info->stdout.fd.fd);
		// close_fd(tmp);
	}
	if (info->stderr.tag == R_FD)
	{
		// tmp = info->stdin.fd.fd;
		info->stderr = fd(dup_fd(info->stderr.fd.fd));
		process->stderr = dup_fd(info->stderr.fd.fd);
		// close_fd(tmp);
	}
	return (NO_ERROR);
}

t_error	_handle_redirections_pipe(t_spawn_info *info, t_process *process)
{
	t_pipe	pipe_fd;

	if (info->stdin.tag == R_PIPED)
	{
		if (create_pipe(&pipe_fd))
			return (ERROR);
		process->stdin = pipe_fd.write;
		info->stdin = fd(pipe_fd.read);
	}
	if (info->stdout.tag == R_PIPED)
	{
		if (create_pipe(&pipe_fd))
			return (ERROR);
		process->stdout = pipe_fd.read;
		info->stdout = fd(pipe_fd.write);
	}
	if (info->stderr.tag == R_PIPED)
	{
		if (create_pipe(&pipe_fd))
			return (ERROR);
		process->stderr = pipe_fd.read;
		info->stderr = fd(pipe_fd.write);
	}
	return (NO_ERROR);
}

t_error	handle_redirections(t_spawn_info *info, t_process *process)
{
	process->stderr = NULL;
	process->stdout = NULL;
	process->stdin = NULL;
	if (_handle_redirections_fds(info, process))
		return (ERROR);
	if (_handle_redirections_inherited(info, process))
		return (ERROR);
	if (_handle_redirections_pipe(info, process))
		return (ERROR);
	return (NO_ERROR);
}
