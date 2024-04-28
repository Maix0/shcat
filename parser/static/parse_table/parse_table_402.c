/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_402.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_2010(t_parse_table_array *v)
{
	v->a[443][anon_sym_LT] = actions(290);
	v->a[443][anon_sym_GT] = actions(290);
	v->a[443][anon_sym_GT_GT] = actions(292);
	v->a[443][anon_sym_LPAREN] = actions(19);
	v->a[443][anon_sym_while] = actions(21);
	v->a[443][anon_sym_until] = actions(21);
	v->a[443][anon_sym_if] = actions(23);
	v->a[443][anon_sym_case] = actions(25);
	v->a[443][anon_sym_function] = actions(300);
	v->a[443][anon_sym_LBRACE] = actions(29);
	v->a[443][anon_sym_BANG] = actions(302);
	v->a[443][anon_sym_LBRACK] = actions(33);
	v->a[443][anon_sym_LBRACK_LBRACK] = actions(35);
	v->a[443][anon_sym_declare] = actions(304);
	v->a[443][anon_sym_typeset] = actions(304);
	v->a[443][anon_sym_export] = actions(304);
	v->a[443][anon_sym_readonly] = actions(304);
	v->a[443][anon_sym_local] = actions(304);
	v->a[443][anon_sym_unset] = actions(306);
	v->a[443][anon_sym_unsetenv] = actions(306);
	parse_table_2011(v);
}

void	parse_table_2011(t_parse_table_array *v)
{
	v->a[443][anon_sym_AMP_GT] = actions(290);
	v->a[443][anon_sym_AMP_GT_GT] = actions(292);
	v->a[443][anon_sym_LT_AMP] = actions(290);
	v->a[443][anon_sym_GT_AMP] = actions(290);
	v->a[443][anon_sym_GT_PIPE] = actions(292);
	v->a[443][anon_sym_LT_AMP_DASH] = actions(308);
	v->a[443][anon_sym_GT_AMP_DASH] = actions(308);
	v->a[443][anon_sym_LT_LT_LT] = actions(310);
	v->a[443][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(312);
	v->a[443][anon_sym_DOLLAR_LBRACK] = actions(314);
	v->a[443][anon_sym_DOLLAR] = actions(316);
	v->a[443][sym__special_character] = actions(318);
	v->a[443][anon_sym_DQUOTE] = actions(320);
	v->a[443][sym_raw_string] = actions(322);
	v->a[443][sym_ansi_c_string] = actions(322);
	v->a[443][aux_sym_number_token1] = actions(324);
	v->a[443][aux_sym_number_token2] = actions(326);
	v->a[443][anon_sym_DOLLAR_LBRACE] = actions(328);
	v->a[443][anon_sym_DOLLAR_LPAREN] = actions(330);
	v->a[443][anon_sym_BQUOTE] = actions(332);
	parse_table_2012(v);
}

void	parse_table_2012(t_parse_table_array *v)
{
	v->a[443][anon_sym_DOLLAR_BQUOTE] = actions(334);
	v->a[443][anon_sym_LT_LPAREN] = actions(336);
	v->a[443][anon_sym_GT_LPAREN] = actions(336);
	v->a[443][sym_comment] = actions(71);
	v->a[443][sym_file_descriptor] = actions(338);
	v->a[443][sym_variable_name] = actions(340);
	v->a[443][sym_test_operator] = actions(342);
	v->a[443][sym__brace_start] = actions(344);
	v->a[444][sym__statement_not_pipeline] = state(6718);
	v->a[444][sym_redirected_statement] = state(4996);
	v->a[444][sym_for_statement] = state(4996);
	v->a[444][sym_c_style_for_statement] = state(4996);
	v->a[444][sym_while_statement] = state(4570);
	v->a[444][sym_if_statement] = state(4570);
	v->a[444][sym_case_statement] = state(4996);
	v->a[444][sym_function_definition] = state(4996);
	v->a[444][sym_compound_statement] = state(4996);
	v->a[444][sym_subshell] = state(4996);
	v->a[444][sym_pipeline] = state(4997);
	v->a[444][sym_list] = state(4996);
	parse_table_2013(v);
}

void	parse_table_2013(t_parse_table_array *v)
{
	v->a[444][sym_negated_command] = state(4996);
	v->a[444][sym_test_command] = state(4996);
	v->a[444][sym_declaration_command] = state(4996);
	v->a[444][sym_unset_command] = state(4996);
	v->a[444][sym_command] = state(4996);
	v->a[444][sym_command_name] = state(544);
	v->a[444][sym_variable_assignment] = state(1096);
	v->a[444][sym_variable_assignments] = state(4996);
	v->a[444][sym_subscript] = state(6790);
	v->a[444][sym_file_redirect] = state(2019);
	v->a[444][sym_herestring_redirect] = state(2017);
	v->a[444][sym_arithmetic_expansion] = state(1078);
	v->a[444][sym_brace_expression] = state(1078);
	v->a[444][sym_concatenation] = state(1376);
	v->a[444][sym_string] = state(1078);
	v->a[444][sym_translated_string] = state(1078);
	v->a[444][sym_number] = state(1078);
	v->a[444][sym_simple_expansion] = state(1078);
	v->a[444][sym_expansion] = state(1078);
	v->a[444][sym_command_substitution] = state(1078);
	parse_table_2014(v);
}

void	parse_table_2014(t_parse_table_array *v)
{
	v->a[444][sym_process_substitution] = state(1078);
	v->a[444][aux_sym_redirected_statement_repeat2] = state(4644);
	v->a[444][aux_sym_command_repeat1] = state(997);
	v->a[444][aux_sym__literal_repeat1] = state(1267);
	v->a[444][sym_word] = actions(286);
	v->a[444][anon_sym_for] = actions(9);
	v->a[444][anon_sym_select] = actions(11);
	v->a[444][anon_sym_LPAREN_LPAREN] = actions(288);
	v->a[444][anon_sym_LT] = actions(290);
	v->a[444][anon_sym_GT] = actions(290);
	v->a[444][anon_sym_GT_GT] = actions(292);
	v->a[444][anon_sym_LPAREN] = actions(19);
	v->a[444][anon_sym_while] = actions(21);
	v->a[444][anon_sym_until] = actions(21);
	v->a[444][anon_sym_if] = actions(23);
	v->a[444][anon_sym_case] = actions(25);
	v->a[444][anon_sym_function] = actions(300);
	v->a[444][anon_sym_LBRACE] = actions(29);
	v->a[444][anon_sym_BANG] = actions(302);
	v->a[444][anon_sym_LBRACK] = actions(33);
	parse_table_2015(v);
}

/* EOF parse_table_402.c */
