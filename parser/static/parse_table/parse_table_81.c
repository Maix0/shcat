/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_81.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_405(t_parse_table_array *v)
{
	v->a[104][sym_brace_expression] = state(834);
	v->a[104][sym_concatenation] = state(1192);
	v->a[104][sym_string] = state(834);
	v->a[104][sym_number] = state(834);
	v->a[104][sym_simple_expansion] = state(834);
	v->a[104][sym_expansion] = state(834);
	v->a[104][sym_command_substitution] = state(834);
	v->a[104][aux_sym_redirected_statement_repeat2] = state(2385);
	v->a[104][aux_sym_command_repeat1] = state(1035);
	v->a[104][aux_sym__literal_repeat1] = state(1048);
	v->a[104][sym_word] = actions(65);
	v->a[104][anon_sym_for] = actions(9);
	v->a[104][anon_sym_select] = actions(9);
	v->a[104][anon_sym_while] = actions(11);
	v->a[104][anon_sym_until] = actions(11);
	v->a[104][anon_sym_done] = actions(491);
	v->a[104][anon_sym_if] = actions(13);
	v->a[104][anon_sym_case] = actions(15);
	v->a[104][anon_sym_LPAREN] = actions(17);
	v->a[104][anon_sym_function] = actions(73);
	parse_table_406(v);
}

void	parse_table_406(t_parse_table_array *v)
{
	v->a[104][anon_sym_LBRACE] = actions(21);
	v->a[104][anon_sym_BANG] = actions(75);
	v->a[104][anon_sym_declare] = actions(77);
	v->a[104][anon_sym_typeset] = actions(77);
	v->a[104][anon_sym_export] = actions(77);
	v->a[104][anon_sym_readonly] = actions(77);
	v->a[104][anon_sym_local] = actions(77);
	v->a[104][anon_sym_unset] = actions(79);
	v->a[104][anon_sym_unsetenv] = actions(79);
	v->a[104][anon_sym_LT] = actions(81);
	v->a[104][anon_sym_GT] = actions(81);
	v->a[104][anon_sym_GT_GT] = actions(83);
	v->a[104][anon_sym_AMP_GT] = actions(81);
	v->a[104][anon_sym_AMP_GT_GT] = actions(83);
	v->a[104][anon_sym_LT_AMP] = actions(81);
	v->a[104][anon_sym_GT_AMP] = actions(81);
	v->a[104][anon_sym_GT_PIPE] = actions(83);
	v->a[104][anon_sym_LT_AMP_DASH] = actions(85);
	v->a[104][anon_sym_GT_AMP_DASH] = actions(85);
	v->a[104][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(87);
	parse_table_407(v);
}

void	parse_table_407(t_parse_table_array *v)
{
	v->a[104][anon_sym_DOLLAR] = actions(89);
	v->a[104][sym__special_character] = actions(91);
	v->a[104][anon_sym_DQUOTE] = actions(93);
	v->a[104][sym_raw_string] = actions(95);
	v->a[104][aux_sym_number_token1] = actions(97);
	v->a[104][aux_sym_number_token2] = actions(99);
	v->a[104][anon_sym_DOLLAR_LBRACE] = actions(101);
	v->a[104][anon_sym_DOLLAR_LPAREN] = actions(103);
	v->a[104][anon_sym_BQUOTE] = actions(105);
	v->a[104][anon_sym_DOLLAR_BQUOTE] = actions(107);
	v->a[104][sym_comment] = actions(57);
	v->a[104][sym_file_descriptor] = actions(109);
	v->a[104][sym_variable_name] = actions(111);
	v->a[104][sym_test_operator] = actions(95);
	v->a[104][sym__brace_start] = actions(113);
	v->a[105][sym__statements] = state(3613);
	v->a[105][sym__statement_not_pipeline] = state(3480);
	v->a[105][sym_redirected_statement] = state(2098);
	v->a[105][sym_for_statement] = state(2098);
	v->a[105][sym_while_statement] = state(2098);
	parse_table_408(v);
}

void	parse_table_408(t_parse_table_array *v)
{
	v->a[105][sym_if_statement] = state(2098);
	v->a[105][sym_case_statement] = state(2098);
	v->a[105][sym_function_definition] = state(2098);
	v->a[105][sym_compound_statement] = state(2098);
	v->a[105][sym_subshell] = state(2098);
	v->a[105][sym_pipeline] = state(2384);
	v->a[105][sym_list] = state(2098);
	v->a[105][sym_negated_command] = state(2098);
	v->a[105][sym_declaration_command] = state(2098);
	v->a[105][sym_unset_command] = state(2098);
	v->a[105][sym_command] = state(2098);
	v->a[105][sym_command_name] = state(292);
	v->a[105][sym_variable_assignment] = state(539);
	v->a[105][sym_variable_assignments] = state(2098);
	v->a[105][sym_file_redirect] = state(1279);
	v->a[105][sym_arithmetic_expansion] = state(702);
	v->a[105][sym_brace_expression] = state(702);
	v->a[105][sym_concatenation] = state(1192);
	v->a[105][sym_string] = state(702);
	v->a[105][sym_number] = state(702);
	parse_table_409(v);
}

void	parse_table_409(t_parse_table_array *v)
{
	v->a[105][sym_simple_expansion] = state(702);
	v->a[105][sym_expansion] = state(702);
	v->a[105][sym_command_substitution] = state(702);
	v->a[105][aux_sym__statements_repeat1] = state(226);
	v->a[105][aux_sym_redirected_statement_repeat2] = state(2325);
	v->a[105][aux_sym_command_repeat1] = state(1041);
	v->a[105][aux_sym__literal_repeat1] = state(1048);
	v->a[105][sym_word] = actions(419);
	v->a[105][anon_sym_for] = actions(9);
	v->a[105][anon_sym_select] = actions(9);
	v->a[105][anon_sym_while] = actions(11);
	v->a[105][anon_sym_until] = actions(11);
	v->a[105][anon_sym_if] = actions(13);
	v->a[105][anon_sym_case] = actions(15);
	v->a[105][anon_sym_LPAREN] = actions(17);
	v->a[105][anon_sym_function] = actions(423);
	v->a[105][anon_sym_LBRACE] = actions(21);
	v->a[105][anon_sym_BANG] = actions(425);
	v->a[105][anon_sym_declare] = actions(427);
	v->a[105][anon_sym_typeset] = actions(427);
	parse_table_410(v);
}

/* EOF parse_table_81.c */
