/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ast.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 14:23:40 by maiboyer          #+#    #+#             */
/*   Updated: 2024/06/11 14:24:38 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AST_H
#define AST_H

#include "ast/ast_forward_def.h"
#include "ast/ast_raw_structs.h"

enum e_ast_node_kind
{
	AST_ARITHMETIC_EXPANSION,
	AST_CASE_ITEM,
	AST_CASE,
	AST_COMMAND_SUBSTITUTION,
	AST_COMMAND,
	AST_COMPOUND_STATEMENT,
	AST_ELIF,
	AST_ELSE,
	AST_EMPTY,
	AST_EXPANSION,
	AST_FILE_REDIRECTION,
	AST_FOR,
	AST_FUNCTION_DEFINITION,
	AST_HEREDOC_REDIRECTION,
	AST_IF,
	AST_LIST,
	AST_PIPELINE,
	AST_RAW_STRING,
	AST_STRING,
	AST_SUBSHELL,
	AST_UNTIL,
	AST_VARIABLE_ASSIGNMENT,
	AST_WHILE,
	AST_WORD,

	__AST_LAST_NODETYPE__,
};

union u_ast_node_data {
	t_ast_arithmetic_expansion arithmetic_expansion;
	t_ast_case_item			   case_item;
	t_ast_case				   case_;
	t_ast_command_substitution command_substitution;
	t_ast_command			   command;
	t_ast_compound_statement   compound_statement;
	t_ast_elif				   elif;
	t_ast_else				   else_;
	t_ast_empty				   empty;
	t_ast_expansion			   expansion;
	t_ast_file_redirection	   file_redirection;
	t_ast_for				   for_;
	t_ast_function_definition  function_definition;
	t_ast_heredoc_redirection  heredoc_redirection;
	t_ast_if				   if_;
	t_ast_list				   list;
	t_ast_pipeline			   pipeline;
	t_ast_raw_string		   raw_string;
	t_ast_string			   string;
	t_ast_subshell			   subshell;
	t_ast_until				   until;
	t_ast_variable_assignment  variable_assignment;
	t_ast_while				   while_;
	t_ast_word				   word;
};

struct s_ast_node
{
	t_ast_node_kind kind;
	t_ast_node_data data;
};

#endif /* AST_H */
