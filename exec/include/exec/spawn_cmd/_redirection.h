/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _redirection.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 17:24:19 by maiboyer          #+#    #+#             */
/*   Updated: 2024/07/30 15:56:33 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _REDIRECTION_H
# define _REDIRECTION_H

# include "me/types.h"
# include "me/fs/fs.h"

typedef union u_exec_redirect			t_exec_redirect;

enum e_exec_redirect_kind
{
	EXEC_REDIR_FD,
	EXEC_REDIR_HEREDOC,
	EXEC_REDIR_PIPE,
};

union u_exec_redirect
{
	enum e_exec_redirect_kind	kind;
	struct s_exec_redirect_heredoc
	{
		enum e_exec_redirect_kind	kind;
		int							in_fd;
		t_const_str					data;
	}	heredoc;
	struct s_exec_redirect_fd
	{
		enum e_exec_redirect_kind	kind;
		int							lhs_fd;
		int							rhs_fd;
		t_const_str					file_path;
	}	fd;
	struct s_exec_redirect_pipe
	{
		enum e_exec_redirect_kind	kind;
		int							stdin;
		int							stdout;
	}	piped;
};

static inline void	free_redirection(t_exec_redirect self)
{
	void	mem_free(void *ptr);

	if (self.kind == EXEC_REDIR_FD)
		(void)(self.fd.file_path != NULL && (mem_free((void *)self.fd.file_path), 1));
	if (self.kind == EXEC_REDIR_HEREDOC)
		(void)(self.heredoc.data != NULL && (mem_free((void *)self.heredoc.data), 1));
}

#endif /* _REDIRECTION_H */
