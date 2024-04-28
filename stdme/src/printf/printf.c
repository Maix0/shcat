/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 17:50:56 by maiboyer          #+#    #+#             */
/*   Updated: 2024/02/09 14:58:10 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/buffered_str/buf_str.h"
#include "me/fs/write.h"
#include "me/printf/formatter/formatter.h"
#include "me/printf/formatter/utils.h"
#include "me/printf/matchers/matchers.h"
#include "me/printf/printf.h"
#include "me/string/str_len.h"
#include "me/types.h"
#include <limits.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>

// p_args is an t_buffer_str;
static void	me_printf_add_to_string(t_const_str to_write, t_usize to_write_len,
		void *p_args)
{
	t_buffer_str	*out_buf;

	out_buf = (t_buffer_str *)p_args;
	(void)(to_write_len);
	push_str_buffer(out_buf, to_write);
}

t_str	me_printf_str(t_const_str fmt, va_list *arguments)
{
	t_buffer_str	out;

	out = alloc_new_buffer(str_len(fmt));
	if (out.buf == NULL)
	{
		return (NULL);
	}
	me_printf_str_inner(fmt, &me_printf_add_to_string, arguments, (void *)&out);
	return (out.buf);
}

void	me_printf_write(t_const_str to_write, t_usize to_write_len,
		void *p_args)
{
	t_fprintf_arg	*arg;

	arg = (t_fprintf_arg *)p_args;
	me_write(arg->fd, (t_u8 *)to_write, to_write_len);
	arg->total_print += to_write_len;
}

t_usize	me_printf(t_const_str fmt, ...)
{
	va_list			args;
	t_fprintf_arg	passthru;

	passthru = (t_fprintf_arg){
		.fd = 1,
		.total_print = 0,
	};
	va_start(args, fmt);
	me_printf_str_inner(fmt, &me_printf_write, &args, (void *)&passthru);
	va_end(args);
	return (passthru.total_print);
}

t_usize	me_eprintf(t_const_str fmt, ...)
{
	va_list			args;
	t_fprintf_arg	passthru;

	passthru = (t_fprintf_arg){
		.fd = 2,
		.total_print = 0,
	};
	va_start(args, fmt);
	me_printf_str_inner(fmt, &me_printf_write, &args, (void *)&passthru);
	va_end(args);
	return (passthru.total_print);
}

/*
t_usize	me_printf(t_const_str fmt, ...)
{
	va_list	args;
	t_str	str;
	t_usize	len;

	va_start(args, fmt);
	str = me_printf_str(fmt, &args);
	va_end(args);
	len = str_len(str);
	write(1, str, len);
	free(str);
	return (len);
}

t_usize	me_eprintf(t_const_str fmt, ...)
{
	va_list	args;
	t_str	str;
	t_usize	len;

	va_start(args, fmt);
	str = me_printf_str(fmt, &args);
	va_end(args);
	len = str_len(str);
	write(2, str, len);
	free(str);
	return (len);
}
*/
