/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_73.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_365(t_parse_table_array *v)
{
	v->a[77][anon_sym_LPAREN] = actions(19);
	v->a[77][anon_sym_while] = actions(21);
	v->a[77][anon_sym_until] = actions(21);
	v->a[77][anon_sym_if] = actions(23);
	v->a[77][anon_sym_case] = actions(25);
	v->a[77][anon_sym_function] = actions(91);
	v->a[77][anon_sym_LBRACE] = actions(29);
	v->a[77][anon_sym_BANG] = actions(769);
	v->a[77][anon_sym_LBRACK] = actions(33);
	v->a[77][anon_sym_LBRACK_LBRACK] = actions(35);
	v->a[77][anon_sym_declare] = actions(95);
	v->a[77][anon_sym_typeset] = actions(95);
	v->a[77][anon_sym_export] = actions(95);
	v->a[77][anon_sym_readonly] = actions(95);
	v->a[77][anon_sym_local] = actions(95);
	v->a[77][anon_sym_unset] = actions(97);
	v->a[77][anon_sym_unsetenv] = actions(97);
	v->a[77][anon_sym_AMP_GT] = actions(85);
	v->a[77][anon_sym_AMP_GT_GT] = actions(87);
	v->a[77][anon_sym_LT_AMP] = actions(85);
	parse_table_366(v);
}

void	parse_table_366(t_parse_table_array *v)
{
	v->a[77][anon_sym_GT_AMP] = actions(85);
	v->a[77][anon_sym_GT_PIPE] = actions(87);
	v->a[77][anon_sym_LT_AMP_DASH] = actions(99);
	v->a[77][anon_sym_GT_AMP_DASH] = actions(99);
	v->a[77][anon_sym_LT_LT_LT] = actions(101);
	v->a[77][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(312);
	v->a[77][anon_sym_DOLLAR_LBRACK] = actions(314);
	v->a[77][anon_sym_DOLLAR] = actions(316);
	v->a[77][sym__special_character] = actions(771);
	v->a[77][anon_sym_DQUOTE] = actions(320);
	v->a[77][sym_raw_string] = actions(773);
	v->a[77][sym_ansi_c_string] = actions(773);
	v->a[77][aux_sym_number_token1] = actions(324);
	v->a[77][aux_sym_number_token2] = actions(326);
	v->a[77][anon_sym_DOLLAR_LBRACE] = actions(328);
	v->a[77][anon_sym_DOLLAR_LPAREN] = actions(330);
	v->a[77][anon_sym_BQUOTE] = actions(332);
	v->a[77][anon_sym_DOLLAR_BQUOTE] = actions(334);
	v->a[77][anon_sym_LT_LPAREN] = actions(336);
	v->a[77][anon_sym_GT_LPAREN] = actions(336);
	parse_table_367(v);
}

void	parse_table_367(t_parse_table_array *v)
{
	v->a[77][sym_comment] = actions(71);
	v->a[77][sym_file_descriptor] = actions(135);
	v->a[77][sym_variable_name] = actions(137);
	v->a[77][sym_test_operator] = actions(775);
	v->a[77][sym__brace_start] = actions(344);
	v->a[78][aux_sym__terminated_statement] = state(105);
	v->a[78][sym__statement_not_pipeline] = state(6718);
	v->a[78][sym_redirected_statement] = state(4951);
	v->a[78][sym_for_statement] = state(4951);
	v->a[78][sym_c_style_for_statement] = state(4951);
	v->a[78][sym_while_statement] = state(4567);
	v->a[78][sym_if_statement] = state(4567);
	v->a[78][sym_case_statement] = state(4951);
	v->a[78][sym_function_definition] = state(4951);
	v->a[78][sym_compound_statement] = state(4951);
	v->a[78][sym_subshell] = state(4951);
	v->a[78][sym_pipeline] = state(5163);
	v->a[78][sym_list] = state(4951);
	v->a[78][sym_negated_command] = state(4951);
	v->a[78][sym_test_command] = state(4951);
	parse_table_368(v);
}

void	parse_table_368(t_parse_table_array *v)
{
	v->a[78][sym_declaration_command] = state(4951);
	v->a[78][sym_unset_command] = state(4951);
	v->a[78][sym_command] = state(4951);
	v->a[78][sym_command_name] = state(544);
	v->a[78][sym_variable_assignment] = state(1153);
	v->a[78][sym_variable_assignments] = state(4951);
	v->a[78][sym_subscript] = state(6790);
	v->a[78][sym_file_redirect] = state(2019);
	v->a[78][sym_herestring_redirect] = state(2017);
	v->a[78][sym_arithmetic_expansion] = state(1078);
	v->a[78][sym_brace_expression] = state(1078);
	v->a[78][sym_concatenation] = state(1376);
	v->a[78][sym_string] = state(1078);
	v->a[78][sym_translated_string] = state(1078);
	v->a[78][sym_number] = state(1078);
	v->a[78][sym_simple_expansion] = state(1078);
	v->a[78][sym_expansion] = state(1078);
	v->a[78][sym_command_substitution] = state(1078);
	v->a[78][sym_process_substitution] = state(1078);
	v->a[78][aux_sym_redirected_statement_repeat2] = state(4644);
	parse_table_369(v);
}

void	parse_table_369(t_parse_table_array *v)
{
	v->a[78][aux_sym_command_repeat1] = state(997);
	v->a[78][aux_sym__literal_repeat1] = state(1267);
	v->a[78][sym_word] = actions(286);
	v->a[78][anon_sym_for] = actions(9);
	v->a[78][anon_sym_select] = actions(11);
	v->a[78][anon_sym_LPAREN_LPAREN] = actions(288);
	v->a[78][anon_sym_LT] = actions(290);
	v->a[78][anon_sym_GT] = actions(290);
	v->a[78][anon_sym_GT_GT] = actions(292);
	v->a[78][anon_sym_LPAREN] = actions(19);
	v->a[78][anon_sym_while] = actions(21);
	v->a[78][anon_sym_until] = actions(21);
	v->a[78][anon_sym_done] = actions(825);
	v->a[78][anon_sym_if] = actions(23);
	v->a[78][anon_sym_case] = actions(25);
	v->a[78][anon_sym_function] = actions(300);
	v->a[78][anon_sym_LBRACE] = actions(29);
	v->a[78][anon_sym_BANG] = actions(302);
	v->a[78][anon_sym_LBRACK] = actions(33);
	v->a[78][anon_sym_LBRACK_LBRACK] = actions(35);
	parse_table_370(v);
}

/* EOF parse_table_73.c */
