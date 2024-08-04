/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_258.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_1290(t_parse_table_array *v)
{
	v->a[1054][sym_string_content] = actions(2013);
	v->a[1054][anon_sym_POUND] = actions(2009);
	v->a[1054][sym_comment] = actions(3);
	v->a[1054][aux_sym__simple_variable_name_token1] = actions(2015);
	v->a[1054][aux_sym__multiline_variable_name_token1] = actions(2015);
	v->a[1054][anon_sym_AT] = actions(2009);
	v->a[1054][anon_sym_0] = actions(2009);
	v->a[1054][sym_variable_name] = actions(2017);
	v->a[1055][anon_sym_BANG] = actions(2009);
	v->a[1055][anon_sym_DASH] = actions(2009);
	v->a[1055][anon_sym_STAR] = actions(2009);
	v->a[1055][anon_sym_QMARK] = actions(2009);
	v->a[1055][anon_sym_DOLLAR] = actions(2009);
	v->a[1055][anon_sym_DQUOTE] = actions(2203);
	v->a[1055][sym_string_content] = actions(2013);
	v->a[1055][anon_sym_POUND] = actions(2009);
	v->a[1055][sym_comment] = actions(3);
	v->a[1055][aux_sym__simple_variable_name_token1] = actions(2015);
	v->a[1055][aux_sym__multiline_variable_name_token1] = actions(2015);
	v->a[1055][anon_sym_AT] = actions(2009);
	return (parse_table_1291(v));
}

void	parse_table_1291(t_parse_table_array *v)
{
	v->a[1055][anon_sym_0] = actions(2009);
	v->a[1055][sym_variable_name] = actions(2017);
	v->a[1056][anon_sym_BANG] = actions(2009);
	v->a[1056][anon_sym_DASH] = actions(2009);
	v->a[1056][anon_sym_STAR] = actions(2009);
	v->a[1056][anon_sym_QMARK] = actions(2009);
	v->a[1056][anon_sym_DOLLAR] = actions(2009);
	v->a[1056][anon_sym_DQUOTE] = actions(2205);
	v->a[1056][sym_string_content] = actions(2013);
	v->a[1056][anon_sym_POUND] = actions(2009);
	v->a[1056][sym_comment] = actions(3);
	v->a[1056][aux_sym__simple_variable_name_token1] = actions(2015);
	v->a[1056][aux_sym__multiline_variable_name_token1] = actions(2015);
	v->a[1056][anon_sym_AT] = actions(2009);
	v->a[1056][anon_sym_0] = actions(2009);
	v->a[1056][sym_variable_name] = actions(2017);
	v->a[1057][anon_sym_BANG] = actions(2009);
	v->a[1057][anon_sym_DASH] = actions(2009);
	v->a[1057][anon_sym_STAR] = actions(2009);
	v->a[1057][anon_sym_QMARK] = actions(2009);
	return (parse_table_1292(v));
}

void	parse_table_1292(t_parse_table_array *v)
{
	v->a[1057][anon_sym_DOLLAR] = actions(2009);
	v->a[1057][anon_sym_DQUOTE] = actions(2207);
	v->a[1057][sym_string_content] = actions(2013);
	v->a[1057][anon_sym_POUND] = actions(2009);
	v->a[1057][sym_comment] = actions(3);
	v->a[1057][aux_sym__simple_variable_name_token1] = actions(2015);
	v->a[1057][aux_sym__multiline_variable_name_token1] = actions(2015);
	v->a[1057][anon_sym_AT] = actions(2009);
	v->a[1057][anon_sym_0] = actions(2009);
	v->a[1057][sym_variable_name] = actions(2017);
	v->a[1058][anon_sym_BANG] = actions(2009);
	v->a[1058][anon_sym_DASH] = actions(2009);
	v->a[1058][anon_sym_STAR] = actions(2009);
	v->a[1058][anon_sym_QMARK] = actions(2009);
	v->a[1058][anon_sym_DOLLAR] = actions(2009);
	v->a[1058][anon_sym_DQUOTE] = actions(2209);
	v->a[1058][sym_string_content] = actions(2013);
	v->a[1058][anon_sym_POUND] = actions(2009);
	v->a[1058][sym_comment] = actions(3);
	v->a[1058][aux_sym__simple_variable_name_token1] = actions(2015);
	return (parse_table_1293(v));
}

void	parse_table_1293(t_parse_table_array *v)
{
	v->a[1058][aux_sym__multiline_variable_name_token1] = actions(2015);
	v->a[1058][anon_sym_AT] = actions(2009);
	v->a[1058][anon_sym_0] = actions(2009);
	v->a[1058][sym_variable_name] = actions(2017);
	v->a[1059][sym_file_redirect] = state(1040);
	v->a[1059][sym_heredoc_redirect] = state(1040);
	v->a[1059][sym_terminator] = state(416);
	v->a[1059][aux_sym_redirected_statement_repeat1] = state(1040);
	v->a[1059][anon_sym_SEMI_SEMI] = actions(593);
	v->a[1059][anon_sym_AMP_AMP] = actions(769);
	v->a[1059][anon_sym_PIPE_PIPE] = actions(769);
	v->a[1059][anon_sym_LT] = actions(1924);
	v->a[1059][anon_sym_GT] = actions(1924);
	v->a[1059][anon_sym_GT_GT] = actions(1924);
	v->a[1059][anon_sym_LT_LT] = actions(597);
	v->a[1059][aux_sym_heredoc_redirect_token1] = actions(1870);
	v->a[1059][sym_comment] = actions(3);
	v->a[1059][anon_sym_SEMI] = actions(593);
	v->a[1060][anon_sym_BANG] = actions(2009);
	v->a[1060][anon_sym_DASH] = actions(2009);
	return (parse_table_1294(v));
}

void	parse_table_1294(t_parse_table_array *v)
{
	v->a[1060][anon_sym_STAR] = actions(2009);
	v->a[1060][anon_sym_QMARK] = actions(2009);
	v->a[1060][anon_sym_DOLLAR] = actions(2009);
	v->a[1060][anon_sym_DQUOTE] = actions(2211);
	v->a[1060][sym_string_content] = actions(2013);
	v->a[1060][anon_sym_POUND] = actions(2009);
	v->a[1060][sym_comment] = actions(3);
	v->a[1060][aux_sym__simple_variable_name_token1] = actions(2015);
	v->a[1060][aux_sym__multiline_variable_name_token1] = actions(2015);
	v->a[1060][anon_sym_AT] = actions(2009);
	v->a[1060][anon_sym_0] = actions(2009);
	v->a[1060][sym_variable_name] = actions(2017);
	v->a[1061][ts_builtin_sym_end] = actions(2213);
	v->a[1061][anon_sym_PIPE] = actions(2215);
	v->a[1061][anon_sym_RPAREN] = actions(2215);
	v->a[1061][anon_sym_SEMI_SEMI] = actions(2215);
	v->a[1061][anon_sym_AMP_AMP] = actions(2215);
	v->a[1061][anon_sym_PIPE_PIPE] = actions(2215);
	v->a[1061][anon_sym_LT] = actions(2215);
	v->a[1061][anon_sym_GT] = actions(2215);
	return (parse_table_1295(v));
}

/* EOF parse_table_258.c */
