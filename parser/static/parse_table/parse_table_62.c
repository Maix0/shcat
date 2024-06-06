/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_62.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_310(t_parse_table_array *v)
{
	v->a[79][sym_brace_expression] = state(834);
	v->a[79][sym_concatenation] = state(1192);
	v->a[79][sym_string] = state(834);
	v->a[79][sym_number] = state(834);
	v->a[79][sym_simple_expansion] = state(834);
	v->a[79][sym_expansion] = state(834);
	v->a[79][sym_command_substitution] = state(834);
	v->a[79][aux_sym__statements_repeat1] = state(236);
	v->a[79][aux_sym_redirected_statement_repeat2] = state(2191);
	v->a[79][aux_sym_command_repeat1] = state(1008);
	v->a[79][aux_sym__literal_repeat1] = state(1048);
	v->a[79][sym_word] = actions(467);
	v->a[79][anon_sym_for] = actions(9);
	v->a[79][anon_sym_select] = actions(9);
	v->a[79][anon_sym_while] = actions(11);
	v->a[79][anon_sym_until] = actions(11);
	v->a[79][anon_sym_if] = actions(13);
	v->a[79][anon_sym_case] = actions(15);
	v->a[79][anon_sym_LPAREN] = actions(17);
	v->a[79][anon_sym_function] = actions(469);
	parse_table_311(v);
}

void	parse_table_311(t_parse_table_array *v)
{
	v->a[79][anon_sym_LBRACE] = actions(21);
	v->a[79][anon_sym_BANG] = actions(471);
	v->a[79][anon_sym_declare] = actions(473);
	v->a[79][anon_sym_typeset] = actions(473);
	v->a[79][anon_sym_export] = actions(473);
	v->a[79][anon_sym_readonly] = actions(473);
	v->a[79][anon_sym_local] = actions(473);
	v->a[79][anon_sym_unset] = actions(475);
	v->a[79][anon_sym_unsetenv] = actions(475);
	v->a[79][anon_sym_LT] = actions(81);
	v->a[79][anon_sym_GT] = actions(81);
	v->a[79][anon_sym_GT_GT] = actions(83);
	v->a[79][anon_sym_AMP_GT] = actions(81);
	v->a[79][anon_sym_AMP_GT_GT] = actions(83);
	v->a[79][anon_sym_LT_AMP] = actions(81);
	v->a[79][anon_sym_GT_AMP] = actions(81);
	v->a[79][anon_sym_GT_PIPE] = actions(83);
	v->a[79][anon_sym_LT_AMP_DASH] = actions(85);
	v->a[79][anon_sym_GT_AMP_DASH] = actions(85);
	v->a[79][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(87);
	parse_table_312(v);
}

void	parse_table_312(t_parse_table_array *v)
{
	v->a[79][anon_sym_DOLLAR] = actions(89);
	v->a[79][sym__special_character] = actions(91);
	v->a[79][anon_sym_DQUOTE] = actions(93);
	v->a[79][sym_raw_string] = actions(95);
	v->a[79][aux_sym_number_token1] = actions(97);
	v->a[79][aux_sym_number_token2] = actions(99);
	v->a[79][anon_sym_DOLLAR_LBRACE] = actions(101);
	v->a[79][anon_sym_DOLLAR_LPAREN] = actions(103);
	v->a[79][anon_sym_BQUOTE] = actions(105);
	v->a[79][anon_sym_DOLLAR_BQUOTE] = actions(107);
	v->a[79][sym_comment] = actions(57);
	v->a[79][sym_file_descriptor] = actions(109);
	v->a[79][sym_variable_name] = actions(111);
	v->a[79][sym_test_operator] = actions(95);
	v->a[79][sym__brace_start] = actions(113);
	v->a[80][sym__statements] = state(3889);
	v->a[80][sym__statement_not_pipeline] = state(3480);
	v->a[80][sym_redirected_statement] = state(2098);
	v->a[80][sym_for_statement] = state(2098);
	v->a[80][sym_while_statement] = state(2098);
	parse_table_313(v);
}

void	parse_table_313(t_parse_table_array *v)
{
	v->a[80][sym_if_statement] = state(2098);
	v->a[80][sym_case_statement] = state(2098);
	v->a[80][sym_function_definition] = state(2098);
	v->a[80][sym_compound_statement] = state(2098);
	v->a[80][sym_subshell] = state(2098);
	v->a[80][sym_pipeline] = state(2384);
	v->a[80][sym_list] = state(2098);
	v->a[80][sym_negated_command] = state(2098);
	v->a[80][sym_declaration_command] = state(2098);
	v->a[80][sym_unset_command] = state(2098);
	v->a[80][sym_command] = state(2098);
	v->a[80][sym_command_name] = state(292);
	v->a[80][sym_variable_assignment] = state(539);
	v->a[80][sym_variable_assignments] = state(2098);
	v->a[80][sym_file_redirect] = state(1299);
	v->a[80][sym_arithmetic_expansion] = state(702);
	v->a[80][sym_brace_expression] = state(702);
	v->a[80][sym_concatenation] = state(1192);
	v->a[80][sym_string] = state(702);
	v->a[80][sym_number] = state(702);
	parse_table_314(v);
}

void	parse_table_314(t_parse_table_array *v)
{
	v->a[80][sym_simple_expansion] = state(702);
	v->a[80][sym_expansion] = state(702);
	v->a[80][sym_command_substitution] = state(702);
	v->a[80][aux_sym__statements_repeat1] = state(226);
	v->a[80][aux_sym_redirected_statement_repeat2] = state(2325);
	v->a[80][aux_sym_command_repeat1] = state(1041);
	v->a[80][aux_sym__literal_repeat1] = state(1048);
	v->a[80][sym_word] = actions(419);
	v->a[80][anon_sym_for] = actions(9);
	v->a[80][anon_sym_select] = actions(9);
	v->a[80][anon_sym_while] = actions(11);
	v->a[80][anon_sym_until] = actions(11);
	v->a[80][anon_sym_if] = actions(13);
	v->a[80][anon_sym_case] = actions(15);
	v->a[80][anon_sym_LPAREN] = actions(17);
	v->a[80][anon_sym_function] = actions(423);
	v->a[80][anon_sym_LBRACE] = actions(21);
	v->a[80][anon_sym_BANG] = actions(425);
	v->a[80][anon_sym_declare] = actions(427);
	v->a[80][anon_sym_typeset] = actions(427);
	parse_table_315(v);
}

/* EOF parse_table_62.c */
