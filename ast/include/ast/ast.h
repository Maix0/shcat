/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ast.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 14:23:40 by maiboyer          #+#    #+#             */
/*   Updated: 2024/08/12 16:10:42 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AST_H
# define AST_H

# include "ast/_forward_def.h" // IWYU pragma: keep
# include "ast/_raw_structs.h" // IWYU pragma: keep

enum e_ast_node_kind
{
	AST_ARITHMETIC_BINARY,
	AST_ARITHMETIC_EXPANSION,
	AST_ARITHMETIC_LITTERAL,
	AST_ARITHMETIC_POSTFIX,
	AST_ARITHMETIC_TERNARY,
	AST_ARITHMETIC_UNARY,
	AST_CASE,
	AST_CASE_ITEM,
	AST_COMMAND,
	AST_COMMAND_SUBSTITUTION,
	AST_COMPOUND_STATEMENT,
	AST_ELIF,
	AST_ELSE,
	AST_EMPTY,
	AST_EXPANSION,
	AST_EXTGLOB,
	AST_FILE_REDIRECTION,
	AST_FOR,
	AST_FUNCTION_DEFINITION,
	AST_HEREDOC_REDIRECTION,
	AST_IF,
	AST_LIST,
	AST_PIPELINE,
	AST_PROGRAM,
	AST_RAW_STRING,
	AST_REGEX,
	AST_SUBSHELL,
	AST_UNTIL,
	AST_VARIABLE_ASSIGNMENT,
	AST_WHILE,
	AST_WORD,
};

union u_ast_node_data
{
	t_ast_arithmetic_binary		arithmetic_binary;
	t_ast_arithmetic_literal	arithmetic_literal;
	t_ast_arithmetic_expansion	arithmetic_expansion;
	t_ast_arithmetic_postfix	arithmetic_postfix;
	t_ast_arithmetic_ternary	arithmetic_ternary;
	t_ast_arithmetic_unary		arithmetic_unary;
	t_ast_case					case_;
	t_ast_case_item				case_item;
	t_ast_command				command;
	t_ast_command_substitution	command_substitution;
	t_ast_compound_statement	compound_statement;
	t_ast_elif					elif;
	t_ast_else					else_;
	t_ast_empty					empty;
	t_ast_expansion				expansion;
	t_ast_extglob				extglob;
	t_ast_file_redirection		file_redirection;
	t_ast_for					for_;
	t_ast_function_definition	function_definition;
	t_ast_heredoc_redirection	heredoc_redirection;
	t_ast_if					if_;
	t_ast_list					list;
	t_ast_pipeline				pipeline;
	t_ast_program				program;
	t_ast_raw_string			raw_string;
	t_ast_regex					regex;
	t_ast_subshell				subshell;
	t_ast_until					until;
	t_ast_variable_assignment	variable_assignment;
	t_ast_while					while_;
	t_ast_word					word;
};

struct s_ast_node
{
	t_ast_node_kind	kind;
	t_ast_node_data	data;
};

t_ast_node	ast_alloc(t_ast_node_kind kind);
void		ast_free(t_ast_node self);
void		ast_print(t_ast_node self);

#endif /* AST_H */
