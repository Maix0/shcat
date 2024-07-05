
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_fd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 19:55:09 by maiboyer          #+#    #+#             */
/*   Updated: 2024/07/05 19:57:23 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/fs/fs.h"
#include "me/printf/formatter/utils.h"
#include "me/printf/printf.h"
#include "me/types.h"
#include <stdarg.h>

void me_printf_write(t_const_str to_write, t_usize to_write_len, void *p_args);

t_usize me_vprintf_fd(t_fd *fd, t_const_str fmt, va_list *args)
{
	t_fprintf_arg passthru;

	passthru = (t_fprintf_arg){
		.fd = fd->fd,
		.total_print = 0,
	};
	me_printf_str_inner(fmt, &me_printf_write, args, (void *)&passthru);
	return (passthru.total_print);
}

t_usize me_printf_fd(t_fd *fd, t_const_str fmt, ...)
{
	va_list		  args;
	t_fprintf_arg passthru;

	passthru = (t_fprintf_arg){
		.fd = fd->fd,
		.total_print = 0,
	};
	va_start(args, fmt);
	me_printf_str_inner(fmt, &me_printf_write, &args, (void *)&passthru);
	va_end(args);
	return (passthru.total_print);
}
