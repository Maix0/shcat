/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 18:12:11 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:52:39 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/mem/mem.h"
#include "me/printf/formatter/utils.h"
#include "me/str/str.h"
#include "me/str/str.h"
#include <stdlib.h>

void	printf_c(t_printf_arg data, t_printf_func f)
{
	char	value[2];
	t_str	start_num;

	value[0] = *(char *)data.argument;
	value[1] = 0;
	start_num = &value[0];
	pad_and_stuff(
		(t_pad_and_stuff_args){\
.fill_zero = 0, .fill = 0, .len = 1, .pretty = "", .pretty_len = 0, \
.str = start_num, .allow_zero_fill = false, .sign = NULL, \
.sign_len = 0, }, data, f);
}

t_usize	printf_s_inner(t_str *value, t_printf_arg *data, t_printf_func *f)
{
	t_usize	len;

	if (*value == NULL)
	{
		if (data->flags & (PRECISION) && data->extra.precision < 6)
			*value = "";
		else
			*value = "(null)";
	}
	len = str_len(*value);
	if (data->flags & (PRECISION) && len > data->extra.precision)
		len = data->extra.precision;
	if (data->flags & (PRECISION) && len < data->extra.precision)
		data->extra.precision = len;
	(void)(f);
	return (len);
}

void	printf_s(t_printf_arg data, t_printf_func f)
{
	t_str	value;
	t_str	start_num;
	t_usize	len;

	value = (t_str)data.argument;
	len = printf_s_inner(&value, &data, &f);
	start_num = str_substring(value, 0, len);
	pad_and_stuff(
		(t_pad_and_stuff_args){\
.fill_zero = 0, .fill = 0, .len = len, .pretty = "", .pretty_len = 0, \
.str = start_num, .allow_zero_fill = false, .sign = NULL, \
.sign_len = 0, }, data, f);
	mem_free(start_num);
}
