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
	v->a[7][sym_negated_command] = state(512);
	v->a[7][sym_command] = state(512);
	v->a[7][sym_command_name] = state(72);
	v->a[7][sym_variable_assignment] = state(99);
	v->a[7][sym__variable_assignments] = state(512);
	v->a[7][sym_file_redirect] = state(249);
	v->a[7][sym_arithmetic_expansion] = state(176);
	v->a[7][sym_concatenation] = state(250);
	v->a[7][sym_string] = state(176);
	v->a[7][sym_simple_expansion] = state(176);
	v->a[7][sym_expansion] = state(176);
	v->a[7][sym_command_substitution] = state(176);
	v->a[7][aux_sym_redirected_statement_repeat2] = state(577);
	v->a[7][aux_sym_command_repeat1] = state(183);
	v->a[7][sym_word] = actions(69);
	v->a[7][anon_sym_LBRACE] = actions(9);
	v->a[7][anon_sym_RBRACE] = actions(97);
	v->a[7][anon_sym_LPAREN] = actions(11);
	v->a[7][anon_sym_BANG] = actions(99);
	v->a[7][anon_sym_LT] = actions(73);
	return (parse_table_16(v));
}

void	parse_table_16(t_parse_table_array *v)
{
	v->a[7][anon_sym_GT] = actions(73);
	v->a[7][anon_sym_GT_GT] = actions(73);
	v->a[7][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(75);
	v->a[7][anon_sym_DOLLAR] = actions(77);
	v->a[7][anon_sym_DQUOTE] = actions(79);
	v->a[7][sym_raw_string] = actions(69);
	v->a[7][sym_number] = actions(69);
	v->a[7][anon_sym_DOLLAR_LBRACE] = actions(81);
	v->a[7][anon_sym_DOLLAR_LPAREN] = actions(83);
	v->a[7][anon_sym_BQUOTE] = actions(85);
	v->a[7][sym_comment] = actions(3);
	v->a[7][sym_variable_name] = actions(87);
	v->a[8][sym__statements] = state(835);
	v->a[8][sym__statement_not_pipeline] = state(770);
	v->a[8][sym_redirected_statement] = state(478);
	v->a[8][sym_compound_statement] = state(478);
	v->a[8][sym_subshell] = state(478);
	v->a[8][sym_pipeline] = state(492);
	v->a[8][sym_list] = state(478);
	v->a[8][sym_negated_command] = state(478);
	return (parse_table_17(v));
}

void	parse_table_17(t_parse_table_array *v)
{
	v->a[8][sym_command] = state(478);
	v->a[8][sym_command_name] = state(89);
	v->a[8][sym_variable_assignment] = state(106);
	v->a[8][sym__variable_assignments] = state(478);
	v->a[8][sym_file_redirect] = state(268);
	v->a[8][sym_arithmetic_expansion] = state(176);
	v->a[8][sym_concatenation] = state(250);
	v->a[8][sym_string] = state(176);
	v->a[8][sym_simple_expansion] = state(176);
	v->a[8][sym_expansion] = state(176);
	v->a[8][sym_command_substitution] = state(176);
	v->a[8][aux_sym__statements_repeat1] = state(36);
	v->a[8][aux_sym_redirected_statement_repeat2] = state(558);
	v->a[8][aux_sym_command_repeat1] = state(139);
	v->a[8][sym_word] = actions(69);
	v->a[8][anon_sym_LBRACE] = actions(9);
	v->a[8][anon_sym_LPAREN] = actions(11);
	v->a[8][anon_sym_BANG] = actions(71);
	v->a[8][anon_sym_LT] = actions(73);
	v->a[8][anon_sym_GT] = actions(73);
	return (parse_table_18(v));
}

void	parse_table_18(t_parse_table_array *v)
{
	v->a[8][anon_sym_GT_GT] = actions(73);
	v->a[8][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(75);
	v->a[8][anon_sym_DOLLAR] = actions(77);
	v->a[8][anon_sym_DQUOTE] = actions(79);
	v->a[8][sym_raw_string] = actions(69);
	v->a[8][sym_number] = actions(69);
	v->a[8][anon_sym_DOLLAR_LBRACE] = actions(81);
	v->a[8][anon_sym_DOLLAR_LPAREN] = actions(83);
	v->a[8][anon_sym_BQUOTE] = actions(85);
	v->a[8][sym_comment] = actions(3);
	v->a[8][sym_variable_name] = actions(87);
	v->a[9][sym__statements] = state(832);
	v->a[9][sym__statement_not_pipeline] = state(769);
	v->a[9][sym_redirected_statement] = state(480);
	v->a[9][sym_compound_statement] = state(480);
	v->a[9][sym_subshell] = state(480);
	v->a[9][sym_pipeline] = state(514);
	v->a[9][sym_list] = state(480);
	v->a[9][sym_negated_command] = state(480);
	v->a[9][sym_command] = state(480);
	return (parse_table_19(v));
}

void	parse_table_19(t_parse_table_array *v)
{
	v->a[9][sym_command_name] = state(61);
	v->a[9][sym_variable_assignment] = state(75);
	v->a[9][sym__variable_assignments] = state(480);
	v->a[9][sym_file_redirect] = state(251);
	v->a[9][sym_arithmetic_expansion] = state(126);
	v->a[9][sym_concatenation] = state(250);
	v->a[9][sym_string] = state(126);
	v->a[9][sym_simple_expansion] = state(126);
	v->a[9][sym_expansion] = state(126);
	v->a[9][sym_command_substitution] = state(126);
	v->a[9][aux_sym__statements_repeat1] = state(33);
	v->a[9][aux_sym_redirected_statement_repeat2] = state(553);
	v->a[9][aux_sym_command_repeat1] = state(165);
	v->a[9][sym_word] = actions(89);
	v->a[9][anon_sym_LBRACE] = actions(9);
	v->a[9][anon_sym_LPAREN] = actions(11);
	v->a[9][anon_sym_BANG] = actions(91);
	v->a[9][anon_sym_LT] = actions(93);
	v->a[9][anon_sym_GT] = actions(93);
	v->a[9][anon_sym_GT_GT] = actions(93);
	return (parse_table_20(v));
}

/* EOF parse_table_3.c */
