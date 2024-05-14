/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipe_pipe.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 19:21:01 by rparodi           #+#    #+#             */
/*   Updated: 2024/05/12 19:44:46 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "separator.h"

t_error	pipe_pipe(t_node *first, t_node *second, t_i32 *ret_value)
{
	if (first || ft_command_exec(first, ret_value))
		return (NO_ERROR);
	else if (second || ft_command_exec(second, ret_value))
		return (NO_ERROR);
	else
	return (ERROR);
}
