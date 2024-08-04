/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_162.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_810(t_parse_table_array *v)
{
	v->a[509][anon_sym_GT] = actions(421);
	v->a[509][anon_sym_GT_GT] = actions(421);
	v->a[509][aux_sym_heredoc_redirect_token1] = actions(421);
	v->a[509][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(655);
	v->a[509][anon_sym_DOLLAR] = actions(657);
	v->a[509][anon_sym_DQUOTE] = actions(659);
	v->a[509][sym_raw_string] = actions(1245);
	v->a[509][sym_number] = actions(1245);
	v->a[509][anon_sym_DOLLAR_LBRACE] = actions(661);
	v->a[509][anon_sym_DOLLAR_LPAREN] = actions(663);
	v->a[509][anon_sym_BQUOTE] = actions(665);
	v->a[509][sym_comment] = actions(3);
	v->a[510][ts_builtin_sym_end] = actions(1185);
	v->a[510][sym_word] = actions(1040);
	v->a[510][anon_sym_for] = actions(1040);
	v->a[510][anon_sym_while] = actions(1040);
	v->a[510][anon_sym_until] = actions(1040);
	v->a[510][anon_sym_if] = actions(1040);
	v->a[510][anon_sym_case] = actions(1040);
	v->a[510][anon_sym_LPAREN] = actions(1040);
	return (parse_table_811(v));
}

void	parse_table_811(t_parse_table_array *v)
{
	v->a[510][anon_sym_LBRACE] = actions(1040);
	v->a[510][anon_sym_BANG] = actions(1040);
	v->a[510][anon_sym_LT] = actions(1040);
	v->a[510][anon_sym_GT] = actions(1040);
	v->a[510][anon_sym_GT_GT] = actions(1040);
	v->a[510][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(1040);
	v->a[510][anon_sym_DOLLAR] = actions(1040);
	v->a[510][anon_sym_DQUOTE] = actions(1040);
	v->a[510][sym_raw_string] = actions(1040);
	v->a[510][sym_number] = actions(1040);
	v->a[510][anon_sym_DOLLAR_LBRACE] = actions(1040);
	v->a[510][anon_sym_DOLLAR_LPAREN] = actions(1040);
	v->a[510][anon_sym_BQUOTE] = actions(1040);
	v->a[510][sym_comment] = actions(3);
	v->a[510][sym_variable_name] = actions(1044);
	v->a[511][sym_word] = actions(1052);
	v->a[511][anon_sym_PIPE] = actions(1052);
	v->a[511][anon_sym_RPAREN] = actions(1052);
	v->a[511][anon_sym_SEMI_SEMI] = actions(1052);
	v->a[511][anon_sym_AMP_AMP] = actions(1052);
	return (parse_table_812(v));
}

void	parse_table_812(t_parse_table_array *v)
{
	v->a[511][anon_sym_PIPE_PIPE] = actions(1052);
	v->a[511][anon_sym_LT] = actions(1052);
	v->a[511][anon_sym_GT] = actions(1052);
	v->a[511][anon_sym_GT_GT] = actions(1052);
	v->a[511][anon_sym_LT_LT] = actions(1052);
	v->a[511][aux_sym_heredoc_redirect_token1] = actions(1052);
	v->a[511][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(1052);
	v->a[511][aux_sym_concatenation_token1] = actions(1052);
	v->a[511][anon_sym_DOLLAR] = actions(1052);
	v->a[511][anon_sym_DQUOTE] = actions(1052);
	v->a[511][sym_raw_string] = actions(1052);
	v->a[511][sym_number] = actions(1052);
	v->a[511][anon_sym_DOLLAR_LBRACE] = actions(1052);
	v->a[511][anon_sym_DOLLAR_LPAREN] = actions(1052);
	v->a[511][anon_sym_BQUOTE] = actions(1052);
	v->a[511][sym_comment] = actions(3);
	v->a[511][anon_sym_SEMI] = actions(1052);
	v->a[511][sym__concat] = actions(1050);
	v->a[512][sym_word] = actions(343);
	v->a[512][anon_sym_SEMI_SEMI] = actions(343);
	return (parse_table_813(v));
}

void	parse_table_813(t_parse_table_array *v)
{
	v->a[512][anon_sym_BANG] = actions(861);
	v->a[512][aux_sym_heredoc_redirect_token1] = actions(343);
	v->a[512][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(343);
	v->a[512][anon_sym_DASH] = actions(861);
	v->a[512][anon_sym_STAR] = actions(861);
	v->a[512][anon_sym_QMARK] = actions(861);
	v->a[512][anon_sym_DOLLAR] = actions(861);
	v->a[512][anon_sym_DQUOTE] = actions(343);
	v->a[512][sym_raw_string] = actions(343);
	v->a[512][sym_number] = actions(343);
	v->a[512][anon_sym_POUND] = actions(861);
	v->a[512][anon_sym_DOLLAR_LBRACE] = actions(343);
	v->a[512][anon_sym_DOLLAR_LPAREN] = actions(343);
	v->a[512][anon_sym_BQUOTE] = actions(343);
	v->a[512][sym_comment] = actions(3);
	v->a[512][aux_sym__simple_variable_name_token1] = actions(863);
	v->a[512][aux_sym__multiline_variable_name_token1] = actions(863);
	v->a[512][anon_sym_AT] = actions(861);
	v->a[512][anon_sym_0] = actions(861);
	v->a[512][anon_sym_SEMI] = actions(343);
	return (parse_table_814(v));
}

void	parse_table_814(t_parse_table_array *v)
{
	v->a[512][sym_variable_name] = actions(865);
	v->a[513][ts_builtin_sym_end] = actions(1126);
	v->a[513][sym_word] = actions(1124);
	v->a[513][anon_sym_PIPE] = actions(1124);
	v->a[513][anon_sym_SEMI_SEMI] = actions(1124);
	v->a[513][anon_sym_AMP_AMP] = actions(1124);
	v->a[513][anon_sym_PIPE_PIPE] = actions(1124);
	v->a[513][anon_sym_LT] = actions(1124);
	v->a[513][anon_sym_GT] = actions(1124);
	v->a[513][anon_sym_GT_GT] = actions(1124);
	v->a[513][anon_sym_LT_LT] = actions(1124);
	v->a[513][aux_sym_heredoc_redirect_token1] = actions(1124);
	v->a[513][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(1124);
	v->a[513][aux_sym_concatenation_token1] = actions(1124);
	v->a[513][anon_sym_DOLLAR] = actions(1124);
	v->a[513][anon_sym_DQUOTE] = actions(1124);
	v->a[513][sym_raw_string] = actions(1124);
	v->a[513][sym_number] = actions(1124);
	v->a[513][anon_sym_DOLLAR_LBRACE] = actions(1124);
	v->a[513][anon_sym_DOLLAR_LPAREN] = actions(1124);
	return (parse_table_815(v));
}

/* EOF parse_table_162.c */
