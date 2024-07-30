/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   not_done_print.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 11:00:25 by rparodi           #+#    #+#             */
/*   Updated: 2024/07/30 17:01:04 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ast/_function_declaration.h"

#define NOT_DONE {printf("This function is not done '%s'", __func__); (void)(self);}

void	ast_print_node_if(t_ast_node self) NOT_DONE;
void	ast_print_node_case(t_ast_node self) NOT_DONE;
void	ast_print_node_case_item(t_ast_node self) NOT_DONE;
void	ast_print_node_elif(t_ast_node self) NOT_DONE;
void	ast_print_node_else(t_ast_node self) NOT_DONE;
void	ast_print_node_for(t_ast_node self) NOT_DONE;
void	ast_print_node_until(t_ast_node self) NOT_DONE;
void	ast_print_node_while(t_ast_node self) NOT_DONE;
void	ast_print_node_heredoc_redirection(t_ast_node self) NOT_DONE;
