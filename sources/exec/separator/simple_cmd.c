/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_cmd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 19:13:42 by rparodi           #+#    #+#             */
/*   Updated: 2024/05/12 19:14:19 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "separator.h"

t_error	ft_command_exec(t_node *node, t_i32 *ret_value)
{
	printf("execve : %s\n", node->single_str);
	
	return (NO_ERROR);
}
