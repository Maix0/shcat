/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 14:08:55 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:52:36 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/num/u64.h"

t_u64	u64_rotate_left(t_u64 value, t_usize by)
{
	by &= sizeof(value) * 8 - 1;
	if (by == 0)
		return (value);
	return ((value << by) | (value >> (sizeof(value) * 8 - by)));
}

t_u64	u64_rotate_right(t_u64 value, t_usize by)
{
	by &= sizeof(value) * 8 - 1;
	if (by == 0)
		return (value);
	return ((value >> by) | (value << (sizeof(value) * 8 - by)));
}
