/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   symbols_metadata_1.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./symbols_metadata.h"

void	symbols_metadata_5(t_symbols_metadata_array *v)
{
	v->a[sym__case_item_last] = sym_metadata(true, true, false);
	v->a[sym_case_item] = sym_metadata(true, true, false);
	v->a[sym_function_definition] = sym_metadata(true, true, false);
	v->a[sym_compound_statement] = sym_metadata(true, true, false);
	v->a[sym_subshell] = sym_metadata(true, true, false);
	v->a[sym_pipeline] = sym_metadata(true, true, false);
	v->a[sym_list] = sym_metadata(true, true, false);
	v->a[sym_negated_command] = sym_metadata(true, true, false);
	v->a[sym_command] = sym_metadata(true, true, false);
	v->a[sym_command_name] = sym_metadata(true, true, false);
	v->a[sym_variable_assignment] = sym_metadata(true, true, false);
	v->a[sym__variable_assignments] = sym_metadata(false, true, false);
	v->a[sym_file_redirect] = sym_metadata(true, true, false);
	v->a[sym_heredoc_redirect] = sym_metadata(true, true, false);
	v->a[sym__heredoc_pipeline] = sym_metadata(true, true, false);
	v->a[sym__heredoc_expression] = sym_metadata(false, true, false);
	v->a[aux_sym__heredoc_command] = sym_metadata(false, false, false);
	v->a[sym__heredoc_body] = sym_metadata(false, true, false);
	v->a[sym_heredoc_body] = sym_metadata(true, true, false);
	v->a[sym__simple_heredoc_body] = sym_metadata(false, true, false);
	symbols_metadata_6(v);
}

void	symbols_metadata_6(t_symbols_metadata_array *v)
{
	v->a[sym_arithmetic_expansion] = sym_metadata(true, true, false);
	v->a[sym__arithmetic_expression] = sym_metadata(false, true, false);
	v->a[sym_arithmetic_literal] = sym_metadata(true, true, false);
	v->a[sym_arithmetic_binary_expression] = sym_metadata(true, true, false);
	v->a[sym_arithmetic_ternary_expression] = sym_metadata(true, true, false);
	v->a[sym_arithmetic_unary_expression] = sym_metadata(true, true, false);
	v->a[sym_arithmetic_postfix_expression] = sym_metadata(true, true, false);
	v->a[sym_arithmetic_parenthesized_expression] \
	= sym_metadata(true, true, false);
	v->a[sym_concatenation] = sym_metadata(true, true, false);
	v->a[sym_string] = sym_metadata(true, true, false);
	v->a[sym_simple_expansion] = sym_metadata(true, true, false);
	v->a[sym_expansion] = sym_metadata(true, true, false);
	v->a[sym__expansion_body] = sym_metadata(false, true, false);
	v->a[sym__expansion_expression] = sym_metadata(false, true, false);
	v->a[sym__expansion_regex] = sym_metadata(false, true, false);
	v->a[sym__concatenation_in_expansion] = sym_metadata(true, true, false);
	v->a[sym_command_substitution] = sym_metadata(true, true, false);
	v->a[sym__extglob_blob] = sym_metadata(false, true, false);
	v->a[sym__word_no_brace] = sym_metadata(true, true, false);
	v->a[sym_terminator] = sym_metadata(true, true, false);
	symbols_metadata_7(v);
}

void	symbols_metadata_7(t_symbols_metadata_array *v)
{
	v->a[aux_sym__statements_repeat1] = sym_metadata(false, false, false);
	v->a[aux_sym_redirected_statement_repeat1] \
	= sym_metadata(false, false, false);
	v->a[aux_sym_redirected_statement_repeat2] \
	= sym_metadata(false, false, false);
	v->a[aux_sym_for_statement_repeat1] = sym_metadata(false, false, false);
	v->a[aux_sym_if_statement_repeat1] = sym_metadata(false, false, false);
	v->a[aux_sym_case_statement_repeat1] = sym_metadata(false, false, false);
	v->a[aux_sym__case_item_last_repeat1] = sym_metadata(false, false, false);
	v->a[aux_sym__case_item_last_repeat2] = sym_metadata(false, false, false);
	v->a[aux_sym_pipeline_repeat1] = sym_metadata(false, false, false);
	v->a[aux_sym_command_repeat1] = sym_metadata(false, false, false);
	v->a[aux_sym_command_repeat2] = sym_metadata(false, false, false);
	v->a[aux_sym__variable_assignments_repeat1] \
	= sym_metadata(false, false, false);
	v->a[aux_sym_heredoc_body_repeat1] = sym_metadata(false, false, false);
	v->a[aux_sym_concatenation_repeat1] = sym_metadata(false, false, false);
	v->a[aux_sym_string_repeat1] = sym_metadata(false, false, false);
	v->a[aux_sym__expansion_regex_repeat1] = sym_metadata(false, false, false);
	v->a[aux_sym__concatenation_in_expansion_repeat1] \
	= sym_metadata(false, false, false);
}

/* EOF symbols_metadata_1.c */
