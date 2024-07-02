/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ast.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 14:23:40 by maiboyer          #+#    #+#             */
/*   Updated: 2024/07/01 21:36:48 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AST_H
#define AST_H

#include "ast/ast_forward_def.h" // IWYU pragma: keep
#include "ast/ast_raw_structs.h" // IWYU pragma: keep

enum e_ast_node_kind
{
	S_AST_CATEGORY_MASK = 0xFFFF0000,
	S_AST_NODETYPE_MASK = 0x0000FFFF,

	S_AST_NONE = 0,
	S_AST_COMPOUND_COMMAND = 1 << 16,
	S_AST_COMMAND = 1 << 17,
	S_AST_REDIRECT = 1 << 18,
	S_AST_EXPANSION = 1 << 19,

	AST_ARITHMETIC_EXPANSION = S_AST_EXPANSION | 0x0001,
	AST_COMMAND_SUBSTITUTION = S_AST_EXPANSION | 0x0002,
	AST_EXPANSION = S_AST_EXPANSION | 0x0003,

	AST_COMMAND = S_AST_COMMAND | 0x0004,

	AST_CASE_ITEM = S_AST_NONE | 0x0005,
	AST_ELIF = S_AST_NONE | 0x0006,
	AST_ELSE = S_AST_NONE | 0x0007,
	AST_EMPTY = S_AST_NONE | 0x0008,
	AST_RAW_STRING = S_AST_NONE | 0x000A,
	AST_STRING = S_AST_NONE | 0x000B,
	AST_WORD = S_AST_NONE | 0x000C,
	AST_VARIABLE_ASSIGNMENT = S_AST_NONE | 0x000E,
	AST_EXTGLOB = S_AST_NONE | 0x001A,
	AST_REGEX = S_AST_NONE | 0x001B,
	AST_NUMBER = S_AST_NONE | 0x001C,

	AST_FILE_REDIRECTION = S_AST_REDIRECT | 0x000F,
	AST_HEREDOC_REDIRECTION = S_AST_REDIRECT | 0x0010,

	AST_FOR = S_AST_COMPOUND_COMMAND | 0x0011,
	AST_CASE = S_AST_COMPOUND_COMMAND | 0x0012,
	AST_COMPOUND_STATEMENT = S_AST_COMPOUND_COMMAND | 0x0013,
	AST_IF = S_AST_COMPOUND_COMMAND | 0x0014,
	AST_FUNCTION_DEFINITION = S_AST_COMPOUND_COMMAND | 0x000D,
	AST_LIST = S_AST_COMPOUND_COMMAND | 0x0009,
	AST_PIPELINE = S_AST_COMPOUND_COMMAND | 0x00015,
	AST_PROGRAM = S_AST_COMPOUND_COMMAND | 0x0016,
	AST_SUBSHELL = S_AST_COMPOUND_COMMAND | 0x00017,
	AST_UNTIL = S_AST_COMPOUND_COMMAND | 0x0018,
	AST_WHILE = S_AST_COMPOUND_COMMAND | 0x0019,
};

union u_ast_node_data {
	t_ast_arithmetic_expansion arithmetic_expansion;
	t_ast_case				   case_;
	t_ast_case_item			   case_item;
	t_ast_command			   command;
	t_ast_command_substitution command_substitution;
	t_ast_compound_statement   compound_statement;
	t_ast_elif				   elif;
	t_ast_else				   else_;
	t_ast_empty				   empty;
	t_ast_expansion			   expansion;
	t_ast_extglob			   extglob;
	t_ast_file_redirection	   file_redirection;
	t_ast_for				   for_;
	t_ast_function_definition  function_definition;
	t_ast_heredoc_redirection  heredoc_redirection;
	t_ast_if				   if_;
	t_ast_list				   list;
	t_ast_number			   number;
	t_ast_pipeline			   pipeline;
	t_ast_program			   program;
	t_ast_raw_string		   raw_string;
	t_ast_regex				   regex;
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

static inline bool ast_category(t_ast_node node)
{
	return (node->kind & S_AST_CATEGORY_MASK);
}

static inline bool ast_nodetype(t_ast_node node)
{
	return (node->kind & S_AST_NODETYPE_MASK);
}

#endif /* AST_H */
