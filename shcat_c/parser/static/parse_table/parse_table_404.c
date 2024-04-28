/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_404.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_2020(t_parse_table_array *v)
{
	v->a[445][anon_sym_GT_PIPE] = actions(1001);
	v->a[445][anon_sym_LT_AMP_DASH] = actions(1011);
	v->a[445][anon_sym_GT_AMP_DASH] = actions(1011);
	v->a[445][anon_sym_LT_LT_LT] = actions(1013);
	v->a[445][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(312);
	v->a[445][anon_sym_DOLLAR_LBRACK] = actions(314);
	v->a[445][anon_sym_DOLLAR] = actions(316);
	v->a[445][sym__special_character] = actions(1015);
	v->a[445][anon_sym_DQUOTE] = actions(320);
	v->a[445][sym_raw_string] = actions(1017);
	v->a[445][sym_ansi_c_string] = actions(1017);
	v->a[445][aux_sym_number_token1] = actions(324);
	v->a[445][aux_sym_number_token2] = actions(326);
	v->a[445][anon_sym_DOLLAR_LBRACE] = actions(328);
	v->a[445][anon_sym_DOLLAR_LPAREN] = actions(330);
	v->a[445][anon_sym_BQUOTE] = actions(332);
	v->a[445][anon_sym_DOLLAR_BQUOTE] = actions(334);
	v->a[445][anon_sym_LT_LPAREN] = actions(336);
	v->a[445][anon_sym_GT_LPAREN] = actions(336);
	v->a[445][sym_comment] = actions(71);
	parse_table_2021(v);
}

void	parse_table_2021(t_parse_table_array *v)
{
	v->a[445][sym_file_descriptor] = actions(1019);
	v->a[445][sym_variable_name] = actions(1021);
	v->a[445][sym_test_operator] = actions(1023);
	v->a[445][sym__brace_start] = actions(344);
	v->a[446][sym__statement_not_pipeline] = state(4794);
	v->a[446][sym_redirected_statement] = state(4794);
	v->a[446][sym_for_statement] = state(4794);
	v->a[446][sym_c_style_for_statement] = state(4794);
	v->a[446][sym_while_statement] = state(5058);
	v->a[446][sym_if_statement] = state(5058);
	v->a[446][sym_case_statement] = state(4794);
	v->a[446][sym_function_definition] = state(4794);
	v->a[446][sym_compound_statement] = state(4794);
	v->a[446][sym_subshell] = state(4794);
	v->a[446][sym_pipeline] = state(5559);
	v->a[446][sym_list] = state(4794);
	v->a[446][sym_negated_command] = state(4794);
	v->a[446][sym_test_command] = state(4794);
	v->a[446][sym_declaration_command] = state(4794);
	v->a[446][sym_unset_command] = state(4794);
	parse_table_2022(v);
}

void	parse_table_2022(t_parse_table_array *v)
{
	v->a[446][sym_command] = state(4794);
	v->a[446][sym_command_name] = state(596);
	v->a[446][sym_variable_assignment] = state(1627);
	v->a[446][sym_variable_assignments] = state(4794);
	v->a[446][sym_subscript] = state(6759);
	v->a[446][sym_file_redirect] = state(2019);
	v->a[446][sym_herestring_redirect] = state(2017);
	v->a[446][sym_arithmetic_expansion] = state(1717);
	v->a[446][sym_brace_expression] = state(1717);
	v->a[446][sym_concatenation] = state(1376);
	v->a[446][sym_string] = state(1717);
	v->a[446][sym_translated_string] = state(1717);
	v->a[446][sym_number] = state(1717);
	v->a[446][sym_simple_expansion] = state(1717);
	v->a[446][sym_expansion] = state(1717);
	v->a[446][sym_command_substitution] = state(1717);
	v->a[446][sym_process_substitution] = state(1717);
	v->a[446][aux_sym_redirected_statement_repeat2] = state(5176);
	v->a[446][aux_sym_command_repeat1] = state(933);
	v->a[446][aux_sym__literal_repeat1] = state(1267);
	parse_table_2023(v);
}

void	parse_table_2023(t_parse_table_array *v)
{
	v->a[446][sym_word] = actions(997);
	v->a[446][anon_sym_for] = actions(9);
	v->a[446][anon_sym_select] = actions(11);
	v->a[446][anon_sym_LPAREN_LPAREN] = actions(288);
	v->a[446][anon_sym_LT] = actions(999);
	v->a[446][anon_sym_GT] = actions(999);
	v->a[446][anon_sym_GT_GT] = actions(1001);
	v->a[446][anon_sym_LPAREN] = actions(19);
	v->a[446][anon_sym_while] = actions(21);
	v->a[446][anon_sym_until] = actions(21);
	v->a[446][anon_sym_if] = actions(23);
	v->a[446][anon_sym_case] = actions(25);
	v->a[446][anon_sym_function] = actions(1003);
	v->a[446][anon_sym_LBRACE] = actions(29);
	v->a[446][anon_sym_BANG] = actions(1005);
	v->a[446][anon_sym_LBRACK] = actions(33);
	v->a[446][anon_sym_LBRACK_LBRACK] = actions(35);
	v->a[446][anon_sym_declare] = actions(1007);
	v->a[446][anon_sym_typeset] = actions(1007);
	v->a[446][anon_sym_export] = actions(1007);
	parse_table_2024(v);
}

void	parse_table_2024(t_parse_table_array *v)
{
	v->a[446][anon_sym_readonly] = actions(1007);
	v->a[446][anon_sym_local] = actions(1007);
	v->a[446][anon_sym_unset] = actions(1009);
	v->a[446][anon_sym_unsetenv] = actions(1009);
	v->a[446][anon_sym_AMP_GT] = actions(999);
	v->a[446][anon_sym_AMP_GT_GT] = actions(1001);
	v->a[446][anon_sym_LT_AMP] = actions(999);
	v->a[446][anon_sym_GT_AMP] = actions(999);
	v->a[446][anon_sym_GT_PIPE] = actions(1001);
	v->a[446][anon_sym_LT_AMP_DASH] = actions(1011);
	v->a[446][anon_sym_GT_AMP_DASH] = actions(1011);
	v->a[446][anon_sym_LT_LT_LT] = actions(1013);
	v->a[446][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(312);
	v->a[446][anon_sym_DOLLAR_LBRACK] = actions(314);
	v->a[446][anon_sym_DOLLAR] = actions(316);
	v->a[446][sym__special_character] = actions(1015);
	v->a[446][anon_sym_DQUOTE] = actions(320);
	v->a[446][sym_raw_string] = actions(1017);
	v->a[446][sym_ansi_c_string] = actions(1017);
	v->a[446][aux_sym_number_token1] = actions(324);
	parse_table_2025(v);
}

/* EOF parse_table_404.c */
