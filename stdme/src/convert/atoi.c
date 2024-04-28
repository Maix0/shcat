/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:14:00 by maiboyer          #+#    #+#             */
/*   Updated: 2024/01/11 15:37:28 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/char/isdigit.h"
#include "me/char/isspace.h"
#include "me/convert/atoi.h"

t_i32	me_atoi(t_const_str str)
{
	t_u64	out;
	t_u64	sign;
	t_usize	i;

	out = 0;
	i = 0;
	sign = 1;
	while (me_isspace(str[i]))
		i++;
	if (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			sign = -1;
	while (me_isdigit(str[i]))
	{
		out *= 10;
		out += str[i] - '0';
		i++;
	}
	return ((t_i32)(out * sign));
}

t_i64	me_atoi_64(t_const_str str)
{
	t_u64	out;
	t_u64	sign;
	t_usize	i;

	out = 0;
	i = 0;
	sign = 1;
	while (me_isspace(str[i]))
		i++;
	if (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			sign = -1;
	while (me_isdigit(str[i]))
	{
		out *= 10;
		out += str[i] - '0';
		i++;
	}
	return ((t_i64)(out * sign));
}
