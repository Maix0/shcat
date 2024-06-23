/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   not_done_function.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 13:04:32 by maiboyer          #+#    #+#             */
/*   Updated: 2024/06/23 17:39:39 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "app/node.h"
#include "ast/ast.h"
#include "gmr/symbols.h"
#include "me/types.h"
#include <stdio.h>

t_error _build_not_finished(t_parse_node self, t_const_str input, t_ast_node *out)
{
	(void)(self);
	(void)(out);
	(void)(input);
	printf("building undefined symbol '%s'\n", ts_node_grammar_type(self));
	return (ERROR);
}

t_error __attribute__((weak, alias("_build_not_finished"))) build_sym_arithmetic_binary_expression(t_parse_node self, t_const_str input, t_ast_node *out);
t_error __attribute__((weak, alias("_build_not_finished"))) build_sym_arithmetic_expansion(t_parse_node self, t_const_str input, t_ast_node *out);
t_error __attribute__((weak, alias("_build_not_finished"))) build_sym_arithmetic_literal(t_parse_node self, t_const_str input, t_ast_node *out);
t_error __attribute__((weak, alias("_build_not_finished"))) build_sym_arithmetic_parenthesized_expression(t_parse_node self, t_const_str input, t_ast_node *out);
t_error __attribute__((weak, alias("_build_not_finished"))) build_sym_arithmetic_postfix_expression(t_parse_node self, t_const_str input, t_ast_node *out);
t_error __attribute__((weak, alias("_build_not_finished"))) build_sym_arithmetic_ternary_expression(t_parse_node self, t_const_str input, t_ast_node *out);
t_error __attribute__((weak, alias("_build_not_finished"))) build_sym_arithmetic_unary_expression(t_parse_node self, t_const_str input, t_ast_node *out);
t_error __attribute__((weak, alias("_build_not_finished"))) build_sym_case_item(t_parse_node self, t_const_str input, t_ast_node *out);
t_error __attribute__((weak, alias("_build_not_finished"))) build_sym_case_statement(t_parse_node self, t_const_str input, t_ast_node *out);
t_error __attribute__((weak, alias("_build_not_finished"))) build_sym_command(t_parse_node self, t_const_str input, t_ast_node *out);
t_error __attribute__((weak, alias("_build_not_finished"))) build_sym_command_name(t_parse_node self, t_const_str input, t_ast_node *out);
t_error __attribute__((weak, alias("_build_not_finished"))) build_sym_command_substitution(t_parse_node self, t_const_str input, t_ast_node *out);
t_error __attribute__((weak, alias("_build_not_finished"))) build_sym_comment(t_parse_node self, t_const_str input, t_ast_node *out);
t_error __attribute__((weak, alias("_build_not_finished"))) build_sym_compound_statement(t_parse_node self, t_const_str input, t_ast_node *out);
t_error __attribute__((weak, alias("_build_not_finished"))) build_sym_concatenation(t_parse_node self, t_const_str input, t_ast_node *out);
t_error __attribute__((weak, alias("_build_not_finished"))) build_sym_do_group(t_parse_node self, t_const_str input, t_ast_node *out);
t_error __attribute__((weak, alias("_build_not_finished"))) build_sym_elif_clause(t_parse_node self, t_const_str input, t_ast_node *out);
t_error __attribute__((weak, alias("_build_not_finished"))) build_sym_else_clause(t_parse_node self, t_const_str input, t_ast_node *out);
t_error __attribute__((weak, alias("_build_not_finished"))) build_sym_expansion(t_parse_node self, t_const_str input, t_ast_node *out);
t_error __attribute__((weak, alias("_build_not_finished"))) build_sym_expansion_expression(t_parse_node self, t_const_str input, t_ast_node *out);
t_error __attribute__((weak, alias("_build_not_finished"))) build_sym_expansion_regex(t_parse_node self, t_const_str input, t_ast_node *out);
t_error __attribute__((weak, alias("_build_not_finished"))) build_sym_extglob_pattern(t_parse_node self, t_const_str input, t_ast_node *out);
t_error __attribute__((weak, alias("_build_not_finished"))) build_sym_file_descriptor(t_parse_node self, t_const_str input, t_ast_node *out);
t_error __attribute__((weak, alias("_build_not_finished"))) build_sym_file_redirect(t_parse_node self, t_const_str input, t_ast_node *out);
t_error __attribute__((weak, alias("_build_not_finished"))) build_sym_for_statement(t_parse_node self, t_const_str input, t_ast_node *out);
t_error __attribute__((weak, alias("_build_not_finished"))) build_sym_function_definition(t_parse_node self, t_const_str input, t_ast_node *out);
t_error __attribute__((weak, alias("_build_not_finished"))) build_sym_heredoc_body(t_parse_node self, t_const_str input, t_ast_node *out);
t_error __attribute__((weak, alias("_build_not_finished"))) build_sym_heredoc_content(t_parse_node self, t_const_str input, t_ast_node *out);
t_error __attribute__((weak, alias("_build_not_finished"))) build_sym_heredoc_end(t_parse_node self, t_const_str input, t_ast_node *out);
t_error __attribute__((weak, alias("_build_not_finished"))) build_sym_heredoc_redirect(t_parse_node self, t_const_str input, t_ast_node *out);
t_error __attribute__((weak, alias("_build_not_finished"))) build_sym_heredoc_start(t_parse_node self, t_const_str input, t_ast_node *out);
t_error __attribute__((weak, alias("_build_not_finished"))) build_sym_if_statement(t_parse_node self, t_const_str input, t_ast_node *out);
t_error __attribute__((weak, alias("_build_not_finished"))) build_sym_list(t_parse_node self, t_const_str input, t_ast_node *out);
t_error __attribute__((weak, alias("_build_not_finished"))) build_sym_negated_command(t_parse_node self, t_const_str input, t_ast_node *out);
t_error __attribute__((weak, alias("_build_not_finished"))) build_sym_number(t_parse_node self, t_const_str input, t_ast_node *out);
t_error __attribute__((weak, alias("_build_not_finished"))) build_sym_pipeline(t_parse_node self, t_const_str input, t_ast_node *out);
t_error __attribute__((weak, alias("_build_not_finished"))) build_sym_program(t_parse_node self, t_const_str input, t_ast_node *out);
t_error __attribute__((weak, alias("_build_not_finished"))) build_sym_raw_string(t_parse_node self, t_const_str input, t_ast_node *out);
t_error __attribute__((weak, alias("_build_not_finished"))) build_sym_redirected_statement(t_parse_node self, t_const_str input, t_ast_node *out);
t_error __attribute__((weak, alias("_build_not_finished"))) build_sym_regex(t_parse_node self, t_const_str input, t_ast_node *out);
t_error __attribute__((weak, alias("_build_not_finished"))) build_sym_simple_expansion(t_parse_node self, t_const_str input, t_ast_node *out);
t_error __attribute__((weak, alias("_build_not_finished"))) build_sym_simple_heredoc_body(t_parse_node self, t_const_str input, t_ast_node *out);
t_error __attribute__((weak, alias("_build_not_finished"))) build_sym_string(t_parse_node self, t_const_str input, t_ast_node *out);
t_error __attribute__((weak, alias("_build_not_finished"))) build_sym_string_content(t_parse_node self, t_const_str input, t_ast_node *out);
t_error __attribute__((weak, alias("_build_not_finished"))) build_sym_subshell(t_parse_node self, t_const_str input, t_ast_node *out);
t_error __attribute__((weak, alias("_build_not_finished"))) build_sym_variable_assignment(t_parse_node self, t_const_str input, t_ast_node *out);
t_error __attribute__((weak, alias("_build_not_finished"))) build_sym_variable_assignments(t_parse_node self, t_const_str input, t_ast_node *out);
t_error __attribute__((weak, alias("_build_not_finished"))) build_sym_variable_name(t_parse_node self, t_const_str input, t_ast_node *out);
t_error __attribute__((weak, alias("_build_not_finished"))) build_sym_while_statement(t_parse_node self, t_const_str input, t_ast_node *out);
t_error __attribute__((weak, alias("_build_not_finished"))) build_sym_word(t_parse_node self, t_const_str input, t_ast_node *out);
t_error __attribute__((weak, alias("_build_not_finished"))) build_sym__bare_dollar(t_parse_node self, t_const_str input, t_ast_node *out);
