/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_157.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_785(t_parse_table_array *v)
{
	v->a[170][sym_raw_string] = actions(322);
	v->a[170][sym_ansi_c_string] = actions(322);
	v->a[170][aux_sym_number_token1] = actions(324);
	v->a[170][aux_sym_number_token2] = actions(326);
	v->a[170][anon_sym_DOLLAR_LBRACE] = actions(328);
	v->a[170][anon_sym_DOLLAR_LPAREN] = actions(330);
	v->a[170][anon_sym_BQUOTE] = actions(332);
	v->a[170][anon_sym_DOLLAR_BQUOTE] = actions(334);
	v->a[170][anon_sym_LT_LPAREN] = actions(336);
	v->a[170][anon_sym_GT_LPAREN] = actions(336);
	v->a[170][sym_comment] = actions(71);
	v->a[170][sym_file_descriptor] = actions(338);
	v->a[170][sym_variable_name] = actions(340);
	v->a[170][sym_test_operator] = actions(342);
	v->a[170][sym__brace_start] = actions(344);
	v->a[171][sym__statements] = state(7167);
	v->a[171][sym__statement_not_pipeline] = state(6614);
	v->a[171][sym_redirected_statement] = state(4797);
	v->a[171][sym_for_statement] = state(4797);
	v->a[171][sym_c_style_for_statement] = state(4797);
	parse_table_786(v);
}

void	parse_table_786(t_parse_table_array *v)
{
	v->a[171][sym_while_statement] = state(4400);
	v->a[171][sym_if_statement] = state(4400);
	v->a[171][sym_case_statement] = state(4797);
	v->a[171][sym_function_definition] = state(4797);
	v->a[171][sym_compound_statement] = state(4797);
	v->a[171][sym_subshell] = state(4797);
	v->a[171][sym_pipeline] = state(5054);
	v->a[171][sym_list] = state(4797);
	v->a[171][sym_negated_command] = state(4797);
	v->a[171][sym_test_command] = state(4797);
	v->a[171][sym_declaration_command] = state(4797);
	v->a[171][sym_unset_command] = state(4797);
	v->a[171][sym_command] = state(4797);
	v->a[171][sym_command_name] = state(533);
	v->a[171][sym_variable_assignment] = state(945);
	v->a[171][sym_variable_assignments] = state(4797);
	v->a[171][sym_subscript] = state(6754);
	v->a[171][sym_file_redirect] = state(2019);
	v->a[171][sym_herestring_redirect] = state(2017);
	v->a[171][sym_arithmetic_expansion] = state(938);
	parse_table_787(v);
}

void	parse_table_787(t_parse_table_array *v)
{
	v->a[171][sym_brace_expression] = state(938);
	v->a[171][sym_concatenation] = state(1376);
	v->a[171][sym_string] = state(938);
	v->a[171][sym_translated_string] = state(938);
	v->a[171][sym_number] = state(938);
	v->a[171][sym_simple_expansion] = state(938);
	v->a[171][sym_expansion] = state(938);
	v->a[171][sym_command_substitution] = state(938);
	v->a[171][sym_process_substitution] = state(938);
	v->a[171][aux_sym__statements_repeat1] = state(423);
	v->a[171][aux_sym_redirected_statement_repeat2] = state(4480);
	v->a[171][aux_sym_command_repeat1] = state(951);
	v->a[171][aux_sym__literal_repeat1] = state(1267);
	v->a[171][sym_word] = actions(765);
	v->a[171][anon_sym_for] = actions(9);
	v->a[171][anon_sym_select] = actions(11);
	v->a[171][anon_sym_LPAREN_LPAREN] = actions(288);
	v->a[171][anon_sym_LT] = actions(85);
	v->a[171][anon_sym_GT] = actions(85);
	v->a[171][anon_sym_GT_GT] = actions(87);
	parse_table_788(v);
}

void	parse_table_788(t_parse_table_array *v)
{
	v->a[171][anon_sym_LPAREN] = actions(19);
	v->a[171][anon_sym_while] = actions(21);
	v->a[171][anon_sym_until] = actions(21);
	v->a[171][anon_sym_if] = actions(23);
	v->a[171][anon_sym_case] = actions(25);
	v->a[171][anon_sym_function] = actions(91);
	v->a[171][anon_sym_LBRACE] = actions(29);
	v->a[171][anon_sym_BANG] = actions(769);
	v->a[171][anon_sym_LBRACK] = actions(33);
	v->a[171][anon_sym_LBRACK_LBRACK] = actions(35);
	v->a[171][anon_sym_declare] = actions(95);
	v->a[171][anon_sym_typeset] = actions(95);
	v->a[171][anon_sym_export] = actions(95);
	v->a[171][anon_sym_readonly] = actions(95);
	v->a[171][anon_sym_local] = actions(95);
	v->a[171][anon_sym_unset] = actions(97);
	v->a[171][anon_sym_unsetenv] = actions(97);
	v->a[171][anon_sym_AMP_GT] = actions(85);
	v->a[171][anon_sym_AMP_GT_GT] = actions(87);
	v->a[171][anon_sym_LT_AMP] = actions(85);
	parse_table_789(v);
}

void	parse_table_789(t_parse_table_array *v)
{
	v->a[171][anon_sym_GT_AMP] = actions(85);
	v->a[171][anon_sym_GT_PIPE] = actions(87);
	v->a[171][anon_sym_LT_AMP_DASH] = actions(99);
	v->a[171][anon_sym_GT_AMP_DASH] = actions(99);
	v->a[171][anon_sym_LT_LT_LT] = actions(101);
	v->a[171][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(312);
	v->a[171][anon_sym_DOLLAR_LBRACK] = actions(314);
	v->a[171][anon_sym_DOLLAR] = actions(316);
	v->a[171][sym__special_character] = actions(771);
	v->a[171][anon_sym_DQUOTE] = actions(320);
	v->a[171][sym_raw_string] = actions(773);
	v->a[171][sym_ansi_c_string] = actions(773);
	v->a[171][aux_sym_number_token1] = actions(324);
	v->a[171][aux_sym_number_token2] = actions(326);
	v->a[171][anon_sym_DOLLAR_LBRACE] = actions(328);
	v->a[171][anon_sym_DOLLAR_LPAREN] = actions(330);
	v->a[171][anon_sym_BQUOTE] = actions(332);
	v->a[171][anon_sym_DOLLAR_BQUOTE] = actions(334);
	v->a[171][anon_sym_LT_LPAREN] = actions(336);
	v->a[171][anon_sym_GT_LPAREN] = actions(336);
	parse_table_790(v);
}

/* EOF parse_table_157.c */
