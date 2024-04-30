/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types_heredoc.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 13:47:07 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/30 13:48:19 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPES_HEREDOC_H
#define TYPES_HEREDOC_H

#include "me/buffered_str/buf_str.h"
#include "me/types.h"

typedef struct s_heredoc
{
	bool		 is_raw;
	bool		 started;
	bool		 allows_indent;
	t_buffer_str delimiter;
	t_buffer_str current_leading_word;
} t_heredoc;

#endif /* TYPES_HEREDOC_H */
