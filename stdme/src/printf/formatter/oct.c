/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   oct.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maix <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 01:19:18 by maix              #+#    #+#             */
/*   Updated: 2024/10/12 17:52:40 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/mem/mem.h"
#include "me/printf/formatter/utils.h"
#include "me/str/str.h"
#include <stdio.h>
#define OCT_INLINE_BUF 23

static void	fill_oct(t_str out_buf, t_u64 num, t_str base)
{
	t_usize	i;

	mem_set(out_buf, 0, OCT_INLINE_BUF);
	out_buf[OCT_INLINE_BUF - 1] = 0;
	i = 0;
	while (i < OCT_INLINE_BUF - 1)
	{
		out_buf[OCT_INLINE_BUF - i - 2] = base[(num >> (3 * i) & 7)];
		i++;
	}
}

void	printf_o(t_printf_arg data, t_printf_func f)
{
	t_u64	value;
	char	inline_buffer[OCT_INLINE_BUF];
	t_str	start_num;
	t_str	pretty;

	value = *(t_u64 *)data.argument;
	inline_buffer[0] = '0';
	inline_buffer[1] = '\0';
	pretty = "0o";
	if (value)
		fill_oct(inline_buffer, value, "01234567");
	start_num = &inline_buffer[0];
	while (start_num[1] != '\0' && start_num[0] == '0')
		start_num++;
	if (!value && data.extra.precision == 0 && (data.flags & PRECISION))
	{
		start_num = "";
		pretty = "";
	}
	pad_and_stuff(
		(t_pad_and_stuff_args){\
.fill_zero = 0, .fill = 0, .len = str_len(start_num), .pretty = pretty, \
.pretty_len = str_len(pretty), .str = start_num, .allow_zero_fill = true, \
.sign = NULL, .sign_len = 0, }, data, f);
}
