/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putfd.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 16:20:02 by rparodi           #+#    #+#             */
/*   Updated: 2024/10/12 17:52:28 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/fs/fs.h"
#include "me/mem/mem.h"
#include "me/str/str.h"
#include "me/types.h"
#include "unistd.h"

#include <dirent.h>
#include <errno.h>
#include <stdio.h>
#include <sys/stat.h>

#define INLINE_BUFFER_SIZE 128

void	put_number_fd(t_fd *fd, t_u64 number)
{
	t_u8	buffer[INLINE_BUFFER_SIZE];
	t_usize	i;

	i = 0;
	while (number > 0)
	{
		buffer[i++] = number % 10 + '0';
		number /= 10;
	}
	while (i > 0)
		write_fd(fd, &buffer[--i], 1, NULL);
}

void	put_string_fd(t_fd *fd, t_const_str string)
{
	write_fd(fd, (t_u8 *)string, str_len(string), NULL);
}

void	put_char_fd(t_fd *fd, t_u8 c)
{
	write_fd(fd, &c, 1, NULL);
}
