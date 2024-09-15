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
	v->a[9][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(75);
	v->a[9][anon_sym_DOLLAR] = actions(77);
	v->a[9][anon_sym_DQUOTE] = actions(79);
	v->a[9][sym_raw_string] = actions(89);
	v->a[9][sym_number] = actions(89);
	v->a[9][anon_sym_DOLLAR_LBRACE] = actions(81);
	v->a[9][anon_sym_DOLLAR_LPAREN] = actions(83);
	v->a[9][anon_sym_BQUOTE] = actions(85);
	v->a[9][sym_comment] = actions(3);
	v->a[9][sym_variable_name] = actions(95);
	v->a[10][sym__statements] = state(830);
	v->a[10][sym__statement_not_pipeline] = state(770);
	v->a[10][sym_redirected_statement] = state(478);
	v->a[10][sym_compound_statement] = state(478);
	v->a[10][sym_subshell] = state(478);
	v->a[10][sym_pipeline] = state(492);
	v->a[10][sym_list] = state(478);
	v->a[10][sym_negated_command] = state(478);
	v->a[10][sym_command] = state(478);
	v->a[10][sym_command_name] = state(89);
	return (parse_table_21(v));
}

void	parse_table_21(t_parse_table_array *v)
{
	v->a[10][sym_variable_assignment] = state(106);
	v->a[10][sym__variable_assignments] = state(478);
	v->a[10][sym_file_redirect] = state(268);
	v->a[10][sym_arithmetic_expansion] = state(176);
	v->a[10][sym_concatenation] = state(250);
	v->a[10][sym_string] = state(176);
	v->a[10][sym_simple_expansion] = state(176);
	v->a[10][sym_expansion] = state(176);
	v->a[10][sym_command_substitution] = state(176);
	v->a[10][aux_sym__statements_repeat1] = state(36);
	v->a[10][aux_sym_redirected_statement_repeat2] = state(558);
	v->a[10][aux_sym_command_repeat1] = state(139);
	v->a[10][sym_word] = actions(69);
	v->a[10][anon_sym_LBRACE] = actions(9);
	v->a[10][anon_sym_LPAREN] = actions(11);
	v->a[10][anon_sym_BANG] = actions(71);
	v->a[10][anon_sym_LT] = actions(73);
	v->a[10][anon_sym_GT] = actions(73);
	v->a[10][anon_sym_GT_GT] = actions(73);
	v->a[10][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(75);
	return (parse_table_22(v));
}

void	parse_table_22(t_parse_table_array *v)
{
	v->a[10][anon_sym_DOLLAR] = actions(77);
	v->a[10][anon_sym_DQUOTE] = actions(79);
	v->a[10][sym_raw_string] = actions(69);
	v->a[10][sym_number] = actions(69);
	v->a[10][anon_sym_DOLLAR_LBRACE] = actions(81);
	v->a[10][anon_sym_DOLLAR_LPAREN] = actions(83);
	v->a[10][anon_sym_BQUOTE] = actions(85);
	v->a[10][sym_comment] = actions(3);
	v->a[10][sym_variable_name] = actions(87);
	v->a[11][sym__statements] = state(789);
	v->a[11][sym__statement_not_pipeline] = state(770);
	v->a[11][sym_redirected_statement] = state(478);
	v->a[11][sym_compound_statement] = state(478);
	v->a[11][sym_subshell] = state(478);
	v->a[11][sym_pipeline] = state(492);
	v->a[11][sym_list] = state(478);
	v->a[11][sym_negated_command] = state(478);
	v->a[11][sym_command] = state(478);
	v->a[11][sym_command_name] = state(89);
	v->a[11][sym_variable_assignment] = state(106);
	return (parse_table_23(v));
}

void	parse_table_23(t_parse_table_array *v)
{
	v->a[11][sym__variable_assignments] = state(478);
	v->a[11][sym_file_redirect] = state(268);
	v->a[11][sym_arithmetic_expansion] = state(176);
	v->a[11][sym_concatenation] = state(250);
	v->a[11][sym_string] = state(176);
	v->a[11][sym_simple_expansion] = state(176);
	v->a[11][sym_expansion] = state(176);
	v->a[11][sym_command_substitution] = state(176);
	v->a[11][aux_sym__statements_repeat1] = state(36);
	v->a[11][aux_sym_redirected_statement_repeat2] = state(558);
	v->a[11][aux_sym_command_repeat1] = state(139);
	v->a[11][sym_word] = actions(69);
	v->a[11][anon_sym_LBRACE] = actions(9);
	v->a[11][anon_sym_LPAREN] = actions(11);
	v->a[11][anon_sym_BANG] = actions(71);
	v->a[11][anon_sym_LT] = actions(73);
	v->a[11][anon_sym_GT] = actions(73);
	v->a[11][anon_sym_GT_GT] = actions(73);
	v->a[11][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(75);
	v->a[11][anon_sym_DOLLAR] = actions(77);
	return (parse_table_24(v));
}

void	parse_table_24(t_parse_table_array *v)
{
	v->a[11][anon_sym_DQUOTE] = actions(79);
	v->a[11][sym_raw_string] = actions(69);
	v->a[11][sym_number] = actions(69);
	v->a[11][anon_sym_DOLLAR_LBRACE] = actions(81);
	v->a[11][anon_sym_DOLLAR_LPAREN] = actions(83);
	v->a[11][anon_sym_BQUOTE] = actions(85);
	v->a[11][sym_comment] = actions(3);
	v->a[11][sym_variable_name] = actions(87);
	v->a[12][sym__statements] = state(799);
	v->a[12][sym__statement_not_pipeline] = state(769);
	v->a[12][sym_redirected_statement] = state(480);
	v->a[12][sym_compound_statement] = state(480);
	v->a[12][sym_subshell] = state(480);
	v->a[12][sym_pipeline] = state(514);
	v->a[12][sym_list] = state(480);
	v->a[12][sym_negated_command] = state(480);
	v->a[12][sym_command] = state(480);
	v->a[12][sym_command_name] = state(61);
	v->a[12][sym_variable_assignment] = state(75);
	v->a[12][sym__variable_assignments] = state(480);
	return (parse_table_25(v));
}

/* EOF parse_table_4.c */
