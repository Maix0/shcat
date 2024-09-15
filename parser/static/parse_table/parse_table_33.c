/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_33.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_165(t_parse_table_array *v)
{
	v->a[97][anon_sym_DOLLAR] = actions(352);
	v->a[97][anon_sym_DQUOTE] = actions(352);
	v->a[97][sym_raw_string] = actions(352);
	v->a[97][sym_number] = actions(352);
	v->a[97][anon_sym_DOLLAR_LBRACE] = actions(352);
	v->a[97][anon_sym_DOLLAR_LPAREN] = actions(352);
	v->a[97][anon_sym_BQUOTE] = actions(352);
	v->a[97][sym_comment] = actions(3);
	v->a[97][anon_sym_SEMI] = actions(356);
	v->a[97][anon_sym_SEMI_SEMI] = actions(356);
	v->a[97][aux_sym_terminator_token1] = actions(356);
	v->a[97][sym_variable_name] = actions(373);
	v->a[98][sym_arithmetic_expansion] = state(221);
	v->a[98][sym_concatenation] = state(108);
	v->a[98][sym_string] = state(221);
	v->a[98][sym_simple_expansion] = state(221);
	v->a[98][sym_expansion] = state(221);
	v->a[98][sym_command_substitution] = state(221);
	v->a[98][aux_sym_file_redirect_repeat1] = state(108);
	v->a[98][sym_word] = actions(441);
	return (parse_table_166(v));
}

void	parse_table_166(t_parse_table_array *v)
{
	v->a[98][anon_sym_PIPE] = actions(205);
	v->a[98][anon_sym_AMP_AMP] = actions(205);
	v->a[98][anon_sym_PIPE_PIPE] = actions(205);
	v->a[98][anon_sym_LT] = actions(205);
	v->a[98][anon_sym_GT] = actions(205);
	v->a[98][anon_sym_GT_GT] = actions(205);
	v->a[98][anon_sym_LT_LT] = actions(205);
	v->a[98][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(380);
	v->a[98][anon_sym_DOLLAR] = actions(382);
	v->a[98][anon_sym_DQUOTE] = actions(384);
	v->a[98][sym_raw_string] = actions(441);
	v->a[98][sym_number] = actions(441);
	v->a[98][anon_sym_DOLLAR_LBRACE] = actions(386);
	v->a[98][anon_sym_DOLLAR_LPAREN] = actions(388);
	v->a[98][anon_sym_BQUOTE] = actions(205);
	v->a[98][sym_comment] = actions(3);
	v->a[98][anon_sym_SEMI] = actions(205);
	v->a[98][anon_sym_SEMI_SEMI] = actions(205);
	v->a[98][aux_sym_terminator_token1] = actions(205);
	v->a[99][sym_variable_assignment] = state(550);
	return (parse_table_167(v));
}

void	parse_table_167(t_parse_table_array *v)
{
	v->a[99][sym_file_redirect] = state(533);
	v->a[99][sym_heredoc_redirect] = state(533);
	v->a[99][sym_terminator] = state(355);
	v->a[99][aux_sym_redirected_statement_repeat1] = state(533);
	v->a[99][aux_sym__variable_assignments_repeat1] = state(550);
	v->a[99][sym_word] = actions(352);
	v->a[99][anon_sym_PIPE] = actions(356);
	v->a[99][anon_sym_AMP_AMP] = actions(445);
	v->a[99][anon_sym_PIPE_PIPE] = actions(445);
	v->a[99][anon_sym_LT] = actions(352);
	v->a[99][anon_sym_GT] = actions(352);
	v->a[99][anon_sym_GT_GT] = actions(352);
	v->a[99][anon_sym_LT_LT] = actions(360);
	v->a[99][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(352);
	v->a[99][anon_sym_DOLLAR] = actions(352);
	v->a[99][anon_sym_DQUOTE] = actions(352);
	v->a[99][sym_raw_string] = actions(352);
	v->a[99][sym_number] = actions(352);
	v->a[99][anon_sym_DOLLAR_LBRACE] = actions(352);
	v->a[99][anon_sym_DOLLAR_LPAREN] = actions(352);
	return (parse_table_168(v));
}

void	parse_table_168(t_parse_table_array *v)
{
	v->a[99][anon_sym_BQUOTE] = actions(352);
	v->a[99][sym_comment] = actions(3);
	v->a[99][anon_sym_SEMI] = actions(452);
	v->a[99][anon_sym_SEMI_SEMI] = actions(452);
	v->a[99][aux_sym_terminator_token1] = actions(452);
	v->a[99][sym_variable_name] = actions(447);
	v->a[100][sym_variable_assignment] = state(504);
	v->a[100][sym_file_redirect] = state(503);
	v->a[100][sym_heredoc_redirect] = state(503);
	v->a[100][aux_sym_redirected_statement_repeat1] = state(503);
	v->a[100][aux_sym__variable_assignments_repeat1] = state(504);
	v->a[100][sym_word] = actions(352);
	v->a[100][anon_sym_RPAREN] = actions(454);
	v->a[100][anon_sym_PIPE] = actions(356);
	v->a[100][anon_sym_AMP_AMP] = actions(454);
	v->a[100][anon_sym_PIPE_PIPE] = actions(454);
	v->a[100][anon_sym_LT] = actions(352);
	v->a[100][anon_sym_GT] = actions(352);
	v->a[100][anon_sym_GT_GT] = actions(352);
	v->a[100][anon_sym_LT_LT] = actions(454);
	return (parse_table_169(v));
}

void	parse_table_169(t_parse_table_array *v)
{
	v->a[100][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(352);
	v->a[100][anon_sym_DOLLAR] = actions(352);
	v->a[100][anon_sym_DQUOTE] = actions(352);
	v->a[100][sym_raw_string] = actions(352);
	v->a[100][sym_number] = actions(352);
	v->a[100][anon_sym_DOLLAR_LBRACE] = actions(352);
	v->a[100][anon_sym_DOLLAR_LPAREN] = actions(352);
	v->a[100][anon_sym_BQUOTE] = actions(352);
	v->a[100][sym_comment] = actions(3);
	v->a[100][anon_sym_SEMI] = actions(454);
	v->a[100][anon_sym_SEMI_SEMI] = actions(454);
	v->a[100][aux_sym_terminator_token1] = actions(454);
	v->a[100][sym_variable_name] = actions(364);
	v->a[101][sym_subshell] = state(544);
	v->a[101][sym_command] = state(540);
	v->a[101][sym_command_name] = state(61);
	v->a[101][sym_variable_assignment] = state(263);
	v->a[101][sym_file_redirect] = state(539);
	v->a[101][sym_arithmetic_expansion] = state(126);
	v->a[101][sym_concatenation] = state(250);
	return (parse_table_170(v));
}

/* EOF parse_table_33.c */
