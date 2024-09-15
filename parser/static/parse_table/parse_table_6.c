/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_6.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_30(t_parse_table_array *v)
{
	v->a[14][anon_sym_DOLLAR_LBRACE] = actions(81);
	v->a[14][anon_sym_DOLLAR_LPAREN] = actions(83);
	v->a[14][anon_sym_BQUOTE] = actions(85);
	v->a[14][sym_comment] = actions(3);
	v->a[14][sym_variable_name] = actions(95);
	v->a[15][sym__statements] = state(790);
	v->a[15][sym__statement_not_pipeline] = state(769);
	v->a[15][sym_redirected_statement] = state(480);
	v->a[15][sym_compound_statement] = state(480);
	v->a[15][sym_subshell] = state(480);
	v->a[15][sym_pipeline] = state(514);
	v->a[15][sym_list] = state(480);
	v->a[15][sym_negated_command] = state(480);
	v->a[15][sym_command] = state(480);
	v->a[15][sym_command_name] = state(61);
	v->a[15][sym_variable_assignment] = state(75);
	v->a[15][sym__variable_assignments] = state(480);
	v->a[15][sym_file_redirect] = state(256);
	v->a[15][sym_arithmetic_expansion] = state(126);
	v->a[15][sym_concatenation] = state(250);
	return (parse_table_31(v));
}

void	parse_table_31(t_parse_table_array *v)
{
	v->a[15][sym_string] = state(126);
	v->a[15][sym_simple_expansion] = state(126);
	v->a[15][sym_expansion] = state(126);
	v->a[15][sym_command_substitution] = state(126);
	v->a[15][aux_sym__statements_repeat1] = state(33);
	v->a[15][aux_sym_redirected_statement_repeat2] = state(553);
	v->a[15][aux_sym_command_repeat1] = state(165);
	v->a[15][sym_word] = actions(89);
	v->a[15][anon_sym_LBRACE] = actions(9);
	v->a[15][anon_sym_LPAREN] = actions(11);
	v->a[15][anon_sym_BANG] = actions(91);
	v->a[15][anon_sym_LT] = actions(93);
	v->a[15][anon_sym_GT] = actions(93);
	v->a[15][anon_sym_GT_GT] = actions(93);
	v->a[15][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(75);
	v->a[15][anon_sym_DOLLAR] = actions(77);
	v->a[15][anon_sym_DQUOTE] = actions(79);
	v->a[15][sym_raw_string] = actions(89);
	v->a[15][sym_number] = actions(89);
	v->a[15][anon_sym_DOLLAR_LBRACE] = actions(81);
	return (parse_table_32(v));
}

void	parse_table_32(t_parse_table_array *v)
{
	v->a[15][anon_sym_DOLLAR_LPAREN] = actions(83);
	v->a[15][anon_sym_BQUOTE] = actions(85);
	v->a[15][sym_comment] = actions(3);
	v->a[15][sym_variable_name] = actions(95);
	v->a[16][sym__statements] = state(804);
	v->a[16][sym__statement_not_pipeline] = state(769);
	v->a[16][sym_redirected_statement] = state(480);
	v->a[16][sym_compound_statement] = state(480);
	v->a[16][sym_subshell] = state(480);
	v->a[16][sym_pipeline] = state(514);
	v->a[16][sym_list] = state(480);
	v->a[16][sym_negated_command] = state(480);
	v->a[16][sym_command] = state(480);
	v->a[16][sym_command_name] = state(61);
	v->a[16][sym_variable_assignment] = state(75);
	v->a[16][sym__variable_assignments] = state(480);
	v->a[16][sym_file_redirect] = state(249);
	v->a[16][sym_arithmetic_expansion] = state(126);
	v->a[16][sym_concatenation] = state(250);
	v->a[16][sym_string] = state(126);
	return (parse_table_33(v));
}

void	parse_table_33(t_parse_table_array *v)
{
	v->a[16][sym_simple_expansion] = state(126);
	v->a[16][sym_expansion] = state(126);
	v->a[16][sym_command_substitution] = state(126);
	v->a[16][aux_sym__statements_repeat1] = state(33);
	v->a[16][aux_sym_redirected_statement_repeat2] = state(553);
	v->a[16][aux_sym_command_repeat1] = state(165);
	v->a[16][sym_word] = actions(89);
	v->a[16][anon_sym_LBRACE] = actions(9);
	v->a[16][anon_sym_LPAREN] = actions(11);
	v->a[16][anon_sym_BANG] = actions(91);
	v->a[16][anon_sym_LT] = actions(93);
	v->a[16][anon_sym_GT] = actions(93);
	v->a[16][anon_sym_GT_GT] = actions(93);
	v->a[16][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(75);
	v->a[16][anon_sym_DOLLAR] = actions(77);
	v->a[16][anon_sym_DQUOTE] = actions(79);
	v->a[16][sym_raw_string] = actions(89);
	v->a[16][sym_number] = actions(89);
	v->a[16][anon_sym_DOLLAR_LBRACE] = actions(81);
	v->a[16][anon_sym_DOLLAR_LPAREN] = actions(83);
	return (parse_table_34(v));
}

void	parse_table_34(t_parse_table_array *v)
{
	v->a[16][anon_sym_BQUOTE] = actions(85);
	v->a[16][sym_comment] = actions(3);
	v->a[16][sym_variable_name] = actions(95);
	v->a[17][sym__statements] = state(813);
	v->a[17][sym__statement_not_pipeline] = state(770);
	v->a[17][sym_redirected_statement] = state(478);
	v->a[17][sym_compound_statement] = state(478);
	v->a[17][sym_subshell] = state(478);
	v->a[17][sym_pipeline] = state(492);
	v->a[17][sym_list] = state(478);
	v->a[17][sym_negated_command] = state(478);
	v->a[17][sym_command] = state(478);
	v->a[17][sym_command_name] = state(89);
	v->a[17][sym_variable_assignment] = state(106);
	v->a[17][sym__variable_assignments] = state(478);
	v->a[17][sym_file_redirect] = state(268);
	v->a[17][sym_arithmetic_expansion] = state(176);
	v->a[17][sym_concatenation] = state(250);
	v->a[17][sym_string] = state(176);
	v->a[17][sym_simple_expansion] = state(176);
	return (parse_table_35(v));
}

/* EOF parse_table_6.c */
