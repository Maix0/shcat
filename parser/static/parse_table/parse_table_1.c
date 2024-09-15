/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_5(t_parse_table_array *v)
{
	v->a[2][sym_redirected_statement] = state(512);
	v->a[2][sym_compound_statement] = state(512);
	v->a[2][sym_subshell] = state(512);
	v->a[2][sym_pipeline] = state(547);
	v->a[2][sym_list] = state(512);
	v->a[2][sym_negated_command] = state(512);
	v->a[2][sym_command] = state(512);
	v->a[2][sym_command_name] = state(72);
	v->a[2][sym_variable_assignment] = state(99);
	v->a[2][sym__variable_assignments] = state(512);
	v->a[2][sym_file_redirect] = state(249);
	v->a[2][sym_arithmetic_expansion] = state(176);
	v->a[2][sym_concatenation] = state(250);
	v->a[2][sym_string] = state(176);
	v->a[2][sym_simple_expansion] = state(176);
	v->a[2][sym_expansion] = state(176);
	v->a[2][sym_command_substitution] = state(176);
	v->a[2][aux_sym_redirected_statement_repeat2] = state(577);
	v->a[2][aux_sym_command_repeat1] = state(183);
	v->a[2][sym_word] = actions(31);
	return (parse_table_6(v));
}

void	parse_table_6(t_parse_table_array *v)
{
	v->a[2][anon_sym_LBRACE] = actions(34);
	v->a[2][anon_sym_RBRACE] = actions(37);
	v->a[2][anon_sym_LPAREN] = actions(39);
	v->a[2][anon_sym_BANG] = actions(42);
	v->a[2][anon_sym_LT] = actions(45);
	v->a[2][anon_sym_GT] = actions(45);
	v->a[2][anon_sym_GT_GT] = actions(45);
	v->a[2][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(48);
	v->a[2][anon_sym_DOLLAR] = actions(51);
	v->a[2][anon_sym_DQUOTE] = actions(54);
	v->a[2][sym_raw_string] = actions(31);
	v->a[2][sym_number] = actions(31);
	v->a[2][anon_sym_DOLLAR_LBRACE] = actions(57);
	v->a[2][anon_sym_DOLLAR_LPAREN] = actions(60);
	v->a[2][anon_sym_BQUOTE] = actions(63);
	v->a[2][sym_comment] = actions(3);
	v->a[2][sym_variable_name] = actions(66);
	v->a[3][sym__statements] = state(822);
	v->a[3][sym__statement_not_pipeline] = state(770);
	v->a[3][sym_redirected_statement] = state(478);
	return (parse_table_7(v));
}

void	parse_table_7(t_parse_table_array *v)
{
	v->a[3][sym_compound_statement] = state(478);
	v->a[3][sym_subshell] = state(478);
	v->a[3][sym_pipeline] = state(492);
	v->a[3][sym_list] = state(478);
	v->a[3][sym_negated_command] = state(478);
	v->a[3][sym_command] = state(478);
	v->a[3][sym_command_name] = state(89);
	v->a[3][sym_variable_assignment] = state(106);
	v->a[3][sym__variable_assignments] = state(478);
	v->a[3][sym_file_redirect] = state(268);
	v->a[3][sym_arithmetic_expansion] = state(176);
	v->a[3][sym_concatenation] = state(250);
	v->a[3][sym_string] = state(176);
	v->a[3][sym_simple_expansion] = state(176);
	v->a[3][sym_expansion] = state(176);
	v->a[3][sym_command_substitution] = state(176);
	v->a[3][aux_sym__statements_repeat1] = state(36);
	v->a[3][aux_sym_redirected_statement_repeat2] = state(558);
	v->a[3][aux_sym_command_repeat1] = state(139);
	v->a[3][sym_word] = actions(69);
	return (parse_table_8(v));
}

void	parse_table_8(t_parse_table_array *v)
{
	v->a[3][anon_sym_LBRACE] = actions(9);
	v->a[3][anon_sym_LPAREN] = actions(11);
	v->a[3][anon_sym_BANG] = actions(71);
	v->a[3][anon_sym_LT] = actions(73);
	v->a[3][anon_sym_GT] = actions(73);
	v->a[3][anon_sym_GT_GT] = actions(73);
	v->a[3][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(75);
	v->a[3][anon_sym_DOLLAR] = actions(77);
	v->a[3][anon_sym_DQUOTE] = actions(79);
	v->a[3][sym_raw_string] = actions(69);
	v->a[3][sym_number] = actions(69);
	v->a[3][anon_sym_DOLLAR_LBRACE] = actions(81);
	v->a[3][anon_sym_DOLLAR_LPAREN] = actions(83);
	v->a[3][anon_sym_BQUOTE] = actions(85);
	v->a[3][sym_comment] = actions(3);
	v->a[3][sym_variable_name] = actions(87);
	v->a[4][sym__statements] = state(814);
	v->a[4][sym__statement_not_pipeline] = state(769);
	v->a[4][sym_redirected_statement] = state(480);
	v->a[4][sym_compound_statement] = state(480);
	return (parse_table_9(v));
}

void	parse_table_9(t_parse_table_array *v)
{
	v->a[4][sym_subshell] = state(480);
	v->a[4][sym_pipeline] = state(514);
	v->a[4][sym_list] = state(480);
	v->a[4][sym_negated_command] = state(480);
	v->a[4][sym_command] = state(480);
	v->a[4][sym_command_name] = state(61);
	v->a[4][sym_variable_assignment] = state(75);
	v->a[4][sym__variable_assignments] = state(480);
	v->a[4][sym_file_redirect] = state(249);
	v->a[4][sym_arithmetic_expansion] = state(126);
	v->a[4][sym_concatenation] = state(250);
	v->a[4][sym_string] = state(126);
	v->a[4][sym_simple_expansion] = state(126);
	v->a[4][sym_expansion] = state(126);
	v->a[4][sym_command_substitution] = state(126);
	v->a[4][aux_sym__statements_repeat1] = state(33);
	v->a[4][aux_sym_redirected_statement_repeat2] = state(553);
	v->a[4][aux_sym_command_repeat1] = state(165);
	v->a[4][sym_word] = actions(89);
	v->a[4][anon_sym_LBRACE] = actions(9);
	return (parse_table_10(v));
}

/* EOF parse_table_1.c */
