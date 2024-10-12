/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_to_i16_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 21:15:19 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:52:15 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/char/char.h"
#include "me/convert/str_to_numbers.h"
#include "me/printf/printf.h"
#include "me/str/str.h"
#include "me/types.h"

t_error	checked_add_i16(t_i16 lhs, t_i16 rhs, t_i16 *out)
{
	if (rhs > 0 && (lhs > 32767 - rhs))
		return (ERROR);
	*out = (t_i16)(lhs + rhs);
	return (NO_ERROR);
}

t_error	checked_sub_i16(t_i16 lhs, t_i16 rhs, t_i16 *out)
{
	if ((((rhs & (1 << (sizeof(t_i16) - 1)) || rhs == 0) || !true) && (lhs < \
				-32768 + rhs)))
		return (ERROR);
	*out = (t_i16)(lhs - rhs);
	return (NO_ERROR);
}

t_error	checked_mul_i16(t_i16 lhs, t_i16 rhs, t_i16 *out)
{
	t_i16	mul;

	mul = lhs * rhs;
	if (lhs != 0 && mul / lhs != rhs)
		return (ERROR);
	*out = mul;
	return (NO_ERROR);
}
