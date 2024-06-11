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
#include "me/types.h"

/*
	ast_statement:
		case_statement
		command
		compound_statement
		for_statement
		function_definition
		if_statement
		list
		negated_command
		pipeline
		redirected_statement
		subshell
		variable_assignment
		variable_assignments
		while_statement

	ast_statement_not_pipeline == ast_statement-pipeline
	ast_statement_not_subshell == ast_statement-subshell
*/

enum e_ast_node_kind
{
	AST_EMPTY,
	AST_COMMAND,
};

enum e_ast_word_kind
{
	AST_WORD_NO_QUOTE,
	AST_WORD_SINGLE_STRING,
	AST_WORD_DOUBLE_QUOTED,
	AST_WORD_BACK_QUOTED,
};

struct s_ast_empty
{
};

struct s_ast_raw_string
{
	t_str	str;
	t_usize len;
};

/// @brief A string that is double quoted
/// @param parts this can be multiple things:
///		- a "raw" string (no processing needed)
///		- a expension (variable, command substitution, artihmetic expansion, etc.)
/// @param parts_len the number of parts in the string
struct s_ast_built_string
{
	t_ast_node *parts;
	t_usize		parts_len;
};

struct s_ast_pipeline
{
	t_ast_node *statements;
	t_usize		statements_len;
};

struct s_ast_word
{
	t_ast_word_kind kind;
	t_ast_node	   *inner;
};

struct s_ast_command
{
	t_ast_node *prefixes;
	t_ast_node *cmd_word;
	t_ast_node *suffixes;
	t_usize		prefixes_len;
	t_usize		cmd_word_len;
	t_usize		suffixes_len;
};

union u_ast_node_data {
	t_ast_empty	  empty;
	t_ast_command command;
};

struct s_ast_node
{
	t_ast_node_kind kind;
	t_ast_node_data data;
};

#endif /* AST_H */
