/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_program.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 14:42:43 by rparodi           #+#    #+#             */
/*   Updated: 2024/05/09 15:51:11 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HANDLE_PROGRAM_H
# define HANDLE_PROGRAM_H
	
# include "me/types.h"
# include "app/state.h"
# include "app/node.h"

t_error handle_program(t_node *self, t_utils *shcat, t_i32 *out_exit_code);

#endif
