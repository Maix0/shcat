/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 14:08:55 by maiboyer          #+#    #+#             */
/*   Updated: 2023/12/11 14:13:32 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/num/u8.h"

t_u8	u8_rotate_left(t_u8 value, t_usize by)
{
	by &= sizeof(value) * 8 - 1;
	if (by == 0)
		return (value);
	return ((value << by) | (value >> (sizeof(value) * 8 - by)));
}

t_u8	u8_rotate_right(t_u8 value, t_usize by)
{
	by &= sizeof(value) * 8 - 1;
	if (by == 0)
		return (value);
	return ((value >> by) | (value << (sizeof(value) * 8 - by)));
}
