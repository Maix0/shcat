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
	v->a[0][sym_heredoc_start] = actions(1);
	v->a[0][sym_simple_heredoc_body] = actions(1);
	v->a[0][sym__heredoc_body_beginning] = actions(1);
	v->a[0][sym_heredoc_content] = actions(1);
	v->a[0][sym_heredoc_end] = actions(1);
	v->a[0][sym_file_descriptor] = actions(1);
	v->a[0][sym__empty_value] = actions(1);
	v->a[0][sym__concat] = actions(1);
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
	v->a[0][sym___error_recovery] = actions(1);
	v->a[1][sym_program] = state(4035);
	parse_table_6(v);
}

void	parse_table_6(t_parse_table_array *v)
{
	v->a[1][sym__statements] = state(4034);
	v->a[1][sym__statement_not_pipeline] = state(3459);
	v->a[1][sym_redirected_statement] = state(2074);
	v->a[1][sym_for_statement] = state(2074);
	v->a[1][sym_while_statement] = state(2074);
	v->a[1][sym_if_statement] = state(2074);
	v->a[1][sym_case_statement] = state(2074);
	v->a[1][sym_function_definition] = state(2074);
	v->a[1][sym_compound_statement] = state(2074);
	v->a[1][sym_subshell] = state(2074);
	v->a[1][sym_pipeline] = state(2505);
	v->a[1][sym_list] = state(2074);
	v->a[1][sym_negated_command] = state(2074);
	v->a[1][sym_declaration_command] = state(2074);
	v->a[1][sym_unset_command] = state(2074);
	v->a[1][sym_command] = state(2074);
	v->a[1][sym_command_name] = state(280);
	v->a[1][sym_variable_assignment] = state(533);
	v->a[1][sym_variable_assignments] = state(2074);
	v->a[1][sym_file_redirect] = state(1296);
	parse_table_7(v);
}

void	parse_table_7(t_parse_table_array *v)
{
	v->a[1][sym_arithmetic_expansion] = state(643);
	v->a[1][sym_brace_expression] = state(643);
	v->a[1][sym_concatenation] = state(1171);
	v->a[1][sym_string] = state(643);
	v->a[1][sym_number] = state(643);
	v->a[1][sym_simple_expansion] = state(643);
	v->a[1][sym_expansion] = state(643);
	v->a[1][sym_command_substitution] = state(643);
	v->a[1][aux_sym__statements_repeat1] = state(238);
	v->a[1][aux_sym_redirected_statement_repeat2] = state(2160);
	v->a[1][aux_sym_command_repeat1] = state(998);
	v->a[1][aux_sym__literal_repeat1] = state(1006);
	v->a[1][ts_builtin_sym_end] = actions(5);
	v->a[1][sym_word] = actions(7);
	v->a[1][anon_sym_for] = actions(9);
	v->a[1][anon_sym_select] = actions(9);
	v->a[1][anon_sym_while] = actions(11);
	v->a[1][anon_sym_until] = actions(11);
	v->a[1][anon_sym_if] = actions(13);
	v->a[1][anon_sym_case] = actions(15);
	parse_table_8(v);
}

void	parse_table_8(t_parse_table_array *v)
{
	v->a[1][anon_sym_LPAREN] = actions(17);
	v->a[1][anon_sym_function] = actions(19);
	v->a[1][anon_sym_LBRACE] = actions(21);
	v->a[1][anon_sym_BANG] = actions(23);
	v->a[1][anon_sym_declare] = actions(25);
	v->a[1][anon_sym_typeset] = actions(25);
	v->a[1][anon_sym_export] = actions(25);
	v->a[1][anon_sym_readonly] = actions(25);
	v->a[1][anon_sym_local] = actions(25);
	v->a[1][anon_sym_unset] = actions(27);
	v->a[1][anon_sym_unsetenv] = actions(27);
	v->a[1][anon_sym_LT] = actions(29);
	v->a[1][anon_sym_GT] = actions(29);
	v->a[1][anon_sym_GT_GT] = actions(31);
	v->a[1][anon_sym_AMP_GT] = actions(29);
	v->a[1][anon_sym_AMP_GT_GT] = actions(31);
	v->a[1][anon_sym_LT_AMP] = actions(29);
	v->a[1][anon_sym_GT_AMP] = actions(29);
	v->a[1][anon_sym_GT_PIPE] = actions(31);
	v->a[1][anon_sym_LT_AMP_DASH] = actions(33);
	parse_table_9(v);
}

void	parse_table_9(t_parse_table_array *v)
{
	v->a[1][anon_sym_GT_AMP_DASH] = actions(33);
	v->a[1][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(35);
	v->a[1][anon_sym_DOLLAR] = actions(37);
	v->a[1][sym__special_character] = actions(39);
	v->a[1][anon_sym_DQUOTE] = actions(41);
	v->a[1][sym_raw_string] = actions(43);
	v->a[1][aux_sym_number_token1] = actions(45);
	v->a[1][aux_sym_number_token2] = actions(47);
	v->a[1][anon_sym_DOLLAR_LBRACE] = actions(49);
	v->a[1][anon_sym_DOLLAR_LPAREN] = actions(51);
	v->a[1][anon_sym_BQUOTE] = actions(53);
	v->a[1][anon_sym_DOLLAR_BQUOTE] = actions(55);
	v->a[1][sym_comment] = actions(57);
	v->a[1][sym_file_descriptor] = actions(59);
	v->a[1][sym_variable_name] = actions(61);
	v->a[1][sym_test_operator] = actions(43);
	v->a[1][sym__brace_start] = actions(63);
	v->a[2][aux_sym__terminated_statement] = state(5);
	v->a[2][sym__statement_not_pipeline] = state(3515);
	v->a[2][sym_redirected_statement] = state(2164);
	parse_table_10(v);
}

/* EOF parse_table_1.c */
