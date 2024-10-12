/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer42@students.42.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 14:40:15 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:52:04 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GNL_H
# define GNL_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 128
# endif

# ifndef BUFFER_LENGTH
#  define BUFFER_LENGTH 512
# endif

# include "me/string/string.h"
# include "me/types.h"

typedef struct s_static_buffer
{
	int		fd;
	bool	used;
	char	buf[BUFFER_SIZE + 1];
	bool	init;
}			t_static_buffer;

typedef struct s_copy_flags
{
	bool	error;
	bool	empty_read;
}			t_copy_flags;

t_string	get_next_line(int fd, bool *error);

#endif
