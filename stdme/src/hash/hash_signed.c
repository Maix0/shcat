/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hash_signed.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 17:26:06 by maiboyer          #+#    #+#             */
/*   Updated: 2023/12/11 17:27:12 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/hash/hasher.h"
#include "me/types.h"

void	hasher_write_i8(t_hasher *hasher, t_i8 n)
{
	hasher_write_bytes(hasher, (t_u8 *)&n, 1);
}

void	hasher_write_i16(t_hasher *hasher, t_i16 n)
{
	hasher_write_bytes(hasher, (t_u8 *)&n, 2);
}

void	hasher_write_i32(t_hasher *hasher, t_i32 n)
{
	hasher_write_bytes(hasher, (t_u8 *)&n, 1);
}

void	hasher_write_i64(t_hasher *hasher, t_i64 n)
{
	hasher_write_bytes(hasher, (t_u8 *)&n, 1);
}

void	hasher_write_isize(t_hasher *hasher, t_isize n)
{
	hasher_write_bytes(hasher, (t_u8 *)&n, sizeof(t_isize));
}
