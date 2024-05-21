/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   separator.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 16:53:15 by rparodi           #+#    #+#             */
/*   Updated: 2024/05/12 19:57:14 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SEPARATOR_H
# define SEPARATOR_H

# include "minishell.h"

t_error	ft_command_exec(t_node *node, t_i32 *ret_value);
t_error	pipe_pipe(t_node *first, t_node *second, t_i32 *ret_value);
t_error	and_and_exec(t_node *first, t_node *second, t_i32 *ret_value);
t_error semicolon_exec(t_node *first, t_node *second, t_i32 *ret_value);

#endif
