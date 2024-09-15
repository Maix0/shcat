/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_34.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_170(t_parse_table_array *v)
{
	v->a[101][sym_string] = state(126);
	v->a[101][sym_simple_expansion] = state(126);
	v->a[101][sym_expansion] = state(126);
	v->a[101][sym_command_substitution] = state(126);
	v->a[101][aux_sym_command_repeat1] = state(165);
	v->a[101][sym_word] = actions(89);
	v->a[101][anon_sym_LPAREN] = actions(11);
	v->a[101][anon_sym_LT] = actions(443);
	v->a[101][anon_sym_GT] = actions(443);
	v->a[101][anon_sym_GT_GT] = actions(443);
	v->a[101][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(75);
	v->a[101][anon_sym_DOLLAR] = actions(77);
	v->a[101][anon_sym_DQUOTE] = actions(79);
	v->a[101][sym_raw_string] = actions(89);
	v->a[101][sym_number] = actions(89);
	v->a[101][anon_sym_DOLLAR_LBRACE] = actions(81);
	v->a[101][anon_sym_DOLLAR_LPAREN] = actions(83);
	v->a[101][anon_sym_BQUOTE] = actions(85);
	v->a[101][sym_comment] = actions(3);
	v->a[101][sym_variable_name] = actions(95);
	return (parse_table_171(v));
}

void	parse_table_171(t_parse_table_array *v)
{
	v->a[102][sym_variable_assignment] = state(504);
	v->a[102][sym_file_redirect] = state(503);
	v->a[102][sym_heredoc_redirect] = state(503);
	v->a[102][aux_sym_redirected_statement_repeat1] = state(503);
	v->a[102][aux_sym__variable_assignments_repeat1] = state(504);
	v->a[102][sym_word] = actions(352);
	v->a[102][anon_sym_RPAREN] = actions(356);
	v->a[102][anon_sym_PIPE] = actions(356);
	v->a[102][anon_sym_AMP_AMP] = actions(356);
	v->a[102][anon_sym_PIPE_PIPE] = actions(356);
	v->a[102][anon_sym_LT] = actions(356);
	v->a[102][anon_sym_GT] = actions(356);
	v->a[102][anon_sym_GT_GT] = actions(356);
	v->a[102][anon_sym_LT_LT] = actions(356);
	v->a[102][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(352);
	v->a[102][anon_sym_DOLLAR] = actions(352);
	v->a[102][anon_sym_DQUOTE] = actions(352);
	v->a[102][sym_raw_string] = actions(352);
	v->a[102][sym_number] = actions(352);
	v->a[102][anon_sym_DOLLAR_LBRACE] = actions(352);
	return (parse_table_172(v));
}

void	parse_table_172(t_parse_table_array *v)
{
	v->a[102][anon_sym_DOLLAR_LPAREN] = actions(352);
	v->a[102][anon_sym_BQUOTE] = actions(352);
	v->a[102][sym_comment] = actions(3);
	v->a[102][anon_sym_SEMI] = actions(356);
	v->a[102][anon_sym_SEMI_SEMI] = actions(356);
	v->a[102][aux_sym_terminator_token1] = actions(356);
	v->a[102][sym_variable_name] = actions(364);
	v->a[103][sym_variable_assignment] = state(490);
	v->a[103][sym_file_redirect] = state(497);
	v->a[103][sym_heredoc_redirect] = state(497);
	v->a[103][sym_terminator] = state(428);
	v->a[103][aux_sym_redirected_statement_repeat1] = state(497);
	v->a[103][aux_sym__variable_assignments_repeat1] = state(490);
	v->a[103][sym_word] = actions(352);
	v->a[103][anon_sym_PIPE] = actions(356);
	v->a[103][anon_sym_AMP_AMP] = actions(456);
	v->a[103][anon_sym_PIPE_PIPE] = actions(456);
	v->a[103][anon_sym_LT] = actions(352);
	v->a[103][anon_sym_GT] = actions(352);
	v->a[103][anon_sym_GT_GT] = actions(352);
	return (parse_table_173(v));
}

void	parse_table_173(t_parse_table_array *v)
{
	v->a[103][anon_sym_LT_LT] = actions(360);
	v->a[103][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(352);
	v->a[103][anon_sym_DOLLAR] = actions(352);
	v->a[103][anon_sym_DQUOTE] = actions(352);
	v->a[103][sym_raw_string] = actions(352);
	v->a[103][sym_number] = actions(352);
	v->a[103][anon_sym_DOLLAR_LBRACE] = actions(352);
	v->a[103][anon_sym_DOLLAR_LPAREN] = actions(352);
	v->a[103][anon_sym_BQUOTE] = actions(376);
	v->a[103][sym_comment] = actions(3);
	v->a[103][anon_sym_SEMI] = actions(362);
	v->a[103][anon_sym_SEMI_SEMI] = actions(362);
	v->a[103][aux_sym_terminator_token1] = actions(362);
	v->a[103][sym_variable_name] = actions(458);
	v->a[104][sym_variable_assignment] = state(516);
	v->a[104][sym_file_redirect] = state(515);
	v->a[104][sym_heredoc_redirect] = state(515);
	v->a[104][aux_sym_redirected_statement_repeat1] = state(515);
	v->a[104][aux_sym__variable_assignments_repeat1] = state(516);
	v->a[104][ts_builtin_sym_end] = actions(461);
	return (parse_table_174(v));
}

void	parse_table_174(t_parse_table_array *v)
{
	v->a[104][sym_word] = actions(352);
	v->a[104][anon_sym_PIPE] = actions(356);
	v->a[104][anon_sym_AMP_AMP] = actions(454);
	v->a[104][anon_sym_PIPE_PIPE] = actions(454);
	v->a[104][anon_sym_LT] = actions(352);
	v->a[104][anon_sym_GT] = actions(352);
	v->a[104][anon_sym_GT_GT] = actions(352);
	v->a[104][anon_sym_LT_LT] = actions(454);
	v->a[104][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(352);
	v->a[104][anon_sym_DOLLAR] = actions(352);
	v->a[104][anon_sym_DQUOTE] = actions(352);
	v->a[104][sym_raw_string] = actions(352);
	v->a[104][sym_number] = actions(352);
	v->a[104][anon_sym_DOLLAR_LBRACE] = actions(352);
	v->a[104][anon_sym_DOLLAR_LPAREN] = actions(352);
	v->a[104][anon_sym_BQUOTE] = actions(352);
	v->a[104][sym_comment] = actions(3);
	v->a[104][anon_sym_SEMI] = actions(454);
	v->a[104][anon_sym_SEMI_SEMI] = actions(454);
	v->a[104][aux_sym_terminator_token1] = actions(454);
	return (parse_table_175(v));
}

/* EOF parse_table_34.c */
