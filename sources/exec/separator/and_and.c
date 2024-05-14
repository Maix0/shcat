/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   and_and.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 19:16:12 by rparodi           #+#    #+#             */
/*   Updated: 2024/05/12 19:19:08 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "separator.h"

t_error	and_and_exec(t_node *first, t_node *second, t_i32 *ret_value)
{
	if (ft_command_exec(first, ret_value) == ERROR)
		return (ERROR);
	ft_command_exec(second, ret_value);
	return (NO_ERROR);
}
