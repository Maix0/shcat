/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hasher.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maix <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 19:50:39 by maix              #+#    #+#             */
/*   Updated: 2023/12/27 16:44:09 by maiboyer         ###   ########.fr       */
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

void							hasher_write_bytes(t_hasher *hasher,
									t_u8 *bytes, t_usize count);

void							hasher_write_u8(t_hasher *hasher, t_u8 n);
void							hasher_write_u16(t_hasher *hasher, t_u16 n);
void							hasher_write_u32(t_hasher *hasher, t_u32 n);
void							hasher_write_u64(t_hasher *hasher, t_u64 n);
void							hasher_write_usize(t_hasher *hasher, t_usize n);

void							hasher_write_i8(t_hasher *hasher, t_i8 n);
void							hasher_write_i16(t_hasher *hasher, t_i16 n);
void							hasher_write_i32(t_hasher *hasher, t_i32 n);
void							hasher_write_i64(t_hasher *hasher, t_i64 n);
void							hasher_write_isize(t_hasher *hasher, t_isize n);

void							hasher_write_str(t_hasher *hasher, t_str str);

t_u64							hasher_finish(t_hasher *hasher);
t_u64							hasher_reset_and_finish(t_hasher *hasher);

#endif
