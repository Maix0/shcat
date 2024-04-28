/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_17.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_85(t_parse_table_array *v)
{
	v->a[16][anon_sym_DASH_DASH2] = actions(183);
	v->a[16][anon_sym_DASH2] = actions(185);
	v->a[16][anon_sym_PLUS2] = actions(185);
	v->a[16][anon_sym_TILDE] = actions(187);
	v->a[16][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(352);
	v->a[16][anon_sym_DOLLAR_LBRACK] = actions(363);
	v->a[16][aux_sym_concatenation_token1] = actions(365);
	v->a[16][anon_sym_DOLLAR] = actions(367);
	v->a[16][sym__special_character] = actions(369);
	v->a[16][anon_sym_DQUOTE] = actions(371);
	v->a[16][sym_raw_string] = actions(373);
	v->a[16][sym_ansi_c_string] = actions(373);
	v->a[16][aux_sym_number_token1] = actions(375);
	v->a[16][aux_sym_number_token2] = actions(377);
	v->a[16][anon_sym_DOLLAR_LBRACE] = actions(379);
	v->a[16][anon_sym_DOLLAR_LPAREN] = actions(381);
	v->a[16][anon_sym_BQUOTE] = actions(383);
	v->a[16][anon_sym_DOLLAR_BQUOTE] = actions(385);
	v->a[16][anon_sym_LT_LPAREN] = actions(387);
	v->a[16][anon_sym_GT_LPAREN] = actions(387);
	parse_table_86(v);
}

void	parse_table_86(t_parse_table_array *v)
{
	v->a[16][sym_comment] = actions(71);
	v->a[16][sym_file_descriptor] = actions(278);
	v->a[16][sym__concat] = actions(365);
	v->a[16][sym_test_operator] = actions(389);
	v->a[16][sym__bare_dollar] = actions(278);
	v->a[16][sym__brace_start] = actions(391);
	v->a[17][aux_sym__terminated_statement] = state(15);
	v->a[17][sym__statement_not_pipeline] = state(6718);
	v->a[17][sym_redirected_statement] = state(5007);
	v->a[17][sym_for_statement] = state(5007);
	v->a[17][sym_c_style_for_statement] = state(5007);
	v->a[17][sym_while_statement] = state(4551);
	v->a[17][sym_if_statement] = state(4551);
	v->a[17][sym_elif_clause] = state(6340);
	v->a[17][sym_else_clause] = state(7114);
	v->a[17][sym_case_statement] = state(5007);
	v->a[17][sym_function_definition] = state(5007);
	v->a[17][sym_compound_statement] = state(5007);
	v->a[17][sym_subshell] = state(5007);
	v->a[17][sym_pipeline] = state(5189);
	parse_table_87(v);
}

void	parse_table_87(t_parse_table_array *v)
{
	v->a[17][sym_list] = state(5007);
	v->a[17][sym_negated_command] = state(5007);
	v->a[17][sym_test_command] = state(5007);
	v->a[17][sym_declaration_command] = state(5007);
	v->a[17][sym_unset_command] = state(5007);
	v->a[17][sym_command] = state(5007);
	v->a[17][sym_command_name] = state(544);
	v->a[17][sym_variable_assignment] = state(1151);
	v->a[17][sym_variable_assignments] = state(5007);
	v->a[17][sym_subscript] = state(6790);
	v->a[17][sym_file_redirect] = state(2019);
	v->a[17][sym_herestring_redirect] = state(2017);
	v->a[17][sym_arithmetic_expansion] = state(1078);
	v->a[17][sym_brace_expression] = state(1078);
	v->a[17][sym_concatenation] = state(1376);
	v->a[17][sym_string] = state(1078);
	v->a[17][sym_translated_string] = state(1078);
	v->a[17][sym_number] = state(1078);
	v->a[17][sym_simple_expansion] = state(1078);
	v->a[17][sym_expansion] = state(1078);
	parse_table_88(v);
}

void	parse_table_88(t_parse_table_array *v)
{
	v->a[17][sym_command_substitution] = state(1078);
	v->a[17][sym_process_substitution] = state(1078);
	v->a[17][aux_sym_redirected_statement_repeat2] = state(4644);
	v->a[17][aux_sym_if_statement_repeat1] = state(6340);
	v->a[17][aux_sym_command_repeat1] = state(997);
	v->a[17][aux_sym__literal_repeat1] = state(1267);
	v->a[17][sym_word] = actions(286);
	v->a[17][anon_sym_for] = actions(9);
	v->a[17][anon_sym_select] = actions(11);
	v->a[17][anon_sym_LPAREN_LPAREN] = actions(288);
	v->a[17][anon_sym_LT] = actions(290);
	v->a[17][anon_sym_GT] = actions(290);
	v->a[17][anon_sym_GT_GT] = actions(292);
	v->a[17][anon_sym_LPAREN] = actions(19);
	v->a[17][anon_sym_while] = actions(21);
	v->a[17][anon_sym_until] = actions(21);
	v->a[17][anon_sym_if] = actions(23);
	v->a[17][anon_sym_fi] = actions(393);
	v->a[17][anon_sym_elif] = actions(296);
	v->a[17][anon_sym_else] = actions(298);
	parse_table_89(v);
}

void	parse_table_89(t_parse_table_array *v)
{
	v->a[17][anon_sym_case] = actions(25);
	v->a[17][anon_sym_function] = actions(300);
	v->a[17][anon_sym_LBRACE] = actions(29);
	v->a[17][anon_sym_BANG] = actions(302);
	v->a[17][anon_sym_LBRACK] = actions(33);
	v->a[17][anon_sym_LBRACK_LBRACK] = actions(35);
	v->a[17][anon_sym_declare] = actions(304);
	v->a[17][anon_sym_typeset] = actions(304);
	v->a[17][anon_sym_export] = actions(304);
	v->a[17][anon_sym_readonly] = actions(304);
	v->a[17][anon_sym_local] = actions(304);
	v->a[17][anon_sym_unset] = actions(306);
	v->a[17][anon_sym_unsetenv] = actions(306);
	v->a[17][anon_sym_AMP_GT] = actions(290);
	v->a[17][anon_sym_AMP_GT_GT] = actions(292);
	v->a[17][anon_sym_LT_AMP] = actions(290);
	v->a[17][anon_sym_GT_AMP] = actions(290);
	v->a[17][anon_sym_GT_PIPE] = actions(292);
	v->a[17][anon_sym_LT_AMP_DASH] = actions(308);
	v->a[17][anon_sym_GT_AMP_DASH] = actions(308);
	parse_table_90(v);
}

/* EOF parse_table_17.c */
