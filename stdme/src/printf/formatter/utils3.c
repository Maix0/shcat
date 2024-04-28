/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 18:06:15 by maiboyer          #+#    #+#             */
/*   Updated: 2023/12/11 19:21:38 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/printf/formatter/utils.h"
#include "me/printf/matchers/matchers.h"
#include "me/string/str_find_chr.h"
#include "me/string/str_len.h"
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
