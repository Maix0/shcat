/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   from_node.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 10:55:52 by rparodi           #+#    #+#             */
/*   Updated: 2024/07/30 17:26:52 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ast/ast.h"
#include "gmr/field_identifiers.h"
#include "gmr/symbols.h"
#include "me/mem/mem.h"
#include "me/str/str.h"
#include "me/types.h"
#include "me/vec/vec_ast.h"
#include "parser/api.h"
#include <stdio.h>
#include <inttypes.h>

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

void	ast_set_term(t_ast_node *node, t_ast_terminator_kind term)
{
	t_ast_terminator_kind	void_storage;
	t_ast_terminator_kind	*ptr;
	t_ast_node				val;

	if (node == NULL)
		return ((void)printf("node == NULL\n"));
	val = *node;
	ptr = &void_storage;
	if (val->kind == AST_CASE)
		ptr = &val->data.case_.term;
	if (val->kind == AST_CASE_ITEM)
		ptr = &val->data.case_item.term;
	if (val->kind == AST_COMMAND)
		ptr = &val->data.command.term;
	if (val->kind == AST_COMPOUND_STATEMENT)
		ptr = &val->data.compound_statement.term;
	if (val->kind == AST_IF)
		ptr = &val->data.if_.term;
	if (val->kind == AST_SUBSHELL)
		ptr = &val->data.subshell.term;
	*ptr = term;
	if (ptr == &void_storage)
		printf("node wasn't a term capable node\n");
	(void)(void_storage);
}

t_vec_ast	*_vec_command(t_ast_command *val, t_usize i)
{
	if (i == 0)
		return (&val->prefixes);
	if (i == 1)
		return (&val->cmd_word);
	if (i == 2)
		return (&val->suffixes_redirections);
	me_abort("invalid index for i in _get_vec_command");
	return (NULL);
}

void	_add_negation(t_ast_node *node)
{
	if (node == NULL || *node == NULL)
		return ;
	if ((*node)->kind == AST_PIPELINE)
		(*node)->data.pipeline.bang = true;
	if ((*node)->kind == AST_COMMAND)
		(*node)->data.command.bang = true;
	if ((*node)->kind == AST_SUBSHELL)
		(*node)->data.subshell.bang = true;
	if ((*node)->kind == AST_COMPOUND_STATEMENT)
		(*node)->data.compound_statement.bang = true;
	if ((*node)->kind == AST_VARIABLE_ASSIGNMENT)
		(*node)->data.variable_assignment.bang = true;
}

void	_append_redirection(t_ast_node node, t_ast_node redirection)
{
	t_vec_ast	*vec;

	vec = NULL;
	if (!(redirection->kind == AST_FILE_REDIRECTION || \
				redirection->kind == AST_HEREDOC_REDIRECTION))
		return (ast_free(redirection));
	if (node->kind == AST_CASE)
		vec = &node->data.case_.suffixes_redirections;
	if (node->kind == AST_COMMAND)
		vec = &node->data.command.suffixes_redirections;
	if (node->kind == AST_COMPOUND_STATEMENT)
		vec = &node->data.compound_statement.suffixes_redirections;
	if (node->kind == AST_FOR)
		vec = &node->data.for_.suffixes_redirections;
	if (node->kind == AST_IF)
		vec = &node->data.if_.suffixes_redirections;
	if (node->kind == AST_LIST)
		vec = &node->data.list.suffixes_redirections;
	if (node->kind == AST_PIPELINE)
		vec = &node->data.pipeline.suffixes_redirections;
	if (node->kind == AST_SUBSHELL)
		vec = &node->data.subshell.suffixes_redirections;
	if (node->kind == AST_UNTIL)
		vec = &node->data.until.suffixes_redirections;
	if (node->kind == AST_WHILE)
		vec = &node->data.while_.suffixes_redirections;
	if (vec != NULL)
		vec_ast_push(vec, redirection);
	else
		ast_free(redirection);
}

t_ast_terminator_kind	_select_term(t_parse_node node)
{
	t_symbol	symbol;

	symbol = ts_node_grammar_symbol(ts_node_child(node, 0));
	if (symbol == anon_sym_SEMI)
		return (AST_TERM_SEMI);
	if (symbol == anon_sym_SEMI_SEMI)
		return (AST_TERM_DOUBLE_SEMI);
	printf("unknown term symbol %d\n", symbol);
	return (AST_TERM_NONE);
}

t_str	_extract_str(t_parse_node self, t_const_str input)
{
	t_usize	start;
	t_usize	end;
	t_str	result;

	start = ts_node_start_byte(self);
	end = ts_node_end_byte(self);
	result = str_substring(input, start, end - start);
	return (result);
}
/*
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
*/

t_ast_expansion_operator	_extract_exp_op(t_parse_node self)
{
	t_ast_expansion_operator	kind;
	t_symbol					symbol;

	kind = E_OP_NONE;
	symbol = ts_node_grammar_symbol(self);
	if (symbol == anon_sym_DASH)
		kind = E_OP_DEFAULT;
	if (symbol == anon_sym_EQ)
		kind = E_OP_ASSIGN_DEFAULT;
	if (symbol == anon_sym_QMARK)
		kind = E_OP_ERROR;
	if (symbol == anon_sym_PLUS)
		kind = E_OP_ALTERNATE;
	if (symbol == anon_sym_COLON_DASH)
		kind = E_OP_DEFAULT_COLON;
	if (symbol == anon_sym_COLON_EQ)
		kind = E_OP_ASSIGN_DEFAULT_COLON;
	if (symbol == anon_sym_COLON_QMARK)
		kind = E_OP_ERROR_COLON;
	if (symbol == anon_sym_COLON_PLUS)
		kind = E_OP_ALTERNATE_COLON;
	if (symbol == anon_sym_POUND)
		kind = E_OP_SMALLEST_PREFIX;
	if (symbol == sym__immediate_double_hash)
		kind = E_OP_LARGEST_PREFIX;
	if (symbol == anon_sym_PERCENT)
		kind = E_OP_SMALLEST_SUFFIX;
	if (symbol == anon_sym_PERCENT_PERCENT)
		kind = E_OP_LARGEST_SUFFIX;
	return (kind);
}

t_ast_redirection_kind	_get_redirection_op(t_parse_node self)
{
	t_symbol	symbol;

	symbol = ts_node_grammar_symbol(self);
	if (symbol == anon_sym_LT)
		return (AST_REDIR_INPUT);
	if (symbol == anon_sym_GT)
		return (AST_REDIR_OUTPUT);
	if (symbol == anon_sym_GT_GT)
		return (AST_REDIR_APPEND);
	if (symbol == anon_sym_LT_LT)
		return (AST_REDIR_HEREDOC);
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
	return (me_abort("invalid redirection symbol"), 0);
}

// RAPH
t_ast_arithmetic_operator	_parse_operator(t_parse_node self)
{
	t_symbol	symbol;

	symbol = ts_node_grammar_symbol(self);
	if (symbol == anon_sym_PLUS)
		return (ARITH_PLUS);
	if (symbol == anon_sym_DASH)
		return (ARITH_MINUS);
	if (symbol == anon_sym_STAR)
		return (ARITH_MULT);
	if (symbol == anon_sym_SLASH)
		return (ARITH_DIVIDE);
	if (symbol == anon_sym_PERCENT)
		return (ARITH_MOD);
	if (symbol == anon_sym_PLUS_PLUS)
		return (ARITH_INCREMENT);
	if (symbol == anon_sym_DASH_DASH)
		return (ARITH_DECREMENT);
	if (symbol == anon_sym_BANG)
		return (ARITH_NOT);
	return (me_abort("invalid arithmetic operator"), 0);
}

t_error	ast_from_node(t_parse_node node, t_const_str input, t_ast_node *out);

/* FUNCTION THAT ARE DONE */

t_error	build_sym_case_item(t_parse_node self, t_const_str input, t_ast_node *out);
t_error	build_sym_case_statement(t_parse_node self, t_const_str input, t_ast_node *out);
t_error	build_sym_command(t_parse_node self, t_const_str input, t_ast_node *out);
t_error	build_sym_command_name(t_parse_node self, t_const_str input, t_ast_node *out);
t_error	build_sym_comment(t_parse_node self, t_const_str input, t_ast_node *out);
t_error	build_sym_compound_statement(t_parse_node self, t_const_str input, t_ast_node *out);
t_error	build_sym_elif_clause(t_parse_node self, t_const_str input, t_ast_node *out);
t_error	build_sym_else_clause(t_parse_node self, t_const_str input, t_ast_node *out);
t_error	build_sym_extglob_pattern(t_parse_node self, t_const_str input, t_ast_node *out);
t_error	build_sym_file_redirect(t_parse_node self, t_const_str input, t_ast_node *out);
t_error	build_sym_for_statement(t_parse_node self, t_const_str input, t_ast_node *out);
t_error	build_sym_function_definition(t_parse_node self, t_const_str input, t_ast_node *out);
t_error	build_sym_if_statement(t_parse_node self, t_const_str input, t_ast_node *out);
t_error	build_sym_list(t_parse_node self, t_const_str input, t_ast_node *out);
t_error	build_sym_negated_command(t_parse_node self, t_const_str input, t_ast_node *out);
t_error	build_sym_number(t_parse_node self, t_const_str input, t_ast_node *out);
t_error	build_sym_pipeline(t_parse_node self, t_const_str input, t_ast_node *out);
t_error	build_sym_program(t_parse_node self, t_const_str input, t_ast_node *out);
t_error	build_sym_raw_string(t_parse_node self, t_const_str input, t_ast_node *out);
t_error	build_sym_redirected_statement(t_parse_node self, t_const_str input, t_ast_node *out);
t_error	build_sym_regex(t_parse_node self, t_const_str input, t_ast_node *out);
t_error	build_sym_simple_expansion(t_parse_node self, t_const_str input, t_ast_node *out);
t_error	build_sym_string_content(t_parse_node self, t_const_str input, t_ast_node *out);
t_error	build_sym_subshell(t_parse_node self, t_const_str input, t_ast_node *out);
t_error	build_sym_variable_assignment(t_parse_node self, t_const_str input, t_ast_node *out);
t_error	build_sym_while_statement(t_parse_node self, t_const_str input, t_ast_node *out);
t_error	build_sym_word(t_parse_node self, t_const_str input, t_ast_node *out);
t_error	build_sym_expansion(t_parse_node self, t_const_str input, t_ast_node *out);
t_error	build_sym_command_substitution(t_parse_node self, t_const_str input, t_ast_node *out);

/* FUNCTION DONE BUT BY RAPH */
t_error	build_sym_arithmetic_binary_expression(t_parse_node self, t_const_str input, t_ast_node *out);
t_error	build_sym_arithmetic_literal(t_parse_node self, t_const_str input, t_ast_node *out);
t_error	build_sym_arithmetic_parenthesized_expression(t_parse_node self, t_const_str input, t_ast_node *out);
t_error	build_sym_arithmetic_postfix_expression(t_parse_node self, t_const_str input, t_ast_node *out);
t_error	build_sym_arithmetic_ternary_expression(t_parse_node self, t_const_str input, t_ast_node *out);
t_error	build_sym_arithmetic_unary_expression(t_parse_node self, t_const_str input, t_ast_node *out);
t_error	build_sym_arithmetic_expansion(t_parse_node self, t_const_str input, t_ast_node *out);

/* FUNCTION THAT ARE NOT DONE */

// TODO: This is my homework, it'll need to be handled in a special way I feel...
t_error	build_sym_heredoc_redirect(t_parse_node self, t_const_str input, t_ast_node *out);
t_error	build_sym_simple_heredoc_body(t_parse_node self, t_const_str input, t_ast_node *out);
t_error	build_sym_heredoc_body(t_parse_node self, t_const_str input, t_ast_node *out);
t_error	build_sym_heredoc_content(t_parse_node self, t_const_str input, t_ast_node *out);
t_error	build_sym_heredoc_end(t_parse_node self, t_const_str input, t_ast_node *out);
t_error	build_sym_heredoc_start(t_parse_node self, t_const_str input, t_ast_node *out);

t_error	build_sym_arithmetic_binary_expression(t_parse_node self, t_const_str input, t_ast_node *out)
{
	t_usize		i;
	t_ast_node	ret;

	if (out == NULL)
		return (ERROR);
	if (ts_node_symbol(self) != sym_arithmetic_binary_expression)
		return (ERROR);
	i = 0;
	ret = ast_alloc(AST_ARITHMETIC_BINARY);
	while (i < ts_node_child_count(self))
	{
		if (ts_node_field_id_for_child(self, i) == field_lhs)
			if (ast_from_node(ts_node_child(self, i), input, &ret->data.arithmetic_binary.lhs))
				return (ERROR);
		if (ts_node_field_id_for_child(self, i) == field_op)
			ret->data.arithmetic_binary.op = _parse_operator(ts_node_child(self, i));
		if (ts_node_field_id_for_child(self, i) == field_rhs)
			if (ast_from_node(ts_node_child(self, i), input, &ret->data.arithmetic_binary.rhs))
				return (ERROR);
		i++;
	}
	return (*out = ret, NO_ERROR);
}

//	RAPH
t_error	build_sym_arithmetic_literal(t_parse_node self, t_const_str input, t_ast_node *out)
{
	t_usize		i;
	t_ast_node	ret;

	if (out == NULL)
		return (ERROR);
	if (ts_node_symbol(self) != sym_arithmetic_literal)
		return (ERROR);
	i = 0;
	ret = ast_alloc(AST_ARITHMETIC_LITTERAL);
	if (ast_from_node(ts_node_child(self, i), input, &ret->data.arithmetic_literal.value))
		return (ERROR);
	return (*out = ret, NO_ERROR);
}

t_error	build_sym_arithmetic_parenthesized_expression(t_parse_node self, t_const_str input, t_ast_node *out)
{
	if (out == NULL)
		return (ERROR);
	if (ts_node_symbol(self) != sym_arithmetic_parenthesized_expression)
		return (ERROR);
	return (ast_from_node(ts_node_child(self, 1), input, out));
}

t_error	build_sym_arithmetic_postfix_expression(t_parse_node self, t_const_str input, t_ast_node *out)
{
	t_ast_node	ret;

	if (out == NULL)
		return (ERROR);
	if (ts_node_symbol(self) != sym_arithmetic_postfix_expression)
		return (ERROR);
	if (ts_node_child_count(self) != 2)
		return (ERROR);
	ret = ast_alloc(AST_ARITHMETIC_POSTFIX);
	if (ast_from_node(ts_node_child(self, 0), input, &ret->data.arithmetic_postfix.value))
			return (ast_free(ret), ERROR);
	if (ts_node_field_id_for_child(self, 1) == field_op)
		ret->data.arithmetic_postfix.op = _parse_operator(ts_node_child(self, 1));
	else
		return (ast_free(ret), ERROR);
	return (*out = ret, NO_ERROR);
}

t_error	build_sym_arithmetic_ternary_expression(t_parse_node self, t_const_str input, t_ast_node *out)
{
	t_ast_node	ret;
	t_usize		i;

	if (out == NULL)
		return (ERROR);
	if (ts_node_child_count(self) != 5)
		return (ERROR);
	if (ts_node_symbol(self) != sym_arithmetic_ternary_expression)
		return (ERROR);
	i = 0;
	ret = ast_alloc(AST_ARITHMETIC_TERNARY);
	while (i < ts_node_child_count(self))
	{
		if (ts_node_field_id_for_child(self, i) == field_cond)
			if (ast_from_node(ts_node_child(self, i), input, &ret->data.arithmetic_ternary.condition))
				return (ast_free(ret), ERROR);
		if (ts_node_field_id_for_child(self, i) == field_then)
			if (ast_from_node(ts_node_child(self, i), input, &ret->data.arithmetic_ternary.then))
				return (ast_free(ret), ERROR);
		if (ts_node_field_id_for_child(self, i) == field_else)
			if (ast_from_node(ts_node_child(self, i), input, &ret->data.arithmetic_ternary.else_))
				return (ast_free(ret), ERROR);
		i++;
	}
	return (*out = ret, NO_ERROR);
}

t_error	build_sym_arithmetic_unary_expression(t_parse_node self, t_const_str input, t_ast_node *out)
{
	t_ast_node	ret;

	if (out == NULL)
		return (ERROR);
	if (ts_node_symbol(self) != sym_arithmetic_unary_expression)
		return (ERROR);
	if (ts_node_child_count(self) != 2)
		return (ERROR);
	ret = ast_alloc(AST_ARITHMETIC_UNARY);
	if (ts_node_field_id_for_child(self, 0) == field_op)
		ret->data.arithmetic_unary.operator = _parse_operator(ts_node_child(self, 0));
	if (ast_from_node(ts_node_child(self, 1), input, &ret->data.arithmetic_unary.value))
		return (ast_free(ret), ERROR);
	return (*out = ret, NO_ERROR);
}

t_error	build_sym_arithmetic_expansion(t_parse_node self, t_const_str input, t_ast_node *out)
{
	t_usize		i;
	t_ast_node	ret;

	if (out == NULL)
		return (ERROR);
	if (ts_node_symbol(self) != sym_arithmetic_expansion)
		return (ERROR);
	ret = ast_alloc(AST_ARITHMETIC_EXPANSION);
	i = 0;
	while (i < ts_node_child_count(self))
	{
		if (ts_node_field_id_for_child(self, i) == sym_arithmetic_binary_expression)
			return (build_sym_arithmetic_binary_expression(self, input, out));
		if (ts_node_field_id_for_child(self, i) == sym_arithmetic_literal)
			return (build_sym_arithmetic_literal(self, input, out));
		if (ts_node_field_id_for_child(self, i) == sym_arithmetic_parenthesized_expression)
			return (build_sym_arithmetic_parenthesized_expression(self, input, out));
		if (ts_node_field_id_for_child(self, i) == sym_arithmetic_postfix_expression)
			return (build_sym_arithmetic_postfix_expression(self, input, out));
		if (ts_node_field_id_for_child(self, i) == sym_arithmetic_ternary_expression)
			return (build_sym_arithmetic_ternary_expression(self, input, out));
		if (ts_node_field_id_for_child(self, i) == sym_arithmetic_unary_expression)
			return (build_sym_arithmetic_unary_expression(self, input, out));
		i++;
	}
	return (*out = ret, NO_ERROR);
}

//PLUS RAPH
t_error	build_sym_command_substitution(t_parse_node self, t_const_str input, t_ast_node *out)
{
	t_ast_node	ret;
	t_ast_node	tmp;
	t_usize		i;

	if (out == NULL)
		return (ERROR);
	if (ts_node_symbol(self) != sym_command_substitution)
		return (ERROR);
	ret = ast_alloc(AST_COMMAND_SUBSTITUTION);
	i = 0;
	while (i < ts_node_child_count(self))
	{
		if (!ts_node_is_named(ts_node_child(self, i)) && (i++, true))
			continue ;
		if (ts_node_symbol(ts_node_child(self, i)) == field_term)
		{
			if (ret->data.command_substitution.body.len != 0)
				ast_set_term(&ret->data.command_substitution.body.buffer[ret->data.command_substitution.body.len - 1],
							_select_term(ts_node_child(self, i)));
		}
		else
		{
			if (ast_from_node(ts_node_child(self, i), input, &tmp))
				return (ast_free(ret), ERROR);
			vec_ast_push(&ret->data.command_substitution.body, tmp);
		}
		i++;
	}
	return (*out = ret, NO_ERROR);
}

t_error	build_sym_expansion(t_parse_node self, t_const_str input, t_ast_node *out)
{
	t_ast_node	ret;
	t_ast_node	tmp;
	t_usize		i;

	(void)(out);
	(void)(input);
	(void)(self);
	if (out == NULL)
		return (ERROR);
	if (ts_node_symbol(self) != sym_expansion)
		return (ERROR);
	ret = ast_alloc(AST_EXPANSION);
	ret->data.expansion.kind = E_OP_NONE;
	i = 0;
	while (i < ts_node_child_count(self))
	{
		if (!ts_node_is_named(ts_node_child(self, i)) && (i++, true))
			continue ;
		if (ts_node_field_id_for_child(self, i) == field_len)
			ret->data.expansion.len_operator = true;
		if (ts_node_field_id_for_child(self, i) == field_name)
			ret->data.expansion.var_name = _extract_str(ts_node_child(self, i), input);
		if (ts_node_field_id_for_child(self, i) == field_op)
			ret->data.expansion.kind = _extract_exp_op(ts_node_child(self, i));
		if (ts_node_field_id_for_child(self, i) == field_args)
		{
			if (ast_from_node(ts_node_child(self, i), input, &tmp))
				return (ast_free(ret), ERROR);
			vec_ast_push(&ret->data.expansion.args, tmp);
		}
		i++;
	}
	return (*out = ret, NO_ERROR);
}

t_error	build_sym_simple_expansion(t_parse_node self, t_const_str input, t_ast_node *out)
{
	t_ast_node	ret;
	t_usize		i;

	(void)(out);
	(void)(input);
	(void)(self);
	if (out == NULL)
		return (ERROR);
	if (ts_node_symbol(self) != sym_simple_expansion)
		return (ERROR);
	ret = ast_alloc(AST_EXPANSION);
	ret->data.expansion.kind = E_OP_NONE;
	i = 0;
	while (i < ts_node_child_count(self))
	{
		if (!ts_node_is_named(ts_node_child(self, i)) && (i++, true))
			continue ;
		ret->data.expansion.var_name = _extract_str(ts_node_child(self, i), input);
		i++;
	}
	return (*out = ret, NO_ERROR);
}

t_error	build_sym_file_descriptor(t_parse_node self, t_const_str input, t_ast_node *out)
{
	t_ast_node	ret;

	(void)(out);
	(void)(input);
	(void)(self);
	if (out == NULL)
		return (ERROR);
	if (ts_node_symbol(self) != sym_file_descriptor)
		return (ERROR);
	ret = ast_alloc(AST_RAW_STRING);
	ret->data.raw_string.str = _extract_str(self, input);
	ret->data.raw_string.len = str_len(ret->data.raw_string.str);
	return (*out = ret, NO_ERROR);
}

t_error	build_sym_number(t_parse_node self, t_const_str input, t_ast_node *out)
{
	t_ast_node	ret;

	(void)(out);
	(void)(input);
	(void)(self);
	if (out == NULL)
		return (ERROR);
	if (ts_node_symbol(self) != sym_number)
		return (ERROR);
	ret = ast_alloc(AST_RAW_STRING);
	ret->data.raw_string.str = _extract_str(self, input);
	ret->data.raw_string.len = str_len(ret->data.raw_string.str);
	return (*out = ret, NO_ERROR);
}

t_error	build_sym_file_redirect(t_parse_node self, t_const_str input, t_ast_node *out)
{
	t_ast_node	ret;
	t_ast_node	tmp;
	t_usize		i;

	(void)(out);
	(void)(input);
	(void)(self);
	if (out == NULL)
		return (ERROR);
	if (ts_node_symbol(self) != sym_file_redirect)
		return (ERROR);
	ret = ast_alloc(AST_FILE_REDIRECTION);
	i = 0;
	while (i < ts_node_child_count(self))
	{
		if (!ts_node_is_named(ts_node_child(self, i)) && (i++, true))
			continue ;
		if (ts_node_field_id_for_child(self, i) == field_fd)
		{
			if (ast_from_node(ts_node_child(self, i), input, &tmp))
				return (ast_free(ret), ERROR);
			ret->data.file_redirection.input = tmp;
		}
		if (ts_node_field_id_for_child(self, i) == field_op)
		{
			ret->data.file_redirection.op = _get_redirection_op(ts_node_child(self, i));
		}
		if (ts_node_field_id_for_child(self, i) == field_dest)
		{
			if (ast_from_node(ts_node_child(self, i), input, &tmp))
				return (ast_free(ret), ERROR);
			ret->data.file_redirection.output = tmp;
		}
		i++;
	}
	return (*out = ret, NO_ERROR);
}

t_error	build_sym_regex(t_parse_node self, t_const_str input, t_ast_node *out)
{
	t_ast_node	ret;

	(void)(out);
	(void)(input);
	(void)(self);
	if (out == NULL)
		return (ERROR);
	if (ts_node_symbol(self) != sym_regex)
		return (ERROR);
	ret = ast_alloc(AST_REGEX);
	ret->data.regex.pattern = _extract_str(self, input);
	return (*out = ret, NO_ERROR);
}

t_error	build_sym_extglob_pattern(t_parse_node self, t_const_str input, t_ast_node *out)
{
	t_ast_node	ret;

	(void)(out);
	(void)(input);
	(void)(self);
	if (out == NULL)
		return (ERROR);
	if (ts_node_symbol(self) != sym_extglob_pattern)
		return (ERROR);
	ret = ast_alloc(AST_EXTGLOB);
	ret->data.extglob.pattern = _extract_str(self, input);
	return (*out = ret, NO_ERROR);
}

t_error	build_sym_function_definition(t_parse_node self, t_const_str input, t_ast_node *out)
{
	t_ast_node	ret;
	t_ast_node	tmp;
	t_usize		i;

	(void)(out);
	(void)(input);
	(void)(self);
	if (out == NULL)
		return (ERROR);
	if (ts_node_symbol(self) != sym_function_definition)
		return (ERROR);
	ret = ast_alloc(AST_FUNCTION_DEFINITION);
	i = 0;
	while (i < ts_node_child_count(self))
	{
		if (!ts_node_is_named(ts_node_child(self, i)) && (i++, true))
			continue ;
		if (ts_node_field_id_for_child(self, i) == field_name)
		{
			ret->data.function_definition.name = _extract_str(ts_node_child(self, i), input);
		}
		if (ts_node_field_id_for_child(self, i) == field_body)
		{
			if (ast_from_node(ts_node_child(self, i), input, &tmp))
				return (ast_free(ret), ERROR);
			vec_ast_push(&ret->data.function_definition.body, tmp);
		}
		i++;
	}
	return (*out = ret, NO_ERROR);
}

t_error	build_sym_case_statement(t_parse_node self, t_const_str input, t_ast_node *out)
{
	t_ast_node	ret;
	t_ast_node	tmp;
	t_usize		i;

	(void)(out);
	(void)(input);
	(void)(self);
	if (out == NULL)
		return (ERROR);
	if (ts_node_symbol(self) != sym_case_statement)
		return (ERROR);
	ret = ast_alloc(AST_CASE);
	i = 0;
	while (i < ts_node_child_count(self))
	{
		if (!ts_node_is_named(ts_node_child(self, i)) && (i++, true))
			continue ;
		if (ts_node_field_id_for_child(self, i) == field_value)
		{
			if (ast_from_node(ts_node_child(self, i), input, &ret->data.case_.word))
				return (ast_free(ret), ERROR);
		}
		if (ts_node_field_id_for_child(self, i) == field_cases)
		{
			if (ast_from_node(ts_node_child(self, i), input, &tmp))
				return (ast_free(ret), ERROR);
			vec_ast_push(&ret->data.case_.cases, tmp);
		}
		i++;
	}
	return (*out = ret, NO_ERROR);
}

t_error	build_sym__case_item_last(t_parse_node self, t_const_str input, t_ast_node *out)
{
	t_ast_node	ret;
	t_ast_node	tmp;
	t_usize		i;

	(void)(out);
	(void)(input);
	(void)(self);
	if (out == NULL)
		return (ERROR);
	if (ts_node_symbol(self) != sym__case_item_last)
		return (ERROR);
	ret = ast_alloc(AST_CASE_ITEM);
	i = 0;
	while (i < ts_node_child_count(self))
	{
		if (!ts_node_is_named(ts_node_child(self, i)) && (i++, true))
			continue ;
		if (ts_node_field_id_for_child(self, i) == field_value)
		{
			if (ast_from_node(ts_node_child(self, i), input, &tmp))
				return (ast_free(ret), ERROR);
			vec_ast_push(&ret->data.case_item.pattern, tmp);
		}
		if (ts_node_field_id_for_child(self, i) == field_body)
		{
			if (ast_from_node(ts_node_child(self, i), input, &tmp))
				return (ast_free(ret), ERROR);
			vec_ast_push(&ret->data.case_item.body, tmp);
		}
		i++;
	}
	return (*out = ret, NO_ERROR);
}

t_error	build_sym_case_item(t_parse_node self, t_const_str input, t_ast_node *out)
{
	t_ast_node	ret;
	t_ast_node	tmp;
	t_usize		i;

	(void)(out);
	(void)(input);
	(void)(self);
	if (out == NULL)
		return (ERROR);
	if (ts_node_symbol(self) != sym_case_item)
		return (ERROR);
	ret = ast_alloc(AST_CASE_ITEM);
	i = 0;
	while (i < ts_node_child_count(self))
	{
		if (!ts_node_is_named(ts_node_child(self, i)) && (i++, true))
			continue ;
		if (ts_node_field_id_for_child(self, i) == field_value)
		{
			if (ast_from_node(ts_node_child(self, i), input, &tmp))
				return (ast_free(ret), ERROR);
			vec_ast_push(&ret->data.case_item.pattern, tmp);
		}
		if (ts_node_field_id_for_child(self, i) == field_body)
		{
			if (ast_from_node(ts_node_child(self, i), input, &tmp))
				return (ast_free(ret), ERROR);
			vec_ast_push(&ret->data.case_item.body, tmp);
		}
		i++;
	}
	return (*out = ret, NO_ERROR);
}

t_error	build_sym_if_statement(t_parse_node self, t_const_str input, t_ast_node *out)
{
	t_ast_node		ret;
	t_ast_node		tmp;
	t_usize			i;
	t_parse_node	child;

	(void)(out);
	(void)(input);
	(void)(self);
	if (out == NULL)
		return (ERROR);
	if (ts_node_symbol(self) != sym_if_statement)
		return (ERROR);
	ret = ast_alloc(AST_IF);
	i = 0;
	while (i < ts_node_child_count(self))
	{
		child = ts_node_child(self, i);
		if (!ts_node_is_named(child) && (i++, true))
			continue ;
		if (ts_node_field_id_for_child(self, i) == field_cond)
		{
			if (ast_from_node(child, input, &tmp))
				return (ast_free(ret), ERROR);
			vec_ast_push(&ret->data.if_.condition, tmp);
		}
		if (ts_node_field_id_for_child(self, i) == field_body)
		{
			if (ast_from_node(child, input, &tmp))
				return (ast_free(ret), ERROR);
			vec_ast_push(&ret->data.if_.then, tmp);
		}
		if (ts_node_field_id_for_child(self, i) == field_elif)
		{
			if (ast_from_node(child, input, &tmp))
				return (ast_free(ret), ERROR);
			vec_ast_push(&ret->data.if_.elif_, tmp);
		}
		if (ts_node_field_id_for_child(self, i) == field_else)
		{
			if (ast_from_node(child, input, &tmp))
				return (ast_free(ret), ERROR);
			ret->data.if_.else_ = tmp;
		}
	}
	return (*out = ret, NO_ERROR);
}

t_error	build_sym_elif_clause(t_parse_node self, t_const_str input, t_ast_node *out)
{
	t_ast_node		ret;
	t_ast_node		tmp;
	t_usize			i;
	t_parse_node	child;

	(void)(out);
	(void)(input);
	(void)(self);
	if (out == NULL)
		return (ERROR);
	if (ts_node_symbol(self) != sym_elif_clause)
		return (ERROR);
	ret = ast_alloc(AST_ELIF);
	i = 0;
	while (i < ts_node_child_count(self))
	{
		child = ts_node_child(self, i);
		if (!ts_node_is_named(child) && (i++, true))
			continue ;
		if (ts_node_field_id_for_child(self, i) == field_cond)
		{
			if (ast_from_node(child, input, &tmp))
				return (ast_free(ret), ERROR);
			vec_ast_push(&ret->data.elif.condition, tmp);
		}
		if (ts_node_field_id_for_child(self, i) == field_body)
		{
			if (ast_from_node(child, input, &tmp))
				return (ast_free(ret), ERROR);
			vec_ast_push(&ret->data.elif.then, tmp);
		}
	}
	return (*out = ret, NO_ERROR);
}

t_error	build_sym_else_clause(t_parse_node self, t_const_str input, t_ast_node *out)
{
	t_ast_node		ret;
	t_ast_node		tmp;
	t_usize			i;
	t_parse_node	child;

	(void)(out);
	(void)(input);
	(void)(self);
	if (out == NULL)
		return (ERROR);
	if (ts_node_symbol(self) != sym_else_clause)
		return (ERROR);
	ret = ast_alloc(AST_ELSE);
	i = 0;
	while (i < ts_node_child_count(self))
	{
		child = ts_node_child(self, i);
		if (!ts_node_is_named(child) && (i++, true))
			continue ;
		if (ts_node_field_id_for_child(self, i) == field_body)
		{
			if (ast_from_node(child, input, &tmp))
				return (ast_free(ret), ERROR);
			vec_ast_push(&ret->data.else_.then, tmp);
		}
	}
	return (*out = ret, NO_ERROR);
}

t_error	build_sym_for_statement(t_parse_node self, t_const_str input, t_ast_node *out)
{
	t_ast_node	ret;
	t_ast_node	tmp;
	t_usize		i;

	(void)(out);
	(void)(input);
	(void)(self);
	if (out == NULL)
		return (ERROR);
	if (ts_node_symbol(self) != sym_for_statement)
		return (ERROR);
	ret = ast_alloc(AST_FOR);
	i = 0;
	while (i < ts_node_child_count(self))
	{
		if (!ts_node_is_named(ts_node_child(self, i)) && (i++, true))
			continue ;
		if (ts_node_field_id_for_child(self, i) == field_var)
		{
			ret->data.for_.var_name = _extract_str(ts_node_child(self, i), input);
		}
		if (ts_node_field_id_for_child(self, i) == field_value)
		{
			if (ast_from_node(ts_node_child(self, i), input, &tmp))
				return (ast_free(ret), ERROR);
			vec_ast_push(&ret->data.for_.words, tmp);
		}
		if (ts_node_field_id_for_child(self, i) == field_body)
		{
			if (ast_from_node(ts_node_child(self, i), input, &tmp))
				return (ast_free(ret), ERROR);
			vec_ast_push(&ret->data.for_.do_, tmp);
		}
		i++;
	}
	return (*out = ret, NO_ERROR);
}

t_error	build_sym_pipeline(t_parse_node self, t_const_str input, t_ast_node *out)
{
	t_ast_node	ret;
	t_ast_node	tmp;
	t_usize		i;

	(void)(out);
	(void)(input);
	(void)(self);
	if (out == NULL)
		return (ERROR);
	if (ts_node_symbol(self) != sym_pipeline)
		return (ERROR);
	ret = ast_alloc(AST_PIPELINE);
	i = 0;
	while (i < ts_node_child_count(self))
	{
		if (!ts_node_is_named(ts_node_child(self, i)) && (i++, true))
			continue ;
		if (ast_from_node(ts_node_child(self, i), input, &tmp))
			return (ast_free(ret), ERROR);
		vec_ast_push(&ret->data.pipeline.statements, tmp);
		i++;
	}
	return (*out = ret, NO_ERROR);
}

t_error	build_sym_do_group(t_parse_node self, t_const_str input, t_ast_node *out)
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
	if (ts_node_symbol(self) != sym_do_group)
		return (ERROR);
	ret = ast_alloc(AST_COMPOUND_STATEMENT);
	i = 0;
	while (i < ts_node_child_count(self))
	{
		if (ts_node_symbol(ts_node_child(self, i)) == anon_sym_do || ts_node_symbol(ts_node_child(self, i)) == anon_sym_done)
		{
			i++;
			continue ;
		}
		if (ts_node_field_id_for_child(self, i) == field_term && ret->data.compound_statement.body.len != 0)
		{
			term = _select_term(ts_node_child(self, i));
			ast_set_term(&ret->data.compound_statement.body.buffer[ret->data.compound_statement.body.len - 1], term);
		}
		else
		{
			if (ast_from_node(ts_node_child(self, i), input, &tmp))
				return (ast_free(ret), ERROR);
			vec_ast_push(&ret->data.compound_statement.body, tmp);
		}
		i++;
	}
	return (*out = ret, NO_ERROR);
}

t_error	build_sym_subshell(t_parse_node self, t_const_str input, t_ast_node *out)
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
		if (ts_node_field_id_for_child(self, i) == field_term && ret->data.subshell.body.len != 0)
		{
			term = _select_term(ts_node_child(self, i));
			ast_set_term(&ret->data.subshell.body.buffer[ret->data.subshell.body.len - 1], term);
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

t_error	build_sym_while_statement(t_parse_node self, t_const_str input, t_ast_node *out)
{
	t_ast_node				ret;
	t_ast_node				tmp;
	t_usize					i;
	t_parse_node			child;
	t_ast_terminator_kind	term;

	(void)(out);
	(void)(input);
	(void)(self);
	if (out == NULL)
		return (ERROR);
	if (ts_node_symbol(self) != sym_while_statement)
		return (ERROR);
	i = 0;
	if (ts_node_symbol(ts_node_child(self, 0)) == anon_sym_until)
		ret = ast_alloc(AST_UNTIL);
	else if (ts_node_symbol(ts_node_child(self, 0)) == anon_sym_while)
		ret = ast_alloc(AST_WHILE);
	else
		return (ERROR);
	while (i < ts_node_child_count(self))
	{
		child = ts_node_child(self, i);
		if (!ts_node_is_named(child) && (i++, true))
			continue ;
		if (ts_node_field_id_for_child(self, i) == field_term)
		{
			term = _select_term(ts_node_child(self, i));
			ast_set_term(&ret->data.while_.condition.buffer[ret->data.while_.condition.len - 1], term);
			i++;
			continue ;
		}
		if (ast_from_node(child, input, &tmp))
			return (ast_free(ret), ERROR);
		if (ts_node_field_id_for_child(self, i) == field_stmt)
			vec_ast_push(&ret->data.while_.condition, tmp);
		if (ts_node_field_id_for_child(self, i) == field_body)
			vec_ast_push(&ret->data.while_.do_, tmp);
		i++;
	}
	return (*out = ret, NO_ERROR);
}

// t_error	buildw

t_error	build_sym_redirected_statement(t_parse_node self, t_const_str input, t_ast_node *out)
{
	t_ast_node	ret_tmp;
	t_ast_node	ret;
	t_ast_node	tmp;
	t_usize		i;

	(void)(out);
	(void)(input);
	(void)(self);
	if (out == NULL)
		return (ERROR);
	if (ts_node_symbol(self) != sym_redirected_statement)
		return (ERROR);
	i = 0;
	ret = ast_alloc(AST_COMMAND);
	ret_tmp = ret;
	while (i < ts_node_child_count(self))
	{
		if (!ts_node_is_named(ts_node_child(self, i)) && (i++, true))
			continue ;
		if (!(ts_node_symbol(ts_node_child(self, i)) == sym_file_redirect || \
			ts_node_symbol(ts_node_child(self, i)) == sym_heredoc_redirect))
		{
			if (ast_from_node(ts_node_child(self, i++), input, &ret))
				return (ast_free(ret_tmp), ERROR);
			continue ;
		}
		if (ast_from_node(ts_node_child(self, i++), input, &tmp))
			return ((void) !((ret != ret_tmp) && (ast_free(ret_tmp), true)), ast_free(ret), ERROR);
		_append_redirection(ret, tmp);
	}
	return ((void) !((ret != ret_tmp) && (ast_free(ret_tmp), true)), *out = ret, NO_ERROR);
}

t_error	build_sym_negated_command(t_parse_node self, t_const_str input, t_ast_node *out)
{
	t_ast_node	ret;

	(void)(out);
	(void)(input);
	(void)(self);
	if (out == NULL)
		return (ERROR);
	if (ts_node_symbol(self) != sym_negated_command)
		return (ERROR);
	if (ts_node_child_count(self) != 1)
		return (ERROR);
	if (ast_from_node(ts_node_child(self, 1), input, &ret))
		return (ERROR);
	_add_negation(&ret);
	return (*out = ret, NO_ERROR);
}

t_error	build_sym_compound_statement(t_parse_node self, t_const_str input, t_ast_node *out)
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
	if (ts_node_symbol(self) != sym_compound_statement)
		return (ERROR);
	ret = ast_alloc(AST_COMPOUND_STATEMENT);
	i = 0;
	while (i < ts_node_child_count(self))
	{
		if (ts_node_field_id_for_child(self, i) == field_term && ret->data.compound_statement.body.len != 0)
		{
			term = _select_term(ts_node_child(self, i));
			ast_set_term(&ret->data.compound_statement.body.buffer[ret->data.compound_statement.body.len - 1], term);
		}
		else
		{
			if (!ts_node_is_named(ts_node_child(self, i)) && (i++, true))
				continue ;
			if (ast_from_node(ts_node_child(self, i), input, &tmp))
				return (ast_free(ret), ERROR);
			vec_ast_push(&ret->data.compound_statement.body, tmp);
		}
		i++;
	}
	return (*out = ret, NO_ERROR);
}

t_error	build_sym_comment(t_parse_node self, t_const_str input, t_ast_node *out)
{
	(void)(out);
	(void)(input);
	(void)(self);
	if (out == NULL)
		return (ERROR);
	if (ts_node_symbol(self) != sym_comment)
		return (ERROR);
	*out = ast_alloc(AST_EMPTY);
	return (NO_ERROR);
}

t_error	build_sym_variable_assignment(t_parse_node self, t_const_str input, t_ast_node *out)
{
	t_ast_node		ret;
	t_parse_node	temp_ast;

	(void)(self);
	(void)(input);
	(void)(out);
	if (out == NULL)
		return (ERROR);
	if (ts_node_symbol(self) != sym_variable_assignment)
		return (ERROR);
	ret = ast_alloc(AST_VARIABLE_ASSIGNMENT);
	if (ts_node_child_count(self) >= 2)
	{
		temp_ast = ts_node_child(self, 0);
		if (ts_node_symbol(temp_ast) != sym_variable_name)
			return (ast_free(ret), ERROR);
		ret->data.variable_assignment.name = _extract_str(temp_ast, input);
	}
	if (ts_node_child_count(self) > 2)
	{
		if (ast_from_node(ts_node_child(self, 2), input, &ret->data.variable_assignment.value))
			return (ast_free(ret), ERROR);
	}
	return (*out = ret, NO_ERROR);
}

t_error	build_sym_string(t_parse_node self, t_const_str input, t_ast_node *out)
{
	t_ast_node	ret;
	t_usize		i;
	t_ast_node	temp;

	(void)(self);
	(void)(input);
	(void)(out);
	if (out == NULL)
		return (ERROR);
	if (ts_node_symbol(self) != sym_string)
		return (ERROR);
	ret = ast_alloc(AST_WORD);
	ret->data.word.kind = AST_WORD_DOUBLE_QUOTE;
	i = 0;
	while (i < ts_node_child_count(self))
	{
		if (!ts_node_is_named(ts_node_child(self, i)) && (i++, true))
			continue ;
		if (ast_from_node(ts_node_child(self, i), input, &temp))
			return (ast_free(ret), ERROR);
		vec_ast_push(&ret->data.word.inner, temp);
		i++;
	}
	return (*out = ret, NO_ERROR);
}

t_error	build_sym_concatenation(t_parse_node self, t_const_str input, t_ast_node *out)
{
	t_ast_node	ret;
	t_usize		i;
	t_ast_node	temp;

	(void)(self);
	(void)(input);
	(void)(out);
	if (out == NULL)
		return (ERROR);
	if (ts_node_symbol(self) != sym_concatenation)
		return (ERROR);
	ret = ast_alloc(AST_WORD);
	ret->data.word.kind = AST_WORD_NO_QUOTE;
	i = 0;
	while (i < ts_node_child_count(self))
	{
		if (ast_from_node(ts_node_child(self, i), input, &temp))
			return (ast_free(ret), ERROR);
		vec_ast_push(&ret->data.word.inner, temp);
		i++;
	}
	return (*out = ret, NO_ERROR);
}

t_error	build_sym_string_content(t_parse_node self, t_const_str input, t_ast_node *out)
{
	t_ast_node	ret;
	t_str		temp_str;

	if (out == NULL)
		return (ERROR);
	if (ts_node_symbol(self) != sym_string_content)
		return (ERROR);
	ret = ast_alloc(AST_RAW_STRING);
	temp_str = _extract_str(self, input);
	ret->data.raw_string.str = temp_str;
	ret->data.raw_string.len = str_len(temp_str);
	ret->data.raw_string.kind = AST_WORD_DOUBLE_QUOTE;
	return (*out = ret, NO_ERROR);
}

t_error	build_sym_raw_string(t_parse_node self, t_const_str input, t_ast_node *out)
{
	t_ast_node	ret;
	t_ast_node	temp;
	t_str		temp_str;

	if (out == NULL)
		return (ERROR);
	if (ts_node_symbol(self) != sym_raw_string)
		return (ERROR);
	ret = ast_alloc(AST_WORD);
	temp = ast_alloc(AST_RAW_STRING);
	temp_str = _extract_str(self, input);
	temp->data.raw_string.str = temp_str;
	temp->data.raw_string.len = str_len(temp_str);
	temp->data.raw_string.kind = AST_WORD_SINGLE_QUOTE;
	temp->data.raw_string.start = true;
	temp->data.raw_string.end = true;
	ret->data.word.kind = AST_WORD_SINGLE_QUOTE;
	vec_ast_push(&ret->data.word.inner, temp);
	return (*out = ret, NO_ERROR);
}

t_error	build_sym_program(t_parse_node self, t_const_str input, t_ast_node *out)
{
	t_ast_node	ret;
	t_usize		i;
	t_ast_node	temp;

	if (out == NULL)
		return (ERROR);
	if (ts_node_symbol(self) != sym_program)
		return (ERROR);
	ret = ast_alloc(AST_PROGRAM);
	i = 0;
	while (i < ts_node_child_count(self))
	{
		temp = NULL;
		if (ts_node_field_id_for_child(self, i) == field_stmt)
		{
			if (ast_from_node(ts_node_child(self, i), input, &temp))
				return (ast_free(ret), ERROR);
			vec_ast_push(&ret->data.program.body, temp);
		}
		if (ts_node_field_id_for_child(self, i) == field_term)
		{
			if (ret->data.program.body.len == 0 && (i++, true))
				continue ;
			ast_set_term(&ret->data.program.body.buffer[ret->data.program.body.len - 1], _select_term(ts_node_child(self, i)));
		}
		i++;
	}
	return (*out = ret, NO_ERROR);
}

t_error	build_sym_command_name(t_parse_node self, t_const_str input, t_ast_node *out)
{
	if (out == NULL)
		return (ERROR);
	if (ts_node_symbol(self) != sym_command_name)
		return (ERROR);
	return (ast_from_node(ts_node_child(self, 0), input, out));
}

t_error	build_sym_word(t_parse_node self, t_const_str input, t_ast_node *out)
{
	t_ast_node	ret;
	t_str		temp_str;
	t_ast_node	temp;

	if (out == NULL)
		return (ERROR);
	if (ts_node_symbol(self) != sym_word)
		return (ERROR);
	ret = ast_alloc(AST_WORD);
	ret->data.word.kind = AST_WORD_NO_QUOTE;
	temp = ast_alloc(AST_RAW_STRING);
	temp_str = _extract_str(self, input);
	temp->data.raw_string.str = temp_str;
	temp->data.raw_string.len = str_len(temp_str);
	temp->data.raw_string.kind = AST_WORD_NO_QUOTE;
	vec_ast_push(&ret->data.word.inner, temp);
	return (*out = ret, NO_ERROR);
}

t_error	build_sym_command(t_parse_node self, t_const_str input, t_ast_node *out)
{
	t_ast_node	ret;
	t_usize		i;
	t_usize		vec_idx;
	t_ast_node	temp;

	if (out == NULL)
		return (ERROR);
	if (ts_node_symbol(self) != sym_command)
		return (ERROR);
	ret = ast_alloc(AST_COMMAND);
	i = 0;
	vec_idx = 0;
	while (i < ts_node_child_count(self))
	{
		temp = NULL;
		if (ts_node_field_id_for_child(self, i) == field_name)
			vec_idx++;
		if (ast_from_node(ts_node_child(self, i), input, &temp))
			return (ast_free(ret), ERROR);
		vec_ast_push(_vec_command(&ret->data.command, vec_idx), temp);
		i++;
	}
	return (*out = ret, NO_ERROR);
}

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
			temp = ts_node_symbol(ts_node_child(self, i));
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

/*
alias_sym_statements
alias_sym_terminator
sym___error_recovery
sym__arithmetic_expression
sym__bare_dollar
sym__case_item_last
sym__comment_word
sym__concat
sym__concatenation_in_expansion
sym__empty_value
sym__expansion_body
sym__expansion_word
sym__extglob_blob
sym__heredoc_body
sym__heredoc_body_beginning
sym__heredoc_expression
sym__heredoc_pipeline
sym__immediate_double_hash
sym__simple_heredoc_body
sym__statement_not_pipeline
sym__statements
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

t_error	ast_from_node(t_parse_node node, t_const_str input, t_ast_node *out)
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
		return (build_sym_arithmetic_parenthesized_expression(node, input, out));
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
	// if (ts_node_symbol(node) == sym_expansion_expression)
	// 	return (build_sym_expansion_expression(node, input, out));
	// if (ts_node_symbol(node) == sym_expansion_regex)
	// 	return (build_sym_expansion_regex(node, input, out));
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
	if (ts_node_symbol(node) == sym_heredoc_body)
		return (build_sym_heredoc_body(node, input, out));
	if (ts_node_symbol(node) == sym_heredoc_content)
		return (build_sym_heredoc_content(node, input, out));
	if (ts_node_symbol(node) == sym_heredoc_end)
		return (build_sym_heredoc_end(node, input, out));
	if (ts_node_symbol(node) == sym_heredoc_redirect)
		return (build_sym_heredoc_redirect(node, input, out));
	if (ts_node_symbol(node) == sym_heredoc_start)
		return (build_sym_heredoc_start(node, input, out));
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
	if (ts_node_symbol(node) == sym_simple_heredoc_body)
		return (build_sym_simple_heredoc_body(node, input, out));
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
