/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_to_u8_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 21:15:19 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:52:19 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/char/char.h"
#include "me/convert/str_to_numbers.h"
#include "me/printf/printf.h"
#include "me/str/str.h"
#include "me/types.h"

t_error	checked_add_u8(t_u8 lhs, t_u8 rhs, t_u8 *out)
{
	if (rhs > 0 && (lhs > 128u - rhs))
		return (ERROR);
	*out = (t_u8)(lhs + rhs);
	return (NO_ERROR);
}

t_error	checked_sub_u8(t_u8 lhs, t_u8 rhs, t_u8 *out)
{
	if ((((rhs & (1 << (sizeof(t_u8) - 1)) || rhs == 0) || !false) && (lhs < 0u
				+ rhs)))
		return (ERROR);
	*out = (t_u8)(lhs - rhs);
	return (NO_ERROR);
}

t_error	checked_mul_u8(t_u8 lhs, t_u8 rhs, t_u8 *out)
{
	t_u8	mul;

	mul = lhs * rhs;
	if (lhs != 0 && mul / lhs != rhs)
		return (ERROR);
	*out = mul;
	return (NO_ERROR);
}
