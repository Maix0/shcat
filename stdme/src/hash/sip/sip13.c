/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sip13.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 19:32:28 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:52:30 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/hash/sip.h"
#include "me/hash/sip/sip_utils.h"
#include "me/mem/mem.h"

t_hasher	hasher_sip13_new(void)
{
	t_hasher	out;
	t_sip13		*inner;

	inner = mem_alloc(sizeof(t_sip13));
	inner->state = create_state_with_key(0, 0);
	inner->k0 = 0;
	inner->k1 = 0;
	out.hasher = inner;
	out.hash_bytes = (t_hash_bytes)sip13_write_bytes;
	out.finish = (t_hasher_finish)sip13_finish;
	out.reset_and_finish = (t_hasher_reset_and_finish)sip13_reset_and_finish;
	return (out);
}
