/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_3.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_15(t_parse_table_array *v)
{
	v->a[2][anon_sym_if] = actions(23);
	v->a[2][anon_sym_case] = actions(25);
	v->a[2][anon_sym_function] = actions(91);
	v->a[2][anon_sym_LBRACE] = actions(29);
	v->a[2][anon_sym_BANG] = actions(93);
	v->a[2][anon_sym_LBRACK] = actions(33);
	v->a[2][anon_sym_LBRACK_LBRACK] = actions(35);
	v->a[2][anon_sym_declare] = actions(95);
	v->a[2][anon_sym_typeset] = actions(95);
	v->a[2][anon_sym_export] = actions(95);
	v->a[2][anon_sym_readonly] = actions(95);
	v->a[2][anon_sym_local] = actions(95);
	v->a[2][anon_sym_unset] = actions(97);
	v->a[2][anon_sym_unsetenv] = actions(97);
	v->a[2][anon_sym_AMP_GT] = actions(85);
	v->a[2][anon_sym_AMP_GT_GT] = actions(87);
	v->a[2][anon_sym_LT_AMP] = actions(85);
	v->a[2][anon_sym_GT_AMP] = actions(85);
	v->a[2][anon_sym_GT_PIPE] = actions(87);
	v->a[2][anon_sym_LT_AMP_DASH] = actions(99);
	parse_table_16(v);
}

void	parse_table_16(t_parse_table_array *v)
{
	v->a[2][anon_sym_GT_AMP_DASH] = actions(99);
	v->a[2][anon_sym_LT_LT_LT] = actions(101);
	v->a[2][anon_sym_PLUS_PLUS2] = actions(103);
	v->a[2][anon_sym_DASH_DASH2] = actions(103);
	v->a[2][anon_sym_DASH2] = actions(105);
	v->a[2][anon_sym_PLUS2] = actions(105);
	v->a[2][anon_sym_TILDE] = actions(107);
	v->a[2][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(109);
	v->a[2][anon_sym_DOLLAR_LBRACK] = actions(111);
	v->a[2][anon_sym_DOLLAR] = actions(113);
	v->a[2][sym__special_character] = actions(115);
	v->a[2][anon_sym_DQUOTE] = actions(117);
	v->a[2][sym_raw_string] = actions(119);
	v->a[2][sym_ansi_c_string] = actions(119);
	v->a[2][aux_sym_number_token1] = actions(121);
	v->a[2][aux_sym_number_token2] = actions(123);
	v->a[2][anon_sym_DOLLAR_LBRACE] = actions(125);
	v->a[2][anon_sym_DOLLAR_LPAREN] = actions(127);
	v->a[2][anon_sym_BQUOTE] = actions(129);
	v->a[2][anon_sym_DOLLAR_BQUOTE] = actions(131);
	parse_table_17(v);
}

void	parse_table_17(t_parse_table_array *v)
{
	v->a[2][anon_sym_LT_LPAREN] = actions(133);
	v->a[2][anon_sym_GT_LPAREN] = actions(133);
	v->a[2][sym_comment] = actions(71);
	v->a[2][sym_file_descriptor] = actions(135);
	v->a[2][sym_variable_name] = actions(137);
	v->a[2][sym_test_operator] = actions(139);
	v->a[2][sym__brace_start] = actions(141);
	v->a[3][sym__statements] = state(6914);
	v->a[3][sym__statement_not_pipeline] = state(6614);
	v->a[3][sym_redirected_statement] = state(4797);
	v->a[3][sym_for_statement] = state(4797);
	v->a[3][sym_c_style_for_statement] = state(4797);
	v->a[3][sym_while_statement] = state(4400);
	v->a[3][sym_if_statement] = state(4400);
	v->a[3][sym_case_statement] = state(4797);
	v->a[3][sym_function_definition] = state(4797);
	v->a[3][sym_compound_statement] = state(4797);
	v->a[3][sym_subshell] = state(4797);
	v->a[3][sym_pipeline] = state(5054);
	v->a[3][sym_list] = state(4797);
	parse_table_18(v);
}

void	parse_table_18(t_parse_table_array *v)
{
	v->a[3][sym_negated_command] = state(4797);
	v->a[3][sym_test_command] = state(4797);
	v->a[3][sym_declaration_command] = state(4797);
	v->a[3][sym_unset_command] = state(4797);
	v->a[3][sym_command] = state(4797);
	v->a[3][sym_command_name] = state(533);
	v->a[3][sym_variable_assignment] = state(945);
	v->a[3][sym_variable_assignments] = state(4797);
	v->a[3][sym_subscript] = state(6754);
	v->a[3][sym_file_redirect] = state(2019);
	v->a[3][sym_herestring_redirect] = state(2017);
	v->a[3][sym__expression] = state(3042);
	v->a[3][sym_binary_expression] = state(3053);
	v->a[3][sym_ternary_expression] = state(3053);
	v->a[3][sym_unary_expression] = state(3053);
	v->a[3][sym_postfix_expression] = state(3053);
	v->a[3][sym_parenthesized_expression] = state(3053);
	v->a[3][sym_arithmetic_expansion] = state(472);
	v->a[3][sym_brace_expression] = state(472);
	v->a[3][sym_concatenation] = state(502);
	parse_table_19(v);
}

void	parse_table_19(t_parse_table_array *v)
{
	v->a[3][sym_string] = state(472);
	v->a[3][sym_translated_string] = state(472);
	v->a[3][sym_number] = state(472);
	v->a[3][sym_simple_expansion] = state(472);
	v->a[3][sym_expansion] = state(472);
	v->a[3][sym_command_substitution] = state(472);
	v->a[3][sym_process_substitution] = state(472);
	v->a[3][aux_sym__statements_repeat1] = state(423);
	v->a[3][aux_sym_redirected_statement_repeat2] = state(4480);
	v->a[3][aux_sym_command_repeat1] = state(951);
	v->a[3][aux_sym__literal_repeat1] = state(493);
	v->a[3][sym_word] = actions(81);
	v->a[3][anon_sym_for] = actions(9);
	v->a[3][anon_sym_select] = actions(11);
	v->a[3][anon_sym_LPAREN_LPAREN] = actions(83);
	v->a[3][anon_sym_LT] = actions(85);
	v->a[3][anon_sym_GT] = actions(85);
	v->a[3][anon_sym_GT_GT] = actions(87);
	v->a[3][anon_sym_LPAREN] = actions(89);
	v->a[3][anon_sym_while] = actions(21);
	parse_table_20(v);
}

/* EOF parse_table_3.c */
