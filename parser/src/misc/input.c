/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 17:33:08 by maiboyer          #+#    #+#             */
/*   Updated: 2024/08/31 17:33:45 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser/input.h"
#include "me/types.h"

t_u32	ts_decode_ascii(const t_u8 *string, t_u32 length, t_i32 *code_point)
{
	if (string == NULL || length == 0 || code_point == 0)
		return (0);
	*code_point = 0;
	*(t_u8 *)code_point = *string;
	return (1);
}
