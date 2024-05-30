/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_classic_op.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 15:33:53 by rparodi           #+#    #+#             */
/*   Updated: 2024/05/30 16:12:59 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operation.h"

t_error	ft_add(t_i32 first, t_i32 second, t_i64 *result)
{
	(*result) = first + second;
	if ((*result) - first != second)
		return (ERROR);
	else
		return (NO_ERROR);
}

t_error	ft_subtract(t_i32 first, t_i32 second, t_i64 *result)
{
	(*result) = first - second;
	if ((*result) + first != second)
		return (ERROR);
	else
		return (NO_ERROR);
}

t_error	ft_multiply(t_i32 first, t_i32 second, t_i64 *result)
{
	if (first == 0 || second == 0)
		return (0);
	(*result) = first * second;
	if ((*result) / first != second)
		return (ERROR);
	else
		return (NO_ERROR);
}

t_error	ft_divide(t_i32 first, t_i32 second, t_i64 *result)
{
	if (second == 0)
		return (ERROR);
	(*result) = first / second;
	if ((*result) * first != second)
		return (ERROR);
	else
		return (NO_ERROR);
}

t_error	ft_modulo(t_i32 first, t_i32 second, t_i64 *result)
{
	if (second == 0)
		return (ERROR);
	*result = first % second;
	return (NO_ERROR);
}
