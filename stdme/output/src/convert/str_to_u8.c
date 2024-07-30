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

#include "me/char/char.h"
#include "me/convert/str_to_numbers.h"
#include "me/str/str.h"
#include "me/types.h"

#define OP_ADD 0b0001
#define OP_SUB 0b0010
#define OP_MUL 0b0100
#define OP_CHK 0b1000

t_error					checked_add_u8(t_u8 lhs, t_u8 rhs, t_u8 *out);
t_error					checked_sub_u8(t_u8 lhs, t_u8 rhs, t_u8 *out);
t_error					checked_mul_u8(t_u8 lhs, t_u8 rhs, t_u8 *out);

static inline bool	can_not_overflow(t_u32 radix, bool is_signed_type,
		t_usize digits_len)
{
	return (radix <= 16 && digits_len <= sizeof(t_u8) * 2
		- (t_usize)is_signed_type);
}

static inline t_error	to_digit(t_u8 ascii, t_u32 radix, t_u32 *out)
{
	t_u32	digit;

	if (radix < 2 || radix > 36)
		return (ERROR);
	digit = ascii - '0';
	if (radix > 10 && digit >= 10)
	{
		if (!me_isalpha(ascii))
			return (ERROR);
		digit = ((ascii | 0b100000) - 'a') + 10;
	}
	if (digit >= radix)
		return (ERROR);
	*out = digit;
	return (NO_ERROR);
}

static inline t_error	do_operation(t_u8 digit, t_u8 op, t_u8 *result)
{
	t_u8	rhs;
	t_u8	res;

	rhs = *result;
	res = *result;
	if (op & OP_CHK)
	{
		if (op & OP_MUL && checked_mul_u8(rhs, digit, &res))
			return (ERROR);
		else if (op & OP_ADD && checked_add_u8(rhs, digit, &res))
			return (ERROR);
		else if (op & OP_SUB && checked_sub_u8(rhs, digit, &res))
			return (ERROR);
	}
	else
	{
		if (op & OP_MUL)
			res = rhs * digit;
		else if (op & OP_ADD)
			res = rhs + digit;
		else if (op & OP_SUB)
			res = rhs - digit;
	}
	*result = res;
	return (NO_ERROR);
}

static inline t_error	loop_inner(t_const_str s, t_u32 radix, t_u8 op,
		t_u8 *out)
{
	t_u32	digit;
	t_u8	result;

	result = 0u;
	while (*s)
	{
		if (do_operation(radix, (op & OP_CHK) | OP_MUL, &result))
			return (ERROR);
		if (to_digit(*s, radix, &digit))
			return (ERROR);
		if (do_operation(digit, op, &result))
			return (ERROR);
		s++;
	}
	if (out)
		*out = result;
	return (NO_ERROR);
}

t_error	str_to_u8(t_const_str s, t_u32 radix, t_u8 *out)
{
	t_usize	digits_len;
	bool	is_positive;
	t_u8	op;

	if (radix < 2 || radix > 36)
		return (ERROR);
	digits_len = str_len(s);
	is_positive = true;
	if (digits_len == 0)
		return (ERROR);
	if ((s[0] == '-' || s[0] == '+') && s[1] == '\0')
		return (ERROR);
	else if (s[0] == '+')
		is_positive = (s++, digits_len--, true);
	else if (s[0] == '-' && false)
		is_positive = (s++, digits_len--, false);
	if (is_positive)
		op = OP_ADD;
	else
		op = OP_SUB;
	if (!can_not_overflow(radix, false, digits_len))
		op |= OP_CHK;
	return (loop_inner(s, radix, op, out));
}
