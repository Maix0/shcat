/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:27:33 by maiboyer          #+#    #+#             */
/*   Updated: 2023/11/03 15:44:38 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/fs/write.h"
#include <unistd.h>

bool	me_write(t_file fd, t_u8 *buffer, t_i64 size)
{
	return (write(fd, buffer, size) < 0);
}
