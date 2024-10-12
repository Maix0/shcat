/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hasher.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maix <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 19:50:39 by maix              #+#    #+#             */
/*   Updated: 2024/10/12 17:52:04 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HASHER_H
# define HASHER_H

# include "me/types.h"

typedef void					(*t_hash_bytes)(void *hasher, t_u8 *bytes,
						t_usize count);
typedef t_u64					(*t_hasher_finish)(void *hasher);
typedef t_u64					(*t_hasher_reset_and_finish)(void *hasher);

typedef struct s_hasher
{
	void						*hasher;
	t_hash_bytes				hash_bytes;
	t_hasher_finish				finish;
	t_hasher_reset_and_finish	reset_and_finish;

}								t_hasher;

/// @brief Write [counts] bytes to the hasher
/// @param hasher the hasher to write to
/// @param bytes the bytes to write
/// @param count the number of bytes to write
void							hasher_write_bytes(t_hasher *hasher,
									t_u8 *bytes, t_usize count);

/// @brief Write an u8 to the hasher
/// @param hasher the hasher to write to
/// @param n the value to write
void							hasher_write_u8(t_hasher *hasher, t_u8 n);

/// @brief Write an u16 to the hasher
/// @param hasher the hasher to write to
/// @param n the value to write
void							hasher_write_u16(t_hasher *hasher, t_u16 n);

/// @brief Write an u32 to the hasher
/// @param hasher the hasher to write to
/// @param n the value to write
void							hasher_write_u32(t_hasher *hasher, t_u32 n);

/// @brief Write an u64 to the hasher
/// @param hasher the hasher to write to
/// @param n the value to write
void							hasher_write_u64(t_hasher *hasher, t_u64 n);

/// @brief Write an usize to the hasher
/// @param hasher the hasher to write to
/// @param n the value to write
void							hasher_write_usize(t_hasher *hasher, t_usize n);

/// @brief Write an i8 to the hasher
/// @param hasher the hasher to write to
/// @param n the value to write
void							hasher_write_i8(t_hasher *hasher, t_i8 n);

/// @brief Write an i16 to the hasher
/// @param hasher the hasher to write to
/// @param n the value to write
void							hasher_write_i16(t_hasher *hasher, t_i16 n);

/// @brief Write an i32 to the hasher
/// @param hasher the hasher to write to
/// @param n the value to write
void							hasher_write_i32(t_hasher *hasher, t_i32 n);

/// @brief Write an i64 to the hasher
/// @param hasher the hasher to write to
/// @param n the value to write
void							hasher_write_i64(t_hasher *hasher, t_i64 n);

/// @brief Write an isize to the hasher
/// @param hasher the hasher to write to
/// @param n the value to write
void							hasher_write_isize(t_hasher *hasher, t_isize n);

/// @brief Write an string to the hasher
/// @param hasher the hasher to write to
/// @param str the string to write
void							hasher_write_str(t_hasher *hasher, t_str str);

/// @brief Finish the hashing, free the underlying hasher and return the hash
/// @param hasher the hasher to finish
/// @return the hash
t_u64							hasher_finish(t_hasher *hasher);

/// @brief Finish the hashing and return the hash BUT DOESN't FREE THE HASHER
/// @param hasher the hasher to finish
/// @return the hash
t_u64							hasher_reset_and_finish(t_hasher *hasher);

#endif
