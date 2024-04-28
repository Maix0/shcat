/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   symbols_names_2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./symbols_names.h"

void	symbols_names_10(t_symbols_names_array *v)
{
	v->a[sym_subshell] = "subshell";
	v->a[sym_pipeline] = "pipeline";
	v->a[sym_list] = "list";
	v->a[sym_negated_command] = "negated_command";
	v->a[sym_test_command] = "test_command";
	v->a[sym__test_command_binary_expression] = "binary_expression";
	v->a[sym_declaration_command] = "declaration_command";
	v->a[sym_unset_command] = "unset_command";
	v->a[sym_command] = "command";
	v->a[sym_command_name] = "command_name";
	v->a[sym_variable_assignment] = "variable_assignment";
	v->a[sym_variable_assignments] = "variable_assignments";
	v->a[sym_subscript] = "subscript";
	v->a[sym_file_redirect] = "file_redirect";
	v->a[sym_heredoc_redirect] = "heredoc_redirect";
	v->a[sym__heredoc_pipeline] = "pipeline";
	v->a[sym__heredoc_expression] = "_heredoc_expression";
	v->a[aux_sym__heredoc_command] = "_heredoc_command";
	v->a[sym__heredoc_body] = "_heredoc_body";
	v->a[sym_heredoc_body] = "heredoc_body";
	symbols_names_11(v);
}

void	symbols_names_11(t_symbols_names_array *v)
{
	v->a[sym__simple_heredoc_body] = "_simple_heredoc_body";
	v->a[sym_herestring_redirect] = "herestring_redirect";
	v->a[sym__expression] = "_expression";
	v->a[sym_binary_expression] = "binary_expression";
	v->a[sym_ternary_expression] = "ternary_expression";
	v->a[sym_unary_expression] = "unary_expression";
	v->a[sym_postfix_expression] = "postfix_expression";
	v->a[sym_parenthesized_expression] = "parenthesized_expression";
	v->a[sym_arithmetic_expansion] = "arithmetic_expansion";
	v->a[sym_brace_expression] = "brace_expression";
	v->a[sym__arithmetic_expression] = "_arithmetic_expression";
	v->a[sym__arithmetic_literal] = "_arithmetic_literal";
	v->a[sym__arithmetic_binary_expression] = "binary_expression";
	v->a[sym__arithmetic_ternary_expression] = "ternary_expression";
	v->a[sym__arithmetic_unary_expression] = "unary_expression";
	v->a[sym__arithmetic_postfix_expression] = "postfix_expression";
	v->a[sym__arithmetic_parenthesized_expression] \
	= "parenthesized_expression";
	v->a[sym_concatenation] = "concatenation";
	v->a[sym_string] = "string";
	v->a[sym_translated_string] = "translated_string";
	symbols_names_12(v);
}

void	symbols_names_12(t_symbols_names_array *v)
{
	v->a[sym_array] = "array";
	v->a[sym_number] = "number";
	v->a[sym_simple_expansion] = "simple_expansion";
	v->a[sym_expansion] = "expansion";
	v->a[sym__expansion_body] = "_expansion_body";
	v->a[sym__expansion_expression] = "_expansion_expression";
	v->a[sym__expansion_regex] = "_expansion_regex";
	v->a[sym__expansion_regex_replacement] = "_expansion_regex_replacement";
	v->a[sym__expansion_regex_removal] = "_expansion_regex_removal";
	v->a[sym__expansion_max_length] = "_expansion_max_length";
	v->a[sym__expansion_max_length_expression] \
	= "_expansion_max_length_expression";
	v->a[sym__expansion_max_length_binary_expression] = "binary_expression";
	v->a[sym__expansion_operator] = "_expansion_operator";
	v->a[sym__concatenation_in_expansion] = "concatenation";
	v->a[sym_command_substitution] = "command_substitution";
	v->a[sym_process_substitution] = "process_substitution";
	v->a[sym__extglob_blob] = "_extglob_blob";
	v->a[sym__c_terminator] = "_c_terminator";
	v->a[aux_sym__statements_repeat1] = "_statements_repeat1";
	v->a[aux_sym_redirected_statement_repeat1] \
	= "redirected_statement_repeat1";
	symbols_names_13(v);
}

void	symbols_names_13(t_symbols_names_array *v)
{
	v->a[aux_sym_redirected_statement_repeat2] \
	= "redirected_statement_repeat2";
	v->a[aux_sym_for_statement_repeat1] = "for_statement_repeat1";
	v->a[aux_sym__for_body_repeat1] = "_for_body_repeat1";
	v->a[aux_sym_if_statement_repeat1] = "if_statement_repeat1";
	v->a[aux_sym_case_statement_repeat1] = "case_statement_repeat1";
	v->a[aux_sym_case_item_repeat1] = "case_item_repeat1";
	v->a[aux_sym_pipeline_repeat1] = "pipeline_repeat1";
	v->a[aux_sym_declaration_command_repeat1] = "declaration_command_repeat1";
	v->a[aux_sym_unset_command_repeat1] = "unset_command_repeat1";
	v->a[aux_sym_command_repeat1] = "command_repeat1";
	v->a[aux_sym_command_repeat2] = "command_repeat2";
	v->a[aux_sym_variable_assignments_repeat1] \
	= "variable_assignments_repeat1";
	v->a[aux_sym_heredoc_body_repeat1] = "heredoc_body_repeat1";
	v->a[aux_sym__literal_repeat1] = "_literal_repeat1";
	v->a[aux_sym_arithmetic_expansion_repeat1] \
	= "arithmetic_expansion_repeat1";
	v->a[aux_sym_concatenation_repeat1] = "concatenation_repeat1";
	v->a[aux_sym_string_repeat1] = "string_repeat1";
	v->a[aux_sym__expansion_body_repeat1] = "_expansion_body_repeat1";
	v->a[aux_sym__expansion_regex_repeat1] = "_expansion_regex_repeat1";
	v->a[aux_sym__concatenation_in_expansion_repeat1] \
	= "_concatenation_in_expansion_repeat1";
}

/* EOF symbols_names_2.c */
