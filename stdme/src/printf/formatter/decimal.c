/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   decimal.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maix <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 01:44:35 by maix              #+#    #+#             */
/*   Updated: 2023/12/11 19:19:27 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/mem/mem_alloc_array.h"
#include "me/mem/mem_set.h"
#include "me/printf/formatter/utils.h"
#include "me/printf/printf.h"
#include "me/string/str_clone.h"
#include "me/string/str_len.h"
#include <stdio.h>
#include <stdlib.h>
#define INT_INLINE_BUF 21

static void	itoa_inner(t_u64 nb, t_str out)
{
	t_u64	modulus;
	bool	need_print;
	char	c;
	t_usize	idx;

	need_print = false;
	modulus = 1000000000000000000;
	idx = 0;
	while (modulus)
	{
		c = (char)(nb / modulus) + '0';
		if (c != '0' || need_print)
		{
			out[idx++] = c;
			need_print = true;
		}
		nb = nb % modulus;
		modulus /= 10;
	}
}

static t_str	itoa_64(t_i64 nb)
{
	char	out[INT_INLINE_BUF];
	t_u64	n;

	n = (t_u64)nb;
	mem_set(out, 0, INT_INLINE_BUF);
	if (nb < 0)
		itoa_inner(-n, out);
	else if (nb == 0)
		out[0] = '0';
	else
		itoa_inner(n, out);
	return (str_clone(out));
}

void	printf_d(t_printf_arg data, t_printf_func f)
{
	t_u64	value;
	t_str	start_num;
	t_str	sign;
	t_str	void_write;

	value = *(t_i64 *)data.argument;
	if ((t_u64)value & ((t_u64)1 << 31))
		sign = "-";
	else
		sign = "+";
	if (!(data.flags & SIGN) && !((t_u64)value & ((t_u64)1 << 31)))
		sign = "";
	if (!(data.flags & SIGN) && data.extra.space_align
		&& !((t_u64)value & ((t_u64)1 << 31)))
		sign = " ";
	data.flags |= SIGN;
	start_num = itoa_64(value);
	handle_weird_precision_stuff(&data, (t_prec_strs){.out = &start_num,
		.free_out = true, .pretty = &void_write}, value);
	pad_and_stuff(
		(t_pad_and_stuff_args){\
.fill_zero = 0, .fill = 0, .sign = sign, .pretty = NULL, .len = \
str_len(start_num), .pretty_len = 0, .str = start_num, .allow_zero_fill \
	= true, .sign_len = str_len(sign), }, data, f);
	free(start_num);
}
