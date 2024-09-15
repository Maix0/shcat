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
	v->a[22][sym_word] = actions(89);
	v->a[22][anon_sym_LBRACE] = actions(9);
	v->a[22][anon_sym_LPAREN] = actions(11);
	v->a[22][anon_sym_BANG] = actions(91);
	v->a[22][anon_sym_LT] = actions(93);
	v->a[22][anon_sym_GT] = actions(93);
	v->a[22][anon_sym_GT_GT] = actions(93);
	v->a[22][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(75);
	v->a[22][anon_sym_DOLLAR] = actions(77);
	v->a[22][anon_sym_DQUOTE] = actions(79);
	v->a[22][sym_raw_string] = actions(89);
	v->a[22][sym_number] = actions(89);
	v->a[22][anon_sym_DOLLAR_LBRACE] = actions(81);
	v->a[22][anon_sym_DOLLAR_LPAREN] = actions(83);
	v->a[22][anon_sym_BQUOTE] = actions(85);
	v->a[22][sym_comment] = actions(3);
	v->a[22][sym_variable_name] = actions(95);
	v->a[23][sym__statements] = state(840);
	v->a[23][sym__statement_not_pipeline] = state(769);
	v->a[23][sym_redirected_statement] = state(480);
	return (parse_table_46(v));
}

void	parse_table_46(t_parse_table_array *v)
{
	v->a[23][sym_compound_statement] = state(480);
	v->a[23][sym_subshell] = state(480);
	v->a[23][sym_pipeline] = state(514);
	v->a[23][sym_list] = state(480);
	v->a[23][sym_negated_command] = state(480);
	v->a[23][sym_command] = state(480);
	v->a[23][sym_command_name] = state(61);
	v->a[23][sym_variable_assignment] = state(75);
	v->a[23][sym__variable_assignments] = state(480);
	v->a[23][sym_file_redirect] = state(246);
	v->a[23][sym_arithmetic_expansion] = state(126);
	v->a[23][sym_concatenation] = state(250);
	v->a[23][sym_string] = state(126);
	v->a[23][sym_simple_expansion] = state(126);
	v->a[23][sym_expansion] = state(126);
	v->a[23][sym_command_substitution] = state(126);
	v->a[23][aux_sym__statements_repeat1] = state(33);
	v->a[23][aux_sym_redirected_statement_repeat2] = state(553);
	v->a[23][aux_sym_command_repeat1] = state(165);
	v->a[23][sym_word] = actions(89);
	return (parse_table_47(v));
}

void	parse_table_47(t_parse_table_array *v)
{
	v->a[23][anon_sym_LBRACE] = actions(9);
	v->a[23][anon_sym_LPAREN] = actions(11);
	v->a[23][anon_sym_BANG] = actions(91);
	v->a[23][anon_sym_LT] = actions(93);
	v->a[23][anon_sym_GT] = actions(93);
	v->a[23][anon_sym_GT_GT] = actions(93);
	v->a[23][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(75);
	v->a[23][anon_sym_DOLLAR] = actions(77);
	v->a[23][anon_sym_DQUOTE] = actions(79);
	v->a[23][sym_raw_string] = actions(89);
	v->a[23][sym_number] = actions(89);
	v->a[23][anon_sym_DOLLAR_LBRACE] = actions(81);
	v->a[23][anon_sym_DOLLAR_LPAREN] = actions(83);
	v->a[23][anon_sym_BQUOTE] = actions(85);
	v->a[23][sym_comment] = actions(3);
	v->a[23][sym_variable_name] = actions(95);
	v->a[24][aux_sym__terminated_statement] = state(2);
	v->a[24][sym__statement_not_pipeline] = state(768);
	v->a[24][sym_redirected_statement] = state(512);
	v->a[24][sym_compound_statement] = state(512);
	return (parse_table_48(v));
}

void	parse_table_48(t_parse_table_array *v)
{
	v->a[24][sym_subshell] = state(512);
	v->a[24][sym_pipeline] = state(547);
	v->a[24][sym_list] = state(512);
	v->a[24][sym_negated_command] = state(512);
	v->a[24][sym_command] = state(512);
	v->a[24][sym_command_name] = state(72);
	v->a[24][sym_variable_assignment] = state(99);
	v->a[24][sym__variable_assignments] = state(512);
	v->a[24][sym_file_redirect] = state(249);
	v->a[24][sym_arithmetic_expansion] = state(176);
	v->a[24][sym_concatenation] = state(250);
	v->a[24][sym_string] = state(176);
	v->a[24][sym_simple_expansion] = state(176);
	v->a[24][sym_expansion] = state(176);
	v->a[24][sym_command_substitution] = state(176);
	v->a[24][aux_sym_redirected_statement_repeat2] = state(577);
	v->a[24][aux_sym_command_repeat1] = state(183);
	v->a[24][sym_word] = actions(69);
	v->a[24][anon_sym_LBRACE] = actions(9);
	v->a[24][anon_sym_RBRACE] = actions(101);
	return (parse_table_49(v));
}

void	parse_table_49(t_parse_table_array *v)
{
	v->a[24][anon_sym_LPAREN] = actions(11);
	v->a[24][anon_sym_BANG] = actions(99);
	v->a[24][anon_sym_LT] = actions(73);
	v->a[24][anon_sym_GT] = actions(73);
	v->a[24][anon_sym_GT_GT] = actions(73);
	v->a[24][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(75);
	v->a[24][anon_sym_DOLLAR] = actions(77);
	v->a[24][anon_sym_DQUOTE] = actions(79);
	v->a[24][sym_raw_string] = actions(69);
	v->a[24][sym_number] = actions(69);
	v->a[24][anon_sym_DOLLAR_LBRACE] = actions(81);
	v->a[24][anon_sym_DOLLAR_LPAREN] = actions(83);
	v->a[24][anon_sym_BQUOTE] = actions(85);
	v->a[24][sym_comment] = actions(3);
	v->a[24][sym_variable_name] = actions(87);
	v->a[25][sym__statements] = state(792);
	v->a[25][sym__statement_not_pipeline] = state(770);
	v->a[25][sym_redirected_statement] = state(478);
	v->a[25][sym_compound_statement] = state(478);
	v->a[25][sym_subshell] = state(478);
	return (parse_table_50(v));
}

/* EOF parse_table_9.c */
