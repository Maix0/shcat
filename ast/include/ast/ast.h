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
#include "me/vec/vec_ast.h"

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

	ast_statement_not_pipeline == ast_statement - pipeline
	ast_statement_not_subshell == ast_statement - subshell
*/

struct s_ast_empty
{
};

enum e_ast_list_kind
{
	AST_LIST_AND,
	AST_LIST_OR,
};

enum e_ast_node_kind
{
	AST_EMPTY,
};

enum e_ast_word_kind
{
	AST_WORD_NO_QUOTE,
	AST_WORD_SINGLE_STRING,
	AST_WORD_DOUBLE_QUOTED,
	AST_WORD_BACK_QUOTED,
};

struct s_ast_raw_string
{
	t_str	str;
	t_usize len;
};

struct s_ast_list
{
	t_ast_node	   *left;
	t_ast_list_kind op;
	t_ast_node	   *right;
};

/// @brief A string that is may be quoted or not
/// @param parts this can be multiple things:
///		- a "raw" string (no processing needed)
///		- a expension (variable, command substitution, artihmetic expansion, etc.)
/// @param parts_len the number of parts in the string
/// @note if the string isn't quoted, it needs to be split into parts using $IFS
struct s_ast_string
{
	t_vec_ast parts;
};

struct s_ast_pipeline
{
	t_vec_ast statements;
};

struct s_ast_word
{
	t_ast_word_kind kind;
	t_ast_node	   *inner;
};

struct s_ast_command
{
	t_vec_ast prefixes;
	t_vec_ast cmd_word;
	t_vec_ast suffixes;
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
