/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_32.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_160(t_parse_table_array *v)
{
	v->a[93][anon_sym_DOLLAR_LPAREN] = actions(83);
	v->a[93][anon_sym_BQUOTE] = actions(85);
	v->a[93][sym_comment] = actions(3);
	v->a[93][sym_variable_name] = actions(87);
	v->a[94][sym_subshell] = state(735);
	v->a[94][sym_command] = state(734);
	v->a[94][sym_command_name] = state(130);
	v->a[94][sym_variable_assignment] = state(349);
	v->a[94][sym_file_redirect] = state(539);
	v->a[94][sym_arithmetic_expansion] = state(274);
	v->a[94][sym_concatenation] = state(358);
	v->a[94][sym_string] = state(274);
	v->a[94][sym_simple_expansion] = state(274);
	v->a[94][sym_expansion] = state(274);
	v->a[94][sym_command_substitution] = state(274);
	v->a[94][aux_sym_command_repeat1] = state(159);
	v->a[94][sym_word] = actions(139);
	v->a[94][anon_sym_LPAREN] = actions(143);
	v->a[94][anon_sym_LT] = actions(443);
	v->a[94][anon_sym_GT] = actions(443);
	return (parse_table_161(v));
}

void	parse_table_161(t_parse_table_array *v)
{
	v->a[94][anon_sym_GT_GT] = actions(443);
	v->a[94][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(149);
	v->a[94][anon_sym_DOLLAR] = actions(151);
	v->a[94][anon_sym_DQUOTE] = actions(153);
	v->a[94][sym_raw_string] = actions(139);
	v->a[94][sym_number] = actions(139);
	v->a[94][anon_sym_DOLLAR_LBRACE] = actions(155);
	v->a[94][anon_sym_DOLLAR_LPAREN] = actions(157);
	v->a[94][anon_sym_BQUOTE] = actions(159);
	v->a[94][sym_comment] = actions(3);
	v->a[94][sym_variable_name] = actions(161);
	v->a[95][sym_variable_assignment] = state(550);
	v->a[95][sym_file_redirect] = state(533);
	v->a[95][sym_heredoc_redirect] = state(533);
	v->a[95][sym_terminator] = state(444);
	v->a[95][aux_sym_redirected_statement_repeat1] = state(533);
	v->a[95][aux_sym__variable_assignments_repeat1] = state(550);
	v->a[95][sym_word] = actions(352);
	v->a[95][anon_sym_PIPE] = actions(356);
	v->a[95][anon_sym_AMP_AMP] = actions(445);
	return (parse_table_162(v));
}

void	parse_table_162(t_parse_table_array *v)
{
	v->a[95][anon_sym_PIPE_PIPE] = actions(445);
	v->a[95][anon_sym_LT] = actions(352);
	v->a[95][anon_sym_GT] = actions(352);
	v->a[95][anon_sym_GT_GT] = actions(352);
	v->a[95][anon_sym_LT_LT] = actions(360);
	v->a[95][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(352);
	v->a[95][anon_sym_DOLLAR] = actions(352);
	v->a[95][anon_sym_DQUOTE] = actions(352);
	v->a[95][sym_raw_string] = actions(352);
	v->a[95][sym_number] = actions(352);
	v->a[95][anon_sym_DOLLAR_LBRACE] = actions(352);
	v->a[95][anon_sym_DOLLAR_LPAREN] = actions(352);
	v->a[95][anon_sym_BQUOTE] = actions(352);
	v->a[95][sym_comment] = actions(3);
	v->a[95][anon_sym_SEMI] = actions(362);
	v->a[95][anon_sym_SEMI_SEMI] = actions(362);
	v->a[95][aux_sym_terminator_token1] = actions(362);
	v->a[95][sym_variable_name] = actions(447);
	v->a[96][sym_subshell] = state(544);
	v->a[96][sym_command] = state(540);
	return (parse_table_163(v));
}

void	parse_table_163(t_parse_table_array *v)
{
	v->a[96][sym_command_name] = state(65);
	v->a[96][sym_variable_assignment] = state(257);
	v->a[96][sym_file_redirect] = state(539);
	v->a[96][sym_arithmetic_expansion] = state(116);
	v->a[96][sym_concatenation] = state(254);
	v->a[96][sym_string] = state(116);
	v->a[96][sym_simple_expansion] = state(116);
	v->a[96][sym_expansion] = state(116);
	v->a[96][sym_command_substitution] = state(116);
	v->a[96][aux_sym_command_repeat1] = state(193);
	v->a[96][sym_word] = actions(7);
	v->a[96][anon_sym_LPAREN] = actions(11);
	v->a[96][anon_sym_LT] = actions(443);
	v->a[96][anon_sym_GT] = actions(443);
	v->a[96][anon_sym_GT_GT] = actions(443);
	v->a[96][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(17);
	v->a[96][anon_sym_DOLLAR] = actions(19);
	v->a[96][anon_sym_DQUOTE] = actions(21);
	v->a[96][sym_raw_string] = actions(7);
	v->a[96][sym_number] = actions(7);
	return (parse_table_164(v));
}

void	parse_table_164(t_parse_table_array *v)
{
	v->a[96][anon_sym_DOLLAR_LBRACE] = actions(23);
	v->a[96][anon_sym_DOLLAR_LPAREN] = actions(25);
	v->a[96][anon_sym_BQUOTE] = actions(27);
	v->a[96][sym_comment] = actions(3);
	v->a[96][sym_variable_name] = actions(29);
	v->a[97][sym_variable_assignment] = state(516);
	v->a[97][sym_file_redirect] = state(515);
	v->a[97][sym_heredoc_redirect] = state(515);
	v->a[97][aux_sym_redirected_statement_repeat1] = state(515);
	v->a[97][aux_sym__variable_assignments_repeat1] = state(516);
	v->a[97][ts_builtin_sym_end] = actions(450);
	v->a[97][sym_word] = actions(352);
	v->a[97][anon_sym_PIPE] = actions(356);
	v->a[97][anon_sym_AMP_AMP] = actions(356);
	v->a[97][anon_sym_PIPE_PIPE] = actions(356);
	v->a[97][anon_sym_LT] = actions(356);
	v->a[97][anon_sym_GT] = actions(356);
	v->a[97][anon_sym_GT_GT] = actions(356);
	v->a[97][anon_sym_LT_LT] = actions(356);
	v->a[97][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(352);
	return (parse_table_165(v));
}

/* EOF parse_table_32.c */
