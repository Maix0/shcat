/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   from_node.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 12:41:56 by maiboyer          #+#    #+#             */
/*   Updated: 2024/06/20 14:38:08 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ast/ast.h"
#include "gmr/field_identifiers.h"
#include "gmr/symbols.h"
#include "me/mem/mem.h"
#include "me/types.h"
#include "me/vec/vec_ast.h"
#include "parser/api.h"

/*
sym_arithmetic_binary_expression
sym_arithmetic_expansion
sym_arithmetic_literal
sym_arithmetic_parenthesized_expression
sym_arithmetic_postfix_expression
sym_arithmetic_ternary_expression
sym_arithmetic_unary_expression
sym_case_item
sym_case_statement
sym_command
sym_command_name
sym_command_substitution
sym_comment
sym_compound_statement
sym_concatenation
sym_do_group
sym_elif_clause
sym_else_clause
sym_expansion
sym_expansion_expression
sym_expansion_regex
sym_extglob_pattern
sym_file_descriptor
sym_file_redirect
sym_for_statement
sym_function_definition
sym_heredoc_body
sym_heredoc_content
sym_heredoc_end
sym_heredoc_redirect
sym_heredoc_start
sym_if_statement
sym_list
sym_negated_command
sym_number
sym_pipeline
sym_program
sym_raw_string
sym_redirected_statement
sym_regex
sym_simple_expansion
sym_simple_heredoc_body
sym_string
sym_string_content
sym_subshell
sym_variable_assignment
sym_variable_assignments
sym_variable_name
sym_while_statement
sym_word
*/

void free_ast(t_ast_node elem)
{
}

t_ast_node alloc_ast(t_ast_node_kind kind)
{
	t_ast_node ret;

	ret = mem_alloc(sizeof(*ret));
	ret->kind = kind;

	if (kind == AST_ARITHMETIC_EXPANSION)
	{
		ret->data.arithmetic_expansion.expr = NULL;
	}
	else if (kind == AST_CASE)
	{
		ret->data.case_.word = NULL;
		ret->data.case_.cases = vec_ast_new(16, free_ast);
		ret->data.case_.term = AST_TERM_NONE;
	}
	else if (kind == AST_CASE_ITEM)
	{
		ret->data.case_item.term = AST_TERM_NONE;
		ret->data.case_item.pattern = vec_ast_new(16, free_ast);
		ret->data.case_item.body = vec_ast_new(16, free_ast);
	}
	else if (kind == AST_COMMAND)
	{
		ret->data.command.term = AST_TERM_NONE;
		ret->data.command.cmd_word = vec_ast_new(16, free_ast);
		ret->data.command.prefixes = vec_ast_new(16, free_ast);
		ret->data.command.suffixes = vec_ast_new(16, free_ast);
	}
	else if (kind == AST_COMMAND_SUBSTITUTION)
	{
		ret->data.command_substitution.cmd = NULL;
	}
	else if (kind == AST_COMPOUND_STATEMENT)
	{
	}
	else if (kind == AST_ELIF)
	{
	}
	else if (kind == AST_ELSE)
	{
	}
	else if (kind == AST_EMPTY)
	{
	}
	else if (kind == AST_EXPANSION)
	{
	}
	else if (kind == AST_FILE_REDIRECTION)
	{
	}
	else if (kind == AST_FOR)
	{
	}
	else if (kind == AST_FUNCTION_DEFINITION)
	{
	}
	else if (kind == AST_HEREDOC_REDIRECTION)
	{
	}
	else if (kind == AST_IF)
	{
	}
	else if (kind == AST_LIST)
	{
	}
	else if (kind == AST_PIPELINE)
	{
	}
	else if (kind == AST_PROGRAM)
	{
	}
	else if (kind == AST_RAW_STRING)
	{
	}
	else if (kind == AST_STRING)
	{
	}
	else if (kind == AST_SUBSHELL)
	{
	}
	else if (kind == AST_UNTIL)
	{
	}
	else if (kind == AST_VARIABLE_ASSIGNMENT)
	{
	}
	else if (kind == AST_WHILE)
	{
	}
	else if (kind == AST_WORD)
	{
	}

	return (ret);
}

t_error from_node(t_parse_node node, t_ast_node *out);

t_error build_sym_arithmetic_binary_expression(t_parse_node self, t_ast_node *out);
t_error build_sym_arithmetic_expansion(t_parse_node self, t_ast_node *out);
t_error build_sym_arithmetic_literal(t_parse_node self, t_ast_node *out);
t_error build_sym_arithmetic_parenthesized_expression(t_parse_node self, t_ast_node *out);
t_error build_sym_arithmetic_postfix_expression(t_parse_node self, t_ast_node *out);
t_error build_sym_arithmetic_ternary_expression(t_parse_node self, t_ast_node *out);
t_error build_sym_arithmetic_unary_expression(t_parse_node self, t_ast_node *out);
t_error build_sym_case_item(t_parse_node self, t_ast_node *out);
t_error build_sym_case_statement(t_parse_node self, t_ast_node *out);
t_error build_sym_command(t_parse_node self, t_ast_node *out);
t_error build_sym_command_name(t_parse_node self, t_ast_node *out);
t_error build_sym_command_substitution(t_parse_node self, t_ast_node *out);
t_error build_sym_comment(t_parse_node self, t_ast_node *out);
t_error build_sym_compound_statement(t_parse_node self, t_ast_node *out);
t_error build_sym_concatenation(t_parse_node self, t_ast_node *out);
t_error build_sym_do_group(t_parse_node self, t_ast_node *out);
t_error build_sym_elif_clause(t_parse_node self, t_ast_node *out);
t_error build_sym_else_clause(t_parse_node self, t_ast_node *out);
t_error build_sym_expansion(t_parse_node self, t_ast_node *out);
t_error build_sym_expansion_expression(t_parse_node self, t_ast_node *out);
t_error build_sym_expansion_regex(t_parse_node self, t_ast_node *out);
t_error build_sym_extglob_pattern(t_parse_node self, t_ast_node *out);
t_error build_sym_file_descriptor(t_parse_node self, t_ast_node *out);
t_error build_sym_file_redirect(t_parse_node self, t_ast_node *out);
t_error build_sym_for_statement(t_parse_node self, t_ast_node *out);
t_error build_sym_function_definition(t_parse_node self, t_ast_node *out);
t_error build_sym_heredoc_body(t_parse_node self, t_ast_node *out);
t_error build_sym_heredoc_content(t_parse_node self, t_ast_node *out);
t_error build_sym_heredoc_end(t_parse_node self, t_ast_node *out);
t_error build_sym_heredoc_redirect(t_parse_node self, t_ast_node *out);
t_error build_sym_heredoc_start(t_parse_node self, t_ast_node *out);
t_error build_sym_if_statement(t_parse_node self, t_ast_node *out);
t_error build_sym_list(t_parse_node self, t_ast_node *out);
t_error build_sym_negated_command(t_parse_node self, t_ast_node *out);
t_error build_sym_number(t_parse_node self, t_ast_node *out);
t_error build_sym_pipeline(t_parse_node self, t_ast_node *out);
t_error build_sym_program(t_parse_node self, t_ast_node *out);
t_error build_sym_raw_string(t_parse_node self, t_ast_node *out);
t_error build_sym_redirected_statement(t_parse_node self, t_ast_node *out);
t_error build_sym_regex(t_parse_node self, t_ast_node *out);
t_error build_sym_simple_expansion(t_parse_node self, t_ast_node *out);
t_error build_sym_simple_heredoc_body(t_parse_node self, t_ast_node *out);
t_error build_sym_string(t_parse_node self, t_ast_node *out);
t_error build_sym_string_content(t_parse_node self, t_ast_node *out);
t_error build_sym_subshell(t_parse_node self, t_ast_node *out);
t_error build_sym_variable_assignment(t_parse_node self, t_ast_node *out);
t_error build_sym_variable_assignments(t_parse_node self, t_ast_node *out);
t_error build_sym_variable_name(t_parse_node self, t_ast_node *out);
t_error build_sym_while_statement(t_parse_node self, t_ast_node *out);
t_error build_sym_word(t_parse_node self, t_ast_node *out);

t_error build_sym_program(t_parse_node self, t_ast_node *out)
{
	t_ast_node ret;
	t_usize	   i;
	t_ast_node temp;

	if (out == NULL)
		return (ERROR);
	if (ts_node_grammar_symbol(self) != sym_program)
		return (ERROR);
	ret = alloc_node(AST_PROGRAM);
	i = 0;
	ret->kind = AST_COMPOUND_STATEMENT;
	while (i < ts_node_named_child_count(self))
	{
		if (i < ts_node_named_child_count(self))
		{
			if (from_node(ts_node_named_child(self, i)))
				return (free_node(ret), ERROR);
			i++;
		}
		if (i < ts_node_named_child_count(self) && ts_node_field_id_for_child(self, i) == field_terminator)
		{

			i++;
		}
	}

	return (*out = ret, NO_ERROR);
	return (mem_free(ret), ERROR);
}

t_error from_node(t_parse_node node, t_ast_node *out)
{
	if (out == NULL)
		return (ERROR);
	return (build_sym_word(node, out));

	return (NO_ERROR);
}
