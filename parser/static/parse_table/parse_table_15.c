/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_15.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_75(t_parse_table_array *v)
{
	v->a[38][sym_compound_statement] = state(512);
	v->a[38][sym_subshell] = state(512);
	v->a[38][sym_pipeline] = state(547);
	v->a[38][sym_list] = state(512);
	v->a[38][sym_negated_command] = state(512);
	v->a[38][sym_command] = state(512);
	v->a[38][sym_command_name] = state(72);
	v->a[38][sym_variable_assignment] = state(99);
	v->a[38][sym__variable_assignments] = state(512);
	v->a[38][sym_file_redirect] = state(249);
	v->a[38][sym_arithmetic_expansion] = state(176);
	v->a[38][sym_concatenation] = state(250);
	v->a[38][sym_string] = state(176);
	v->a[38][sym_simple_expansion] = state(176);
	v->a[38][sym_expansion] = state(176);
	v->a[38][sym_command_substitution] = state(176);
	v->a[38][aux_sym_redirected_statement_repeat2] = state(577);
	v->a[38][aux_sym_command_repeat1] = state(183);
	v->a[38][sym_word] = actions(69);
	v->a[38][anon_sym_LBRACE] = actions(9);
	return (parse_table_76(v));
}

void	parse_table_76(t_parse_table_array *v)
{
	v->a[38][anon_sym_LPAREN] = actions(11);
	v->a[38][anon_sym_BANG] = actions(99);
	v->a[38][anon_sym_LT] = actions(73);
	v->a[38][anon_sym_GT] = actions(73);
	v->a[38][anon_sym_GT_GT] = actions(73);
	v->a[38][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(75);
	v->a[38][anon_sym_DOLLAR] = actions(77);
	v->a[38][anon_sym_DQUOTE] = actions(79);
	v->a[38][sym_raw_string] = actions(69);
	v->a[38][sym_number] = actions(69);
	v->a[38][anon_sym_DOLLAR_LBRACE] = actions(81);
	v->a[38][anon_sym_DOLLAR_LPAREN] = actions(83);
	v->a[38][anon_sym_BQUOTE] = actions(85);
	v->a[38][sym_comment] = actions(3);
	v->a[38][sym_variable_name] = actions(87);
	v->a[39][sym__statement_not_pipeline] = state(770);
	v->a[39][sym_redirected_statement] = state(495);
	v->a[39][sym_compound_statement] = state(495);
	v->a[39][sym_subshell] = state(495);
	v->a[39][sym_pipeline] = state(494);
	return (parse_table_77(v));
}

void	parse_table_77(t_parse_table_array *v)
{
	v->a[39][sym_list] = state(495);
	v->a[39][sym_negated_command] = state(495);
	v->a[39][sym_command] = state(495);
	v->a[39][sym_command_name] = state(89);
	v->a[39][sym_variable_assignment] = state(110);
	v->a[39][sym__variable_assignments] = state(495);
	v->a[39][sym_file_redirect] = state(268);
	v->a[39][sym_arithmetic_expansion] = state(176);
	v->a[39][sym_concatenation] = state(250);
	v->a[39][sym_string] = state(176);
	v->a[39][sym_simple_expansion] = state(176);
	v->a[39][sym_expansion] = state(176);
	v->a[39][sym_command_substitution] = state(176);
	v->a[39][aux_sym_redirected_statement_repeat2] = state(558);
	v->a[39][aux_sym_command_repeat1] = state(139);
	v->a[39][sym_word] = actions(69);
	v->a[39][anon_sym_LBRACE] = actions(9);
	v->a[39][anon_sym_LPAREN] = actions(11);
	v->a[39][anon_sym_BANG] = actions(71);
	v->a[39][anon_sym_LT] = actions(73);
	return (parse_table_78(v));
}

void	parse_table_78(t_parse_table_array *v)
{
	v->a[39][anon_sym_GT] = actions(73);
	v->a[39][anon_sym_GT_GT] = actions(73);
	v->a[39][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(75);
	v->a[39][anon_sym_DOLLAR] = actions(77);
	v->a[39][anon_sym_DQUOTE] = actions(79);
	v->a[39][sym_raw_string] = actions(69);
	v->a[39][sym_number] = actions(69);
	v->a[39][anon_sym_DOLLAR_LBRACE] = actions(81);
	v->a[39][anon_sym_DOLLAR_LPAREN] = actions(83);
	v->a[39][anon_sym_BQUOTE] = actions(85);
	v->a[39][sym_comment] = actions(3);
	v->a[39][sym_variable_name] = actions(87);
	v->a[40][sym__statement_not_pipeline] = state(505);
	v->a[40][sym_redirected_statement] = state(505);
	v->a[40][sym_compound_statement] = state(505);
	v->a[40][sym_subshell] = state(505);
	v->a[40][sym_pipeline] = state(684);
	v->a[40][sym_list] = state(505);
	v->a[40][sym_negated_command] = state(505);
	v->a[40][sym_command] = state(505);
	return (parse_table_79(v));
}

void	parse_table_79(t_parse_table_array *v)
{
	v->a[40][sym_command_name] = state(65);
	v->a[40][sym_variable_assignment] = state(97);
	v->a[40][sym__variable_assignments] = state(505);
	v->a[40][sym_file_redirect] = state(253);
	v->a[40][sym_arithmetic_expansion] = state(116);
	v->a[40][sym_concatenation] = state(254);
	v->a[40][sym_string] = state(116);
	v->a[40][sym_simple_expansion] = state(116);
	v->a[40][sym_expansion] = state(116);
	v->a[40][sym_command_substitution] = state(116);
	v->a[40][aux_sym_redirected_statement_repeat2] = state(557);
	v->a[40][aux_sym_command_repeat1] = state(193);
	v->a[40][sym_word] = actions(7);
	v->a[40][anon_sym_LBRACE] = actions(9);
	v->a[40][anon_sym_LPAREN] = actions(11);
	v->a[40][anon_sym_BANG] = actions(13);
	v->a[40][anon_sym_LT] = actions(15);
	v->a[40][anon_sym_GT] = actions(15);
	v->a[40][anon_sym_GT_GT] = actions(15);
	v->a[40][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(17);
	return (parse_table_80(v));
}

/* EOF parse_table_15.c */
