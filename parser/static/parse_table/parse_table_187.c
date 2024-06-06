/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_187.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_935(t_parse_table_array *v)
{
	v->a[244][sym_function_definition] = state(2081);
	v->a[244][sym_compound_statement] = state(2081);
	v->a[244][sym_subshell] = state(2081);
	v->a[244][sym_pipeline] = state(2093);
	v->a[244][sym_list] = state(2081);
	v->a[244][sym_negated_command] = state(2081);
	v->a[244][sym_declaration_command] = state(2081);
	v->a[244][sym_unset_command] = state(2081);
	v->a[244][sym_command] = state(2081);
	v->a[244][sym_command_name] = state(280);
	v->a[244][sym_variable_assignment] = state(569);
	v->a[244][sym_variable_assignments] = state(2081);
	v->a[244][sym_file_redirect] = state(1296);
	v->a[244][sym_arithmetic_expansion] = state(643);
	v->a[244][sym_brace_expression] = state(643);
	v->a[244][sym_concatenation] = state(1171);
	v->a[244][sym_string] = state(643);
	v->a[244][sym_number] = state(643);
	v->a[244][sym_simple_expansion] = state(643);
	v->a[244][sym_expansion] = state(643);
	parse_table_936(v);
}

void	parse_table_936(t_parse_table_array *v)
{
	v->a[244][sym_command_substitution] = state(643);
	v->a[244][aux_sym_redirected_statement_repeat2] = state(2160);
	v->a[244][aux_sym_command_repeat1] = state(998);
	v->a[244][aux_sym__literal_repeat1] = state(1006);
	v->a[244][sym_word] = actions(7);
	v->a[244][anon_sym_for] = actions(9);
	v->a[244][anon_sym_select] = actions(9);
	v->a[244][anon_sym_while] = actions(11);
	v->a[244][anon_sym_until] = actions(11);
	v->a[244][anon_sym_if] = actions(13);
	v->a[244][anon_sym_case] = actions(15);
	v->a[244][anon_sym_LPAREN] = actions(17);
	v->a[244][anon_sym_function] = actions(19);
	v->a[244][anon_sym_LBRACE] = actions(21);
	v->a[244][anon_sym_BANG] = actions(23);
	v->a[244][anon_sym_declare] = actions(25);
	v->a[244][anon_sym_typeset] = actions(25);
	v->a[244][anon_sym_export] = actions(25);
	v->a[244][anon_sym_readonly] = actions(25);
	v->a[244][anon_sym_local] = actions(25);
	parse_table_937(v);
}

void	parse_table_937(t_parse_table_array *v)
{
	v->a[244][anon_sym_unset] = actions(27);
	v->a[244][anon_sym_unsetenv] = actions(27);
	v->a[244][anon_sym_LT] = actions(29);
	v->a[244][anon_sym_GT] = actions(29);
	v->a[244][anon_sym_GT_GT] = actions(31);
	v->a[244][anon_sym_AMP_GT] = actions(29);
	v->a[244][anon_sym_AMP_GT_GT] = actions(31);
	v->a[244][anon_sym_LT_AMP] = actions(29);
	v->a[244][anon_sym_GT_AMP] = actions(29);
	v->a[244][anon_sym_GT_PIPE] = actions(31);
	v->a[244][anon_sym_LT_AMP_DASH] = actions(33);
	v->a[244][anon_sym_GT_AMP_DASH] = actions(33);
	v->a[244][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(35);
	v->a[244][anon_sym_DOLLAR] = actions(37);
	v->a[244][sym__special_character] = actions(39);
	v->a[244][anon_sym_DQUOTE] = actions(41);
	v->a[244][sym_raw_string] = actions(43);
	v->a[244][aux_sym_number_token1] = actions(45);
	v->a[244][aux_sym_number_token2] = actions(47);
	v->a[244][anon_sym_DOLLAR_LBRACE] = actions(49);
	parse_table_938(v);
}

void	parse_table_938(t_parse_table_array *v)
{
	v->a[244][anon_sym_DOLLAR_LPAREN] = actions(51);
	v->a[244][anon_sym_BQUOTE] = actions(53);
	v->a[244][anon_sym_DOLLAR_BQUOTE] = actions(55);
	v->a[244][sym_comment] = actions(57);
	v->a[244][sym_file_descriptor] = actions(59);
	v->a[244][sym_variable_name] = actions(61);
	v->a[244][sym_test_operator] = actions(43);
	v->a[244][sym__brace_start] = actions(63);
	v->a[245][sym__statement_not_pipeline] = state(2060);
	v->a[245][sym_redirected_statement] = state(2060);
	v->a[245][sym_for_statement] = state(2060);
	v->a[245][sym_while_statement] = state(2060);
	v->a[245][sym_if_statement] = state(2060);
	v->a[245][sym_case_statement] = state(2060);
	v->a[245][sym_function_definition] = state(2060);
	v->a[245][sym_compound_statement] = state(2060);
	v->a[245][sym_subshell] = state(2060);
	v->a[245][sym_pipeline] = state(2697);
	v->a[245][sym_list] = state(2060);
	v->a[245][sym_negated_command] = state(2060);
	parse_table_939(v);
}

void	parse_table_939(t_parse_table_array *v)
{
	v->a[245][sym_declaration_command] = state(2060);
	v->a[245][sym_unset_command] = state(2060);
	v->a[245][sym_command] = state(2060);
	v->a[245][sym_command_name] = state(257);
	v->a[245][sym_variable_assignment] = state(463);
	v->a[245][sym_variable_assignments] = state(2060);
	v->a[245][sym_file_redirect] = state(1015);
	v->a[245][sym_arithmetic_expansion] = state(508);
	v->a[245][sym_brace_expression] = state(508);
	v->a[245][sym_concatenation] = state(862);
	v->a[245][sym_string] = state(508);
	v->a[245][sym_number] = state(508);
	v->a[245][sym_simple_expansion] = state(508);
	v->a[245][sym_expansion] = state(508);
	v->a[245][sym_command_substitution] = state(508);
	v->a[245][aux_sym_redirected_statement_repeat2] = state(1974);
	v->a[245][aux_sym_command_repeat1] = state(1131);
	v->a[245][aux_sym__literal_repeat1] = state(678);
	v->a[245][sym_word] = actions(129);
	v->a[245][anon_sym_for] = actions(131);
	parse_table_940(v);
}

/* EOF parse_table_187.c */
