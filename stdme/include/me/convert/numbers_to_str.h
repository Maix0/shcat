/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numbers_to_str.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 17:18:47 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:52:02 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NUMBERS_TO_STR_H
# define NUMBERS_TO_STR_H

# include "me/types.h"

typedef struct s_num_str		t_num_str;
typedef struct s_num_str_state	t_num_str_state;

struct							s_num_str
{
	t_u64						value;
	bool						is_nonnegative;
	t_str						base;
	t_str						prefix;
};

struct							s_num_str_state
{
	bool						print;
	bool						zero;
	char						buffer[40];
	t_str						base;
	t_u64						base_len;
	t_u64						modulus;
	t_u64						value;
	t_usize						idx;
};

union							u_nums
{
	t_u64						u64;
	t_i64						i64;
	t_u32						u32;
	t_i32						i32;
	t_u16						u16;
	t_i16						i16;
	t_u8						u8;
	t_i8						i8;
};

/// @brief Convert a signed 8-bit integer to a string with a base + a prefix.
/// @param val The signed 8-bit integer to convert.
/// @param base The base to use for the conversion.
/// @param prefix The prefix to use for the conversion.
/// @param out The output string.
/// @return True in case of error, false otherwise.
/// @note The base must be a string of at least 2 characters and no duplicates.
t_error							i8_to_str_base_prefix(t_i8 val, t_str base,
									t_str prefix, t_str *out);

/// @brief Convert a signed 8-bit integer to a string with a base
/// @param val The signed 8-bit integer to convert.
/// @param base The base to use for the conversion.
/// @param out The output string.
/// @return True in case of error, false otherwise.
/// @note The base must be a string of at least 2 characters and no duplicates.
t_error							i8_to_str_base(t_i8 val, t_str base,
									t_str *out);

/// @brief Convert a signed 8-bit integer to a string.
/// @param val The signed 8-bit integer to convert.
/// @param out The output string.
/// @return True in case of error, false otherwise.
t_error							i8_to_str(t_i8 val, t_str *out);

/// @brief Convert a unsigned 8-bit integer to a string with a base + a prefix.
/// @param val The unsigned 8-bit integer to convert.
/// @param base The base to use for the conversion.
/// @param prefix The prefix to use for the conversion.
/// @param out The output string.
/// @return True in case of error, false otherwise.
/// @note The base must be a string of at least 2 characters and no duplicates.
t_error							u8_to_str_base_prefix(t_u8 val, t_str base,
									t_str prefix, t_str *out);

/// @brief Convert a unsigned 8-bit integer to a string with a base
/// @param val The unsigned 8-bit integer to convert.
/// @param base The base to use for the conversion.
/// @param out The output string.
/// @return True in case of error, false otherwise.
/// @note The base must be a string of at least 2 characters and no duplicates.
t_error							u8_to_str_base(t_u8 val, t_str base,
									t_str *out);

/// @brief Convert a unsigned 8-bit integer to a string.
/// @param val The unsigned 8-bit integer to convert.
/// @param out The output string.
/// @return True in case of error, false otherwise.
t_error							u8_to_str(t_u8 val, t_str *out);

/// @brief Convert a signed 16-bit integer to a string with a base + a prefix.
/// @param val The signed 16-bit integer to convert.
/// @param base The base to use for the conversion.
/// @param prefix The prefix to use for the conversion.
/// @param out The output string.
/// @return True in case of error, false otherwise.
/// @note The base must be a string of at least 2 characters and no duplicates.
t_error							i16_to_str_base_prefix(t_i16 val, t_str base,
									t_str prefix, t_str *out);

/// @brief Convert a signed 16-bit integer to a string with a base
/// @param val The signed 16-bit integer to convert.
/// @param base The base to use for the conversion.
/// @param out The output string.
/// @return True in case of error, false otherwise.
/// @note The base must be a string of at least 2 characters and no duplicates.
t_error							i16_to_str_base(t_i16 val, t_str base,
									t_str *out);

/// @brief Convert a signed 16-bit integer to a string.
/// @param val The signed 16-bit integer to convert.
/// @param out The output string.
/// @return True in case of error, false otherwise.
t_error							i16_to_str(t_i16 val, t_str *out);

/// @brief Convert a unsigned 16-bit integer to a string with a base + a prefix.
/// @param val The unsigned 16-bit integer to convert.
/// @param base The base to use for the conversion.
/// @param prefix The prefix to use for the conversion.
/// @param out The output string.
/// @return True in case of error, false otherwise.
/// @note The base must be a string of at least 2 characters and no duplicates.
t_error							u16_to_str_base_prefix(t_u16 val, t_str base,
									t_str prefix, t_str *out);

/// @brief Convert a unsigned 16-bit integer to a string with a base
/// @param val The unsigned 16-bit integer to convert.
/// @param base The base to use for the conversion.
/// @param out The output string.
/// @return True in case of error, false otherwise.
/// @note The base must be a string of at least 2 characters and no duplicates.
t_error							u16_to_str_base(t_u16 val, t_str base,
									t_str *out);

/// @brief Convert a unsigned 16-bit integer to a string.
/// @param val The unsigned 16-bit integer to convert.
/// @param out The output string.
/// @return True in case of error, false otherwise.
t_error							u16_to_str(t_u16 val, t_str *out);

/// @brief Convert a signed 32-bit integer to a string with a base + a prefix.
/// @param val The signed 32-bit integer to convert.
/// @param base The base to use for the conversion.
/// @param prefix The prefix to use for the conversion.
/// @param out The output string.
/// @return True in case of error, false otherwise.
/// @note The base must be a string of at least 2 characters and no duplicates.
t_error							i32_to_str_base_prefix(t_i32 val, t_str base,
									t_str prefix, t_str *out);

/// @brief Convert a signed 32-bit integer to a string with a base
/// @param val The signed 32-bit integer to convert.
/// @param base The base to use for the conversion.
/// @param out The output string.
/// @return True in case of error, false otherwise.
/// @note The base must be a string of at least 2 characters and no duplicates.
t_error							i32_to_str_base(t_i32 val, t_str base,
									t_str *out);

/// @brief Convert a signed 32-bit integer to a string.
/// @param val The signed 32-bit integer to convert.
/// @param out The output string.
/// @return True in case of error, false otherwise.
t_error							i32_to_str(t_i32 val, t_str *out);

/// @brief Convert a unsigned 32-bit integer to a string with a base + a prefix.
/// @param val The unsigned 32-bit integer to convert.
/// @param base The base to use for the conversion.
/// @param prefix The prefix to use for the conversion.
/// @param out The output string.
/// @return True in case of error, false otherwise.
/// @note The base must be a string of at least 2 characters and no duplicates.
t_error							u32_to_str_base_prefix(t_u32 val, t_str base,
									t_str prefix, t_str *out);

/// @brief Convert a unsigned 32-bit integer to a string with a base
/// @param val The unsigned 32-bit integer to convert.
/// @param base The base to use for the conversion.
/// @param out The output string.
/// @return True in case of error, false otherwise.
/// @note The base must be a string of at least 2 characters and no duplicates.
t_error							u32_to_str_base(t_u32 val, t_str base,
									t_str *out);

/// @brief Convert a unsigned 32-bit integer to a string.
/// @param val The unsigned 32-bit integer to convert.
/// @param out The output string.
/// @return True in case of error, false otherwise.
t_error							u32_to_str(t_u32 val, t_str *out);

/// @brief Convert a signed 64-bit integer to a string with a base and a prefix.
/// @param val The signed 64-bit integer to convert.
/// @param base The base to use for the conversion.
/// @param prefix The prefix to use for the conversion.
/// @param out The output string.
/// @return True in case of error, false otherwise.
/// @note The base must be a string of at least 2 characters and no duplicates.
t_error							i64_to_str_base_prefix(t_i64 val, t_str base,
									t_str prefix, t_str *out);

/// @brief Convert a signed 64-bit integer to a string with a base
/// @param val The signed 64-bit integer to convert.
/// @param base The base to use for the conversion.
/// @param out The output string.
/// @return True in case of error, false otherwise.
/// @note The base must be a string of at least 2 characters and no duplicates.
t_error							i64_to_str_base(t_i64 val, t_str base,
									t_str *out);

/// @brief Convert a signed 64-bit integer to a string.
/// @param val The signed 64-bit integer to convert.
/// @param out The output string.
/// @return True in case of error, false otherwise.
t_error							i64_to_str(t_i64 val, t_str *out);

/// @brief Convert a unsigned 64-bit integer to a string with a base + a prefix.
/// @param val The unsigned 64-bit integer to convert.
/// @param base The base to use for the conversion.
/// @param prefix The prefix to use for the conversion.
/// @param out The output string.
/// @return True in case of error, false otherwise.
/// @note The base must be a string of at least 2 characters and no duplicates.
t_error							u64_to_str_base_prefix(t_u64 val, t_str base,
									t_str prefix, t_str *out);

/// @brief Convert a unsigned 64-bit integer to a string with a base
/// @param val The unsigned 64-bit integer to convert.
/// @param base The base to use for the conversion.
/// @param out The output string.
/// @return True in case of error, false otherwise.
/// @note The base must be a string of at least 2 characters and no duplicates.
t_error							u64_to_str_base(t_u64 val, t_str base,
									t_str *out);

/// @brief Convert a unsigned 64-bit integer to a string.
/// @param val The unsigned 64-bit integer to convert.
/// @param out The output string.
/// @return True in case of error, false otherwise.
t_error							u64_to_str(t_u64 val, t_str *out);

#endif /* NUMBERS_TO_STR_H */
