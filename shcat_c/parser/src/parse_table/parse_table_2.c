/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_10(t_parse_table_array *v)
{
	v->a[1][anon_sym_GT_GT] = actions(17);
	v->a[1][anon_sym_LPAREN] = actions(19);
	v->a[1][anon_sym_while] = actions(21);
	v->a[1][anon_sym_until] = actions(21);
	v->a[1][anon_sym_if] = actions(23);
	v->a[1][anon_sym_case] = actions(25);
	v->a[1][anon_sym_function] = actions(27);
	v->a[1][anon_sym_LBRACE] = actions(29);
	v->a[1][anon_sym_BANG] = actions(31);
	v->a[1][anon_sym_LBRACK] = actions(33);
	v->a[1][anon_sym_LBRACK_LBRACK] = actions(35);
	v->a[1][anon_sym_declare] = actions(37);
	v->a[1][anon_sym_typeset] = actions(37);
	v->a[1][anon_sym_export] = actions(37);
	v->a[1][anon_sym_readonly] = actions(37);
	v->a[1][anon_sym_local] = actions(37);
	v->a[1][anon_sym_unset] = actions(39);
	v->a[1][anon_sym_unsetenv] = actions(39);
	v->a[1][anon_sym_AMP_GT] = actions(15);
	v->a[1][anon_sym_AMP_GT_GT] = actions(17);
	parse_table_11(v);
}

void	parse_table_11(t_parse_table_array *v)
{
	v->a[1][anon_sym_LT_AMP] = actions(15);
	v->a[1][anon_sym_GT_AMP] = actions(15);
	v->a[1][anon_sym_GT_PIPE] = actions(17);
	v->a[1][anon_sym_LT_AMP_DASH] = actions(41);
	v->a[1][anon_sym_GT_AMP_DASH] = actions(41);
	v->a[1][anon_sym_LT_LT_LT] = actions(43);
	v->a[1][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(45);
	v->a[1][anon_sym_DOLLAR_LBRACK] = actions(47);
	v->a[1][anon_sym_DOLLAR] = actions(49);
	v->a[1][sym__special_character] = actions(51);
	v->a[1][anon_sym_DQUOTE] = actions(53);
	v->a[1][sym_raw_string] = actions(55);
	v->a[1][sym_ansi_c_string] = actions(55);
	v->a[1][aux_sym_number_token1] = actions(57);
	v->a[1][aux_sym_number_token2] = actions(59);
	v->a[1][anon_sym_DOLLAR_LBRACE] = actions(61);
	v->a[1][anon_sym_DOLLAR_LPAREN] = actions(63);
	v->a[1][anon_sym_BQUOTE] = actions(65);
	v->a[1][anon_sym_DOLLAR_BQUOTE] = actions(67);
	v->a[1][anon_sym_LT_LPAREN] = actions(69);
	parse_table_12(v);
}

void	parse_table_12(t_parse_table_array *v)
{
	v->a[1][anon_sym_GT_LPAREN] = actions(69);
	v->a[1][sym_comment] = actions(71);
	v->a[1][sym_file_descriptor] = actions(73);
	v->a[1][sym_variable_name] = actions(75);
	v->a[1][sym_test_operator] = actions(77);
	v->a[1][sym__brace_start] = actions(79);
	v->a[2][sym__statements] = state(7427);
	v->a[2][sym__statement_not_pipeline] = state(6614);
	v->a[2][sym_redirected_statement] = state(4797);
	v->a[2][sym_for_statement] = state(4797);
	v->a[2][sym_c_style_for_statement] = state(4797);
	v->a[2][sym_while_statement] = state(4400);
	v->a[2][sym_if_statement] = state(4400);
	v->a[2][sym_case_statement] = state(4797);
	v->a[2][sym_function_definition] = state(4797);
	v->a[2][sym_compound_statement] = state(4797);
	v->a[2][sym_subshell] = state(4797);
	v->a[2][sym_pipeline] = state(5054);
	v->a[2][sym_list] = state(4797);
	v->a[2][sym_negated_command] = state(4797);
	parse_table_13(v);
}

void	parse_table_13(t_parse_table_array *v)
{
	v->a[2][sym_test_command] = state(4797);
	v->a[2][sym_declaration_command] = state(4797);
	v->a[2][sym_unset_command] = state(4797);
	v->a[2][sym_command] = state(4797);
	v->a[2][sym_command_name] = state(533);
	v->a[2][sym_variable_assignment] = state(945);
	v->a[2][sym_variable_assignments] = state(4797);
	v->a[2][sym_subscript] = state(6754);
	v->a[2][sym_file_redirect] = state(2019);
	v->a[2][sym_herestring_redirect] = state(2017);
	v->a[2][sym__expression] = state(3126);
	v->a[2][sym_binary_expression] = state(3053);
	v->a[2][sym_ternary_expression] = state(3053);
	v->a[2][sym_unary_expression] = state(3053);
	v->a[2][sym_postfix_expression] = state(3053);
	v->a[2][sym_parenthesized_expression] = state(3053);
	v->a[2][sym_arithmetic_expansion] = state(472);
	v->a[2][sym_brace_expression] = state(472);
	v->a[2][sym_concatenation] = state(502);
	v->a[2][sym_string] = state(472);
	parse_table_14(v);
}

void	parse_table_14(t_parse_table_array *v)
{
	v->a[2][sym_translated_string] = state(472);
	v->a[2][sym_number] = state(472);
	v->a[2][sym_simple_expansion] = state(472);
	v->a[2][sym_expansion] = state(472);
	v->a[2][sym_command_substitution] = state(472);
	v->a[2][sym_process_substitution] = state(472);
	v->a[2][aux_sym__statements_repeat1] = state(423);
	v->a[2][aux_sym_redirected_statement_repeat2] = state(4480);
	v->a[2][aux_sym_command_repeat1] = state(951);
	v->a[2][aux_sym__literal_repeat1] = state(493);
	v->a[2][sym_word] = actions(81);
	v->a[2][anon_sym_for] = actions(9);
	v->a[2][anon_sym_select] = actions(11);
	v->a[2][anon_sym_LPAREN_LPAREN] = actions(83);
	v->a[2][anon_sym_LT] = actions(85);
	v->a[2][anon_sym_GT] = actions(85);
	v->a[2][anon_sym_GT_GT] = actions(87);
	v->a[2][anon_sym_LPAREN] = actions(89);
	v->a[2][anon_sym_while] = actions(21);
	v->a[2][anon_sym_until] = actions(21);
	parse_table_15(v);
}

/* EOF parse_table_2.c */
