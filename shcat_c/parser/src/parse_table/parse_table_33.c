/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_33.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_165(t_parse_table_array *v)
{
	v->a[33][anon_sym_unsetenv] = actions(443);
	v->a[33][anon_sym_AMP_GT] = actions(411);
	v->a[33][anon_sym_AMP_GT_GT] = actions(413);
	v->a[33][anon_sym_LT_AMP] = actions(411);
	v->a[33][anon_sym_GT_AMP] = actions(411);
	v->a[33][anon_sym_GT_PIPE] = actions(413);
	v->a[33][anon_sym_LT_AMP_DASH] = actions(445);
	v->a[33][anon_sym_GT_AMP_DASH] = actions(445);
	v->a[33][anon_sym_LT_LT_LT] = actions(447);
	v->a[33][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(449);
	v->a[33][anon_sym_DOLLAR_LBRACK] = actions(451);
	v->a[33][anon_sym_DOLLAR] = actions(453);
	v->a[33][sym__special_character] = actions(455);
	v->a[33][anon_sym_DQUOTE] = actions(457);
	v->a[33][sym_raw_string] = actions(459);
	v->a[33][sym_ansi_c_string] = actions(459);
	v->a[33][aux_sym_number_token1] = actions(461);
	v->a[33][aux_sym_number_token2] = actions(463);
	v->a[33][anon_sym_DOLLAR_LBRACE] = actions(465);
	v->a[33][anon_sym_DOLLAR_LPAREN] = actions(467);
	parse_table_166(v);
}

void	parse_table_166(t_parse_table_array *v)
{
	v->a[33][anon_sym_BQUOTE] = actions(469);
	v->a[33][anon_sym_DOLLAR_BQUOTE] = actions(471);
	v->a[33][anon_sym_LT_LPAREN] = actions(473);
	v->a[33][anon_sym_GT_LPAREN] = actions(473);
	v->a[33][sym_comment] = actions(71);
	v->a[33][sym_file_descriptor] = actions(475);
	v->a[33][sym_variable_name] = actions(477);
	v->a[33][sym_test_operator] = actions(479);
	v->a[33][sym__brace_start] = actions(481);
	v->a[34][aux_sym__terminated_statement] = state(34);
	v->a[34][sym__statement_not_pipeline] = state(6718);
	v->a[34][sym_redirected_statement] = state(5007);
	v->a[34][sym_for_statement] = state(5007);
	v->a[34][sym_c_style_for_statement] = state(5007);
	v->a[34][sym_while_statement] = state(4551);
	v->a[34][sym_if_statement] = state(4551);
	v->a[34][sym_case_statement] = state(5007);
	v->a[34][sym_function_definition] = state(5007);
	v->a[34][sym_compound_statement] = state(5007);
	v->a[34][sym_subshell] = state(5007);
	parse_table_167(v);
}

void	parse_table_167(t_parse_table_array *v)
{
	v->a[34][sym_pipeline] = state(5189);
	v->a[34][sym_list] = state(5007);
	v->a[34][sym_negated_command] = state(5007);
	v->a[34][sym_test_command] = state(5007);
	v->a[34][sym_declaration_command] = state(5007);
	v->a[34][sym_unset_command] = state(5007);
	v->a[34][sym_command] = state(5007);
	v->a[34][sym_command_name] = state(544);
	v->a[34][sym_variable_assignment] = state(1151);
	v->a[34][sym_variable_assignments] = state(5007);
	v->a[34][sym_subscript] = state(6790);
	v->a[34][sym_file_redirect] = state(2019);
	v->a[34][sym_herestring_redirect] = state(2017);
	v->a[34][sym_arithmetic_expansion] = state(1078);
	v->a[34][sym_brace_expression] = state(1078);
	v->a[34][sym_concatenation] = state(1376);
	v->a[34][sym_string] = state(1078);
	v->a[34][sym_translated_string] = state(1078);
	v->a[34][sym_number] = state(1078);
	v->a[34][sym_simple_expansion] = state(1078);
	parse_table_168(v);
}

void	parse_table_168(t_parse_table_array *v)
{
	v->a[34][sym_expansion] = state(1078);
	v->a[34][sym_command_substitution] = state(1078);
	v->a[34][sym_process_substitution] = state(1078);
	v->a[34][aux_sym_redirected_statement_repeat2] = state(4644);
	v->a[34][aux_sym_command_repeat1] = state(997);
	v->a[34][aux_sym__literal_repeat1] = state(1267);
	v->a[34][sym_word] = actions(555);
	v->a[34][anon_sym_for] = actions(558);
	v->a[34][anon_sym_select] = actions(561);
	v->a[34][anon_sym_LPAREN_LPAREN] = actions(564);
	v->a[34][anon_sym_LT] = actions(567);
	v->a[34][anon_sym_GT] = actions(567);
	v->a[34][anon_sym_GT_GT] = actions(570);
	v->a[34][anon_sym_LPAREN] = actions(573);
	v->a[34][anon_sym_while] = actions(576);
	v->a[34][anon_sym_until] = actions(576);
	v->a[34][anon_sym_do] = actions(579);
	v->a[34][anon_sym_if] = actions(581);
	v->a[34][anon_sym_then] = actions(579);
	v->a[34][anon_sym_fi] = actions(579);
	parse_table_169(v);
}

void	parse_table_169(t_parse_table_array *v)
{
	v->a[34][anon_sym_elif] = actions(579);
	v->a[34][anon_sym_else] = actions(579);
	v->a[34][anon_sym_case] = actions(584);
	v->a[34][anon_sym_function] = actions(587);
	v->a[34][anon_sym_LBRACE] = actions(590);
	v->a[34][anon_sym_BANG] = actions(593);
	v->a[34][anon_sym_LBRACK] = actions(596);
	v->a[34][anon_sym_LBRACK_LBRACK] = actions(599);
	v->a[34][anon_sym_declare] = actions(602);
	v->a[34][anon_sym_typeset] = actions(602);
	v->a[34][anon_sym_export] = actions(602);
	v->a[34][anon_sym_readonly] = actions(602);
	v->a[34][anon_sym_local] = actions(602);
	v->a[34][anon_sym_unset] = actions(605);
	v->a[34][anon_sym_unsetenv] = actions(605);
	v->a[34][anon_sym_AMP_GT] = actions(567);
	v->a[34][anon_sym_AMP_GT_GT] = actions(570);
	v->a[34][anon_sym_LT_AMP] = actions(567);
	v->a[34][anon_sym_GT_AMP] = actions(567);
	v->a[34][anon_sym_GT_PIPE] = actions(570);
	parse_table_170(v);
}

/* EOF parse_table_33.c */
