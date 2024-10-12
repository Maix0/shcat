/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 17:50:56 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:52:43 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/printf/printf.h"
#include "me/types.h"
#include <stdarg.h>

t_usize	me_printf(t_const_str fmt, ...)
{
	va_list	args;
	t_usize	res;

	va_start(args, fmt);
	res = me_vprintf(fmt, &args);
	va_end(args);
	return (res);
}

t_usize	me_eprintf(t_const_str fmt, ...)
{
	va_list	args;
	t_usize	res;

	va_start(args, fmt);
	res = me_veprintf(fmt, &args);
	va_end(args);
	return (res);
}
