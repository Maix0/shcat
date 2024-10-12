/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vprintf.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 14:57:28 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:52:44 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/fs/fs.h"
#include "me/printf/formatter/utils.h"
#include "me/printf/printf.h"
#include "me/types.h"
#include <stdarg.h>

void	me_printf_write(t_const_str to_write, \
				t_usize to_write_len, void *p_args);

t_usize	me_vprintf(t_const_str fmt, va_list *args)
{
	t_fprintf_arg	passthru;

	if (fmt == NULL || args == NULL)
		return (0);
	passthru.fd = get_stdout();
	passthru.total_print = 0;
	me_printf_str_inner(fmt, &me_printf_write, args, (void *)&passthru);
	return (passthru.total_print);
}

t_usize	me_veprintf(t_const_str fmt, va_list *args)
{
	t_fprintf_arg	passthru;

	if (fmt == NULL || args == NULL)
		return (0);
	passthru.fd = get_stderr();
	passthru.total_print = 0;
	me_printf_str_inner(fmt, &me_printf_write, args, (void *)&passthru);
	return (passthru.total_print);
}
