/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 17:27:50 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:52:43 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/printf/_internal_printf.h"
#include "me/printf/formatter/utils.h"
#include "me/printf/printf.h"
#include "me/string/string.h"
#include "me/types.h"
#include <stdarg.h>

t_usize	me_vprintf_str(t_string *buf, t_const_str fmt, va_list *args)
{
	t_sprintf_arg	passthru;

	if (buf == NULL || fmt == NULL || args == NULL)
		return (0);
	passthru.buffer = buf;
	passthru.total_print = 0;
	me_printf_str_inner(fmt, &me_printf_append_string, args, &passthru);
	return (passthru.total_print);
}

t_usize	me_printf_str(t_string *buf, t_const_str fmt, ...)
{
	t_usize	res;
	va_list	args;

	va_start(args, fmt);
	res = me_vprintf_str(buf, fmt, &args);
	va_end(args);
	return (res);
}
