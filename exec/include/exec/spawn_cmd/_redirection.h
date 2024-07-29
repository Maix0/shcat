/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _redirection.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 17:24:19 by maiboyer          #+#    #+#             */
/*   Updated: 2024/07/29 19:09:56 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _REDIRECTION_H
#define _REDIRECTION_H

#include "me/types.h"

typedef struct s_exec_redirect		   t_exec_redirect;
typedef struct s_exec_redirect_fd	   t_exec_redirect_fd;
typedef struct s_exec_redirect_heredoc t_exec_redirect_heredoc;

struct s_exec_redirect_heredoc
{
};

struct s_exec_redirect_fd
{
	int	  infile_fd;
	int	  outfile_fd;
	t_str file_path;
};

union u_exec_redirect_data {
	t_exec_redirect_heredoc heredoc;
	t_exec_redirect_fd		fd;
};
enum e_exec_redirect_kind
{
	EXEC_REDIR_FD,
	EXEC_REDIR_HEREDOC,
};

struct s_exec_redirect
{
	union u_exec_redirect_data data;
	enum e_exec_redirect_kind  kind;
};

#endif /* _REDIRECTION_H */
