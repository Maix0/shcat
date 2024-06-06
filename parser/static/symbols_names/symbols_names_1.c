/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   symbols_names_1.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./symbols_names.h"

void	symbols_names_5(t_symbols_names_array *v)
{
	v->a[anon_sym_EQ2] = "=";
	v->a[anon_sym_COLON_QMARK] = ":\\\?";
	v->a[anon_sym_QMARK2] = "\\\?";
	v->a[anon_sym_COLON_PLUS] = ":+";
	v->a[anon_sym_PLUS3] = "+";
	v->a[anon_sym_PERCENT_PERCENT] = "%%";
	v->a[aux_sym__expansion_regex_token1] = "regex";
	v->a[anon_sym_DOLLAR_LPAREN] = "$(";
	v->a[anon_sym_BQUOTE] = "`";
	v->a[anon_sym_DOLLAR_BQUOTE] = "$`";
	v->a[sym_comment] = "comment";
	v->a[sym__comment_word] = "word";
	v->a[aux_sym__simple_variable_name_token1] = "variable_name";
	v->a[aux_sym__multiline_variable_name_token1] = "variable_name";
	v->a[anon_sym_AT] = "special_variable_name";
	v->a[anon_sym_0] = "special_variable_name";
	v->a[anon_sym__] = "special_variable_name";
	v->a[anon_sym_SEMI] = ";";
	v->a[anon_sym_RBRACK] = "]";
	v->a[sym_heredoc_start] = "heredoc_start";
	symbols_names_6(v);
}

void	symbols_names_6(t_symbols_names_array *v)
{
	v->a[sym_simple_heredoc_body] = "heredoc_body";
	v->a[sym__heredoc_body_beginning] = "_heredoc_body_beginning";
	v->a[sym_heredoc_content] = "heredoc_content";
	v->a[sym_heredoc_end] = "heredoc_end";
	v->a[sym_file_descriptor] = "file_descriptor";
	v->a[sym__empty_value] = "_empty_value";
	v->a[sym__concat] = "_concat";
	v->a[sym_variable_name] = "variable_name";
	v->a[sym_test_operator] = "word";
	v->a[sym_regex] = "regex";
	v->a[sym__regex_no_slash] = "_regex_no_slash";
	v->a[sym__regex_no_space] = "_regex_no_space";
	v->a[sym__expansion_word] = "word";
	v->a[sym_extglob_pattern] = "extglob_pattern";
	v->a[sym__bare_dollar] = "$";
	v->a[sym__brace_start] = "{";
	v->a[sym__immediate_double_hash] = "##";
	v->a[sym___error_recovery] = "__error_recovery";
	v->a[sym_program] = "program";
	v->a[sym__statements] = "_statements";
	symbols_names_7(v);
}

void	symbols_names_7(t_symbols_names_array *v)
{
	v->a[aux_sym__terminated_statement] = "_terminated_statement";
	v->a[sym__statement_not_pipeline] = "_statement_not_pipeline";
	v->a[sym_redirected_statement] = "redirected_statement";
	v->a[sym_for_statement] = "for_statement";
	v->a[sym_while_statement] = "while_statement";
	v->a[sym_do_group] = "do_group";
	v->a[sym_if_statement] = "if_statement";
	v->a[sym_elif_clause] = "elif_clause";
	v->a[sym_else_clause] = "else_clause";
	v->a[sym_case_statement] = "case_statement";
	v->a[sym_case_item] = "case_item";
	v->a[sym_last_case_item] = "case_item";
	v->a[sym_function_definition] = "function_definition";
	v->a[sym_compound_statement] = "compound_statement";
	v->a[sym_subshell] = "subshell";
	v->a[sym_pipeline] = "pipeline";
	v->a[sym_list] = "list";
	v->a[sym_negated_command] = "negated_command";
	v->a[sym_declaration_command] = "declaration_command";
	v->a[sym_unset_command] = "unset_command";
	symbols_names_8(v);
}

void	symbols_names_8(t_symbols_names_array *v)
{
	v->a[sym_command] = "command";
	v->a[sym_command_name] = "command_name";
	v->a[sym_variable_assignment] = "variable_assignment";
	v->a[sym_variable_assignments] = "variable_assignments";
	v->a[sym_file_redirect] = "file_redirect";
	v->a[sym_heredoc_redirect] = "heredoc_redirect";
	v->a[sym__heredoc_pipeline] = "pipeline";
	v->a[sym__heredoc_expression] = "_heredoc_expression";
	v->a[aux_sym__heredoc_command] = "_heredoc_command";
	v->a[sym__heredoc_body] = "_heredoc_body";
	v->a[sym_heredoc_body] = "heredoc_body";
	v->a[sym__simple_heredoc_body] = "_simple_heredoc_body";
	v->a[sym_arithmetic_expansion] = "arithmetic_expansion";
	v->a[sym_brace_expression] = "brace_expression";
	v->a[sym__arithmetic_expression] = "_arithmetic_expression";
	v->a[sym__arithmetic_literal] = "_arithmetic_literal";
	v->a[sym__arithmetic_binary_expression] = "binary_expression";
	v->a[sym__arithmetic_ternary_expression] = "ternary_expression";
	v->a[sym__arithmetic_unary_expression] = "unary_expression";
	v->a[sym__arithmetic_postfix_expression] = "postfix_expression";
	symbols_names_9(v);
}

void	symbols_names_9(t_symbols_names_array *v)
{
	v->a[sym__arithmetic_parenthesized_expression] \
	= "parenthesized_expression";
	v->a[sym_concatenation] = "concatenation";
	v->a[sym_string] = "string";
	v->a[sym_number] = "number";
	v->a[sym_simple_expansion] = "simple_expansion";
	v->a[sym_expansion] = "expansion";
	v->a[sym__expansion_body] = "_expansion_body";
	v->a[sym__expansion_expression] = "_expansion_expression";
	v->a[sym__expansion_regex] = "_expansion_regex";
	v->a[sym__concatenation_in_expansion] = "concatenation";
	v->a[sym_command_substitution] = "command_substitution";
	v->a[sym__extglob_blob] = "_extglob_blob";
	v->a[aux_sym__statements_repeat1] = "_statements_repeat1";
	v->a[aux_sym_redirected_statement_repeat1] \
	= "redirected_statement_repeat1";
	v->a[aux_sym_redirected_statement_repeat2] \
	= "redirected_statement_repeat2";
	v->a[aux_sym_for_statement_repeat1] = "for_statement_repeat1";
	v->a[aux_sym_if_statement_repeat1] = "if_statement_repeat1";
	v->a[aux_sym_case_statement_repeat1] = "case_statement_repeat1";
	v->a[aux_sym_case_item_repeat1] = "case_item_repeat1";
	v->a[aux_sym_pipeline_repeat1] = "pipeline_repeat1";
	symbols_names_10(v);
}

/* EOF symbols_names_1.c */
