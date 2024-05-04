/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hash_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 19:17:11 by maiboyer          #+#    #+#             */
/*   Updated: 2024/05/04 19:18:26 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/hash/hasher.h"
#include "me/string/str_len.h"
#include "me/types.h"

void hasher_write_str(t_hasher *hasher, t_str s)
{
	hasher_write_bytes(hasher, (t_u8 *)s, str_len(s));
}
