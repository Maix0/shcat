/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ast_raw_structs.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 17:46:58 by maiboyer          #+#    #+#             */
/*   Updated: 2024/06/14 17:46:58 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AST_RAW_STRUCTS_H
#define AST_RAW_STRUCTS_H

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

enum e_ast_word_kind
{
	AST_WORD_NO_QUOTE,
	AST_WORD_SINGLE_STRING,
	AST_WORD_DOUBLE_QUOTED,
};

struct s_ast_raw_string
{
	t_str	str;
	t_usize len;
};

struct s_ast_list
{
	t_ast_node		left;
	t_ast_list_kind op;
	t_ast_node		right;
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
	bool	  bang;
	t_vec_ast statements;
};

struct s_ast_word
{
	t_ast_word_kind kind;
	t_vec_ast		inner;
};

struct s_ast_command
{
	t_vec_ast prefixes;
	t_vec_ast cmd_word;
	t_vec_ast suffixes;
};

struct s_ast_if
{
	t_vec_ast  condition;
	t_vec_ast  then;
	t_vec_ast  elif_;
	t_ast_node else_;
};

struct s_ast_elif
{
	t_vec_ast condition;
	t_vec_ast then;
};

struct s_ast_else
{
	t_vec_ast then;
};

struct s_ast_while
{
	t_vec_ast condition;
	t_vec_ast do_;
};

struct s_ast_for
{
	t_str	  var_name;
	t_vec_ast words;
	t_vec_ast do_;
};

struct s_ast_case
{
	t_ast_node word;
	t_vec_ast  cases;
};

struct s_ast_case_item
{
	t_vec_ast pattern;
	t_vec_ast body;
};

struct s_ast_until
{
	t_vec_ast condition;
	t_vec_ast do_;
};

struct s_ast_function_definition
{
	t_str	  name;
	t_vec_ast body;
};

struct s_ast_subshell
{
	t_vec_ast body;
};

struct s_ast_compound_statement
{
	t_vec_ast body;
};

struct s_ast_variable_assignment
{
	t_str	   name;
	t_ast_node value;
};

struct s_ast_file_redirection
{
	t_ast_node output;
	t_ast_node input;
};

struct s_ast_heredoc_redirection
{
	t_ast_node output;
	t_ast_node delimiter;
};

enum e_ast_expansion_operator
{

	E_OP_NONE = 0,			   // ${var}
	E_OP_DEFAULT,			   // ${var-word}
	E_OP_ASSIGN_DEFAULT,	   // ${var=word}
	E_OP_ERROR,				   // ${var?word}
	E_OP_ALTERNATE,			   // ${var+word}
	E_OP_DEFAULT_COLON,		   // ${var:-word}
	E_OP_ASSIGN_DEFAULT_COLON, // ${var:=word}
	E_OP_ERROR_COLON,		   // ${var:?word}
	E_OP_ALTERNATE_COLON,	   // ${var:+word}
	E_OP_LENGTH,			   // ${#var}
	E_OP_SMALLEST_PREFIX,	   // ${var#pattern}
	E_OP_LARGEST_PREFIX,	   // ${var##pattern}
	E_OP_SMALLEST_SUFFIX,	   // ${var%pattern}
	E_OP_LARGEST_SUFFIX,	   // ${var%%pattern}
};

struct s_ast_expansion
{
	t_str					 var_name;
	t_ast_expansion_operator kind;
	t_vec_ast				 args;
};

struct s_ast_arithmetic_expansion
{
	t_ast_node expr;
};

struct s_ast_command_substitution
{
	t_ast_node cmd;
};

#endif /* AST_RAW_STRUCTS_H */
