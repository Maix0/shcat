/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_16.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_80(t_parse_table_array *v)
{
	v->a[40][anon_sym_DOLLAR] = actions(19);
	v->a[40][anon_sym_DQUOTE] = actions(21);
	v->a[40][sym_raw_string] = actions(7);
	v->a[40][sym_number] = actions(7);
	v->a[40][anon_sym_DOLLAR_LBRACE] = actions(23);
	v->a[40][anon_sym_DOLLAR_LPAREN] = actions(25);
	v->a[40][anon_sym_BQUOTE] = actions(27);
	v->a[40][sym_comment] = actions(3);
	v->a[40][sym_variable_name] = actions(29);
	v->a[41][sym__statement_not_pipeline] = state(505);
	v->a[41][sym_redirected_statement] = state(505);
	v->a[41][sym_compound_statement] = state(505);
	v->a[41][sym_subshell] = state(505);
	v->a[41][sym_pipeline] = state(682);
	v->a[41][sym_list] = state(505);
	v->a[41][sym_negated_command] = state(505);
	v->a[41][sym_command] = state(505);
	v->a[41][sym_command_name] = state(89);
	v->a[41][sym_variable_assignment] = state(112);
	v->a[41][sym__variable_assignments] = state(505);
	return (parse_table_81(v));
}

void	parse_table_81(t_parse_table_array *v)
{
	v->a[41][sym_file_redirect] = state(268);
	v->a[41][sym_arithmetic_expansion] = state(176);
	v->a[41][sym_concatenation] = state(250);
	v->a[41][sym_string] = state(176);
	v->a[41][sym_simple_expansion] = state(176);
	v->a[41][sym_expansion] = state(176);
	v->a[41][sym_command_substitution] = state(176);
	v->a[41][aux_sym_redirected_statement_repeat2] = state(558);
	v->a[41][aux_sym_command_repeat1] = state(139);
	v->a[41][sym_word] = actions(69);
	v->a[41][anon_sym_LBRACE] = actions(9);
	v->a[41][anon_sym_LPAREN] = actions(11);
	v->a[41][anon_sym_BANG] = actions(71);
	v->a[41][anon_sym_LT] = actions(73);
	v->a[41][anon_sym_GT] = actions(73);
	v->a[41][anon_sym_GT_GT] = actions(73);
	v->a[41][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(75);
	v->a[41][anon_sym_DOLLAR] = actions(77);
	v->a[41][anon_sym_DQUOTE] = actions(79);
	v->a[41][sym_raw_string] = actions(69);
	return (parse_table_82(v));
}

void	parse_table_82(t_parse_table_array *v)
{
	v->a[41][sym_number] = actions(69);
	v->a[41][anon_sym_DOLLAR_LBRACE] = actions(81);
	v->a[41][anon_sym_DOLLAR_LPAREN] = actions(83);
	v->a[41][anon_sym_BQUOTE] = actions(85);
	v->a[41][sym_comment] = actions(3);
	v->a[41][sym_variable_name] = actions(87);
	v->a[42][sym__statement_not_pipeline] = state(769);
	v->a[42][sym_redirected_statement] = state(501);
	v->a[42][sym_compound_statement] = state(501);
	v->a[42][sym_subshell] = state(501);
	v->a[42][sym_pipeline] = state(500);
	v->a[42][sym_list] = state(501);
	v->a[42][sym_negated_command] = state(501);
	v->a[42][sym_command] = state(501);
	v->a[42][sym_command_name] = state(61);
	v->a[42][sym_variable_assignment] = state(100);
	v->a[42][sym__variable_assignments] = state(501);
	v->a[42][sym_file_redirect] = state(249);
	v->a[42][sym_arithmetic_expansion] = state(126);
	v->a[42][sym_concatenation] = state(250);
	return (parse_table_83(v));
}

void	parse_table_83(t_parse_table_array *v)
{
	v->a[42][sym_string] = state(126);
	v->a[42][sym_simple_expansion] = state(126);
	v->a[42][sym_expansion] = state(126);
	v->a[42][sym_command_substitution] = state(126);
	v->a[42][aux_sym_redirected_statement_repeat2] = state(553);
	v->a[42][aux_sym_command_repeat1] = state(165);
	v->a[42][sym_word] = actions(89);
	v->a[42][anon_sym_LBRACE] = actions(9);
	v->a[42][anon_sym_LPAREN] = actions(11);
	v->a[42][anon_sym_BANG] = actions(91);
	v->a[42][anon_sym_LT] = actions(93);
	v->a[42][anon_sym_GT] = actions(93);
	v->a[42][anon_sym_GT_GT] = actions(93);
	v->a[42][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(75);
	v->a[42][anon_sym_DOLLAR] = actions(77);
	v->a[42][anon_sym_DQUOTE] = actions(79);
	v->a[42][sym_raw_string] = actions(89);
	v->a[42][sym_number] = actions(89);
	v->a[42][anon_sym_DOLLAR_LBRACE] = actions(81);
	v->a[42][anon_sym_DOLLAR_LPAREN] = actions(83);
	return (parse_table_84(v));
}

void	parse_table_84(t_parse_table_array *v)
{
	v->a[42][anon_sym_BQUOTE] = actions(85);
	v->a[42][sym_comment] = actions(3);
	v->a[42][sym_variable_name] = actions(95);
	v->a[43][sym__statement_not_pipeline] = state(767);
	v->a[43][sym_redirected_statement] = state(649);
	v->a[43][sym_compound_statement] = state(649);
	v->a[43][sym_subshell] = state(649);
	v->a[43][sym_pipeline] = state(654);
	v->a[43][sym_list] = state(649);
	v->a[43][sym_negated_command] = state(649);
	v->a[43][sym_command] = state(649);
	v->a[43][sym_command_name] = state(130);
	v->a[43][sym_variable_assignment] = state(216);
	v->a[43][sym__variable_assignments] = state(649);
	v->a[43][sym_file_redirect] = state(397);
	v->a[43][sym_arithmetic_expansion] = state(274);
	v->a[43][sym_concatenation] = state(358);
	v->a[43][sym_string] = state(274);
	v->a[43][sym_simple_expansion] = state(274);
	v->a[43][sym_expansion] = state(274);
	return (parse_table_85(v));
}

/* EOF parse_table_16.c */
