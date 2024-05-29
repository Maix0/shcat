/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nblen.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 12:30:54 by rparodi           #+#    #+#             */
/*   Updated: 2024/05/28 13:34:20 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_math.h"

t_error	ft_counter(const t_str str, t_usize *i)
{
	if (str[(*i)] >= '0' && str[(*i)] <= '9')
		(*i)++;
	else
		return (ERROR);
	return (NO_ERROR);
}

t_error	ft_nblen(const t_str str, t_usize *int_len, t_usize *float_len)
{
	t_usize	i;

	(*int_len) = 0;
	(*float_len) = 0;
	i = 0;
	if (str == NULL)
		return (ERROR);
	while (str[i] != '.' && str[i] != '\0')
		ft_counter(str, &i);
	(*int_len) = i;
	if (str[i] == '.')
	{
		i++;
		while (str[i] != '\0')
			ft_counter(str, &i);
		(*float_len) = i - (*int_len) - 1;
	}
	return (NO_ERROR);
}
