/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   from_node.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 10:55:52 by rparodi           #+#    #+#             */
/*   Updated: 2024/09/16 13:49:34 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ast/_from_node.h"
#include "ast/ast.h"
#include "gmr/field_identifiers.h"
#include "gmr/symbols.h"
#include "me/str/str.h"
#include "me/types.h"
#include "me/vec/vec_ast.h"
#include "parser/api.h"
#include <stdio.h>

t_error	ast_from_node(t_parse_node node, t_const_str input, t_ast_node *out);

//	if (ts_node_symbol(node) == sym_while_statement)
//		return (build_sym_while_statement(node, input, out));
t_error	_from_node_inner3(\
	t_parse_node node, t_const_str input, t_ast_node *out)
{
	if (ts_node_symbol(node) == sym_pipeline)
		return (build_sym_pipeline(node, input, out));
	if (ts_node_symbol(node) == sym_program)
		return (build_sym_program(node, input, out));
	if (ts_node_symbol(node) == sym_raw_string)
		return (build_sym_raw_string(node, input, out));
	if (ts_node_symbol(node) == sym_redirected_statement)
		return (build_sym_redirected_statement(node, input, out));
	if (ts_node_symbol(node) == sym_regex)
		return (build_sym_regex(node, input, out));
	if (ts_node_symbol(node) == sym_simple_expansion)
		return (build_sym_simple_expansion(node, input, out));
	if (ts_node_symbol(node) == sym_string)
		return (build_sym_string(node, input, out));
	if (ts_node_symbol(node) == sym_string_content)
		return (build_sym_string_content(node, input, out));
	if (ts_node_symbol(node) == sym_subshell)
		return (build_sym_subshell(node, input, out));
	if (ts_node_symbol(node) == sym_variable_assignment)
		return (build_sym_variable_assignment(node, input, out));
	if (ts_node_symbol(node) == sym_word)
		return (build_sym_word(node, input, out));
	return (ERROR);
}

//	if (ts_node_symbol(node) == sym_for_statement)
//		return (build_sym_for_statement(node, input, out));
//	if (ts_node_symbol(node) == sym_function_definition)
//		return (build_sym_function_definition(node, input, out));
//	if (ts_node_symbol(node) == sym_if_statement)
//		return (build_sym_if_statement(node, input, out));
t_error	_from_node_inner2(\
	t_parse_node node, t_const_str input, t_ast_node *out)
{
	if (ts_node_symbol(node) == sym_extglob_pattern)
		return (build_sym_extglob_pattern(node, input, out));
	if (ts_node_symbol(node) == sym_file_descriptor)
		return (build_sym_file_descriptor(node, input, out));
	if (ts_node_symbol(node) == sym_file_redirect)
		return (build_sym_file_redirect(node, input, out));
	if (ts_node_symbol(node) == sym_heredoc_redirect)
		return (build_sym_heredoc_redirect(node, input, out));
	if (ts_node_symbol(node) == sym_list)
		return (build_sym_list(node, input, out));
	if (ts_node_symbol(node) == sym_negated_command)
		return (build_sym_negated_command(node, input, out));
	if (ts_node_symbol(node) == sym_number)
		return (build_sym_number(node, input, out));
	return (_from_node_inner3(node, input, out));
}

//	if (ts_node_symbol(node) == sym_do_group)
//		return (build_sym_do_group(node, input, out));
//	if (ts_node_symbol(node) == sym_elif_clause)
//		return (build_sym_elif_clause(node, input, out));
//	if (ts_node_symbol(node) == sym_else_clause)
//		return (build_sym_else_clause(node, input, out));
t_error	_from_node_inner(\
	t_parse_node node, t_const_str input, t_ast_node *out)
{
	if (ts_node_symbol(node) == sym_command)
		return (build_sym_command(node, input, out));
	if (ts_node_symbol(node) == sym_command_name)
		return (build_sym_command_name(node, input, out));
	if (ts_node_symbol(node) == sym_command_substitution)
		return (build_sym_command_substitution(node, input, out));
	if (ts_node_symbol(node) == sym_comment)
		return (build_sym_comment(node, input, out));
	if (ts_node_symbol(node) == sym_compound_statement)
		return (build_sym_compound_statement(node, input, out));
	if (ts_node_symbol(node) == sym_concatenation)
		return (build_sym_concatenation(node, input, out));
	if (ts_node_symbol(node) == sym_expansion)
		return (build_sym_expansion(node, input, out));
	return (_from_node_inner2(node, input, out));
}

//	else if (ts_node_symbol(node) == sym_case_item)
//		return (build_sym_case_item(node, input, out));
//	else if (ts_node_symbol(node) == sym_case_statement)
//		return (build_sym_case_statement(node, input, out));
t_error	ast_from_node(\
	t_parse_node node, t_const_str input, t_ast_node *out)
{
	if (out == NULL)
		return (ERROR);
	if (ts_node_symbol(node) == sym_arithmetic_binary_expression)
		return (build_sym_arithmetic_binary_expression(node, input, out));
	else if (ts_node_symbol(node) == sym_arithmetic_expansion)
		return (build_sym_arithmetic_expansion(node, input, out));
	else if (ts_node_symbol(node) == sym_arithmetic_literal)
		return (build_sym_arithmetic_literal(node, input, out));
	else if (ts_node_symbol(node) == sym_arithmetic_parenthesized_expression)
		return (build_sym_arithmetic_parenthesized_expression(\
			node, input, out));
	else if (ts_node_symbol(node) == sym_arithmetic_postfix_expression)
		return (build_sym_arithmetic_postfix_expression(node, input, out));
	else if (ts_node_symbol(node) == sym_arithmetic_ternary_expression)
		return (build_sym_arithmetic_ternary_expression(node, input, out));
	else if (ts_node_symbol(node) == sym_arithmetic_unary_expression)
		return (build_sym_arithmetic_unary_expression(node, input, out));
	return (_from_node_inner(node, input, out));
}
