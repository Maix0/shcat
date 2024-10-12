/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_to_numbers.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 21:08:13 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:52:03 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STR_TO_NUMBERS_H
# define STR_TO_NUMBERS_H

# include "me/types.h"

/// @brief convert the string to a number and checks for error
/// @param str string to convert from
/// @param radix base of the number (between 2 and 36)
/// @param out pointer to the number in case of success
/// @return true if an error occured, false otherwise
t_error	str_to_isize(t_const_str str, t_u32 radix, t_isize *out);

/// @brief convert the string to a number and checks for error
/// @param str string to convert from
/// @param radix base of the number (between 2 and 36)
/// @param out pointer to the number in case of success
/// @return true if an error occured, false otherwise
t_error	str_to_i64(t_const_str str, t_u32 radix, t_i64 *out);

/// @brief convert the string to a number and checks for error
/// @param str string to convert from
/// @param radix base of the number (between 2 and 36)
/// @param out pointer to the number in case of success
/// @return true if an error occured, false otherwise
t_error	str_to_i32(t_const_str str, t_u32 radix, t_i32 *out);

/// @brief convert the string to a number and checks for error
/// @param str string to convert from
/// @param radix base of the number (between 2 and 36)
/// @param out pointer to the number in case of success
/// @return true if an error occured, false otherwise
t_error	str_to_i16(t_const_str str, t_u32 radix, t_i16 *out);

/// @brief convert the string to a number and checks for error
/// @param str string to convert from
/// @param radix base of the number (between 2 and 36)
/// @param out pointer to the number in case of success
/// @return true if an error occured, false otherwise
t_error	str_to_i8(t_const_str str, t_u32 radix, t_i8 *out);

/// @brief convert the string to a number and checks for error
/// @param str string to convert from
/// @param radix base of the number (between 2 and 36)
/// @param out pointer to the number in case of success
/// @return true if an error occured, false otherwise
t_error	str_to_usize(t_const_str str, t_u32 radix, t_usize *out);

/// @brief convert the string to a number and checks for error
/// @param str string to convert from
/// @param radix base of the number (between 2 and 36)
/// @param out pointer to the number in case of success
/// @return true if an error occured, false otherwise
t_error	str_to_u64(t_const_str str, t_u32 radix, t_u64 *out);

/// @brief convert the string to a number and checks for error
/// @param str string to convert from
/// @param radix base of the number (between 2 and 36)
/// @param out pointer to the number in case of success
/// @return true if an error occured, false otherwise
t_error	str_to_u32(t_const_str str, t_u32 radix, t_u32 *out);

/// @brief convert the string to a number and checks for error
/// @param str string to convert from
/// @param radix base of the number (between 2 and 36)
/// @param out pointer to the number in case of success
/// @return true if an error occured, false otherwise
t_error	str_to_u16(t_const_str str, t_u32 radix, t_u16 *out);

/// @brief convert the string to a number and checks for error
/// @param str string to convert from
/// @param radix base of the number (between 2 and 36)
/// @param out pointer to the number in case of success
/// @return true if an error occured, false otherwise
t_error	str_to_u8(t_const_str str, t_u32 radix, t_u8 *out);

#endif /* STR_TO_NUMBERS_H */
