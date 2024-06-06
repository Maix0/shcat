/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_193.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_965(t_parse_table_array *v)
{
	v->a[252][sym_command] = state(2158);
	v->a[252][sym_command_name] = state(268);
	v->a[252][sym_variable_assignment] = state(502);
	v->a[252][sym_variable_assignments] = state(2158);
	v->a[252][sym_file_redirect] = state(1212);
	v->a[252][sym_arithmetic_expansion] = state(586);
	v->a[252][sym_brace_expression] = state(586);
	v->a[252][sym_concatenation] = state(1016);
	v->a[252][sym_string] = state(586);
	v->a[252][sym_number] = state(586);
	v->a[252][sym_simple_expansion] = state(586);
	v->a[252][sym_expansion] = state(586);
	v->a[252][sym_command_substitution] = state(586);
	v->a[252][aux_sym_redirected_statement_repeat2] = state(2115);
	v->a[252][aux_sym_command_repeat1] = state(1017);
	v->a[252][aux_sym__literal_repeat1] = state(963);
	v->a[252][sym_word] = actions(339);
	v->a[252][anon_sym_for] = actions(341);
	v->a[252][anon_sym_select] = actions(341);
	v->a[252][anon_sym_while] = actions(343);
	parse_table_966(v);
}

void	parse_table_966(t_parse_table_array *v)
{
	v->a[252][anon_sym_until] = actions(343);
	v->a[252][anon_sym_if] = actions(345);
	v->a[252][anon_sym_case] = actions(347);
	v->a[252][anon_sym_LPAREN] = actions(349);
	v->a[252][anon_sym_function] = actions(353);
	v->a[252][anon_sym_LBRACE] = actions(355);
	v->a[252][anon_sym_BANG] = actions(357);
	v->a[252][anon_sym_declare] = actions(359);
	v->a[252][anon_sym_typeset] = actions(359);
	v->a[252][anon_sym_export] = actions(359);
	v->a[252][anon_sym_readonly] = actions(359);
	v->a[252][anon_sym_local] = actions(359);
	v->a[252][anon_sym_unset] = actions(361);
	v->a[252][anon_sym_unsetenv] = actions(361);
	v->a[252][anon_sym_LT] = actions(363);
	v->a[252][anon_sym_GT] = actions(363);
	v->a[252][anon_sym_GT_GT] = actions(365);
	v->a[252][anon_sym_AMP_GT] = actions(363);
	v->a[252][anon_sym_AMP_GT_GT] = actions(365);
	v->a[252][anon_sym_LT_AMP] = actions(363);
	parse_table_967(v);
}

void	parse_table_967(t_parse_table_array *v)
{
	v->a[252][anon_sym_GT_AMP] = actions(363);
	v->a[252][anon_sym_GT_PIPE] = actions(365);
	v->a[252][anon_sym_LT_AMP_DASH] = actions(367);
	v->a[252][anon_sym_GT_AMP_DASH] = actions(367);
	v->a[252][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(369);
	v->a[252][anon_sym_DOLLAR] = actions(371);
	v->a[252][sym__special_character] = actions(373);
	v->a[252][anon_sym_DQUOTE] = actions(375);
	v->a[252][sym_raw_string] = actions(377);
	v->a[252][aux_sym_number_token1] = actions(379);
	v->a[252][aux_sym_number_token2] = actions(381);
	v->a[252][anon_sym_DOLLAR_LBRACE] = actions(383);
	v->a[252][anon_sym_DOLLAR_LPAREN] = actions(385);
	v->a[252][anon_sym_BQUOTE] = actions(387);
	v->a[252][anon_sym_DOLLAR_BQUOTE] = actions(389);
	v->a[252][sym_comment] = actions(57);
	v->a[252][sym_file_descriptor] = actions(391);
	v->a[252][sym_variable_name] = actions(393);
	v->a[252][sym_test_operator] = actions(377);
	v->a[252][sym__brace_start] = actions(395);
	parse_table_968(v);
}

void	parse_table_968(t_parse_table_array *v)
{
	v->a[253][sym__statement_not_pipeline] = state(3515);
	v->a[253][sym_redirected_statement] = state(2292);
	v->a[253][sym_for_statement] = state(2292);
	v->a[253][sym_while_statement] = state(2292);
	v->a[253][sym_if_statement] = state(2292);
	v->a[253][sym_case_statement] = state(2292);
	v->a[253][sym_function_definition] = state(2292);
	v->a[253][sym_compound_statement] = state(2292);
	v->a[253][sym_subshell] = state(2292);
	v->a[253][sym_pipeline] = state(2291);
	v->a[253][sym_list] = state(2292);
	v->a[253][sym_negated_command] = state(2292);
	v->a[253][sym_declaration_command] = state(2292);
	v->a[253][sym_unset_command] = state(2292);
	v->a[253][sym_command] = state(2292);
	v->a[253][sym_command_name] = state(310);
	v->a[253][sym_variable_assignment] = state(635);
	v->a[253][sym_variable_assignments] = state(2292);
	v->a[253][sym_file_redirect] = state(1320);
	v->a[253][sym_arithmetic_expansion] = state(834);
	parse_table_969(v);
}

void	parse_table_969(t_parse_table_array *v)
{
	v->a[253][sym_brace_expression] = state(834);
	v->a[253][sym_concatenation] = state(1192);
	v->a[253][sym_string] = state(834);
	v->a[253][sym_number] = state(834);
	v->a[253][sym_simple_expansion] = state(834);
	v->a[253][sym_expansion] = state(834);
	v->a[253][sym_command_substitution] = state(834);
	v->a[253][aux_sym_redirected_statement_repeat2] = state(2385);
	v->a[253][aux_sym_command_repeat1] = state(1035);
	v->a[253][aux_sym__literal_repeat1] = state(1048);
	v->a[253][sym_word] = actions(65);
	v->a[253][anon_sym_for] = actions(9);
	v->a[253][anon_sym_select] = actions(9);
	v->a[253][anon_sym_while] = actions(11);
	v->a[253][anon_sym_until] = actions(11);
	v->a[253][anon_sym_if] = actions(13);
	v->a[253][anon_sym_case] = actions(15);
	v->a[253][anon_sym_LPAREN] = actions(17);
	v->a[253][anon_sym_function] = actions(73);
	v->a[253][anon_sym_LBRACE] = actions(21);
	parse_table_970(v);
}

/* EOF parse_table_193.c */
