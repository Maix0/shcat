/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 17:50:56 by maiboyer          #+#    #+#             */
/*   Updated: 2024/07/07 18:01:58 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/printf/printf.h"
#include "me/fs/fs.h"
#include "me/fs/write.h"
#include "me/printf/_internal_printf.h"
#include "me/types.h"
#include <stdarg.h>

t_usize me_printf(t_const_str fmt, ...)
{
	va_list args;
	t_usize res;

	va_start(args, fmt);
	res = me_vprintf(fmt, &args);
	va_end(args);
	return (res);
}

t_usize me_eprintf(t_const_str fmt, ...)
{
	va_list args;
	t_usize res;

	va_start(args, fmt);
	res = me_veprintf(fmt, &args);
	va_end(args);
	return (res);
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
	mem_free(str);
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
	mem_free(str);
	return (len);
}
*/
