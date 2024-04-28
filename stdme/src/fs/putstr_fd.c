/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putstr_fd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 04:42:45 by maiboyer          #+#    #+#             */
/*   Updated: 2023/11/10 16:23:44 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/fs/putstr_fd.h"
#include "me/fs/write.h"
#include "me/string/str_len.h"

void	me_putstr_fd(t_str str, t_file file)
{
	if (str == NULL)
		return ;
	me_write(file, (t_u8 *)str, str_len(str));
}
