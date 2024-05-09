/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_command.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 14:42:43 by rparodi           #+#    #+#             */
/*   Updated: 2024/05/09 14:59:28 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HANDLE_COMMAND_H
# define HANDLE_COMMAND_H
	
# include "me/types.h"
# include "app/state.h"
# include "app/node.h"

t_error handle_command(t_node *self, t_utils *shcat, t_i32 *out_exit_code);

#endif
