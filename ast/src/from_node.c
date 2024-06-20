/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   from_node.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 12:41:56 by maiboyer          #+#    #+#             */
/*   Updated: 2024/06/20 23:15:26 by maiboyer         ###   ########.fr       */
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

#undef ERROR
#define ERROR ((void)printf("ERROR HERE: " __FILE__ ":%d in %s\n", __LINE__, __func__), 1)

void ast_free(t_ast_node elem)
{
	if (elem == NULL)
		return;

	if (elem->kind == AST_ARITHMETIC_EXPANSION)
	{
		ast_free(elem->data.arithmetic_expansion.expr);
	}
	if (elem->kind == AST_CASE)
	{
		ast_free(elem->data.case_.word);
		vec_ast_free(elem->data.case_.cases);
		vec_ast_free(elem->data.case_.suffixes_redirections);
	}
	if (elem->kind == AST_CASE_ITEM)
	{
		vec_ast_free(elem->data.case_item.body);
		vec_ast_free(elem->data.case_item.pattern);
	}
	if (elem->kind == AST_COMMAND)
	{
		vec_ast_free(elem->data.command.cmd_word);
		vec_ast_free(elem->data.command.prefixes);
		vec_ast_free(elem->data.command.suffixes_redirections);
	}
	if (elem->kind == AST_COMMAND_SUBSTITUTION)
	{
		ast_free(elem->data.command_substitution.cmd);
	}
	if (elem->kind == AST_COMPOUND_STATEMENT)
	{
		vec_ast_free(elem->data.compound_statement.body);
		vec_ast_free(elem->data.compound_statement.suffixes_redirections);
	}
	if (elem->kind == AST_ELIF)
	{
		vec_ast_free(elem->data.elif.condition);
		vec_ast_free(elem->data.elif.then);
	}
	if (elem->kind == AST_ELSE)
	{
		vec_ast_free(elem->data.else_.then);
	}
	if (elem->kind == AST_EXPANSION)
	{
		vec_ast_free(elem->data.expansion.args);
		mem_free(elem->data.expansion.var_name);
	}
	if (elem->kind == AST_FILE_REDIRECTION)
	{
		ast_free(elem->data.file_redirection.input);
		ast_free(elem->data.file_redirection.output);
	}
	if (elem->kind == AST_FOR)
	{
		mem_free(elem->data.for_.var_name);
		vec_ast_free(elem->data.for_.do_);
		vec_ast_free(elem->data.for_.suffixes_redirections);
		vec_ast_free(elem->data.for_.words);
	}
	if (elem->kind == AST_FUNCTION_DEFINITION)
	{
		vec_ast_free(elem->data.function_definition.body);
		mem_free(elem->data.function_definition.name);
	}
	if (elem->kind == AST_HEREDOC_REDIRECTION)
	{
		ast_free(elem->data.heredoc_redirection.delimiter);
		ast_free(elem->data.heredoc_redirection.output);
	}
	if (elem->kind == AST_IF)
	{
		ast_free(elem->data.if_.else_);
		vec_ast_free(elem->data.if_.condition);
		vec_ast_free(elem->data.if_.elif_);
		vec_ast_free(elem->data.if_.suffixes_redirections);
		vec_ast_free(elem->data.if_.then);
	}
	if (elem->kind == AST_LIST)
	{
		ast_free(elem->data.list.left);
		ast_free(elem->data.list.right);
		vec_ast_free(elem->data.list.suffixes_redirections);
	}
	if (elem->kind == AST_PIPELINE)
	{
		vec_ast_free(elem->data.pipeline.statements);
		vec_ast_free(elem->data.pipeline.suffixes_redirections);
	}
	if (elem->kind == AST_PROGRAM)
	{
		vec_ast_free(elem->data.program.body);
	}
	if (elem->kind == AST_RAW_STRING)
	{
		mem_free(elem->data.raw_string.str);
	}
	if (elem->kind == AST_STRING)
	{
		vec_ast_free(elem->data.string.parts);
	}
	if (elem->kind == AST_SUBSHELL)
	{
		vec_ast_free(elem->data.subshell.body);
		vec_ast_free(elem->data.subshell.suffixes_redirections);
	}
	if (elem->kind == AST_UNTIL)
	{
		vec_ast_free(elem->data.until.condition);
		vec_ast_free(elem->data.until.do_);
		vec_ast_free(elem->data.until.suffixes_redirections);
	}
	if (elem->kind == AST_VARIABLE_ASSIGNMENT)
	{
		ast_free(elem->data.variable_assignment.value);
		mem_free(elem->data.variable_assignment.name);
	}
	if (elem->kind == AST_WHILE)
	{
		vec_ast_free(elem->data.while_.condition);
		vec_ast_free(elem->data.while_.do_);
		vec_ast_free(elem->data.while_.suffixes_redirections);
	}
	if (elem->kind == AST_WORD)
	{
		vec_ast_free(elem->data.word.inner);
	}
	mem_free(elem);
}

t_ast_node ast_alloc(t_ast_node_kind kind)
{
	t_ast_node ret;

	ret = mem_alloc(sizeof(*ret));
	ret->kind = kind;

	if (kind == AST_ARITHMETIC_EXPANSION)
	{
		ret->data.arithmetic_expansion.expr = NULL;
	}
	if (kind == AST_CASE)
	{
		ret->data.case_.cases = vec_ast_new(16, ast_free);
		ret->data.case_.suffixes_redirections = vec_ast_new(16, ast_free);
		ret->data.case_.term = AST_TERM_NONE;
		ret->data.case_.word = NULL;
	}
	if (kind == AST_CASE_ITEM)
	{
		ret->data.case_item.body = vec_ast_new(16, ast_free);
		ret->data.case_item.pattern = vec_ast_new(16, ast_free);
		ret->data.case_item.term = AST_TERM_NONE;
	}
	if (kind == AST_COMMAND)
	{
		ret->data.command.cmd_word = vec_ast_new(16, ast_free);
		ret->data.command.prefixes = vec_ast_new(16, ast_free);
		ret->data.command.suffixes_redirections = vec_ast_new(16, ast_free);
		ret->data.command.term = AST_TERM_NONE;
	}
	if (kind == AST_COMMAND_SUBSTITUTION)
	{
		ret->data.command_substitution.cmd = NULL;
	}
	if (kind == AST_COMPOUND_STATEMENT)
	{
		ret->data.compound_statement.body = vec_ast_new(16, ast_free);
		ret->data.compound_statement.suffixes_redirections = vec_ast_new(16, ast_free);
		ret->data.compound_statement.term = AST_TERM_NONE;
	}
	if (kind == AST_ELIF)
	{
		ret->data.elif.condition = vec_ast_new(16, ast_free);
		ret->data.elif.then = vec_ast_new(16, ast_free);
	}
	if (kind == AST_ELSE)
	{
		ret->data.else_.then = vec_ast_new(16, ast_free);
	}
	if (kind == AST_EXPANSION)
	{
		ret->data.expansion.args = vec_ast_new(16, ast_free);
		ret->data.expansion.kind = E_OP_NONE;
		ret->data.expansion.var_name = NULL;
	}
	if (kind == AST_FILE_REDIRECTION)
	{
		ret->data.file_redirection.input = NULL;
		ret->data.file_redirection.output = NULL;
	}
	if (kind == AST_FOR)
	{
		ret->data.for_.do_ = vec_ast_new(16, ast_free);
		ret->data.for_.suffixes_redirections = vec_ast_new(16, ast_free);
		ret->data.for_.term = AST_TERM_NONE;
		ret->data.for_.var_name = NULL;
		ret->data.for_.words = vec_ast_new(16, ast_free);
	}
	if (kind == AST_FUNCTION_DEFINITION)
	{
		ret->data.function_definition.body = vec_ast_new(16, ast_free);
		ret->data.function_definition.name = NULL;
	}
	if (kind == AST_HEREDOC_REDIRECTION)
	{
		ret->data.heredoc_redirection.delimiter = NULL;
		ret->data.heredoc_redirection.output = NULL;
	}
	if (kind == AST_IF)
	{
		ret->data.if_.condition = vec_ast_new(16, ast_free);
		ret->data.if_.elif_ = vec_ast_new(16, ast_free);
		ret->data.if_.else_ = NULL;
		ret->data.if_.suffixes_redirections = vec_ast_new(16, ast_free);
		ret->data.if_.term = AST_TERM_NONE;
		ret->data.if_.then = vec_ast_new(16, ast_free);
	}
	if (kind == AST_LIST)
	{
		ret->data.list.left = NULL;
		ret->data.list.op = AST_LIST_OR;
		ret->data.list.right = NULL;
		ret->data.list.suffixes_redirections = vec_ast_new(16, ast_free);
		ret->data.list.term = AST_TERM_NONE;
	}
	if (kind == AST_PIPELINE)
	{
		ret->data.pipeline.bang = false;
		ret->data.pipeline.statements = vec_ast_new(16, ast_free);
		ret->data.pipeline.suffixes_redirections = vec_ast_new(16, ast_free);
		ret->data.pipeline.term = AST_TERM_NONE;
	}
	if (kind == AST_PROGRAM)
	{
		ret->data.program.body = vec_ast_new(16, ast_free);
	}
	if (kind == AST_RAW_STRING)
	{
		ret->data.raw_string.len = 0;
		ret->data.raw_string.str = NULL;
	}
	if (kind == AST_STRING)
	{
		ret->data.string.parts = vec_ast_new(16, ast_free);
	}
	if (kind == AST_SUBSHELL)
	{
		ret->data.list.term = AST_TERM_NONE;
		ret->data.subshell.body = vec_ast_new(16, ast_free);
		ret->data.subshell.suffixes_redirections = vec_ast_new(16, ast_free);
	}
	if (kind == AST_UNTIL)
	{
		ret->data.until.condition = vec_ast_new(16, ast_free);
		ret->data.until.do_ = vec_ast_new(16, ast_free);
		ret->data.until.suffixes_redirections = vec_ast_new(16, ast_free);
		ret->data.until.term = AST_TERM_NONE;
	}
	if (kind == AST_VARIABLE_ASSIGNMENT)
	{
		ret->data.variable_assignment.name = NULL;
		ret->data.variable_assignment.value = NULL;
	}
	if (kind == AST_WHILE)
	{
		ret->data.while_.condition = vec_ast_new(16, ast_free);
		ret->data.while_.do_ = vec_ast_new(16, ast_free);
		ret->data.while_.suffixes_redirections = vec_ast_new(16, ast_free);
		ret->data.while_.term = AST_TERM_NONE;
	}
	if (kind == AST_WORD)
	{
		ret->data.word.inner = vec_ast_new(16, ast_free);
		ret->data.word.kind = AST_WORD_NO_QUOTE;
	}

	return (ret);
}

void ast_set_term(t_ast_node *node, t_ast_terminator_kind term)
{
	t_ast_terminator_kind  void_storage;
	t_ast_terminator_kind *ptr;
	t_ast_node			   val;

	if (node == NULL)
		return;
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

	*ptr = term;
	(void)(void_storage);
}

t_error ast_from_node(t_parse_node node, t_const_str input, t_ast_node *out);

t_error build_sym_arithmetic_binary_expression(t_parse_node self, t_const_str input, t_ast_node *out);
t_error build_sym_arithmetic_expansion(t_parse_node self, t_const_str input, t_ast_node *out);
t_error build_sym_arithmetic_literal(t_parse_node self, t_const_str input, t_ast_node *out);
t_error build_sym_arithmetic_parenthesized_expression(t_parse_node self, t_const_str input, t_ast_node *out);
t_error build_sym_arithmetic_postfix_expression(t_parse_node self, t_const_str input, t_ast_node *out);
t_error build_sym_arithmetic_ternary_expression(t_parse_node self, t_const_str input, t_ast_node *out);
t_error build_sym_arithmetic_unary_expression(t_parse_node self, t_const_str input, t_ast_node *out);
t_error build_sym_case_item(t_parse_node self, t_const_str input, t_ast_node *out);
t_error build_sym_case_statement(t_parse_node self, t_const_str input, t_ast_node *out);
t_error build_sym_command(t_parse_node self, t_const_str input, t_ast_node *out);
t_error build_sym_command_name(t_parse_node self, t_const_str input, t_ast_node *out);
t_error build_sym_command_substitution(t_parse_node self, t_const_str input, t_ast_node *out);
t_error build_sym_comment(t_parse_node self, t_const_str input, t_ast_node *out);
t_error build_sym_compound_statement(t_parse_node self, t_const_str input, t_ast_node *out);
t_error build_sym_concatenation(t_parse_node self, t_const_str input, t_ast_node *out);
t_error build_sym_do_group(t_parse_node self, t_const_str input, t_ast_node *out);
t_error build_sym_elif_clause(t_parse_node self, t_const_str input, t_ast_node *out);
t_error build_sym_else_clause(t_parse_node self, t_const_str input, t_ast_node *out);
t_error build_sym_expansion(t_parse_node self, t_const_str input, t_ast_node *out);
t_error build_sym_expansion_expression(t_parse_node self, t_const_str input, t_ast_node *out);
t_error build_sym_expansion_regex(t_parse_node self, t_const_str input, t_ast_node *out);
t_error build_sym_extglob_pattern(t_parse_node self, t_const_str input, t_ast_node *out);
t_error build_sym_file_descriptor(t_parse_node self, t_const_str input, t_ast_node *out);
t_error build_sym_file_redirect(t_parse_node self, t_const_str input, t_ast_node *out);
t_error build_sym_for_statement(t_parse_node self, t_const_str input, t_ast_node *out);
t_error build_sym_function_definition(t_parse_node self, t_const_str input, t_ast_node *out);
t_error build_sym_heredoc_body(t_parse_node self, t_const_str input, t_ast_node *out);
t_error build_sym_heredoc_content(t_parse_node self, t_const_str input, t_ast_node *out);
t_error build_sym_heredoc_end(t_parse_node self, t_const_str input, t_ast_node *out);
t_error build_sym_heredoc_redirect(t_parse_node self, t_const_str input, t_ast_node *out);
t_error build_sym_heredoc_start(t_parse_node self, t_const_str input, t_ast_node *out);
t_error build_sym_if_statement(t_parse_node self, t_const_str input, t_ast_node *out);
t_error build_sym_list(t_parse_node self, t_const_str input, t_ast_node *out);
t_error build_sym_negated_command(t_parse_node self, t_const_str input, t_ast_node *out);
t_error build_sym_number(t_parse_node self, t_const_str input, t_ast_node *out);
t_error build_sym_pipeline(t_parse_node self, t_const_str input, t_ast_node *out);
t_error build_sym_program(t_parse_node self, t_const_str input, t_ast_node *out);
t_error build_sym_raw_string(t_parse_node self, t_const_str input, t_ast_node *out);
t_error build_sym_redirected_statement(t_parse_node self, t_const_str input, t_ast_node *out);
t_error build_sym_regex(t_parse_node self, t_const_str input, t_ast_node *out);
t_error build_sym_simple_expansion(t_parse_node self, t_const_str input, t_ast_node *out);
t_error build_sym_simple_heredoc_body(t_parse_node self, t_const_str input, t_ast_node *out);
t_error build_sym_string(t_parse_node self, t_const_str input, t_ast_node *out);
t_error build_sym_string_content(t_parse_node self, t_const_str input, t_ast_node *out);
t_error build_sym_subshell(t_parse_node self, t_const_str input, t_ast_node *out);
t_error build_sym_variable_assignment(t_parse_node self, t_const_str input, t_ast_node *out);
t_error build_sym_variable_assignments(t_parse_node self, t_const_str input, t_ast_node *out);
t_error build_sym_variable_name(t_parse_node self, t_const_str input, t_ast_node *out);
t_error build_sym_while_statement(t_parse_node self, t_const_str input, t_ast_node *out);
t_error build_sym_word(t_parse_node self, t_const_str input, t_ast_node *out);

#include <stdio.h>

t_error build_sym_program(t_parse_node self, t_const_str input, t_ast_node *out)
{
	t_ast_node ret;
	t_usize	   i;
	t_ast_node temp;

	if (out == NULL)
		return (ERROR);
	if (ts_node_grammar_symbol(self) != sym_program)
		return (ERROR);
	ret = ast_alloc(AST_PROGRAM);
	i = 0;
	while (i < ts_node_named_child_count(self))
	{
		temp = NULL;
		if (i < ts_node_named_child_count(self) && ts_node_field_id_for_child(self, i) == field_stmt)
		{
			if (ast_from_node(ts_node_named_child(self, i), input, &temp))
				return (ast_free(ret), ERROR);
			i++;
		}
		if (i < ts_node_named_child_count(self) && ts_node_field_id_for_child(self, i) == field_terminator)
		{
			printf("%s\n", (ts_node_grammar_type(ts_node_named_child(self, i))));
			i++;
		}
		if (temp == NULL)
			break;
		vec_ast_push(&ret->data.program.body, temp);
	}
	return (*out = ret, NO_ERROR);
}

t_error build_sym_command_name(t_parse_node self, t_const_str input, t_ast_node *out)
{
	if (out == NULL)
		return (ERROR);
	if (ts_node_grammar_symbol(self) != sym_command_name)
		return (ERROR);
	return (ast_from_node(ts_node_named_child(self, 0), input, out));
}

static inline t_vec_ast *_vec_command(t_ast_command *val, t_usize i)
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

static inline void _append_redirection(t_ast_command *val, t_ast_node redirection)
{
	(void)(val);
	(void)(redirection);
}

t_error build_sym_word(t_parse_node self, t_const_str input, t_ast_node *out)
{
	t_ast_node ret;
	t_str	   temp_str;
	t_ast_node temp;

	if (out == NULL)
		return (ERROR);
	if (ts_node_grammar_symbol(self) != sym_word)
		return (ERROR);
	ret = ast_alloc(AST_WORD);
	ret->data.word.kind = AST_WORD_NO_QUOTE;
	temp = ast_alloc(AST_RAW_STRING);
	temp_str = str_substring(input, ts_node_start_byte(self), ts_node_end_byte(self) - ts_node_start_byte(self));
	temp->data.raw_string.str = temp_str;
	temp->data.raw_string.len = str_len(temp_str);
	vec_ast_push(&ret->data.word.inner, temp);
	return (*out = ret, NO_ERROR);
}

t_error build_sym_command(t_parse_node self, t_const_str input, t_ast_node *out)
{
	t_ast_node ret;
	t_usize	   i;
	t_usize	   vec_idx;
	t_ast_node temp;

	if (out == NULL)
		return (ERROR);
	if (ts_node_grammar_symbol(self) != sym_command)
		return (ERROR);
	ret = ast_alloc(AST_COMMAND);
	i = 0;
	vec_idx = 0;
	while (i < ts_node_named_child_count(self))
	{
		temp = NULL;
		if (ts_node_field_id_for_child(self, i) == field_name)
			vec_idx++;
		if (ast_from_node(ts_node_named_child(self, i), input, &temp))
			return (ast_free(ret), ERROR);
		vec_ast_push(_vec_command(&ret->data.command, vec_idx), temp);
		i++;
	}
	return (*out = ret, NO_ERROR);
}

t_error ast_from_node(t_parse_node node, t_const_str input, t_ast_node *out)
{
	if (out == NULL)
		return (ERROR);
	if (ts_node_grammar_symbol(node) == sym_arithmetic_binary_expression)
		return (build_sym_arithmetic_binary_expression(node, input, out));
	if (ts_node_grammar_symbol(node) == sym_arithmetic_expansion)
		return (build_sym_arithmetic_expansion(node, input, out));
	if (ts_node_grammar_symbol(node) == sym_arithmetic_literal)
		return (build_sym_arithmetic_literal(node, input, out));
	if (ts_node_grammar_symbol(node) == sym_arithmetic_parenthesized_expression)
		return (build_sym_arithmetic_parenthesized_expression(node, input, out));
	if (ts_node_grammar_symbol(node) == sym_arithmetic_postfix_expression)
		return (build_sym_arithmetic_postfix_expression(node, input, out));
	if (ts_node_grammar_symbol(node) == sym_arithmetic_ternary_expression)
		return (build_sym_arithmetic_ternary_expression(node, input, out));
	if (ts_node_grammar_symbol(node) == sym_arithmetic_unary_expression)
		return (build_sym_arithmetic_unary_expression(node, input, out));
	if (ts_node_grammar_symbol(node) == sym_case_item)
		return (build_sym_case_item(node, input, out));
	if (ts_node_grammar_symbol(node) == sym_case_statement)
		return (build_sym_case_statement(node, input, out));
	if (ts_node_grammar_symbol(node) == sym_command)
		return (build_sym_command(node, input, out));
	if (ts_node_grammar_symbol(node) == sym_command_name)
		return (build_sym_command_name(node, input, out));
	if (ts_node_grammar_symbol(node) == sym_command_substitution)
		return (build_sym_command_substitution(node, input, out));
	if (ts_node_grammar_symbol(node) == sym_comment)
		return (build_sym_comment(node, input, out));
	if (ts_node_grammar_symbol(node) == sym_compound_statement)
		return (build_sym_compound_statement(node, input, out));
	if (ts_node_grammar_symbol(node) == sym_concatenation)
		return (build_sym_concatenation(node, input, out));
	if (ts_node_grammar_symbol(node) == sym_do_group)
		return (build_sym_do_group(node, input, out));
	if (ts_node_grammar_symbol(node) == sym_elif_clause)
		return (build_sym_elif_clause(node, input, out));
	if (ts_node_grammar_symbol(node) == sym_else_clause)
		return (build_sym_else_clause(node, input, out));
	if (ts_node_grammar_symbol(node) == sym_expansion)
		return (build_sym_expansion(node, input, out));
	if (ts_node_grammar_symbol(node) == sym_expansion_expression)
		return (build_sym_expansion_expression(node, input, out));
	if (ts_node_grammar_symbol(node) == sym_expansion_regex)
		return (build_sym_expansion_regex(node, input, out));
	if (ts_node_grammar_symbol(node) == sym_extglob_pattern)
		return (build_sym_extglob_pattern(node, input, out));
	if (ts_node_grammar_symbol(node) == sym_file_descriptor)
		return (build_sym_file_descriptor(node, input, out));
	if (ts_node_grammar_symbol(node) == sym_file_redirect)
		return (build_sym_file_redirect(node, input, out));
	if (ts_node_grammar_symbol(node) == sym_for_statement)
		return (build_sym_for_statement(node, input, out));
	if (ts_node_grammar_symbol(node) == sym_function_definition)
		return (build_sym_function_definition(node, input, out));
	if (ts_node_grammar_symbol(node) == sym_heredoc_body)
		return (build_sym_heredoc_body(node, input, out));
	if (ts_node_grammar_symbol(node) == sym_heredoc_content)
		return (build_sym_heredoc_content(node, input, out));
	if (ts_node_grammar_symbol(node) == sym_heredoc_end)
		return (build_sym_heredoc_end(node, input, out));
	if (ts_node_grammar_symbol(node) == sym_heredoc_redirect)
		return (build_sym_heredoc_redirect(node, input, out));
	if (ts_node_grammar_symbol(node) == sym_heredoc_start)
		return (build_sym_heredoc_start(node, input, out));
	if (ts_node_grammar_symbol(node) == sym_if_statement)
		return (build_sym_if_statement(node, input, out));
	if (ts_node_grammar_symbol(node) == sym_list)
		return (build_sym_list(node, input, out));
	if (ts_node_grammar_symbol(node) == sym_negated_command)
		return (build_sym_negated_command(node, input, out));
	if (ts_node_grammar_symbol(node) == sym_number)
		return (build_sym_number(node, input, out));
	if (ts_node_grammar_symbol(node) == sym_pipeline)
		return (build_sym_pipeline(node, input, out));
	if (ts_node_grammar_symbol(node) == sym_program)
		return (build_sym_program(node, input, out));
	if (ts_node_grammar_symbol(node) == sym_raw_string)
		return (build_sym_raw_string(node, input, out));
	if (ts_node_grammar_symbol(node) == sym_redirected_statement)
		return (build_sym_redirected_statement(node, input, out));
	if (ts_node_grammar_symbol(node) == sym_regex)
		return (build_sym_regex(node, input, out));
	if (ts_node_grammar_symbol(node) == sym_simple_expansion)
		return (build_sym_simple_expansion(node, input, out));
	if (ts_node_grammar_symbol(node) == sym_simple_heredoc_body)
		return (build_sym_simple_heredoc_body(node, input, out));
	if (ts_node_grammar_symbol(node) == sym_string)
		return (build_sym_string(node, input, out));
	if (ts_node_grammar_symbol(node) == sym_string_content)
		return (build_sym_string_content(node, input, out));
	if (ts_node_grammar_symbol(node) == sym_subshell)
		return (build_sym_subshell(node, input, out));
	if (ts_node_grammar_symbol(node) == sym_variable_assignment)
		return (build_sym_variable_assignment(node, input, out));
	if (ts_node_grammar_symbol(node) == sym_variable_assignments)
		return (build_sym_variable_assignments(node, input, out));
	if (ts_node_grammar_symbol(node) == sym_variable_name)
		return (build_sym_variable_name(node, input, out));
	if (ts_node_grammar_symbol(node) == sym_while_statement)
		return (build_sym_while_statement(node, input, out));
	if (ts_node_grammar_symbol(node) == sym_word)
		return (build_sym_word(node, input, out));
	return (ERROR);
}
