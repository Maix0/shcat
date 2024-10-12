/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ptr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 18:16:16 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:52:41 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/mem/mem.h"
#include "me/printf/formatter/utils.h"
#include "me/str/str.h"
#define PTR_INLINE_BUF 17

static void	fill_hex(t_str out_buf, t_u64 num, t_str base)
{
	t_usize	i;

	mem_set(out_buf, 0, PTR_INLINE_BUF);
	out_buf[PTR_INLINE_BUF - 1] = 0;
	i = 0;
	while (i < PTR_INLINE_BUF - 1)
	{
		out_buf[PTR_INLINE_BUF - i - 2] = base[(num >> (4 * i) & 15)];
		i++;
	}
}

static void	set_values_for_nil(t_usize value, t_str *out, t_printf_arg *data,
		t_printf_func f)
{
	(void)(f);
	if (value)
	{
		data->flags &= ~PRECISION;
		data->extra.precision = 0;
		data->extra.pretty = true;
	}
	else
	{
		*out = "(nil)";
		data->extra.precision = 0;
		data->extra.pretty = false;
		data->flags &= ~(ZERO_ALIGN | PRECISION);
		data->flags |= ALIGN;
	}
}

void	printf_p(t_printf_arg data, t_printf_func f)
{
	t_u64	value;
	char	inline_buffer[PTR_INLINE_BUF + 1];
	t_str	start_num;

	value = (t_u64)data.argument;
	inline_buffer[0] = '0';
	inline_buffer[1] = '\0';
	if (value)
		fill_hex(inline_buffer, value, "0123456789abcdef");
	start_num = &inline_buffer[0];
	inline_buffer[PTR_INLINE_BUF] = 0;
	while (start_num[1] != '\0' && start_num[0] == '0')
		start_num++;
	set_values_for_nil(value, &start_num, &data, f);
	pad_and_stuff(
		(t_pad_and_stuff_args){\
.fill_zero = 0, .fill = 0, .len = str_len(start_num), .pretty = "0x", \
.pretty_len = 2, .str = start_num, .allow_zero_fill = value != 0, \
.sign = NULL, .sign_len = 0, }, data, f);
}
