/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   heredoc.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 15:06:56 by maiboyer          #+#    #+#             */
/*   Updated: 2024/09/01 15:08:47 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEREDOC_H
#define HEREDOC_H

#include "me/string/string.h"

typedef struct s_heredoc t_heredoc;

struct s_heredoc
{
	bool	 is_raw;
	bool	 started;
	bool	 allows_indent;
	t_string delimiter;
	t_string current_leading_word;
};

static inline t_heredoc heredoc_new(void)
{
	return ((t_heredoc){
		.is_raw = false,
		.started = false,
		.allows_indent = false,
		.delimiter = string_new(0),
		.current_leading_word = string_new(0),
	});
}


static inline void reset_heredoc(t_heredoc *heredoc)
{
	heredoc->is_raw = false;
	heredoc->started = false;
	heredoc->allows_indent = false;
	string_clear(&heredoc->delimiter);
}

#endif /* HEREDOC_TYPE_H */
