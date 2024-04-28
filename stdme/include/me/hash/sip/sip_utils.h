/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sip_utils.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maix <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 19:34:10 by maix              #+#    #+#             */
/*   Updated: 2023/12/27 16:48:51 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SIP_UTILS_H
# define SIP_UTILS_H
# include "me/hash/sip.h"
# include "me/types.h"

void		compress(t_sip_state *state);
t_sip_state	create_state_with_key(t_u64 k0, t_u64 k1);
t_u64		sip13_finish(t_sip13 *hasher);
t_u64		sip13_reset_and_finish(t_sip13 *hasher);
void		sip13_write_bytes(t_sip13 *self, t_u8 *msg, t_usize count);

#endif
