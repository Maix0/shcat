/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_9.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_45(t_parse_table_array *v)
{
	v->a[8][anon_sym_if] = actions(159);
	v->a[8][anon_sym_case] = actions(161);
	v->a[8][anon_sym_function] = actions(163);
	v->a[8][anon_sym_LBRACE] = actions(165);
	v->a[8][anon_sym_BANG] = actions(167);
	v->a[8][anon_sym_LBRACK] = actions(169);
	v->a[8][anon_sym_RBRACK] = actions(229);
	v->a[8][anon_sym_LBRACK_LBRACK] = actions(173);
	v->a[8][anon_sym_declare] = actions(175);
	v->a[8][anon_sym_typeset] = actions(175);
	v->a[8][anon_sym_export] = actions(175);
	v->a[8][anon_sym_readonly] = actions(175);
	v->a[8][anon_sym_local] = actions(175);
	v->a[8][anon_sym_unset] = actions(177);
	v->a[8][anon_sym_unsetenv] = actions(177);
	v->a[8][anon_sym_AMP_GT] = actions(151);
	v->a[8][anon_sym_AMP_GT_GT] = actions(153);
	v->a[8][anon_sym_LT_AMP] = actions(151);
	v->a[8][anon_sym_GT_AMP] = actions(151);
	v->a[8][anon_sym_GT_PIPE] = actions(153);
	parse_table_46(v);
}

void	parse_table_46(t_parse_table_array *v)
{
	v->a[8][anon_sym_LT_AMP_DASH] = actions(179);
	v->a[8][anon_sym_GT_AMP_DASH] = actions(179);
	v->a[8][anon_sym_LT_LT_LT] = actions(181);
	v->a[8][anon_sym_PLUS_PLUS2] = actions(183);
	v->a[8][anon_sym_DASH_DASH2] = actions(183);
	v->a[8][anon_sym_DASH2] = actions(185);
	v->a[8][anon_sym_PLUS2] = actions(185);
	v->a[8][anon_sym_TILDE] = actions(187);
	v->a[8][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(189);
	v->a[8][anon_sym_DOLLAR_LBRACK] = actions(191);
	v->a[8][anon_sym_DOLLAR] = actions(193);
	v->a[8][sym__special_character] = actions(195);
	v->a[8][anon_sym_DQUOTE] = actions(197);
	v->a[8][sym_raw_string] = actions(199);
	v->a[8][sym_ansi_c_string] = actions(199);
	v->a[8][aux_sym_number_token1] = actions(201);
	v->a[8][aux_sym_number_token2] = actions(203);
	v->a[8][anon_sym_DOLLAR_LBRACE] = actions(205);
	v->a[8][anon_sym_DOLLAR_LPAREN] = actions(207);
	v->a[8][anon_sym_BQUOTE] = actions(209);
	parse_table_47(v);
}

void	parse_table_47(t_parse_table_array *v)
{
	v->a[8][anon_sym_DOLLAR_BQUOTE] = actions(211);
	v->a[8][anon_sym_LT_LPAREN] = actions(213);
	v->a[8][anon_sym_GT_LPAREN] = actions(213);
	v->a[8][sym_comment] = actions(71);
	v->a[8][sym_file_descriptor] = actions(215);
	v->a[8][sym_variable_name] = actions(217);
	v->a[8][sym_test_operator] = actions(219);
	v->a[8][sym__brace_start] = actions(221);
	v->a[9][sym__statement_not_pipeline] = state(6568);
	v->a[9][sym_redirected_statement] = state(5356);
	v->a[9][sym_for_statement] = state(5406);
	v->a[9][sym_c_style_for_statement] = state(5406);
	v->a[9][sym_while_statement] = state(5195);
	v->a[9][sym_if_statement] = state(5195);
	v->a[9][sym_case_statement] = state(5406);
	v->a[9][sym_function_definition] = state(5406);
	v->a[9][sym_compound_statement] = state(5406);
	v->a[9][sym_subshell] = state(5406);
	v->a[9][sym_pipeline] = state(5569);
	v->a[9][sym_list] = state(5406);
	parse_table_48(v);
}

void	parse_table_48(t_parse_table_array *v)
{
	v->a[9][sym_negated_command] = state(5406);
	v->a[9][sym_test_command] = state(5406);
	v->a[9][sym_declaration_command] = state(5406);
	v->a[9][sym_unset_command] = state(5406);
	v->a[9][sym_command] = state(5406);
	v->a[9][sym_command_name] = state(620);
	v->a[9][sym_variable_assignment] = state(1811);
	v->a[9][sym_variable_assignments] = state(5406);
	v->a[9][sym_subscript] = state(6756);
	v->a[9][sym_file_redirect] = state(2693);
	v->a[9][sym_herestring_redirect] = state(2691);
	v->a[9][sym__expression] = state(3140);
	v->a[9][sym_binary_expression] = state(3071);
	v->a[9][sym_ternary_expression] = state(3071);
	v->a[9][sym_unary_expression] = state(3071);
	v->a[9][sym_postfix_expression] = state(3071);
	v->a[9][sym_parenthesized_expression] = state(3071);
	v->a[9][sym_arithmetic_expansion] = state(496);
	v->a[9][sym_brace_expression] = state(496);
	v->a[9][sym_concatenation] = state(524);
	parse_table_49(v);
}

void	parse_table_49(t_parse_table_array *v)
{
	v->a[9][sym_string] = state(496);
	v->a[9][sym_translated_string] = state(496);
	v->a[9][sym_number] = state(496);
	v->a[9][sym_simple_expansion] = state(496);
	v->a[9][sym_expansion] = state(496);
	v->a[9][sym_command_substitution] = state(496);
	v->a[9][sym_process_substitution] = state(496);
	v->a[9][aux_sym_redirected_statement_repeat2] = state(5167);
	v->a[9][aux_sym_command_repeat1] = state(955);
	v->a[9][aux_sym__literal_repeat1] = state(522);
	v->a[9][sym_word] = actions(143);
	v->a[9][anon_sym_for] = actions(145);
	v->a[9][anon_sym_select] = actions(147);
	v->a[9][anon_sym_LPAREN_LPAREN] = actions(149);
	v->a[9][anon_sym_LT] = actions(151);
	v->a[9][anon_sym_GT] = actions(151);
	v->a[9][anon_sym_GT_GT] = actions(153);
	v->a[9][anon_sym_LPAREN] = actions(155);
	v->a[9][anon_sym_while] = actions(157);
	v->a[9][anon_sym_until] = actions(157);
	parse_table_50(v);
}

/* EOF parse_table_9.c */
