/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_fd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 19:55:09 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:52:43 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/fs/fs.h"
#include "me/printf/formatter/utils.h"
#include "me/printf/printf.h"
#include "me/types.h"
#include <stdarg.h>

t_usize	me_vprintf_fd(t_fd *fd, t_const_str fmt, va_list *args)
{
	t_fprintf_arg	passthru;

	if (fd == NULL || fmt == NULL || args == NULL)
		return (0);
	passthru.fd = fd;
	passthru.total_print = 0;
	me_printf_str_inner(fmt, &me_printf_write, args, (void *)&passthru);
	return (passthru.total_print);
}

t_usize	me_printf_fd(t_fd *fd, t_const_str fmt, ...)
{
	va_list	args;
	t_usize	res;

	va_start(args, fmt);
	res = me_vprintf_fd(fd, fmt, &args);
	va_end(args);
	return (res);
}
