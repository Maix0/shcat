/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_to_u64_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 21:15:19 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:52:18 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/char/char.h"
#include "me/convert/str_to_numbers.h"
#include "me/printf/printf.h"
#include "me/str/str.h"
#include "me/types.h"

t_error	checked_add_u64(t_u64 lhs, t_u64 rhs, t_u64 *out)
{
	if (rhs > 0 && (lhs > 18446744073709551615llu - rhs))
		return (ERROR);
	*out = (t_u64)(lhs + rhs);
	return (NO_ERROR);
}

t_error	checked_sub_u64(t_u64 lhs, t_u64 rhs, t_u64 *out)
{
	if ((((rhs & (1 << (sizeof(t_u64) - 1)) || rhs == 0) || !false)
			&& (lhs < 0llu + rhs)))
		return (ERROR);
	*out = (t_u64)(lhs - rhs);
	return (NO_ERROR);
}

t_error	checked_mul_u64(t_u64 lhs, t_u64 rhs, t_u64 *out)
{
	t_u64	mul;

	mul = lhs * rhs;
	if (lhs != 0 && mul / lhs != rhs)
		return (ERROR);
	*out = mul;
	return (NO_ERROR);
}
