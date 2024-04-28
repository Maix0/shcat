/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_4.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_20(t_parse_table_array *v)
{
	v->a[3][anon_sym_until] = actions(21);
	v->a[3][anon_sym_if] = actions(23);
	v->a[3][anon_sym_case] = actions(25);
	v->a[3][anon_sym_function] = actions(91);
	v->a[3][anon_sym_LBRACE] = actions(29);
	v->a[3][anon_sym_BANG] = actions(93);
	v->a[3][anon_sym_LBRACK] = actions(33);
	v->a[3][anon_sym_LBRACK_LBRACK] = actions(35);
	v->a[3][anon_sym_declare] = actions(95);
	v->a[3][anon_sym_typeset] = actions(95);
	v->a[3][anon_sym_export] = actions(95);
	v->a[3][anon_sym_readonly] = actions(95);
	v->a[3][anon_sym_local] = actions(95);
	v->a[3][anon_sym_unset] = actions(97);
	v->a[3][anon_sym_unsetenv] = actions(97);
	v->a[3][anon_sym_AMP_GT] = actions(85);
	v->a[3][anon_sym_AMP_GT_GT] = actions(87);
	v->a[3][anon_sym_LT_AMP] = actions(85);
	v->a[3][anon_sym_GT_AMP] = actions(85);
	v->a[3][anon_sym_GT_PIPE] = actions(87);
	parse_table_21(v);
}

void	parse_table_21(t_parse_table_array *v)
{
	v->a[3][anon_sym_LT_AMP_DASH] = actions(99);
	v->a[3][anon_sym_GT_AMP_DASH] = actions(99);
	v->a[3][anon_sym_LT_LT_LT] = actions(101);
	v->a[3][anon_sym_PLUS_PLUS2] = actions(103);
	v->a[3][anon_sym_DASH_DASH2] = actions(103);
	v->a[3][anon_sym_DASH2] = actions(105);
	v->a[3][anon_sym_PLUS2] = actions(105);
	v->a[3][anon_sym_TILDE] = actions(107);
	v->a[3][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(109);
	v->a[3][anon_sym_DOLLAR_LBRACK] = actions(111);
	v->a[3][anon_sym_DOLLAR] = actions(113);
	v->a[3][sym__special_character] = actions(115);
	v->a[3][anon_sym_DQUOTE] = actions(117);
	v->a[3][sym_raw_string] = actions(119);
	v->a[3][sym_ansi_c_string] = actions(119);
	v->a[3][aux_sym_number_token1] = actions(121);
	v->a[3][aux_sym_number_token2] = actions(123);
	v->a[3][anon_sym_DOLLAR_LBRACE] = actions(125);
	v->a[3][anon_sym_DOLLAR_LPAREN] = actions(127);
	v->a[3][anon_sym_BQUOTE] = actions(129);
	parse_table_22(v);
}

void	parse_table_22(t_parse_table_array *v)
{
	v->a[3][anon_sym_DOLLAR_BQUOTE] = actions(131);
	v->a[3][anon_sym_LT_LPAREN] = actions(133);
	v->a[3][anon_sym_GT_LPAREN] = actions(133);
	v->a[3][sym_comment] = actions(71);
	v->a[3][sym_file_descriptor] = actions(135);
	v->a[3][sym_variable_name] = actions(137);
	v->a[3][sym_test_operator] = actions(139);
	v->a[3][sym__brace_start] = actions(141);
	v->a[4][sym__statement_not_pipeline] = state(6568);
	v->a[4][sym_redirected_statement] = state(5394);
	v->a[4][sym_for_statement] = state(5406);
	v->a[4][sym_c_style_for_statement] = state(5406);
	v->a[4][sym_while_statement] = state(5195);
	v->a[4][sym_if_statement] = state(5195);
	v->a[4][sym_case_statement] = state(5406);
	v->a[4][sym_function_definition] = state(5406);
	v->a[4][sym_compound_statement] = state(5406);
	v->a[4][sym_subshell] = state(5406);
	v->a[4][sym_pipeline] = state(5569);
	v->a[4][sym_list] = state(5406);
	parse_table_23(v);
}

void	parse_table_23(t_parse_table_array *v)
{
	v->a[4][sym_negated_command] = state(5406);
	v->a[4][sym_test_command] = state(5406);
	v->a[4][sym_declaration_command] = state(5406);
	v->a[4][sym_unset_command] = state(5406);
	v->a[4][sym_command] = state(5406);
	v->a[4][sym_command_name] = state(620);
	v->a[4][sym_variable_assignment] = state(1811);
	v->a[4][sym_variable_assignments] = state(5406);
	v->a[4][sym_subscript] = state(6756);
	v->a[4][sym_file_redirect] = state(2693);
	v->a[4][sym_herestring_redirect] = state(2691);
	v->a[4][sym__expression] = state(3131);
	v->a[4][sym_binary_expression] = state(3071);
	v->a[4][sym_ternary_expression] = state(3071);
	v->a[4][sym_unary_expression] = state(3071);
	v->a[4][sym_postfix_expression] = state(3071);
	v->a[4][sym_parenthesized_expression] = state(3071);
	v->a[4][sym_arithmetic_expansion] = state(496);
	v->a[4][sym_brace_expression] = state(496);
	v->a[4][sym_concatenation] = state(524);
	parse_table_24(v);
}

void	parse_table_24(t_parse_table_array *v)
{
	v->a[4][sym_string] = state(496);
	v->a[4][sym_translated_string] = state(496);
	v->a[4][sym_number] = state(496);
	v->a[4][sym_simple_expansion] = state(496);
	v->a[4][sym_expansion] = state(496);
	v->a[4][sym_command_substitution] = state(496);
	v->a[4][sym_process_substitution] = state(496);
	v->a[4][aux_sym_redirected_statement_repeat2] = state(5167);
	v->a[4][aux_sym_command_repeat1] = state(955);
	v->a[4][aux_sym__literal_repeat1] = state(522);
	v->a[4][sym_word] = actions(143);
	v->a[4][anon_sym_for] = actions(145);
	v->a[4][anon_sym_select] = actions(147);
	v->a[4][anon_sym_LPAREN_LPAREN] = actions(149);
	v->a[4][anon_sym_LT] = actions(151);
	v->a[4][anon_sym_GT] = actions(151);
	v->a[4][anon_sym_GT_GT] = actions(153);
	v->a[4][anon_sym_LPAREN] = actions(155);
	v->a[4][anon_sym_while] = actions(157);
	v->a[4][anon_sym_until] = actions(157);
	parse_table_25(v);
}

/* EOF parse_table_4.c */
