/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_399.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_1995(t_parse_table_array *v)
{
	v->a[440][sym_while_statement] = state(5117);
	v->a[440][sym_if_statement] = state(5117);
	v->a[440][sym_case_statement] = state(5383);
	v->a[440][sym_function_definition] = state(5383);
	v->a[440][sym_compound_statement] = state(5383);
	v->a[440][sym_subshell] = state(5383);
	v->a[440][sym_pipeline] = state(5535);
	v->a[440][sym_list] = state(5383);
	v->a[440][sym_negated_command] = state(5383);
	v->a[440][sym_test_command] = state(5383);
	v->a[440][sym_declaration_command] = state(5383);
	v->a[440][sym_unset_command] = state(5383);
	v->a[440][sym_command] = state(5383);
	v->a[440][sym_command_name] = state(596);
	v->a[440][sym_variable_assignment] = state(1707);
	v->a[440][sym_variable_assignments] = state(5383);
	v->a[440][sym_subscript] = state(6759);
	v->a[440][sym_file_redirect] = state(2019);
	v->a[440][sym_herestring_redirect] = state(2017);
	v->a[440][sym_arithmetic_expansion] = state(1717);
	parse_table_1996(v);
}

void	parse_table_1996(t_parse_table_array *v)
{
	v->a[440][sym_brace_expression] = state(1717);
	v->a[440][sym_concatenation] = state(1376);
	v->a[440][sym_string] = state(1717);
	v->a[440][sym_translated_string] = state(1717);
	v->a[440][sym_number] = state(1717);
	v->a[440][sym_simple_expansion] = state(1717);
	v->a[440][sym_expansion] = state(1717);
	v->a[440][sym_command_substitution] = state(1717);
	v->a[440][sym_process_substitution] = state(1717);
	v->a[440][aux_sym_redirected_statement_repeat2] = state(5176);
	v->a[440][aux_sym_command_repeat1] = state(933);
	v->a[440][aux_sym__literal_repeat1] = state(1267);
	v->a[440][sym_word] = actions(997);
	v->a[440][anon_sym_for] = actions(9);
	v->a[440][anon_sym_select] = actions(11);
	v->a[440][anon_sym_LPAREN_LPAREN] = actions(288);
	v->a[440][anon_sym_LT] = actions(999);
	v->a[440][anon_sym_GT] = actions(999);
	v->a[440][anon_sym_GT_GT] = actions(1001);
	v->a[440][anon_sym_LPAREN] = actions(19);
	parse_table_1997(v);
}

void	parse_table_1997(t_parse_table_array *v)
{
	v->a[440][anon_sym_while] = actions(21);
	v->a[440][anon_sym_until] = actions(21);
	v->a[440][anon_sym_if] = actions(23);
	v->a[440][anon_sym_case] = actions(25);
	v->a[440][anon_sym_function] = actions(1003);
	v->a[440][anon_sym_LBRACE] = actions(29);
	v->a[440][anon_sym_BANG] = actions(1005);
	v->a[440][anon_sym_LBRACK] = actions(33);
	v->a[440][anon_sym_LBRACK_LBRACK] = actions(35);
	v->a[440][anon_sym_declare] = actions(1007);
	v->a[440][anon_sym_typeset] = actions(1007);
	v->a[440][anon_sym_export] = actions(1007);
	v->a[440][anon_sym_readonly] = actions(1007);
	v->a[440][anon_sym_local] = actions(1007);
	v->a[440][anon_sym_unset] = actions(1009);
	v->a[440][anon_sym_unsetenv] = actions(1009);
	v->a[440][anon_sym_AMP_GT] = actions(999);
	v->a[440][anon_sym_AMP_GT_GT] = actions(1001);
	v->a[440][anon_sym_LT_AMP] = actions(999);
	v->a[440][anon_sym_GT_AMP] = actions(999);
	parse_table_1998(v);
}

void	parse_table_1998(t_parse_table_array *v)
{
	v->a[440][anon_sym_GT_PIPE] = actions(1001);
	v->a[440][anon_sym_LT_AMP_DASH] = actions(1011);
	v->a[440][anon_sym_GT_AMP_DASH] = actions(1011);
	v->a[440][anon_sym_LT_LT_LT] = actions(1013);
	v->a[440][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(312);
	v->a[440][anon_sym_DOLLAR_LBRACK] = actions(314);
	v->a[440][anon_sym_DOLLAR] = actions(316);
	v->a[440][sym__special_character] = actions(1015);
	v->a[440][anon_sym_DQUOTE] = actions(320);
	v->a[440][sym_raw_string] = actions(1017);
	v->a[440][sym_ansi_c_string] = actions(1017);
	v->a[440][aux_sym_number_token1] = actions(324);
	v->a[440][aux_sym_number_token2] = actions(326);
	v->a[440][anon_sym_DOLLAR_LBRACE] = actions(328);
	v->a[440][anon_sym_DOLLAR_LPAREN] = actions(330);
	v->a[440][anon_sym_BQUOTE] = actions(332);
	v->a[440][anon_sym_DOLLAR_BQUOTE] = actions(334);
	v->a[440][anon_sym_LT_LPAREN] = actions(336);
	v->a[440][anon_sym_GT_LPAREN] = actions(336);
	v->a[440][sym_comment] = actions(71);
	parse_table_1999(v);
}

void	parse_table_1999(t_parse_table_array *v)
{
	v->a[440][sym_file_descriptor] = actions(1019);
	v->a[440][sym_variable_name] = actions(1021);
	v->a[440][sym_test_operator] = actions(1023);
	v->a[440][sym__brace_start] = actions(344);
	v->a[441][sym__statement_not_pipeline] = state(6614);
	v->a[441][sym_redirected_statement] = state(4717);
	v->a[441][sym_for_statement] = state(4717);
	v->a[441][sym_c_style_for_statement] = state(4717);
	v->a[441][sym_while_statement] = state(4376);
	v->a[441][sym_if_statement] = state(4376);
	v->a[441][sym_case_statement] = state(4717);
	v->a[441][sym_function_definition] = state(4717);
	v->a[441][sym_compound_statement] = state(4717);
	v->a[441][sym_subshell] = state(4717);
	v->a[441][sym_pipeline] = state(4716);
	v->a[441][sym_list] = state(4717);
	v->a[441][sym_negated_command] = state(4717);
	v->a[441][sym_test_command] = state(4717);
	v->a[441][sym_declaration_command] = state(4717);
	v->a[441][sym_unset_command] = state(4717);
	parse_table_2000(v);
}

/* EOF parse_table_399.c */
