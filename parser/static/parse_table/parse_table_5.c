/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_5.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_25(t_parse_table_array *v)
{
	v->a[12][sym_file_redirect] = state(258);
	v->a[12][sym_arithmetic_expansion] = state(126);
	v->a[12][sym_concatenation] = state(250);
	v->a[12][sym_string] = state(126);
	v->a[12][sym_simple_expansion] = state(126);
	v->a[12][sym_expansion] = state(126);
	v->a[12][sym_command_substitution] = state(126);
	v->a[12][aux_sym__statements_repeat1] = state(33);
	v->a[12][aux_sym_redirected_statement_repeat2] = state(553);
	v->a[12][aux_sym_command_repeat1] = state(165);
	v->a[12][sym_word] = actions(89);
	v->a[12][anon_sym_LBRACE] = actions(9);
	v->a[12][anon_sym_LPAREN] = actions(11);
	v->a[12][anon_sym_BANG] = actions(91);
	v->a[12][anon_sym_LT] = actions(93);
	v->a[12][anon_sym_GT] = actions(93);
	v->a[12][anon_sym_GT_GT] = actions(93);
	v->a[12][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(75);
	v->a[12][anon_sym_DOLLAR] = actions(77);
	v->a[12][anon_sym_DQUOTE] = actions(79);
	return (parse_table_26(v));
}

void	parse_table_26(t_parse_table_array *v)
{
	v->a[12][sym_raw_string] = actions(89);
	v->a[12][sym_number] = actions(89);
	v->a[12][anon_sym_DOLLAR_LBRACE] = actions(81);
	v->a[12][anon_sym_DOLLAR_LPAREN] = actions(83);
	v->a[12][anon_sym_BQUOTE] = actions(85);
	v->a[12][sym_comment] = actions(3);
	v->a[12][sym_variable_name] = actions(95);
	v->a[13][sym__statements] = state(798);
	v->a[13][sym__statement_not_pipeline] = state(770);
	v->a[13][sym_redirected_statement] = state(478);
	v->a[13][sym_compound_statement] = state(478);
	v->a[13][sym_subshell] = state(478);
	v->a[13][sym_pipeline] = state(492);
	v->a[13][sym_list] = state(478);
	v->a[13][sym_negated_command] = state(478);
	v->a[13][sym_command] = state(478);
	v->a[13][sym_command_name] = state(89);
	v->a[13][sym_variable_assignment] = state(106);
	v->a[13][sym__variable_assignments] = state(478);
	v->a[13][sym_file_redirect] = state(268);
	return (parse_table_27(v));
}

void	parse_table_27(t_parse_table_array *v)
{
	v->a[13][sym_arithmetic_expansion] = state(176);
	v->a[13][sym_concatenation] = state(250);
	v->a[13][sym_string] = state(176);
	v->a[13][sym_simple_expansion] = state(176);
	v->a[13][sym_expansion] = state(176);
	v->a[13][sym_command_substitution] = state(176);
	v->a[13][aux_sym__statements_repeat1] = state(36);
	v->a[13][aux_sym_redirected_statement_repeat2] = state(558);
	v->a[13][aux_sym_command_repeat1] = state(139);
	v->a[13][sym_word] = actions(69);
	v->a[13][anon_sym_LBRACE] = actions(9);
	v->a[13][anon_sym_LPAREN] = actions(11);
	v->a[13][anon_sym_BANG] = actions(71);
	v->a[13][anon_sym_LT] = actions(73);
	v->a[13][anon_sym_GT] = actions(73);
	v->a[13][anon_sym_GT_GT] = actions(73);
	v->a[13][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(75);
	v->a[13][anon_sym_DOLLAR] = actions(77);
	v->a[13][anon_sym_DQUOTE] = actions(79);
	v->a[13][sym_raw_string] = actions(69);
	return (parse_table_28(v));
}

void	parse_table_28(t_parse_table_array *v)
{
	v->a[13][sym_number] = actions(69);
	v->a[13][anon_sym_DOLLAR_LBRACE] = actions(81);
	v->a[13][anon_sym_DOLLAR_LPAREN] = actions(83);
	v->a[13][anon_sym_BQUOTE] = actions(85);
	v->a[13][sym_comment] = actions(3);
	v->a[13][sym_variable_name] = actions(87);
	v->a[14][sym__statements] = state(828);
	v->a[14][sym__statement_not_pipeline] = state(769);
	v->a[14][sym_redirected_statement] = state(480);
	v->a[14][sym_compound_statement] = state(480);
	v->a[14][sym_subshell] = state(480);
	v->a[14][sym_pipeline] = state(514);
	v->a[14][sym_list] = state(480);
	v->a[14][sym_negated_command] = state(480);
	v->a[14][sym_command] = state(480);
	v->a[14][sym_command_name] = state(61);
	v->a[14][sym_variable_assignment] = state(75);
	v->a[14][sym__variable_assignments] = state(480);
	v->a[14][sym_file_redirect] = state(247);
	v->a[14][sym_arithmetic_expansion] = state(126);
	return (parse_table_29(v));
}

void	parse_table_29(t_parse_table_array *v)
{
	v->a[14][sym_concatenation] = state(250);
	v->a[14][sym_string] = state(126);
	v->a[14][sym_simple_expansion] = state(126);
	v->a[14][sym_expansion] = state(126);
	v->a[14][sym_command_substitution] = state(126);
	v->a[14][aux_sym__statements_repeat1] = state(33);
	v->a[14][aux_sym_redirected_statement_repeat2] = state(553);
	v->a[14][aux_sym_command_repeat1] = state(165);
	v->a[14][sym_word] = actions(89);
	v->a[14][anon_sym_LBRACE] = actions(9);
	v->a[14][anon_sym_LPAREN] = actions(11);
	v->a[14][anon_sym_BANG] = actions(91);
	v->a[14][anon_sym_LT] = actions(93);
	v->a[14][anon_sym_GT] = actions(93);
	v->a[14][anon_sym_GT_GT] = actions(93);
	v->a[14][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(75);
	v->a[14][anon_sym_DOLLAR] = actions(77);
	v->a[14][anon_sym_DQUOTE] = actions(79);
	v->a[14][sym_raw_string] = actions(89);
	v->a[14][sym_number] = actions(89);
	return (parse_table_30(v));
}

/* EOF parse_table_5.c */
