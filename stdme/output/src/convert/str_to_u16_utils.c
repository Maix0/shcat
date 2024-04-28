/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_to_i64.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 21:15:19 by maiboyer          #+#    #+#             */
/*   Updated: 2024/02/01 23:18:52 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/char/isalpha.h"
#include "me/convert/str_to_numbers.h"
#include "me/printf/printf.h"
#include "me/string/str_len.h"
#include "me/types.h"

t_error	checked_add_u16(t_u16 lhs, t_u16 rhs, t_u16 *out)
{
	if (rhs > 0 && (lhs > 65535u - rhs))
		return (ERROR);
	*out = (t_u16)(lhs + rhs);
	return (NO_ERROR);
}

t_error	checked_sub_u16(t_u16 lhs, t_u16 rhs, t_u16 *out)
{
	if ((((rhs & (1 << (sizeof(t_u16) - 1)) || rhs == 0) || !false) && (lhs < 0u
				+ rhs)))
		return (ERROR);
	*out = (t_u16)(lhs - rhs);
	return (NO_ERROR);
}

t_error	checked_mul_u16(t_u16 lhs, t_u16 rhs, t_u16 *out)
{
	t_u16	mul;

	mul = lhs * rhs;
	if (lhs != 0 && mul / lhs != rhs)
		return (ERROR);
	*out = mul;
	return (NO_ERROR);
}
