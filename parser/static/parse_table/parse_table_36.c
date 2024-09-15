/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_36.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_180(t_parse_table_array *v)
{
	v->a[108][sym_raw_string] = actions(475);
	v->a[108][sym_number] = actions(475);
	v->a[108][anon_sym_DOLLAR_LBRACE] = actions(343);
	v->a[108][anon_sym_DOLLAR_LPAREN] = actions(346);
	v->a[108][anon_sym_BQUOTE] = actions(349);
	v->a[108][sym_comment] = actions(3);
	v->a[108][anon_sym_SEMI] = actions(218);
	v->a[108][anon_sym_SEMI_SEMI] = actions(218);
	v->a[108][aux_sym_terminator_token1] = actions(218);
	v->a[109][sym_subshell] = state(544);
	v->a[109][sym_command] = state(540);
	v->a[109][sym_command_name] = state(72);
	v->a[109][sym_variable_assignment] = state(263);
	v->a[109][sym_file_redirect] = state(539);
	v->a[109][sym_arithmetic_expansion] = state(176);
	v->a[109][sym_concatenation] = state(250);
	v->a[109][sym_string] = state(176);
	v->a[109][sym_simple_expansion] = state(176);
	v->a[109][sym_expansion] = state(176);
	v->a[109][sym_command_substitution] = state(176);
	return (parse_table_181(v));
}

void	parse_table_181(t_parse_table_array *v)
{
	v->a[109][aux_sym_command_repeat1] = state(183);
	v->a[109][sym_word] = actions(69);
	v->a[109][anon_sym_LPAREN] = actions(11);
	v->a[109][anon_sym_LT] = actions(443);
	v->a[109][anon_sym_GT] = actions(443);
	v->a[109][anon_sym_GT_GT] = actions(443);
	v->a[109][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(75);
	v->a[109][anon_sym_DOLLAR] = actions(77);
	v->a[109][anon_sym_DQUOTE] = actions(79);
	v->a[109][sym_raw_string] = actions(69);
	v->a[109][sym_number] = actions(69);
	v->a[109][anon_sym_DOLLAR_LBRACE] = actions(81);
	v->a[109][anon_sym_DOLLAR_LPAREN] = actions(83);
	v->a[109][anon_sym_BQUOTE] = actions(85);
	v->a[109][sym_comment] = actions(3);
	v->a[109][sym_variable_name] = actions(87);
	v->a[110][sym_variable_assignment] = state(490);
	v->a[110][sym_file_redirect] = state(497);
	v->a[110][sym_heredoc_redirect] = state(497);
	v->a[110][aux_sym_redirected_statement_repeat1] = state(497);
	return (parse_table_182(v));
}

void	parse_table_182(t_parse_table_array *v)
{
	v->a[110][aux_sym__variable_assignments_repeat1] = state(490);
	v->a[110][sym_word] = actions(352);
	v->a[110][anon_sym_PIPE] = actions(356);
	v->a[110][anon_sym_AMP_AMP] = actions(454);
	v->a[110][anon_sym_PIPE_PIPE] = actions(454);
	v->a[110][anon_sym_LT] = actions(352);
	v->a[110][anon_sym_GT] = actions(352);
	v->a[110][anon_sym_GT_GT] = actions(352);
	v->a[110][anon_sym_LT_LT] = actions(454);
	v->a[110][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(352);
	v->a[110][anon_sym_DOLLAR] = actions(352);
	v->a[110][anon_sym_DQUOTE] = actions(352);
	v->a[110][sym_raw_string] = actions(352);
	v->a[110][sym_number] = actions(352);
	v->a[110][anon_sym_DOLLAR_LBRACE] = actions(352);
	v->a[110][anon_sym_DOLLAR_LPAREN] = actions(352);
	v->a[110][anon_sym_BQUOTE] = actions(352);
	v->a[110][sym_comment] = actions(3);
	v->a[110][anon_sym_SEMI] = actions(454);
	v->a[110][anon_sym_SEMI_SEMI] = actions(454);
	return (parse_table_183(v));
}

void	parse_table_183(t_parse_table_array *v)
{
	v->a[110][aux_sym_terminator_token1] = actions(454);
	v->a[110][sym_variable_name] = actions(458);
	v->a[111][sym_variable_assignment] = state(550);
	v->a[111][sym_file_redirect] = state(533);
	v->a[111][sym_heredoc_redirect] = state(533);
	v->a[111][aux_sym_redirected_statement_repeat1] = state(533);
	v->a[111][aux_sym__variable_assignments_repeat1] = state(550);
	v->a[111][sym_word] = actions(352);
	v->a[111][anon_sym_PIPE] = actions(356);
	v->a[111][anon_sym_AMP_AMP] = actions(454);
	v->a[111][anon_sym_PIPE_PIPE] = actions(454);
	v->a[111][anon_sym_LT] = actions(352);
	v->a[111][anon_sym_GT] = actions(352);
	v->a[111][anon_sym_GT_GT] = actions(352);
	v->a[111][anon_sym_LT_LT] = actions(454);
	v->a[111][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(352);
	v->a[111][anon_sym_DOLLAR] = actions(352);
	v->a[111][anon_sym_DQUOTE] = actions(352);
	v->a[111][sym_raw_string] = actions(352);
	v->a[111][sym_number] = actions(352);
	return (parse_table_184(v));
}

void	parse_table_184(t_parse_table_array *v)
{
	v->a[111][anon_sym_DOLLAR_LBRACE] = actions(352);
	v->a[111][anon_sym_DOLLAR_LPAREN] = actions(352);
	v->a[111][anon_sym_BQUOTE] = actions(352);
	v->a[111][sym_comment] = actions(3);
	v->a[111][anon_sym_SEMI] = actions(454);
	v->a[111][anon_sym_SEMI_SEMI] = actions(454);
	v->a[111][aux_sym_terminator_token1] = actions(454);
	v->a[111][sym_variable_name] = actions(447);
	v->a[112][sym_variable_assignment] = state(490);
	v->a[112][sym_file_redirect] = state(497);
	v->a[112][sym_heredoc_redirect] = state(497);
	v->a[112][aux_sym_redirected_statement_repeat1] = state(497);
	v->a[112][aux_sym__variable_assignments_repeat1] = state(490);
	v->a[112][sym_word] = actions(352);
	v->a[112][anon_sym_PIPE] = actions(356);
	v->a[112][anon_sym_AMP_AMP] = actions(356);
	v->a[112][anon_sym_PIPE_PIPE] = actions(356);
	v->a[112][anon_sym_LT] = actions(356);
	v->a[112][anon_sym_GT] = actions(356);
	v->a[112][anon_sym_GT_GT] = actions(356);
	return (parse_table_185(v));
}

/* EOF parse_table_36.c */
