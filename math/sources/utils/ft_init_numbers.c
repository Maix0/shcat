/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_numbers.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 13:41:03 by rparodi           #+#    #+#             */
/*   Updated: 2024/05/29 16:23:35 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_math.h"

t_error	ft_init_numbers(t_str str, t_number *nb)
{
	t_usize int_size;
	t_usize	float_size;
	t_u8	sign;
	t_str	*tmp;

	int_size = 0;
	float_size = 0;
	sign = 1;
	if (nb == NULL)
		return (ERROR);
	if (ft_nblen(str, &int_size, &float_size, &sign) == ERROR)
		return (ERROR);
	else
	{
		nb->number = str;
		tmp = ft_split(str, '.');
		nb->sign = sign;
		nb->int_part = tmp[0];
		nb->float_part = tmp[1];
		nb->int_size = int_size;
		nb->float_size = float_size;
	}
	return (NO_ERROR);
}