/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hex.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 18:16:16 by maiboyer          #+#    #+#             */
/*   Updated: 2023/12/11 19:19:03 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/mem/mem_set.h"
#include "me/printf/formatter/utils.h"
#include "me/printf/printf.h"
#include "me/string/str_len.h"
#define HEX_INLINE_BUF 17

static void	fill_hex(t_str out_buf, t_u64 num, t_const_str base)
{
	t_usize	i;

	mem_set(out_buf, 0, HEX_INLINE_BUF);
	out_buf[HEX_INLINE_BUF - 1] = 0;
	i = 0;
	while (i < HEX_INLINE_BUF - 1)
	{
		out_buf[HEX_INLINE_BUF - i - 2] = base[(num >> (4 * i) & 15)];
		i++;
	}
}

static void	printf_x_common(t_printf_arg data, t_printf_func f,
		t_const_str pretty, t_const_str base)
{
	t_u64	value;
	char	inline_buffer[HEX_INLINE_BUF];
	t_str	start_num;

	value = *(t_u64 *)data.argument;
	inline_buffer[0] = '0';
	inline_buffer[1] = '\0';
	if (value)
		fill_hex(inline_buffer, value, base);
	start_num = &inline_buffer[0];
	while (start_num[1] != '\0' && start_num[0] == '0')
		start_num++;
	if (value == 0)
		data.extra.pretty = false;
	handle_weird_precision_stuff(&data, (t_prec_strs){.out = &start_num,
		.free_out = false, .pretty = (t_str *)&pretty}, value);
	pad_and_stuff(
		(t_pad_and_stuff_args){\
.fill_zero = 0, .fill = 0, .len = str_len(start_num), .pretty = (t_str)pretty, \
.pretty_len = 2, .str = start_num, .allow_zero_fill = true, .sign = NULL, \
.sign_len = 0, }, data, f);
}

void	printf_x_up(t_printf_arg data, t_printf_func f)
{
	printf_x_common(data, f, "0X", "0123456789ABCDEF");
}

void	printf_x_low(t_printf_arg data, t_printf_func f)
{
	printf_x_common(data, f, "0x", "0123456789abcdef");
}
