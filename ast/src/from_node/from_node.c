/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   from_node.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 10:55:52 by rparodi           #+#    #+#             */
/*   Updated: 2024/09/03 15:48:47 by maiboyer         ###   ########.fr       */
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

/*
	E_OP_NONE = 0,				// ${var}
	E_OP_DEFAULT,				// ${var-word}
	E_OP_ASSIGN_DEFAULT,		// ${var=word}
	E_OP_ERROR,					// ${var?word}
	E_OP_ALTERNATE,				// ${var+word}
	E_OP_DEFAULT_COLON,			// ${var:-word}
	E_OP_ASSIGN_DEFAULT_COLON, // ${var:=word}
	E_OP_ERROR_COLON,			// ${var:?word}
	E_OP_ALTERNATE_COLON,		// ${var:+word}
	E_OP_LENGTH,				// ${#var}
	E_OP_SMALLEST_PREFIX,		// ${var#pattern}
	E_OP_LARGEST_PREFIX,		// ${var##pattern}
	E_OP_SMALLEST_SUFFIX,		// ${var%pattern}
	E_OP_LARGEST_SUFFIX,		// ${var%%pattern}
*/

/*
if (symbol == anon_sym_LT_LT_DASH)
	return (AST_REDIR_HEREDOC_INDENT);
if (symbol == anon_sym_LT_AMP)
	return (AST_REDIR_DUP_INPUT);
if (symbol == anon_sym_GT_AMP)
	return (AST_REDIR_DUP_OUTPUT);
if (symbol == anon_sym_GT_PIPE)
	return (AST_REDIR_OUTPUT_CLOBBER);
if (symbol == anon_sym_LT_GT)
	return (AST_REDIR_INPUT_OUTPUT);
*/
// RAPH

t_error	ast_from_node(t_parse_node node, t_const_str input, t_ast_node *out);

/* FUNCTION THAT ARE DONE */

/* FUNCTION THAT ARE NOT DONE */

//	RAPH
// PLUS RAPH

/* if (ts_node_field_id_for_child(self, i) == field_fd) */
/* { */
/* 	if (ast_from_node(ts_node_child(self, i), input, &tmp)) */
/* 		return (ast_free(ret), ERROR); */
/* 	ret->data.file_redirection.input = tmp; */
/* } */

t_error	build_sym_subshell(\
	t_parse_node self, t_const_str input, t_ast_node *out)
{
	t_ast_node				ret;
	t_ast_node				tmp;
	t_usize					i;
	t_ast_terminator_kind	term;

	(void)(out);
	(void)(input);
	(void)(self);
	if (out == NULL)
		return (ERROR);
	if (ts_node_symbol(self) != sym_subshell)
		return (ERROR);
	ret = ast_alloc(AST_SUBSHELL);
	i = 0;
	while (i < ts_node_child_count(self))
	{
		if (ts_node_field_id_for_child(self, i) == field_term && \
			ret->data.subshell.body.len != 0)
		{
			term = _select_term(ts_node_child(self, i));
			ast_set_term(&ret->data.subshell.body.buffer[\
				ret->data.subshell.body.len - 1], term);
		}
		else
		{
			if (!ts_node_is_named(ts_node_child(self, i)) && (i++, true))
				continue ;
			if (ast_from_node(ts_node_child(self, i), input, &tmp))
				return (ast_free(ret), ERROR);
			vec_ast_push(&ret->data.subshell.body, tmp);
		}
		i++;
	}
	return (*out = ret, NO_ERROR);
}

// t_error	buildw

t_error	build_sym_list(t_parse_node self, t_const_str input, t_ast_node *out)
{
	t_ast_node	ret;
	t_ast_node	*output;
	t_usize		i;
	t_symbol	temp;

	if (out == NULL)
		return (ERROR);
	ret = ast_alloc(AST_LIST);
	i = 0;
	output = &ret->data.list.left;
	while (i < ts_node_child_count(self))
	{
		if (ts_node_field_id_for_child(self, i) == field_cmd)
		{
			if (ast_from_node(ts_node_child(self, i), input, output))
				return (ast_free(ret), ERROR);
		}
		else if (ts_node_field_id_for_child(self, i) == field_op)
		{
			temp = ts_node_grammar_symbol(ts_node_child(self, i));
			if (temp == anon_sym_PIPE_PIPE)
				ret->data.list.op = AST_LIST_OR;
			if (temp == anon_sym_AMP_AMP)
				ret->data.list.op = AST_LIST_AND;
			output = &ret->data.list.right;
		}
		i++;
	}
	return (*out = ret, NO_ERROR);
}


t_error	ast_from_node(\
	t_parse_node node, t_const_str input, t_ast_node *out)
{
	if (out == NULL)
		return (ERROR);
	if (ts_node_symbol(node) == sym_arithmetic_binary_expression)
		return (build_sym_arithmetic_binary_expression(node, input, out));
	if (ts_node_symbol(node) == sym_arithmetic_expansion)
		return (build_sym_arithmetic_expansion(node, input, out));
	if (ts_node_symbol(node) == sym_arithmetic_literal)
		return (build_sym_arithmetic_literal(node, input, out));
	if (ts_node_symbol(node) == sym_arithmetic_parenthesized_expression)
		return (build_sym_arithmetic_parenthesized_expression(\
			node, input, out));
	if (ts_node_symbol(node) == sym_arithmetic_postfix_expression)
		return (build_sym_arithmetic_postfix_expression(node, input, out));
	if (ts_node_symbol(node) == sym_arithmetic_ternary_expression)
		return (build_sym_arithmetic_ternary_expression(node, input, out));
	if (ts_node_symbol(node) == sym_arithmetic_unary_expression)
		return (build_sym_arithmetic_unary_expression(node, input, out));
	if (ts_node_symbol(node) == sym_case_item)
		return (build_sym_case_item(node, input, out));
	if (ts_node_symbol(node) == sym_case_statement)
		return (build_sym_case_statement(node, input, out));
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
	if (ts_node_symbol(node) == sym_do_group)
		return (build_sym_do_group(node, input, out));
	if (ts_node_symbol(node) == sym_elif_clause)
		return (build_sym_elif_clause(node, input, out));
	if (ts_node_symbol(node) == sym_else_clause)
		return (build_sym_else_clause(node, input, out));
	if (ts_node_symbol(node) == sym_expansion)
		return (build_sym_expansion(node, input, out));
	if (ts_node_symbol(node) == sym_extglob_pattern)
		return (build_sym_extglob_pattern(node, input, out));
	if (ts_node_symbol(node) == sym_file_descriptor)
		return (build_sym_file_descriptor(node, input, out));
	if (ts_node_symbol(node) == sym_file_redirect)
		return (build_sym_file_redirect(node, input, out));
	if (ts_node_symbol(node) == sym_for_statement)
		return (build_sym_for_statement(node, input, out));
	if (ts_node_symbol(node) == sym_function_definition)
		return (build_sym_function_definition(node, input, out));
	if (ts_node_symbol(node) == sym_heredoc_redirect)
		return (build_sym_heredoc_redirect(node, input, out));
	if (ts_node_symbol(node) == sym_if_statement)
		return (build_sym_if_statement(node, input, out));
	if (ts_node_symbol(node) == sym_list)
		return (build_sym_list(node, input, out));
	if (ts_node_symbol(node) == sym_negated_command)
		return (build_sym_negated_command(node, input, out));
	if (ts_node_symbol(node) == sym_number)
		return (build_sym_number(node, input, out));
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
	if (ts_node_symbol(node) == sym_while_statement)
		return (build_sym_while_statement(node, input, out));
	if (ts_node_symbol(node) == sym_word)
		return (build_sym_word(node, input, out));
	printf("UNKNOWN KIND = [%d]%s\n", ts_node_symbol(node), ts_node_type(node));
	return (ERROR);
}
