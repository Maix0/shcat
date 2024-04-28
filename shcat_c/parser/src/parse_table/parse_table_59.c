/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_59.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_295(t_parse_table_array *v)
{
	v->a[61][sym_comment] = actions(71);
	v->a[61][sym_file_descriptor] = actions(338);
	v->a[61][sym_variable_name] = actions(340);
	v->a[61][sym_test_operator] = actions(342);
	v->a[61][sym__brace_start] = actions(344);
	v->a[62][aux_sym__terminated_statement] = state(62);
	v->a[62][sym__statement_not_pipeline] = state(6718);
	v->a[62][sym_redirected_statement] = state(4993);
	v->a[62][sym_for_statement] = state(4993);
	v->a[62][sym_c_style_for_statement] = state(4993);
	v->a[62][sym_while_statement] = state(4489);
	v->a[62][sym_if_statement] = state(4489);
	v->a[62][sym_case_statement] = state(4993);
	v->a[62][sym_function_definition] = state(4993);
	v->a[62][sym_compound_statement] = state(4993);
	v->a[62][sym_subshell] = state(4993);
	v->a[62][sym_pipeline] = state(5122);
	v->a[62][sym_list] = state(4993);
	v->a[62][sym_negated_command] = state(4993);
	v->a[62][sym_test_command] = state(4993);
	parse_table_296(v);
}

void	parse_table_296(t_parse_table_array *v)
{
	v->a[62][sym_declaration_command] = state(4993);
	v->a[62][sym_unset_command] = state(4993);
	v->a[62][sym_command] = state(4993);
	v->a[62][sym_command_name] = state(544);
	v->a[62][sym_variable_assignment] = state(1030);
	v->a[62][sym_variable_assignments] = state(4993);
	v->a[62][sym_subscript] = state(6790);
	v->a[62][sym_file_redirect] = state(2019);
	v->a[62][sym_herestring_redirect] = state(2017);
	v->a[62][sym_arithmetic_expansion] = state(1078);
	v->a[62][sym_brace_expression] = state(1078);
	v->a[62][sym_concatenation] = state(1376);
	v->a[62][sym_string] = state(1078);
	v->a[62][sym_translated_string] = state(1078);
	v->a[62][sym_number] = state(1078);
	v->a[62][sym_simple_expansion] = state(1078);
	v->a[62][sym_expansion] = state(1078);
	v->a[62][sym_command_substitution] = state(1078);
	v->a[62][sym_process_substitution] = state(1078);
	v->a[62][aux_sym_redirected_statement_repeat2] = state(4644);
	parse_table_297(v);
}

void	parse_table_297(t_parse_table_array *v)
{
	v->a[62][aux_sym_command_repeat1] = state(997);
	v->a[62][aux_sym__literal_repeat1] = state(1267);
	v->a[62][sym_word] = actions(555);
	v->a[62][anon_sym_for] = actions(558);
	v->a[62][anon_sym_select] = actions(561);
	v->a[62][anon_sym_LPAREN_LPAREN] = actions(564);
	v->a[62][anon_sym_LT] = actions(567);
	v->a[62][anon_sym_GT] = actions(567);
	v->a[62][anon_sym_GT_GT] = actions(570);
	v->a[62][anon_sym_LPAREN] = actions(573);
	v->a[62][anon_sym_while] = actions(576);
	v->a[62][anon_sym_until] = actions(576);
	v->a[62][anon_sym_if] = actions(581);
	v->a[62][anon_sym_case] = actions(584);
	v->a[62][anon_sym_function] = actions(587);
	v->a[62][anon_sym_LBRACE] = actions(590);
	v->a[62][anon_sym_RBRACE] = actions(809);
	v->a[62][anon_sym_BANG] = actions(593);
	v->a[62][anon_sym_LBRACK] = actions(596);
	v->a[62][anon_sym_LBRACK_LBRACK] = actions(599);
	parse_table_298(v);
}

void	parse_table_298(t_parse_table_array *v)
{
	v->a[62][anon_sym_declare] = actions(602);
	v->a[62][anon_sym_typeset] = actions(602);
	v->a[62][anon_sym_export] = actions(602);
	v->a[62][anon_sym_readonly] = actions(602);
	v->a[62][anon_sym_local] = actions(602);
	v->a[62][anon_sym_unset] = actions(605);
	v->a[62][anon_sym_unsetenv] = actions(605);
	v->a[62][anon_sym_AMP_GT] = actions(567);
	v->a[62][anon_sym_AMP_GT_GT] = actions(570);
	v->a[62][anon_sym_LT_AMP] = actions(567);
	v->a[62][anon_sym_GT_AMP] = actions(567);
	v->a[62][anon_sym_GT_PIPE] = actions(570);
	v->a[62][anon_sym_LT_AMP_DASH] = actions(608);
	v->a[62][anon_sym_GT_AMP_DASH] = actions(608);
	v->a[62][anon_sym_LT_LT_LT] = actions(611);
	v->a[62][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(614);
	v->a[62][anon_sym_DOLLAR_LBRACK] = actions(617);
	v->a[62][anon_sym_DOLLAR] = actions(620);
	v->a[62][sym__special_character] = actions(623);
	v->a[62][anon_sym_DQUOTE] = actions(626);
	parse_table_299(v);
}

void	parse_table_299(t_parse_table_array *v)
{
	v->a[62][sym_raw_string] = actions(629);
	v->a[62][sym_ansi_c_string] = actions(629);
	v->a[62][aux_sym_number_token1] = actions(632);
	v->a[62][aux_sym_number_token2] = actions(635);
	v->a[62][anon_sym_DOLLAR_LBRACE] = actions(638);
	v->a[62][anon_sym_DOLLAR_LPAREN] = actions(641);
	v->a[62][anon_sym_BQUOTE] = actions(644);
	v->a[62][anon_sym_DOLLAR_BQUOTE] = actions(647);
	v->a[62][anon_sym_LT_LPAREN] = actions(650);
	v->a[62][anon_sym_GT_LPAREN] = actions(650);
	v->a[62][sym_comment] = actions(71);
	v->a[62][sym_file_descriptor] = actions(653);
	v->a[62][sym_variable_name] = actions(656);
	v->a[62][sym_test_operator] = actions(659);
	v->a[62][sym__brace_start] = actions(662);
	v->a[63][aux_sym__terminated_statement] = state(68);
	v->a[63][sym__statement_not_pipeline] = state(6718);
	v->a[63][sym_redirected_statement] = state(4993);
	v->a[63][sym_for_statement] = state(4993);
	v->a[63][sym_c_style_for_statement] = state(4993);
	parse_table_300(v);
}

/* EOF parse_table_59.c */
