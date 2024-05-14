/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   semicolon.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 16:00:33 by rparodi           #+#    #+#             */
/*   Updated: 2024/05/12 19:13:26 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "app/env.h"
#include "app/state.h"
#include "me/types.h"
#include "gmr/symbols.h"
#include "app/node.h"
#include "me/vec/vec_str.h"
// #include "app/node/handle_program.h"
#include "app/node/handle_command.h"
#include "minishell.h"
#include "me/string/str_clone.h"

t_error semicolon_exec(t_node *first, t_node *second, t_i32 *ret_value)
{
	if (!first && !second)
		return (ERROR);
	if (!first)
		ft_command_exec(second, ret_value);
	else if (!second)
		ft_command_exec(first, ret_value);
	else
	{
		ft_command_exec(first, ret_value);
		ft_command_exec(second, ret_value);
	}
	return (NO_ERROR);
}
