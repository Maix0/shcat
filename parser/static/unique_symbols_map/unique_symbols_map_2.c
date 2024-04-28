/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unique_symbols_map_2.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./unique_symbols_map.h"

void	unique_symbols_map_10(t_unique_symbols_map_array *v)
{
	v->a[sym_subshell] = sym_subshell;
	v->a[sym_pipeline] = sym_pipeline;
	v->a[sym_list] = sym_list;
	v->a[sym_negated_command] = sym_negated_command;
	v->a[sym_test_command] = sym_test_command;
	v->a[sym__test_command_binary_expression] = sym_binary_expression;
	v->a[sym_declaration_command] = sym_declaration_command;
	v->a[sym_unset_command] = sym_unset_command;
	v->a[sym_command] = sym_command;
	v->a[sym_command_name] = sym_command_name;
	v->a[sym_variable_assignment] = sym_variable_assignment;
	v->a[sym_variable_assignments] = sym_variable_assignments;
	v->a[sym_subscript] = sym_subscript;
	v->a[sym_file_redirect] = sym_file_redirect;
	v->a[sym_heredoc_redirect] = sym_heredoc_redirect;
	v->a[sym__heredoc_pipeline] = sym_pipeline;
	v->a[sym__heredoc_expression] = sym__heredoc_expression;
	v->a[aux_sym__heredoc_command] = aux_sym__heredoc_command;
	v->a[sym__heredoc_body] = sym__heredoc_body;
	v->a[sym_heredoc_body] = sym_heredoc_body;
	unique_symbols_map_11(v);
}

void	unique_symbols_map_11(t_unique_symbols_map_array *v)
{
	v->a[sym__simple_heredoc_body] = sym__simple_heredoc_body;
	v->a[sym_herestring_redirect] = sym_herestring_redirect;
	v->a[sym__expression] = sym__expression;
	v->a[sym_binary_expression] = sym_binary_expression;
	v->a[sym_ternary_expression] = sym_ternary_expression;
	v->a[sym_unary_expression] = sym_unary_expression;
	v->a[sym_postfix_expression] = sym_postfix_expression;
	v->a[sym_parenthesized_expression] = sym_parenthesized_expression;
	v->a[sym_arithmetic_expansion] = sym_arithmetic_expansion;
	v->a[sym_brace_expression] = sym_brace_expression;
	v->a[sym__arithmetic_expression] = sym__arithmetic_expression;
	v->a[sym__arithmetic_literal] = sym__arithmetic_literal;
	v->a[sym__arithmetic_binary_expression] = sym_binary_expression;
	v->a[sym__arithmetic_ternary_expression] = sym_ternary_expression;
	v->a[sym__arithmetic_unary_expression] = sym_unary_expression;
	v->a[sym__arithmetic_postfix_expression] = sym_postfix_expression;
	v->a[sym__arithmetic_parenthesized_expression] \
	= sym_parenthesized_expression;
	v->a[sym_concatenation] = sym_concatenation;
	v->a[sym_string] = sym_string;
	v->a[sym_translated_string] = sym_translated_string;
	unique_symbols_map_12(v);
}

void	unique_symbols_map_12(t_unique_symbols_map_array *v)
{
	v->a[sym_array] = sym_array;
	v->a[sym_number] = sym_number;
	v->a[sym_simple_expansion] = sym_simple_expansion;
	v->a[sym_expansion] = sym_expansion;
	v->a[sym__expansion_body] = sym__expansion_body;
	v->a[sym__expansion_expression] = sym__expansion_expression;
	v->a[sym__expansion_regex] = sym__expansion_regex;
	v->a[sym__expansion_regex_replacement] = sym__expansion_regex_replacement;
	v->a[sym__expansion_regex_removal] = sym__expansion_regex_removal;
	v->a[sym__expansion_max_length] = sym__expansion_max_length;
	v->a[sym__expansion_max_length_expression] \
	= sym__expansion_max_length_expression;
	v->a[sym__expansion_max_length_binary_expression] = sym_binary_expression;
	v->a[sym__expansion_operator] = sym__expansion_operator;
	v->a[sym__concatenation_in_expansion] = sym_concatenation;
	v->a[sym_command_substitution] = sym_command_substitution;
	v->a[sym_process_substitution] = sym_process_substitution;
	v->a[sym__extglob_blob] = sym__extglob_blob;
	v->a[sym__c_terminator] = sym__c_terminator;
	v->a[aux_sym__statements_repeat1] = aux_sym__statements_repeat1;
	v->a[aux_sym_redirected_statement_repeat1] \
	= aux_sym_redirected_statement_repeat1;
	unique_symbols_map_13(v);
}

void	unique_symbols_map_13(t_unique_symbols_map_array *v)
{
	v->a[aux_sym_redirected_statement_repeat2] \
	= aux_sym_redirected_statement_repeat2;
	v->a[aux_sym_for_statement_repeat1] = aux_sym_for_statement_repeat1;
	v->a[aux_sym__for_body_repeat1] = aux_sym__for_body_repeat1;
	v->a[aux_sym_if_statement_repeat1] = aux_sym_if_statement_repeat1;
	v->a[aux_sym_case_statement_repeat1] = aux_sym_case_statement_repeat1;
	v->a[aux_sym_case_item_repeat1] = aux_sym_case_item_repeat1;
	v->a[aux_sym_pipeline_repeat1] = aux_sym_pipeline_repeat1;
	v->a[aux_sym_declaration_command_repeat1] \
	= aux_sym_declaration_command_repeat1;
	v->a[aux_sym_unset_command_repeat1] = aux_sym_unset_command_repeat1;
	v->a[aux_sym_command_repeat1] = aux_sym_command_repeat1;
	v->a[aux_sym_command_repeat2] = aux_sym_command_repeat2;
	v->a[aux_sym_variable_assignments_repeat1] \
	= aux_sym_variable_assignments_repeat1;
	v->a[aux_sym_heredoc_body_repeat1] = aux_sym_heredoc_body_repeat1;
	v->a[aux_sym__literal_repeat1] = aux_sym__literal_repeat1;
	v->a[aux_sym_arithmetic_expansion_repeat1] \
	= aux_sym_arithmetic_expansion_repeat1;
	v->a[aux_sym_concatenation_repeat1] = aux_sym_concatenation_repeat1;
	v->a[aux_sym_string_repeat1] = aux_sym_string_repeat1;
	v->a[aux_sym__expansion_body_repeat1] = aux_sym__expansion_body_repeat1;
	v->a[aux_sym__expansion_regex_repeat1] = aux_sym__expansion_regex_repeat1;
	v->a[aux_sym__concatenation_in_expansion_repeat1] \
	= aux_sym__concatenation_in_expansion_repeat1;
}

/* EOF unique_symbols_map_2.c */
