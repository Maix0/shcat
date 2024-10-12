/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unsigned_decimal.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maix <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 01:44:35 by maix              #+#    #+#             */
/*   Updated: 2024/10/12 17:52:41 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/mem/mem.h"
#include "me/mem/mem.h"
#include "me/printf/formatter/utils.h"
#include "me/str/str.h"
#include "me/str/str.h"
#include <stdio.h>
#include <stdlib.h>
#define UINT_INLINE_BUF 21

static void	itoa_inner(t_u64 nb, t_str out)
{
	t_u64	modulus;
	bool	need_print;
	char	c;
	t_usize	idx;

	need_print = false;
	modulus = 10000000000000000000u;
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

static t_str	itoa_u64(t_u64 nb)
{
	char	out[UINT_INLINE_BUF];
	t_u64	n;

	n = (t_u64)nb;
	mem_set(out, 0, UINT_INLINE_BUF);
	if (nb == 0)
		out[0] = '0';
	else
		itoa_inner(n, out);
	return (str_clone(out));
}

void	printf_u(t_printf_arg data, t_printf_func f)
{
	t_u64	value;
	t_str	start_num;
	t_str	void_write;

	value = *(t_u64 *)data.argument;
	start_num = itoa_u64(value);
	handle_weird_precision_stuff(&data, (t_prec_strs){.out = &start_num,
		.free_out = true, .pretty = &void_write}, value);
	pad_and_stuff(
		(t_pad_and_stuff_args){\
.fill_zero = 0, .fill = 0, .len = str_len(start_num), \
.pretty = NULL, .pretty_len = 0, .str = start_num, \
.allow_zero_fill = true, .sign = NULL, .sign_len = 0, }, data, f);
	mem_free(start_num);
}
