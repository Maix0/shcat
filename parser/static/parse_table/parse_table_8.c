/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_8.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_40(t_parse_table_array *v)
{
	v->a[9][anon_sym_select] = actions(9);
	v->a[9][anon_sym_while] = actions(11);
	v->a[9][anon_sym_until] = actions(11);
	v->a[9][anon_sym_if] = actions(13);
	v->a[9][anon_sym_fi] = actions(127);
	v->a[9][anon_sym_elif] = actions(69);
	v->a[9][anon_sym_else] = actions(71);
	v->a[9][anon_sym_case] = actions(15);
	v->a[9][anon_sym_LPAREN] = actions(17);
	v->a[9][anon_sym_function] = actions(73);
	v->a[9][anon_sym_LBRACE] = actions(21);
	v->a[9][anon_sym_BANG] = actions(75);
	v->a[9][anon_sym_declare] = actions(77);
	v->a[9][anon_sym_typeset] = actions(77);
	v->a[9][anon_sym_export] = actions(77);
	v->a[9][anon_sym_readonly] = actions(77);
	v->a[9][anon_sym_local] = actions(77);
	v->a[9][anon_sym_unset] = actions(79);
	v->a[9][anon_sym_unsetenv] = actions(79);
	v->a[9][anon_sym_LT] = actions(81);
	parse_table_41(v);
}

void	parse_table_41(t_parse_table_array *v)
{
	v->a[9][anon_sym_GT] = actions(81);
	v->a[9][anon_sym_GT_GT] = actions(83);
	v->a[9][anon_sym_AMP_GT] = actions(81);
	v->a[9][anon_sym_AMP_GT_GT] = actions(83);
	v->a[9][anon_sym_LT_AMP] = actions(81);
	v->a[9][anon_sym_GT_AMP] = actions(81);
	v->a[9][anon_sym_GT_PIPE] = actions(83);
	v->a[9][anon_sym_LT_AMP_DASH] = actions(85);
	v->a[9][anon_sym_GT_AMP_DASH] = actions(85);
	v->a[9][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(87);
	v->a[9][anon_sym_DOLLAR] = actions(89);
	v->a[9][sym__special_character] = actions(91);
	v->a[9][anon_sym_DQUOTE] = actions(93);
	v->a[9][sym_raw_string] = actions(95);
	v->a[9][aux_sym_number_token1] = actions(97);
	v->a[9][aux_sym_number_token2] = actions(99);
	v->a[9][anon_sym_DOLLAR_LBRACE] = actions(101);
	v->a[9][anon_sym_DOLLAR_LPAREN] = actions(103);
	v->a[9][anon_sym_BQUOTE] = actions(105);
	v->a[9][anon_sym_DOLLAR_BQUOTE] = actions(107);
	parse_table_42(v);
}

void	parse_table_42(t_parse_table_array *v)
{
	v->a[9][sym_comment] = actions(57);
	v->a[9][sym_file_descriptor] = actions(109);
	v->a[9][sym_variable_name] = actions(111);
	v->a[9][sym_test_operator] = actions(95);
	v->a[9][sym__brace_start] = actions(113);
	v->a[10][sym__statements] = state(3420);
	v->a[10][sym__statement_not_pipeline] = state(3470);
	v->a[10][sym_redirected_statement] = state(1914);
	v->a[10][sym_for_statement] = state(1914);
	v->a[10][sym_while_statement] = state(1914);
	v->a[10][sym_if_statement] = state(1914);
	v->a[10][sym_case_statement] = state(1914);
	v->a[10][sym_function_definition] = state(1914);
	v->a[10][sym_compound_statement] = state(1914);
	v->a[10][sym_subshell] = state(1914);
	v->a[10][sym_pipeline] = state(2054);
	v->a[10][sym_list] = state(1914);
	v->a[10][sym_negated_command] = state(1914);
	v->a[10][sym_declaration_command] = state(1914);
	v->a[10][sym_unset_command] = state(1914);
	parse_table_43(v);
}

void	parse_table_43(t_parse_table_array *v)
{
	v->a[10][sym_command] = state(1914);
	v->a[10][sym_command_name] = state(257);
	v->a[10][sym_variable_assignment] = state(445);
	v->a[10][sym_variable_assignments] = state(1914);
	v->a[10][sym_file_redirect] = state(1015);
	v->a[10][sym_arithmetic_expansion] = state(508);
	v->a[10][sym_brace_expression] = state(508);
	v->a[10][sym_concatenation] = state(862);
	v->a[10][sym_string] = state(508);
	v->a[10][sym_number] = state(508);
	v->a[10][sym_simple_expansion] = state(508);
	v->a[10][sym_expansion] = state(508);
	v->a[10][sym_command_substitution] = state(508);
	v->a[10][aux_sym__statements_repeat1] = state(230);
	v->a[10][aux_sym_redirected_statement_repeat2] = state(1974);
	v->a[10][aux_sym_command_repeat1] = state(1131);
	v->a[10][aux_sym__literal_repeat1] = state(678);
	v->a[10][sym_word] = actions(129);
	v->a[10][anon_sym_for] = actions(131);
	v->a[10][anon_sym_select] = actions(131);
	parse_table_44(v);
}

void	parse_table_44(t_parse_table_array *v)
{
	v->a[10][anon_sym_while] = actions(133);
	v->a[10][anon_sym_until] = actions(133);
	v->a[10][anon_sym_if] = actions(135);
	v->a[10][anon_sym_case] = actions(137);
	v->a[10][anon_sym_esac] = actions(139);
	v->a[10][anon_sym_LPAREN] = actions(141);
	v->a[10][anon_sym_SEMI_SEMI] = actions(143);
	v->a[10][anon_sym_SEMI_AMP] = actions(145);
	v->a[10][anon_sym_SEMI_SEMI_AMP] = actions(145);
	v->a[10][anon_sym_function] = actions(147);
	v->a[10][anon_sym_LBRACE] = actions(149);
	v->a[10][anon_sym_BANG] = actions(151);
	v->a[10][anon_sym_declare] = actions(153);
	v->a[10][anon_sym_typeset] = actions(153);
	v->a[10][anon_sym_export] = actions(153);
	v->a[10][anon_sym_readonly] = actions(153);
	v->a[10][anon_sym_local] = actions(153);
	v->a[10][anon_sym_unset] = actions(155);
	v->a[10][anon_sym_unsetenv] = actions(155);
	v->a[10][anon_sym_LT] = actions(157);
	parse_table_45(v);
}

/* EOF parse_table_8.c */
