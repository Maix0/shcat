/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_99.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_495(t_parse_table_array *v)
{
	v->a[246][sym_word] = actions(576);
	v->a[246][anon_sym_PIPE] = actions(580);
	v->a[246][anon_sym_SEMI_SEMI] = actions(816);
	v->a[246][anon_sym_AMP_AMP] = actions(816);
	v->a[246][anon_sym_PIPE_PIPE] = actions(816);
	v->a[246][anon_sym_LT] = actions(576);
	v->a[246][anon_sym_GT] = actions(576);
	v->a[246][anon_sym_GT_GT] = actions(576);
	v->a[246][anon_sym_LT_LT] = actions(816);
	v->a[246][aux_sym_heredoc_redirect_token1] = actions(816);
	v->a[246][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(576);
	v->a[246][anon_sym_DOLLAR] = actions(576);
	v->a[246][anon_sym_DQUOTE] = actions(576);
	v->a[246][sym_raw_string] = actions(576);
	v->a[246][sym_number] = actions(576);
	v->a[246][anon_sym_DOLLAR_LBRACE] = actions(576);
	v->a[246][anon_sym_DOLLAR_LPAREN] = actions(576);
	v->a[246][anon_sym_BQUOTE] = actions(576);
	v->a[246][sym_comment] = actions(3);
	v->a[246][anon_sym_SEMI] = actions(816);
	return (parse_table_496(v));
}

void	parse_table_496(t_parse_table_array *v)
{
	v->a[246][sym_variable_name] = actions(771);
	v->a[247][sym_variable_assignment] = state(995);
	v->a[247][sym_file_redirect] = state(1040);
	v->a[247][sym_heredoc_redirect] = state(1040);
	v->a[247][aux_sym_redirected_statement_repeat1] = state(1040);
	v->a[247][aux_sym__variable_assignments_repeat1] = state(995);
	v->a[247][sym_word] = actions(576);
	v->a[247][anon_sym_PIPE] = actions(580);
	v->a[247][anon_sym_SEMI_SEMI] = actions(580);
	v->a[247][anon_sym_AMP_AMP] = actions(580);
	v->a[247][anon_sym_PIPE_PIPE] = actions(580);
	v->a[247][anon_sym_LT] = actions(580);
	v->a[247][anon_sym_GT] = actions(580);
	v->a[247][anon_sym_GT_GT] = actions(580);
	v->a[247][anon_sym_LT_LT] = actions(580);
	v->a[247][aux_sym_heredoc_redirect_token1] = actions(580);
	v->a[247][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(576);
	v->a[247][anon_sym_DOLLAR] = actions(576);
	v->a[247][anon_sym_DQUOTE] = actions(576);
	v->a[247][sym_raw_string] = actions(576);
	return (parse_table_497(v));
}

void	parse_table_497(t_parse_table_array *v)
{
	v->a[247][sym_number] = actions(576);
	v->a[247][anon_sym_DOLLAR_LBRACE] = actions(576);
	v->a[247][anon_sym_DOLLAR_LPAREN] = actions(576);
	v->a[247][anon_sym_BQUOTE] = actions(576);
	v->a[247][sym_comment] = actions(3);
	v->a[247][anon_sym_SEMI] = actions(580);
	v->a[247][sym_variable_name] = actions(771);
	v->a[248][sym_word] = actions(343);
	v->a[248][anon_sym_AMP_AMP] = actions(343);
	v->a[248][anon_sym_PIPE_PIPE] = actions(343);
	v->a[248][anon_sym_BANG] = actions(861);
	v->a[248][anon_sym_LT] = actions(343);
	v->a[248][anon_sym_GT] = actions(343);
	v->a[248][anon_sym_GT_GT] = actions(343);
	v->a[248][aux_sym_heredoc_redirect_token1] = actions(343);
	v->a[248][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(343);
	v->a[248][anon_sym_DASH] = actions(861);
	v->a[248][anon_sym_STAR] = actions(861);
	v->a[248][anon_sym_QMARK] = actions(861);
	v->a[248][anon_sym_DOLLAR] = actions(861);
	return (parse_table_498(v));
}

void	parse_table_498(t_parse_table_array *v)
{
	v->a[248][anon_sym_DQUOTE] = actions(343);
	v->a[248][sym_raw_string] = actions(343);
	v->a[248][sym_number] = actions(343);
	v->a[248][anon_sym_POUND] = actions(861);
	v->a[248][anon_sym_DOLLAR_LBRACE] = actions(343);
	v->a[248][anon_sym_DOLLAR_LPAREN] = actions(343);
	v->a[248][anon_sym_BQUOTE] = actions(343);
	v->a[248][sym_comment] = actions(3);
	v->a[248][aux_sym__simple_variable_name_token1] = actions(863);
	v->a[248][aux_sym__multiline_variable_name_token1] = actions(863);
	v->a[248][anon_sym_AT] = actions(861);
	v->a[248][anon_sym_0] = actions(861);
	v->a[248][sym_variable_name] = actions(865);
	v->a[249][sym_arithmetic_expansion] = state(530);
	v->a[249][sym_concatenation] = state(242);
	v->a[249][sym_string] = state(530);
	v->a[249][sym_simple_expansion] = state(530);
	v->a[249][sym_expansion] = state(530);
	v->a[249][sym_command_substitution] = state(530);
	v->a[249][aux_sym_for_statement_repeat1] = state(242);
	return (parse_table_499(v));
}

void	parse_table_499(t_parse_table_array *v)
{
	v->a[249][sym_word] = actions(421);
	v->a[249][anon_sym_PIPE] = actions(421);
	v->a[249][anon_sym_AMP_AMP] = actions(421);
	v->a[249][anon_sym_PIPE_PIPE] = actions(421);
	v->a[249][anon_sym_LT] = actions(421);
	v->a[249][anon_sym_GT] = actions(421);
	v->a[249][anon_sym_GT_GT] = actions(421);
	v->a[249][anon_sym_LT_LT] = actions(421);
	v->a[249][aux_sym_heredoc_redirect_token1] = actions(421);
	v->a[249][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(421);
	v->a[249][anon_sym_DOLLAR] = actions(421);
	v->a[249][anon_sym_DQUOTE] = actions(421);
	v->a[249][sym_raw_string] = actions(421);
	v->a[249][sym_number] = actions(421);
	v->a[249][anon_sym_DOLLAR_LBRACE] = actions(421);
	v->a[249][anon_sym_DOLLAR_LPAREN] = actions(421);
	v->a[249][anon_sym_BQUOTE] = actions(421);
	v->a[249][sym_comment] = actions(3);
	v->a[249][sym_variable_name] = actions(423);
	v->a[250][sym_word] = actions(867);
	return (parse_table_500(v));
}

/* EOF parse_table_99.c */
