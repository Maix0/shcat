/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _function_declaration.h                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 11:30:24 by rparodi           #+#    #+#             */
/*   Updated: 2024/07/30 16:59:21 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FUNCTION_DECLARATION_H
# define _FUNCTION_DECLARATION_H

# include "ast/ast.h"
# include "me/types.h"
# include <stdio.h>

void	ast_print_node(t_ast_node self);

void	ast_print_node_command(t_ast_node self);
void	ast_print_node_command_substitution(t_ast_node self);
void	ast_print_node_compound_statement(t_ast_node self);
void	ast_print_node_expansion(t_ast_node self);
void	ast_print_node_extglob(t_ast_node self);
void	ast_print_node_file_redirection(t_ast_node self);
void	ast_print_node_list(t_ast_node self);
void	ast_print_node_pipeline(t_ast_node self);
void	ast_print_node_program(t_ast_node self);
void	ast_print_node_raw_string(t_ast_node self);
void	ast_print_node_regex(t_ast_node self);
void	ast_print_node_subshell(t_ast_node self);
void	ast_print_node_variable_assignment(t_ast_node self);
void	ast_print_node_word(t_ast_node self);
void	ast_print_node_function_definition(t_ast_node self);
void	ast_print_node_arithmetic_expansion(t_ast_node self);
void	ast_print_node_function_definition(t_ast_node self);
void	ast_print_node_variable_assignment(t_ast_node self);
void	ast_print_node_pipeline(t_ast_node self);
void	ast_print_node_list(t_ast_node self);

/*^^^   DONE   ^^^*/
/*vvv NOT DONE vvv*/

void	ast_print_node_if(t_ast_node self);
void	ast_print_node_case(t_ast_node self);
void	ast_print_node_case_item(t_ast_node self);
void	ast_print_node_elif(t_ast_node self);
void	ast_print_node_else(t_ast_node self);
void	ast_print_node_for(t_ast_node self);
void	ast_print_node_until(t_ast_node self);
void	ast_print_node_while(t_ast_node self);
void	ast_print_node_heredoc_redirection(t_ast_node self);

/// HELPER_FUNCS

void	_print_term(t_ast_terminator_kind term);

#endif
