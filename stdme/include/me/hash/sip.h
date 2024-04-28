/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sip.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maix <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 19:33:46 by maix              #+#    #+#             */
/*   Updated: 2023/12/11 15:10:07 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SIP_H
# define SIP_H
# include "me/hash/hasher.h"
# include "me/types.h"

typedef struct s_sip_state
{
	t_u64		v0;
	t_u64		v2;
	t_u64		v1;
	t_u64		v3;
}				t_sip_state;

typedef struct s_sip13
{
	t_u64		k0;
	t_u64		k1;
	t_usize		length;
	t_u64		tail;
	t_usize		ntail;
	t_sip_state	state;
}				t_sip13;

t_hasher		hasher_sip13_new(void);

#endif
