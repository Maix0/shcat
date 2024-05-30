/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hard_op.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 15:51:55 by rparodi           #+#    #+#             */
/*   Updated: 2024/05/30 16:14:04 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operation.h"

t_error	ft_power(t_i32 base, t_i32 exponent, t_i64 *result)
{
	t_i32	i;
	t_i64	tmp;

	i = 0;
	tmp = base;
	if (exponent < 0)
		return (ERROR);
	while (i < exponent)
	{
		(*result) *= base;
		if ((*result) / base != tmp)
			return (ERROR);
		tmp = (*result);
		i++;
	}
	return (NO_ERROR);
}

t_error	ft_decrimented(t_i64 *value)
{
	t_i64	tmp;

	tmp = *value;
	(*value)--;
	if ((*value) + 1 != tmp)
		return (ERROR);
	return (NO_ERROR);
}

t_error	ft_incrimented(t_i64 *value)
{
	t_i64	tmp;

	tmp = *value;
	(*value)++;
	if ((*value) - 1 != tmp)
		return (ERROR);
	return (NO_ERROR);
}
