/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putchar_fd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 04:42:45 by maiboyer          #+#    #+#             */
/*   Updated: 2023/11/08 13:22:51 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/fs/putchar_fd.h"
#include "me/fs/write.h"
#include "me/string/str_len.h"

void	me_putchar_fd(char chr, t_file file)
{
	me_write(file, (t_u8 *)&chr, 1);
}
