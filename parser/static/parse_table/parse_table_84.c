/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_84.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_420(t_parse_table_array *v)
{
	v->a[190][sym_variable_name] = actions(423);
	v->a[191][sym_variable_assignment] = state(970);
	v->a[191][sym_file_redirect] = state(971);
	v->a[191][sym_heredoc_redirect] = state(971);
	v->a[191][sym_terminator] = state(356);
	v->a[191][aux_sym_redirected_statement_repeat1] = state(971);
	v->a[191][aux_sym__variable_assignments_repeat1] = state(970);
	v->a[191][sym_word] = actions(576);
	v->a[191][anon_sym_esac] = actions(591);
	v->a[191][anon_sym_PIPE] = actions(580);
	v->a[191][anon_sym_SEMI_SEMI] = actions(591);
	v->a[191][anon_sym_AMP_AMP] = actions(582);
	v->a[191][anon_sym_PIPE_PIPE] = actions(582);
	v->a[191][anon_sym_LT] = actions(576);
	v->a[191][anon_sym_GT] = actions(576);
	v->a[191][anon_sym_GT_GT] = actions(576);
	v->a[191][anon_sym_LT_LT] = actions(584);
	v->a[191][aux_sym_heredoc_redirect_token1] = actions(586);
	v->a[191][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(576);
	v->a[191][anon_sym_DOLLAR] = actions(576);
	return (parse_table_421(v));
}

void	parse_table_421(t_parse_table_array *v)
{
	v->a[191][anon_sym_DQUOTE] = actions(576);
	v->a[191][sym_raw_string] = actions(576);
	v->a[191][sym_number] = actions(576);
	v->a[191][anon_sym_DOLLAR_LBRACE] = actions(576);
	v->a[191][anon_sym_DOLLAR_LPAREN] = actions(576);
	v->a[191][anon_sym_BQUOTE] = actions(576);
	v->a[191][sym_comment] = actions(3);
	v->a[191][anon_sym_SEMI] = actions(586);
	v->a[191][sym_variable_name] = actions(588);
	v->a[192][sym_variable_assignment] = state(924);
	v->a[192][sym_file_redirect] = state(922);
	v->a[192][sym_heredoc_redirect] = state(922);
	v->a[192][sym_terminator] = state(461);
	v->a[192][aux_sym_redirected_statement_repeat1] = state(922);
	v->a[192][aux_sym__variable_assignments_repeat1] = state(924);
	v->a[192][ts_builtin_sym_end] = actions(691);
	v->a[192][sym_word] = actions(576);
	v->a[192][anon_sym_PIPE] = actions(580);
	v->a[192][anon_sym_SEMI_SEMI] = actions(693);
	v->a[192][anon_sym_AMP_AMP] = actions(695);
	return (parse_table_422(v));
}

void	parse_table_422(t_parse_table_array *v)
{
	v->a[192][anon_sym_PIPE_PIPE] = actions(695);
	v->a[192][anon_sym_LT] = actions(576);
	v->a[192][anon_sym_GT] = actions(576);
	v->a[192][anon_sym_GT_GT] = actions(576);
	v->a[192][anon_sym_LT_LT] = actions(597);
	v->a[192][aux_sym_heredoc_redirect_token1] = actions(693);
	v->a[192][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(576);
	v->a[192][anon_sym_DOLLAR] = actions(576);
	v->a[192][anon_sym_DQUOTE] = actions(576);
	v->a[192][sym_raw_string] = actions(576);
	v->a[192][sym_number] = actions(576);
	v->a[192][anon_sym_DOLLAR_LBRACE] = actions(576);
	v->a[192][anon_sym_DOLLAR_LPAREN] = actions(576);
	v->a[192][anon_sym_BQUOTE] = actions(576);
	v->a[192][sym_comment] = actions(3);
	v->a[192][anon_sym_SEMI] = actions(693);
	v->a[192][sym_variable_name] = actions(697);
	v->a[193][sym_file_redirect] = state(1360);
	v->a[193][sym__heredoc_pipeline] = state(1596);
	v->a[193][sym__heredoc_expression] = state(1667);
	return (parse_table_423(v));
}

void	parse_table_423(t_parse_table_array *v)
{
	v->a[193][aux_sym__heredoc_command] = state(756);
	v->a[193][sym_arithmetic_expansion] = state(1011);
	v->a[193][sym_concatenation] = state(1296);
	v->a[193][sym_string] = state(1011);
	v->a[193][sym_simple_expansion] = state(1011);
	v->a[193][sym_expansion] = state(1011);
	v->a[193][sym_command_substitution] = state(1011);
	v->a[193][aux_sym_redirected_statement_repeat2] = state(1360);
	v->a[193][sym_word] = actions(645);
	v->a[193][anon_sym_PIPE] = actions(647);
	v->a[193][anon_sym_AMP_AMP] = actions(649);
	v->a[193][anon_sym_PIPE_PIPE] = actions(649);
	v->a[193][anon_sym_LT] = actions(651);
	v->a[193][anon_sym_GT] = actions(651);
	v->a[193][anon_sym_GT_GT] = actions(651);
	v->a[193][aux_sym_heredoc_redirect_token1] = actions(700);
	v->a[193][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(655);
	v->a[193][anon_sym_DOLLAR] = actions(657);
	v->a[193][anon_sym_DQUOTE] = actions(659);
	v->a[193][sym_raw_string] = actions(645);
	return (parse_table_424(v));
}

void	parse_table_424(t_parse_table_array *v)
{
	v->a[193][sym_number] = actions(645);
	v->a[193][anon_sym_DOLLAR_LBRACE] = actions(661);
	v->a[193][anon_sym_DOLLAR_LPAREN] = actions(663);
	v->a[193][anon_sym_BQUOTE] = actions(665);
	v->a[193][sym_comment] = actions(3);
	v->a[194][sym_word] = actions(343);
	v->a[194][anon_sym_PIPE] = actions(343);
	v->a[194][anon_sym_AMP_AMP] = actions(343);
	v->a[194][anon_sym_PIPE_PIPE] = actions(343);
	v->a[194][anon_sym_BANG] = actions(395);
	v->a[194][anon_sym_LT] = actions(343);
	v->a[194][anon_sym_GT] = actions(343);
	v->a[194][anon_sym_GT_GT] = actions(343);
	v->a[194][anon_sym_LT_LT] = actions(343);
	v->a[194][aux_sym_heredoc_redirect_token1] = actions(343);
	v->a[194][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(343);
	v->a[194][anon_sym_DASH] = actions(395);
	v->a[194][anon_sym_STAR] = actions(395);
	v->a[194][anon_sym_QMARK] = actions(395);
	v->a[194][anon_sym_DOLLAR] = actions(395);
	return (parse_table_425(v));
}

/* EOF parse_table_84.c */
