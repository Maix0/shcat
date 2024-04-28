/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hasher.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 15:58:12 by maiboyer          #+#    #+#             */
/*   Updated: 2023/12/27 16:44:25 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/hash/hasher.h"
#include "me/types.h"

t_u64	hasher_finish(t_hasher *hasher)
{
	return (hasher->finish(hasher->hasher));
}

t_u64	hasher_reset_and_finish(t_hasher *hasher)
{
	return (hasher->reset_and_finish(hasher->hasher));
}

void	hasher_write_bytes(t_hasher *hasher, t_u8 *bytes, t_usize count)
{
	hasher->hash_bytes(hasher->hasher, bytes, count);
}
