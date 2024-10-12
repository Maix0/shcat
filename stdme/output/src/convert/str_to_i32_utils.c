/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_to_i32_utils.c                                 :+:      :+:    :+:   */
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

t_error	checked_add_i32(t_i32 lhs, t_i32 rhs, t_i32 *out)
{
	if (rhs > 0 && (lhs > 2147483647 - rhs))
		return (ERROR);
	*out = (t_i32)(lhs + rhs);
	return (NO_ERROR);
}

t_error	checked_sub_i32(t_i32 lhs, t_i32 rhs, t_i32 *out)
{
	if ((((rhs & (1 << (sizeof(t_i32) - 1)) || rhs == 0) || !true) && (lhs < \
				-2147483648 + rhs)))
		return (ERROR);
	*out = (t_i32)(lhs - rhs);
	return (NO_ERROR);
}

t_error	checked_mul_i32(t_i32 lhs, t_i32 rhs, t_i32 *out)
{
	t_i32	mul;

	mul = lhs * rhs;
	if (lhs != 0 && mul / lhs != rhs)
		return (ERROR);
	*out = mul;
	return (NO_ERROR);
}
