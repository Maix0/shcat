/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 17:57:04 by maiboyer          #+#    #+#             */
/*   Updated: 2023/12/01 21:20:07 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/buffered_str/buf_str.h"
#include "me/convert/atoi.h"
#include "me/printf/formatter/utils.h"
#include "me/printf/matchers/matchers.h"
#include "me/printf/printf.h"
#include "me/string/str_find_chr.h"
#include "me/string/str_substring.h"
#include "me/types.h"
#include <stdio.h>
#include <stdlib.h>

bool	handle_atoi_stuff(t_const_str fmt, t_usize *c_idx, t_usize *nxt,
		t_printf_arg *c_arg)
{
	t_i32	atoi_res;

	atoi_res = me_atoi(&fmt[*c_idx]);
	if (atoi_res < 0)
	{
		*c_idx = *nxt;
		*nxt = (t_usize)(str_find_chr(fmt + *nxt + 1, '%') - fmt);
		return (false);
	}
	advance_atoi(fmt, c_idx);
	c_arg->extra.align = (t_u64)atoi_res;
	handle_prec_and_align(fmt, c_idx, c_arg);
	atoi_res = atoi(&fmt[*c_idx]);
	if (atoi_res < 0)
	{
		*c_idx = *nxt;
		*nxt = (t_usize)(str_find_chr(fmt + *nxt + 1, '%') - fmt);
		return (false);
	}
	advance_atoi(fmt, c_idx);
	c_arg->extra.precision = (t_u64)atoi_res;
	return (true);
}

static void	set_flags_if_needed(t_const_str fmt, t_usize *c_idx,
		t_printf_arg *c_arg)
{
	if (fmt[*c_idx] == ' ')
	{
		(*c_idx)++;
		c_arg->extra.space_align = true;
	}
	if (fmt[*c_idx] == '#')
	{
		(*c_idx)++;
		c_arg->extra.pretty = true;
	}
	if (fmt[*c_idx] == '+')
	{
		(*c_idx)++;
		c_arg->flags |= SIGN;
	}
	if (fmt[*c_idx] == '-')
	{
		(*c_idx)++;
		c_arg->extra.left_align = true;
	}
	if (fmt[*c_idx] == '0')
	{
		(*c_idx)++;
		c_arg->flags |= ZERO_ALIGN;
	}
}

bool	set_params(t_const_str fmt, t_usize *c_idx, t_usize *nxt,
		t_printf_arg *c_arg)
{
	t_usize	b_idx;

	b_idx = ~0;
	while (b_idx != *c_idx)
	{
		b_idx = *c_idx;
		set_flags_if_needed(fmt, c_idx, c_arg);
	}
	return (handle_atoi_stuff(fmt, c_idx, nxt, c_arg));
}

t_printf_arg	print_substr(t_usize *c_idx, t_usize *nxt, t_const_str fmt,
		t_pad_inner_args extra)
{
	t_str	truc;

	truc = str_substring(fmt, *c_idx, *nxt - *c_idx);
	extra.f(truc, *nxt - *c_idx, extra.p_args);
	free(truc);
	*c_idx = *nxt + 1;
	return ((t_printf_arg){
		.p_args = extra.p_args,
		.argument = extra.arguments,
	});
}

void	pad_inner(t_const_str fmt, t_usize *c_idx, t_usize *nxt,
		t_pad_inner_args extra)
{
	t_printf_arg	c_arg;
	t_matcher		*matcher;

	c_arg = print_substr(c_idx, nxt, fmt, extra);
	if (fmt[*c_idx] == '%')
	{
		(*c_idx)++;
		extra.f("%", 1, extra.p_args);
	}
	else
	{
		if (!set_params(fmt, c_idx, nxt, &c_arg))
			return (ret_reset(c_idx, nxt, fmt));
		matcher = find_matcher(fmt, extra.matchers, c_idx);
		if (matcher == NULL)
			return (ret_reset(c_idx, nxt, fmt));
		call_matcher(matcher, c_arg, *extra.arguments, extra.f);
	}
	*nxt = (t_usize)(str_find_chr(fmt + *c_idx, '%'));
	if (*nxt == 0)
		return (*nxt = extra.fmt_len, (void)extra.f(fmt + *c_idx, extra.fmt_len
				- *c_idx, extra.p_args));
	*nxt = *nxt - (t_usize)fmt;
}
