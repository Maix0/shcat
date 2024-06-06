/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_19.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_95(t_parse_table_array *v)
{
	v->a[23][sym_variable_assignment] = state(492);
	v->a[23][sym_variable_assignments] = state(1966);
	v->a[23][sym_file_redirect] = state(1212);
	v->a[23][sym_arithmetic_expansion] = state(586);
	v->a[23][sym_brace_expression] = state(586);
	v->a[23][sym_concatenation] = state(1016);
	v->a[23][sym_string] = state(586);
	v->a[23][sym_number] = state(586);
	v->a[23][sym_simple_expansion] = state(586);
	v->a[23][sym_expansion] = state(586);
	v->a[23][sym_command_substitution] = state(586);
	v->a[23][aux_sym__statements_repeat1] = state(234);
	v->a[23][aux_sym_redirected_statement_repeat2] = state(2115);
	v->a[23][aux_sym_command_repeat1] = state(1017);
	v->a[23][aux_sym__literal_repeat1] = state(963);
	v->a[23][sym_word] = actions(339);
	v->a[23][anon_sym_for] = actions(341);
	v->a[23][anon_sym_select] = actions(341);
	v->a[23][anon_sym_while] = actions(343);
	v->a[23][anon_sym_until] = actions(343);
	parse_table_96(v);
}

void	parse_table_96(t_parse_table_array *v)
{
	v->a[23][anon_sym_if] = actions(345);
	v->a[23][anon_sym_case] = actions(347);
	v->a[23][anon_sym_LPAREN] = actions(349);
	v->a[23][anon_sym_SEMI_SEMI] = actions(399);
	v->a[23][anon_sym_SEMI_AMP] = actions(329);
	v->a[23][anon_sym_SEMI_SEMI_AMP] = actions(331);
	v->a[23][anon_sym_function] = actions(353);
	v->a[23][anon_sym_LBRACE] = actions(355);
	v->a[23][anon_sym_BANG] = actions(357);
	v->a[23][anon_sym_declare] = actions(359);
	v->a[23][anon_sym_typeset] = actions(359);
	v->a[23][anon_sym_export] = actions(359);
	v->a[23][anon_sym_readonly] = actions(359);
	v->a[23][anon_sym_local] = actions(359);
	v->a[23][anon_sym_unset] = actions(361);
	v->a[23][anon_sym_unsetenv] = actions(361);
	v->a[23][anon_sym_LT] = actions(363);
	v->a[23][anon_sym_GT] = actions(363);
	v->a[23][anon_sym_GT_GT] = actions(365);
	v->a[23][anon_sym_AMP_GT] = actions(363);
	parse_table_97(v);
}

void	parse_table_97(t_parse_table_array *v)
{
	v->a[23][anon_sym_AMP_GT_GT] = actions(365);
	v->a[23][anon_sym_LT_AMP] = actions(363);
	v->a[23][anon_sym_GT_AMP] = actions(363);
	v->a[23][anon_sym_GT_PIPE] = actions(365);
	v->a[23][anon_sym_LT_AMP_DASH] = actions(367);
	v->a[23][anon_sym_GT_AMP_DASH] = actions(367);
	v->a[23][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(369);
	v->a[23][anon_sym_DOLLAR] = actions(371);
	v->a[23][sym__special_character] = actions(373);
	v->a[23][anon_sym_DQUOTE] = actions(375);
	v->a[23][sym_raw_string] = actions(377);
	v->a[23][aux_sym_number_token1] = actions(379);
	v->a[23][aux_sym_number_token2] = actions(381);
	v->a[23][anon_sym_DOLLAR_LBRACE] = actions(383);
	v->a[23][anon_sym_DOLLAR_LPAREN] = actions(385);
	v->a[23][anon_sym_BQUOTE] = actions(387);
	v->a[23][anon_sym_DOLLAR_BQUOTE] = actions(389);
	v->a[23][sym_comment] = actions(57);
	v->a[23][sym_file_descriptor] = actions(391);
	v->a[23][sym_variable_name] = actions(393);
	parse_table_98(v);
}

void	parse_table_98(t_parse_table_array *v)
{
	v->a[23][sym_test_operator] = actions(377);
	v->a[23][sym__brace_start] = actions(395);
	v->a[24][sym__statements] = state(3528);
	v->a[24][sym__statement_not_pipeline] = state(3471);
	v->a[24][sym_redirected_statement] = state(1966);
	v->a[24][sym_for_statement] = state(1966);
	v->a[24][sym_while_statement] = state(1966);
	v->a[24][sym_if_statement] = state(1966);
	v->a[24][sym_case_statement] = state(1966);
	v->a[24][sym_function_definition] = state(1966);
	v->a[24][sym_compound_statement] = state(1966);
	v->a[24][sym_subshell] = state(1966);
	v->a[24][sym_pipeline] = state(2157);
	v->a[24][sym_list] = state(1966);
	v->a[24][sym_negated_command] = state(1966);
	v->a[24][sym_declaration_command] = state(1966);
	v->a[24][sym_unset_command] = state(1966);
	v->a[24][sym_command] = state(1966);
	v->a[24][sym_command_name] = state(268);
	v->a[24][sym_variable_assignment] = state(492);
	parse_table_99(v);
}

void	parse_table_99(t_parse_table_array *v)
{
	v->a[24][sym_variable_assignments] = state(1966);
	v->a[24][sym_file_redirect] = state(1212);
	v->a[24][sym_arithmetic_expansion] = state(586);
	v->a[24][sym_brace_expression] = state(586);
	v->a[24][sym_concatenation] = state(1016);
	v->a[24][sym_string] = state(586);
	v->a[24][sym_number] = state(586);
	v->a[24][sym_simple_expansion] = state(586);
	v->a[24][sym_expansion] = state(586);
	v->a[24][sym_command_substitution] = state(586);
	v->a[24][aux_sym__statements_repeat1] = state(234);
	v->a[24][aux_sym_redirected_statement_repeat2] = state(2115);
	v->a[24][aux_sym_command_repeat1] = state(1017);
	v->a[24][aux_sym__literal_repeat1] = state(963);
	v->a[24][sym_word] = actions(339);
	v->a[24][anon_sym_for] = actions(341);
	v->a[24][anon_sym_select] = actions(341);
	v->a[24][anon_sym_while] = actions(343);
	v->a[24][anon_sym_until] = actions(343);
	v->a[24][anon_sym_if] = actions(345);
	parse_table_100(v);
}

/* EOF parse_table_19.c */
