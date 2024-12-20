/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   i16_to_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 21:15:19 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:52:13 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/char/char.h"
#include "me/convert/numbers_to_str.h"
#include "me/str/str.h"
#include "me/types.h"

t_error	_format_u64(t_num_str args, t_str *out);

t_error	i16_to_str_base_prefix(t_i16 val, t_str base, t_str prefix, t_str *out)
{
	union u_nums	value;
	bool			is_nonnegative;

	if (out == NULL || base == NULL || prefix == NULL)
		return (ERROR);
	value.i16 = val;
	is_nonnegative = val & 0x8000;
	if (is_nonnegative)
		value.u16 = ~value.u16 + 1;
	return (_format_u64((t_num_str){.value = value.u64,
			.is_nonnegative = is_nonnegative, .base = base, .prefix = prefix}, \
			out));
}

t_error	i16_to_str_base(t_i16 val, t_str base, t_str *out)
{
	if (out == NULL || base == NULL)
		return (ERROR);
	return (i16_to_str_base_prefix(val, base, "", out));
}

t_error	i16_to_str(t_i16 val, t_str *out)
{
	if (out == NULL)
		return (ERROR);
	return (i16_to_str_base_prefix(val, "0123456789", "", out));
}
