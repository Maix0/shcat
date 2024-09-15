/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_10.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_50(t_parse_table_array *v)
{
	v->a[25][sym_pipeline] = state(492);
	v->a[25][sym_list] = state(478);
	v->a[25][sym_negated_command] = state(478);
	v->a[25][sym_command] = state(478);
	v->a[25][sym_command_name] = state(89);
	v->a[25][sym_variable_assignment] = state(106);
	v->a[25][sym__variable_assignments] = state(478);
	v->a[25][sym_file_redirect] = state(268);
	v->a[25][sym_arithmetic_expansion] = state(176);
	v->a[25][sym_concatenation] = state(250);
	v->a[25][sym_string] = state(176);
	v->a[25][sym_simple_expansion] = state(176);
	v->a[25][sym_expansion] = state(176);
	v->a[25][sym_command_substitution] = state(176);
	v->a[25][aux_sym__statements_repeat1] = state(36);
	v->a[25][aux_sym_redirected_statement_repeat2] = state(558);
	v->a[25][aux_sym_command_repeat1] = state(139);
	v->a[25][sym_word] = actions(69);
	v->a[25][anon_sym_LBRACE] = actions(9);
	v->a[25][anon_sym_LPAREN] = actions(11);
	return (parse_table_51(v));
}

void	parse_table_51(t_parse_table_array *v)
{
	v->a[25][anon_sym_BANG] = actions(71);
	v->a[25][anon_sym_LT] = actions(73);
	v->a[25][anon_sym_GT] = actions(73);
	v->a[25][anon_sym_GT_GT] = actions(73);
	v->a[25][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(75);
	v->a[25][anon_sym_DOLLAR] = actions(77);
	v->a[25][anon_sym_DQUOTE] = actions(79);
	v->a[25][sym_raw_string] = actions(69);
	v->a[25][sym_number] = actions(69);
	v->a[25][anon_sym_DOLLAR_LBRACE] = actions(81);
	v->a[25][anon_sym_DOLLAR_LPAREN] = actions(83);
	v->a[25][anon_sym_BQUOTE] = actions(85);
	v->a[25][sym_comment] = actions(3);
	v->a[25][sym_variable_name] = actions(87);
	v->a[26][sym__statements] = state(793);
	v->a[26][sym__statement_not_pipeline] = state(769);
	v->a[26][sym_redirected_statement] = state(480);
	v->a[26][sym_compound_statement] = state(480);
	v->a[26][sym_subshell] = state(480);
	v->a[26][sym_pipeline] = state(514);
	return (parse_table_52(v));
}

void	parse_table_52(t_parse_table_array *v)
{
	v->a[26][sym_list] = state(480);
	v->a[26][sym_negated_command] = state(480);
	v->a[26][sym_command] = state(480);
	v->a[26][sym_command_name] = state(61);
	v->a[26][sym_variable_assignment] = state(75);
	v->a[26][sym__variable_assignments] = state(480);
	v->a[26][sym_file_redirect] = state(259);
	v->a[26][sym_arithmetic_expansion] = state(126);
	v->a[26][sym_concatenation] = state(250);
	v->a[26][sym_string] = state(126);
	v->a[26][sym_simple_expansion] = state(126);
	v->a[26][sym_expansion] = state(126);
	v->a[26][sym_command_substitution] = state(126);
	v->a[26][aux_sym__statements_repeat1] = state(33);
	v->a[26][aux_sym_redirected_statement_repeat2] = state(553);
	v->a[26][aux_sym_command_repeat1] = state(165);
	v->a[26][sym_word] = actions(89);
	v->a[26][anon_sym_LBRACE] = actions(9);
	v->a[26][anon_sym_LPAREN] = actions(11);
	v->a[26][anon_sym_BANG] = actions(91);
	return (parse_table_53(v));
}

void	parse_table_53(t_parse_table_array *v)
{
	v->a[26][anon_sym_LT] = actions(93);
	v->a[26][anon_sym_GT] = actions(93);
	v->a[26][anon_sym_GT_GT] = actions(93);
	v->a[26][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(75);
	v->a[26][anon_sym_DOLLAR] = actions(77);
	v->a[26][anon_sym_DQUOTE] = actions(79);
	v->a[26][sym_raw_string] = actions(89);
	v->a[26][sym_number] = actions(89);
	v->a[26][anon_sym_DOLLAR_LBRACE] = actions(81);
	v->a[26][anon_sym_DOLLAR_LPAREN] = actions(83);
	v->a[26][anon_sym_BQUOTE] = actions(85);
	v->a[26][sym_comment] = actions(3);
	v->a[26][sym_variable_name] = actions(95);
	v->a[27][sym__statements] = state(787);
	v->a[27][sym__statement_not_pipeline] = state(769);
	v->a[27][sym_redirected_statement] = state(480);
	v->a[27][sym_compound_statement] = state(480);
	v->a[27][sym_subshell] = state(480);
	v->a[27][sym_pipeline] = state(514);
	v->a[27][sym_list] = state(480);
	return (parse_table_54(v));
}

void	parse_table_54(t_parse_table_array *v)
{
	v->a[27][sym_negated_command] = state(480);
	v->a[27][sym_command] = state(480);
	v->a[27][sym_command_name] = state(61);
	v->a[27][sym_variable_assignment] = state(75);
	v->a[27][sym__variable_assignments] = state(480);
	v->a[27][sym_file_redirect] = state(255);
	v->a[27][sym_arithmetic_expansion] = state(126);
	v->a[27][sym_concatenation] = state(250);
	v->a[27][sym_string] = state(126);
	v->a[27][sym_simple_expansion] = state(126);
	v->a[27][sym_expansion] = state(126);
	v->a[27][sym_command_substitution] = state(126);
	v->a[27][aux_sym__statements_repeat1] = state(33);
	v->a[27][aux_sym_redirected_statement_repeat2] = state(553);
	v->a[27][aux_sym_command_repeat1] = state(165);
	v->a[27][sym_word] = actions(89);
	v->a[27][anon_sym_LBRACE] = actions(9);
	v->a[27][anon_sym_LPAREN] = actions(11);
	v->a[27][anon_sym_BANG] = actions(91);
	v->a[27][anon_sym_LT] = actions(93);
	return (parse_table_55(v));
}

/* EOF parse_table_10.c */
