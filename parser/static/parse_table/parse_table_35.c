/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_35.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_175(t_parse_table_array *v)
{
	v->a[104][sym_variable_name] = actions(373);
	v->a[105][sym_word] = actions(163);
	v->a[105][anon_sym_PIPE] = actions(163);
	v->a[105][anon_sym_AMP_AMP] = actions(163);
	v->a[105][anon_sym_PIPE_PIPE] = actions(163);
	v->a[105][anon_sym_BANG] = actions(463);
	v->a[105][anon_sym_LT] = actions(163);
	v->a[105][anon_sym_GT] = actions(163);
	v->a[105][anon_sym_GT_GT] = actions(163);
	v->a[105][anon_sym_LT_LT] = actions(163);
	v->a[105][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(163);
	v->a[105][anon_sym_DASH] = actions(463);
	v->a[105][anon_sym_STAR] = actions(463);
	v->a[105][anon_sym_QMARK] = actions(463);
	v->a[105][anon_sym_DOLLAR] = actions(463);
	v->a[105][anon_sym_DQUOTE] = actions(163);
	v->a[105][sym_raw_string] = actions(163);
	v->a[105][sym_number] = actions(163);
	v->a[105][anon_sym_POUND] = actions(463);
	v->a[105][anon_sym_DOLLAR_LBRACE] = actions(163);
	return (parse_table_176(v));
}

void	parse_table_176(t_parse_table_array *v)
{
	v->a[105][anon_sym_DOLLAR_LPAREN] = actions(163);
	v->a[105][anon_sym_BQUOTE] = actions(163);
	v->a[105][sym_comment] = actions(3);
	v->a[105][aux_sym__simple_variable_name_token1] = actions(465);
	v->a[105][aux_sym__multiline_variable_name_token1] = actions(465);
	v->a[105][anon_sym_AT] = actions(463);
	v->a[105][anon_sym_0] = actions(463);
	v->a[105][sym_variable_name] = actions(467);
	v->a[106][sym_variable_assignment] = state(490);
	v->a[106][sym_file_redirect] = state(497);
	v->a[106][sym_heredoc_redirect] = state(497);
	v->a[106][sym_terminator] = state(446);
	v->a[106][aux_sym_redirected_statement_repeat1] = state(497);
	v->a[106][aux_sym__variable_assignments_repeat1] = state(490);
	v->a[106][sym_word] = actions(352);
	v->a[106][anon_sym_PIPE] = actions(356);
	v->a[106][anon_sym_AMP_AMP] = actions(456);
	v->a[106][anon_sym_PIPE_PIPE] = actions(456);
	v->a[106][anon_sym_LT] = actions(352);
	v->a[106][anon_sym_GT] = actions(352);
	return (parse_table_177(v));
}

void	parse_table_177(t_parse_table_array *v)
{
	v->a[106][anon_sym_GT_GT] = actions(352);
	v->a[106][anon_sym_LT_LT] = actions(360);
	v->a[106][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(352);
	v->a[106][anon_sym_DOLLAR] = actions(352);
	v->a[106][anon_sym_DQUOTE] = actions(352);
	v->a[106][sym_raw_string] = actions(352);
	v->a[106][sym_number] = actions(352);
	v->a[106][anon_sym_DOLLAR_LBRACE] = actions(352);
	v->a[106][anon_sym_DOLLAR_LPAREN] = actions(352);
	v->a[106][anon_sym_BQUOTE] = actions(354);
	v->a[106][sym_comment] = actions(3);
	v->a[106][anon_sym_SEMI] = actions(362);
	v->a[106][anon_sym_SEMI_SEMI] = actions(362);
	v->a[106][aux_sym_terminator_token1] = actions(362);
	v->a[106][sym_variable_name] = actions(458);
	v->a[107][sym_word] = actions(163);
	v->a[107][anon_sym_PIPE] = actions(163);
	v->a[107][anon_sym_AMP_AMP] = actions(163);
	v->a[107][anon_sym_PIPE_PIPE] = actions(163);
	v->a[107][anon_sym_BANG] = actions(469);
	return (parse_table_178(v));
}

void	parse_table_178(t_parse_table_array *v)
{
	v->a[107][anon_sym_LT] = actions(163);
	v->a[107][anon_sym_GT] = actions(163);
	v->a[107][anon_sym_GT_GT] = actions(163);
	v->a[107][anon_sym_LT_LT] = actions(163);
	v->a[107][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(163);
	v->a[107][anon_sym_DASH] = actions(469);
	v->a[107][anon_sym_STAR] = actions(469);
	v->a[107][anon_sym_QMARK] = actions(469);
	v->a[107][anon_sym_DOLLAR] = actions(469);
	v->a[107][anon_sym_DQUOTE] = actions(163);
	v->a[107][sym_raw_string] = actions(163);
	v->a[107][sym_number] = actions(163);
	v->a[107][anon_sym_POUND] = actions(469);
	v->a[107][anon_sym_DOLLAR_LBRACE] = actions(163);
	v->a[107][anon_sym_DOLLAR_LPAREN] = actions(163);
	v->a[107][anon_sym_BQUOTE] = actions(163);
	v->a[107][sym_comment] = actions(3);
	v->a[107][aux_sym__simple_variable_name_token1] = actions(471);
	v->a[107][aux_sym__multiline_variable_name_token1] = actions(471);
	v->a[107][anon_sym_AT] = actions(469);
	return (parse_table_179(v));
}

void	parse_table_179(t_parse_table_array *v)
{
	v->a[107][anon_sym_0] = actions(469);
	v->a[107][sym_variable_name] = actions(473);
	v->a[108][sym_arithmetic_expansion] = state(221);
	v->a[108][sym_concatenation] = state(108);
	v->a[108][sym_string] = state(221);
	v->a[108][sym_simple_expansion] = state(221);
	v->a[108][sym_expansion] = state(221);
	v->a[108][sym_command_substitution] = state(221);
	v->a[108][aux_sym_file_redirect_repeat1] = state(108);
	v->a[108][sym_word] = actions(475);
	v->a[108][anon_sym_PIPE] = actions(218);
	v->a[108][anon_sym_AMP_AMP] = actions(218);
	v->a[108][anon_sym_PIPE_PIPE] = actions(218);
	v->a[108][anon_sym_LT] = actions(218);
	v->a[108][anon_sym_GT] = actions(218);
	v->a[108][anon_sym_GT_GT] = actions(218);
	v->a[108][anon_sym_LT_LT] = actions(218);
	v->a[108][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(334);
	v->a[108][anon_sym_DOLLAR] = actions(337);
	v->a[108][anon_sym_DQUOTE] = actions(340);
	return (parse_table_180(v));
}

/* EOF parse_table_35.c */
