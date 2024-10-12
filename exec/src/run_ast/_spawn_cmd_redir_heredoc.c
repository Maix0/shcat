/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _spawn_cmd_redir_heredoc.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 12:30:09 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:51:28 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "app/env.h"
#include "exec/_run_ast.h"
#include "me/fs/fs.h"
#include "me/os/os.h"
#include "me/str/str.h"
#include <sys/wait.h>
#include <unistd.h>
#include <errno.h>
#include "line/line.h"
#include "me/types.h"

t_error	_get_heredoc_input(t_fd *write, t_str delim)
{
	struct s_line_state	lstate;
	t_str				line;

	if (write == NULL || delim == NULL)
		return (ERROR);
	while (true)
	{
		if (line_edit_start(&lstate, get_stdin(), get_stdout(), "> "))
			return (ERROR);
		while (!line_edit_feed(&lstate, &line))
		{
			if (errno == EAGAIN)
			{
				errno = 0;
				return (lstate.pos = 0, string_clear(&lstate.buf), \
put_string_fd(lstate.output_fd, "^C\n"), line_refresh_line(&lstate), ERROR);
			}
		}
		line_edit_stop(&lstate);
		if (line == NULL || (str_compare(delim, line) && (str_free(line), 1)))
			break ;
		(put_string_fd(write, line), put_char_fd(write, '\n'), str_free(line));
	}
	return (NO_ERROR);
}

t_error	_redirection_heredoc(\
	t_spawn_info *info, t_state *state, t_ast_node red)
{
	t_pipe	heredoc_pipe;

	(void)state;
	if (red->data.heredoc_redirection.op == AST_REDIR_HEREDOC)
	{
		(void)((info->stdin.tag == R_FD) && (close_fd(info->stdin.fd.fd), 1));
		info->stdin.tag = R_INHERITED;
		if (create_pipe(&heredoc_pipe))
			return (ERROR);
		if (_get_heredoc_input(heredoc_pipe.write, \
			red->data.heredoc_redirection.delimiter))
			return (close_fd(heredoc_pipe.write), ERROR);
		close_fd(heredoc_pipe.write);
		info->stdin = fd(heredoc_pipe.read);
	}
	if (red->data.heredoc_redirection.op == AST_REDIR_HEREDOC_INDENT)
		return (ERROR);
	return (NO_ERROR);
}
