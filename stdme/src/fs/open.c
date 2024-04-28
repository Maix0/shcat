/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:29:38 by maiboyer          #+#    #+#             */
/*   Updated: 2024/01/06 18:19:11 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/fs/open.h"
#include <fcntl.h>

t_error	me_open(t_const_str path, bool read, bool write, t_file *file_out)
{
	t_file	out;
	int		flags;

	flags = 0;
	if (read && write)
		flags = O_RDWR;
	else if (read)
		flags = O_RDONLY;
	else if (write)
		flags = O_WRONLY;
	out = open(path, flags, 0666);
	if (out < 0)
		return (ERROR);
	*file_out = out;
	return (NO_ERROR);
}

t_error	me_open_truncate(t_const_str path, t_file *file_out)
{
	t_file	out;
	int		flags;

	unlink(path);
	flags = O_WRONLY | O_CREAT | O_TRUNC;
	out = open(path, flags, 0666);
	if (out < 0)
		return (ERROR);
	*file_out = out;
	return (NO_ERROR);
}

t_error	me_open_create(t_const_str path, t_file *file_out)
{
	t_file	out;
	int		flags;

	flags = O_WRONLY | O_CREAT | O_APPEND;
	out = open(path, flags, 0666);
	if (out < 0)
		return (ERROR);
	*file_out = out;
	return (NO_ERROR);
}
