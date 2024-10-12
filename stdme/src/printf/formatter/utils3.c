/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 18:06:15 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:52:41 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/char/char.h"
#include "me/printf/formatter/utils.h"
#include "me/printf/matchers/matchers.h"
#include "me/str/str.h"
#include "me/str/str.h"
#include "me/types.h"
#include <stdio.h>

void	ret_reset(t_usize *c_idx, t_usize *nxt, t_const_str fmt)
{
	*c_idx = *nxt;
	*nxt = (t_usize)(str_find_chr(fmt + *nxt + 1, '%') - fmt);
}

void	me_printf_str_inner(t_const_str fmt, t_printf_func f,
		va_list *arguments, void *p_args)
{
	t_usize	c_idx;
	t_usize	nxt;
	t_usize	fmt_len;

	c_idx = 0;
	fmt_len = str_len(fmt);
	nxt = (t_usize)(str_find_chr(fmt, '%'));
	if (nxt == 0)
		return (f(fmt, fmt_len, p_args));
	nxt = nxt - (t_usize)fmt;
	while (nxt < fmt_len)
	{
		pad_inner(fmt, &c_idx, &nxt, \
	((t_pad_inner_args){\
	.p_args = p_args, .fmt_len = fmt_len, .f = f, \
	.arguments = arguments, .matchers = get_matchers(), }));
	}
}

void	print_sign_if_needed(t_pad_and_stuff_args a, t_printf_arg d,
		t_printf_func f)
{
	if (d.flags & (SIGN) && a.sign != NULL)
		f(a.sign, a.sign_len, d.p_args);
}

t_i32	_atoi_printf(t_const_str str)
{
	t_u64	out;
	t_u64	sign;
	t_usize	i;

	out = 0;
	i = 0;
	sign = 1;
	while (me_isspace(str[i]))
		i++;
	if (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			sign = -1;
	while (me_isdigit(str[i]))
	{
		out *= 10;
		out += str[i] - '0';
		i++;
	}
	return ((t_i32)(out * sign));
}
