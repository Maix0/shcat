/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hash_unsigned.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 17:25:23 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:52:30 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/hash/hasher.h"
#include "me/types.h"

void	hasher_write_u8(t_hasher *hasher, t_u8 byte)
{
	hasher->hash_bytes(hasher->hasher, &byte, 1);
}

void	hasher_write_u16(t_hasher *hasher, t_u16 byte)
{
	hasher->hash_bytes(hasher->hasher, (t_u8 *)&byte, 2);
}

void	hasher_write_u32(t_hasher *hasher, t_u32 byte)
{
	hasher->hash_bytes(hasher->hasher, (t_u8 *)&byte, 4);
}

void	hasher_write_u64(t_hasher *hasher, t_u64 byte)
{
	hasher->hash_bytes(hasher->hasher, (t_u8 *)&byte, 8);
}
