/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_5(t_parse_table_array *v)
{
	v->a[0][anon_sym_DASH3] = actions(1);
	v->a[0][anon_sym_COLON_DASH] = actions(1);
	v->a[0][anon_sym_PLUS3] = actions(1);
	v->a[0][anon_sym_COLON_PLUS] = actions(1);
	v->a[0][anon_sym_QMARK2] = actions(1);
	v->a[0][anon_sym_COLON_QMARK] = actions(1);
	v->a[0][anon_sym_PERCENT_PERCENT] = actions(1);
	v->a[0][anon_sym_SLASH_SLASH] = actions(1);
	v->a[0][anon_sym_SLASH_POUND] = actions(1);
	v->a[0][anon_sym_SLASH_PERCENT] = actions(1);
	v->a[0][anon_sym_COMMA_COMMA] = actions(1);
	v->a[0][anon_sym_CARET_CARET] = actions(1);
	v->a[0][anon_sym_U] = actions(1);
	v->a[0][anon_sym_u] = actions(1);
	v->a[0][anon_sym_L] = actions(1);
	v->a[0][anon_sym_Q] = actions(1);
	v->a[0][anon_sym_E] = actions(1);
	v->a[0][anon_sym_P] = actions(1);
	v->a[0][anon_sym_A] = actions(1);
	v->a[0][anon_sym_K] = actions(1);
	parse_table_6(v);
}

void	parse_table_6(t_parse_table_array *v)
{
	v->a[0][anon_sym_a] = actions(1);
	v->a[0][anon_sym_k] = actions(1);
	v->a[0][anon_sym_DOLLAR_LPAREN] = actions(1);
	v->a[0][anon_sym_BQUOTE] = actions(1);
	v->a[0][anon_sym_DOLLAR_BQUOTE] = actions(1);
	v->a[0][anon_sym_LT_LPAREN] = actions(1);
	v->a[0][anon_sym_GT_LPAREN] = actions(1);
	v->a[0][sym_comment] = actions(3);
	v->a[0][sym__comment_word] = actions(1);
	v->a[0][anon_sym_AT2] = actions(1);
	v->a[0][anon_sym_0] = actions(1);
	v->a[0][anon_sym__] = actions(1);
	v->a[0][sym_heredoc_start] = actions(1);
	v->a[0][sym_simple_heredoc_body] = actions(1);
	v->a[0][sym__heredoc_body_beginning] = actions(1);
	v->a[0][sym_heredoc_content] = actions(1);
	v->a[0][sym_heredoc_end] = actions(1);
	v->a[0][sym_file_descriptor] = actions(1);
	v->a[0][sym__empty_value] = actions(1);
	v->a[0][sym__concat] = actions(1);
	parse_table_7(v);
}

void	parse_table_7(t_parse_table_array *v)
{
	v->a[0][sym_variable_name] = actions(1);
	v->a[0][sym_test_operator] = actions(1);
	v->a[0][sym_regex] = actions(1);
	v->a[0][sym__regex_no_slash] = actions(1);
	v->a[0][sym__regex_no_space] = actions(1);
	v->a[0][sym__expansion_word] = actions(1);
	v->a[0][sym_extglob_pattern] = actions(1);
	v->a[0][sym__bare_dollar] = actions(1);
	v->a[0][sym__brace_start] = actions(1);
	v->a[0][sym__immediate_double_hash] = actions(1);
	v->a[0][sym__external_expansion_sym_hash] = actions(1);
	v->a[0][sym__external_expansion_sym_bang] = actions(1);
	v->a[0][sym__external_expansion_sym_equal] = actions(1);
	v->a[0][sym___error_recovery] = actions(1);
	v->a[1][sym_program] = state(7470);
	v->a[1][sym__statements] = state(7469);
	v->a[1][sym__statement_not_pipeline] = state(6572);
	v->a[1][sym_redirected_statement] = state(4860);
	v->a[1][sym_for_statement] = state(4860);
	v->a[1][sym_c_style_for_statement] = state(4860);
	parse_table_8(v);
}

void	parse_table_8(t_parse_table_array *v)
{
	v->a[1][sym_while_statement] = state(4321);
	v->a[1][sym_if_statement] = state(4321);
	v->a[1][sym_case_statement] = state(4860);
	v->a[1][sym_function_definition] = state(4860);
	v->a[1][sym_compound_statement] = state(4860);
	v->a[1][sym_subshell] = state(4860);
	v->a[1][sym_pipeline] = state(5079);
	v->a[1][sym_list] = state(4860);
	v->a[1][sym_negated_command] = state(4860);
	v->a[1][sym_test_command] = state(4860);
	v->a[1][sym_declaration_command] = state(4860);
	v->a[1][sym_unset_command] = state(4860);
	v->a[1][sym_command] = state(4860);
	v->a[1][sym_command_name] = state(534);
	v->a[1][sym_variable_assignment] = state(913);
	v->a[1][sym_variable_assignments] = state(4860);
	v->a[1][sym_subscript] = state(6774);
	v->a[1][sym_file_redirect] = state(2055);
	v->a[1][sym_herestring_redirect] = state(2156);
	v->a[1][sym_arithmetic_expansion] = state(957);
	parse_table_9(v);
}

void	parse_table_9(t_parse_table_array *v)
{
	v->a[1][sym_brace_expression] = state(957);
	v->a[1][sym_concatenation] = state(1386);
	v->a[1][sym_string] = state(957);
	v->a[1][sym_translated_string] = state(957);
	v->a[1][sym_number] = state(957);
	v->a[1][sym_simple_expansion] = state(957);
	v->a[1][sym_expansion] = state(957);
	v->a[1][sym_command_substitution] = state(957);
	v->a[1][sym_process_substitution] = state(957);
	v->a[1][aux_sym__statements_repeat1] = state(427);
	v->a[1][aux_sym_redirected_statement_repeat2] = state(4571);
	v->a[1][aux_sym_command_repeat1] = state(937);
	v->a[1][aux_sym__literal_repeat1] = state(1212);
	v->a[1][ts_builtin_sym_end] = actions(5);
	v->a[1][sym_word] = actions(7);
	v->a[1][anon_sym_for] = actions(9);
	v->a[1][anon_sym_select] = actions(11);
	v->a[1][anon_sym_LPAREN_LPAREN] = actions(13);
	v->a[1][anon_sym_LT] = actions(15);
	v->a[1][anon_sym_GT] = actions(15);
	parse_table_10(v);
}

/* EOF parse_table_1.c */
