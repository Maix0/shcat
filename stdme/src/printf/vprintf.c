/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vprintf.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 14:57:28 by maiboyer          #+#    #+#             */
/*   Updated: 2024/02/09 15:00:39 by maiboyer         ###   ########.fr       */
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

void	me_printf_write(t_const_str to_write, t_usize to_write_len,
			void *p_args);

t_usize	me_vprintf(t_const_str fmt, va_list *args)
{
	t_fprintf_arg	passthru;

	passthru = (t_fprintf_arg){
		.fd = 1,
		.total_print = 0,
	};
	me_printf_str_inner(fmt, &me_printf_write, args, (void *)&passthru);
	return (passthru.total_print);
}

t_usize	me_veprintf(t_const_str fmt, va_list *args)
{
	t_fprintf_arg	passthru;

	passthru = (t_fprintf_arg){
		.fd = 2,
		.total_print = 0,
	};
	me_printf_str_inner(fmt, &me_printf_write, args, (void *)&passthru);
	return (passthru.total_print);
}
