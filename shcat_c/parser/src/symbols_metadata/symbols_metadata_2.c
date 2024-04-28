/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   symbols_metadata_2.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./symbols_metadata.h"

void	symbols_metadata_10(t_symbols_metadata_array *v)
{
	v->a[sym_subshell] = sym_metadata(true, true, false);
	v->a[sym_pipeline] = sym_metadata(true, true, false);
	v->a[sym_list] = sym_metadata(true, true, false);
	v->a[sym_negated_command] = sym_metadata(true, true, false);
	v->a[sym_test_command] = sym_metadata(true, true, false);
	v->a[sym__test_command_binary_expression] \
	= sym_metadata(true, true, false);
	v->a[sym_declaration_command] = sym_metadata(true, true, false);
	v->a[sym_unset_command] = sym_metadata(true, true, false);
	v->a[sym_command] = sym_metadata(true, true, false);
	v->a[sym_command_name] = sym_metadata(true, true, false);
	v->a[sym_variable_assignment] = sym_metadata(true, true, false);
	v->a[sym_variable_assignments] = sym_metadata(true, true, false);
	v->a[sym_subscript] = sym_metadata(true, true, false);
	v->a[sym_file_redirect] = sym_metadata(true, true, false);
	v->a[sym_heredoc_redirect] = sym_metadata(true, true, false);
	v->a[sym__heredoc_pipeline] = sym_metadata(true, true, false);
	v->a[sym__heredoc_expression] = sym_metadata(false, true, false);
	v->a[aux_sym__heredoc_command] = sym_metadata(false, false, false);
	v->a[sym__heredoc_body] = sym_metadata(false, true, false);
	v->a[sym_heredoc_body] = sym_metadata(true, true, false);
	symbols_metadata_11(v);
}

void	symbols_metadata_11(t_symbols_metadata_array *v)
{
	v->a[sym__simple_heredoc_body] = sym_metadata(false, true, false);
	v->a[sym_herestring_redirect] = sym_metadata(true, true, false);
	v->a[sym__expression] = sym_metadata(false, true, true);
	v->a[sym_binary_expression] = sym_metadata(true, true, false);
	v->a[sym_ternary_expression] = sym_metadata(true, true, false);
	v->a[sym_unary_expression] = sym_metadata(true, true, false);
	v->a[sym_postfix_expression] = sym_metadata(true, true, false);
	v->a[sym_parenthesized_expression] = sym_metadata(true, true, false);
	v->a[sym_arithmetic_expansion] = sym_metadata(true, true, false);
	v->a[sym_brace_expression] = sym_metadata(true, true, false);
	v->a[sym__arithmetic_expression] = sym_metadata(false, true, false);
	v->a[sym__arithmetic_literal] = sym_metadata(false, true, false);
	v->a[sym__arithmetic_binary_expression] = sym_metadata(true, true, false);
	v->a[sym__arithmetic_ternary_expression] = sym_metadata(true, true, false);
	v->a[sym__arithmetic_unary_expression] = sym_metadata(true, true, false);
	v->a[sym__arithmetic_postfix_expression] = sym_metadata(true, true, false);
	v->a[sym__arithmetic_parenthesized_expression] \
	= sym_metadata(true, true, false);
	v->a[sym_concatenation] = sym_metadata(true, true, false);
	v->a[sym_string] = sym_metadata(true, true, false);
	v->a[sym_translated_string] = sym_metadata(true, true, false);
	symbols_metadata_12(v);
}

void	symbols_metadata_12(t_symbols_metadata_array *v)
{
	v->a[sym_array] = sym_metadata(true, true, false);
	v->a[sym_number] = sym_metadata(true, true, false);
	v->a[sym_simple_expansion] = sym_metadata(true, true, false);
	v->a[sym_expansion] = sym_metadata(true, true, false);
	v->a[sym__expansion_body] = sym_metadata(false, true, false);
	v->a[sym__expansion_expression] = sym_metadata(false, true, false);
	v->a[sym__expansion_regex] = sym_metadata(false, true, false);
	v->a[sym__expansion_regex_replacement] = sym_metadata(false, true, false);
	v->a[sym__expansion_regex_removal] = sym_metadata(false, true, false);
	v->a[sym__expansion_max_length] = sym_metadata(false, true, false);
	v->a[sym__expansion_max_length_expression] \
	= sym_metadata(false, true, false);
	v->a[sym__expansion_max_length_binary_expression] \
	= sym_metadata(true, true, false);
	v->a[sym__expansion_operator] = sym_metadata(false, true, false);
	v->a[sym__concatenation_in_expansion] = sym_metadata(true, true, false);
	v->a[sym_command_substitution] = sym_metadata(true, true, false);
	v->a[sym_process_substitution] = sym_metadata(true, true, false);
	v->a[sym__extglob_blob] = sym_metadata(false, true, false);
	v->a[sym__c_terminator] = sym_metadata(false, true, false);
	v->a[aux_sym__statements_repeat1] = sym_metadata(false, false, false);
	v->a[aux_sym_redirected_statement_repeat1] \
	= sym_metadata(false, false, false);
	symbols_metadata_13(v);
}

void	symbols_metadata_13(t_symbols_metadata_array *v)
{
	v->a[aux_sym_redirected_statement_repeat2] \
	= sym_metadata(false, false, false);
	v->a[aux_sym_for_statement_repeat1] = sym_metadata(false, false, false);
	v->a[aux_sym__for_body_repeat1] = sym_metadata(false, false, false);
	v->a[aux_sym_if_statement_repeat1] = sym_metadata(false, false, false);
	v->a[aux_sym_case_statement_repeat1] = sym_metadata(false, false, false);
	v->a[aux_sym_case_item_repeat1] = sym_metadata(false, false, false);
	v->a[aux_sym_pipeline_repeat1] = sym_metadata(false, false, false);
	v->a[aux_sym_declaration_command_repeat1] \
	= sym_metadata(false, false, false);
	v->a[aux_sym_unset_command_repeat1] = sym_metadata(false, false, false);
	v->a[aux_sym_command_repeat1] = sym_metadata(false, false, false);
	v->a[aux_sym_command_repeat2] = sym_metadata(false, false, false);
	v->a[aux_sym_variable_assignments_repeat1] \
	= sym_metadata(false, false, false);
	v->a[aux_sym_heredoc_body_repeat1] = sym_metadata(false, false, false);
	v->a[aux_sym__literal_repeat1] = sym_metadata(false, false, false);
	v->a[aux_sym_arithmetic_expansion_repeat1] \
	= sym_metadata(false, false, false);
	v->a[aux_sym_concatenation_repeat1] = sym_metadata(false, false, false);
	v->a[aux_sym_string_repeat1] = sym_metadata(false, false, false);
	v->a[aux_sym__expansion_body_repeat1] = sym_metadata(false, false, false);
	v->a[aux_sym__expansion_regex_repeat1] = sym_metadata(false, false, false);
	v->a[aux_sym__concatenation_in_expansion_repeat1] \
	= sym_metadata(false, false, false);
}

/* EOF symbols_metadata_2.c */
