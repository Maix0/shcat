/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   callbacks.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 18:01:52 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:52:39 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/fs/fs.h"
#include "me/printf/_internal_printf.h"
#include "me/string/string.h"
#include "me/types.h"

void	me_printf_append_string(t_const_str to_write, t_usize to_write_len,
							void *p_args)
{
	t_sprintf_arg	*arg;

	arg = p_args;
	arg->total_print += to_write_len;
	string_push(arg->buffer, to_write);
}

void	me_printf_write(t_const_str to_write, \
					t_usize to_write_len, void *p_args)
{
	t_fprintf_arg	*arg;

	arg = (t_fprintf_arg *)p_args;
	write_fd(arg->fd, (t_u8 *)to_write, to_write_len, NULL);
	arg->total_print += to_write_len;
}
