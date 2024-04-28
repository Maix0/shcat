/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_to_numbers.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 21:08:13 by maiboyer          #+#    #+#             */
/*   Updated: 2024/02/02 00:22:50 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STR_TO_NUMBERS_H
# define STR_TO_NUMBERS_H

# include "me/types.h"

t_error	str_to_isize(t_const_str str, t_u32 radix, t_isize *out);
t_error	str_to_i64(t_const_str str, t_u32 radix, t_i64 *out);
t_error	str_to_i32(t_const_str str, t_u32 radix, t_i32 *out);
t_error	str_to_i16(t_const_str str, t_u32 radix, t_i16 *out);
t_error	str_to_i8(t_const_str str, t_u32 radix, t_i8 *out);

t_error	str_to_usize(t_const_str str, t_u32 radix, t_usize *out);
t_error	str_to_u64(t_const_str str, t_u32 radix, t_u64 *out);
t_error	str_to_u32(t_const_str str, t_u32 radix, t_u32 *out);
t_error	str_to_u16(t_const_str str, t_u32 radix, t_u16 *out);
t_error	str_to_u8(t_const_str str, t_u32 radix, t_u8 *out);

#endif /* STR_TO_NUMBERS_H */
