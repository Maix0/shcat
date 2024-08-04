/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_250.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_1250(t_parse_table_array *v)
{
	v->a[997][anon_sym_AMP_AMP] = actions(2087);
	v->a[997][anon_sym_PIPE_PIPE] = actions(2087);
	v->a[997][anon_sym_LT] = actions(2087);
	v->a[997][anon_sym_GT] = actions(2087);
	v->a[997][anon_sym_GT_GT] = actions(2087);
	v->a[997][anon_sym_LT_LT] = actions(2087);
	v->a[997][aux_sym_heredoc_redirect_token1] = actions(2085);
	v->a[997][anon_sym_BQUOTE] = actions(2087);
	v->a[997][sym_comment] = actions(3);
	v->a[997][anon_sym_SEMI] = actions(2087);
	v->a[998][anon_sym_BANG] = actions(2009);
	v->a[998][anon_sym_DASH] = actions(2009);
	v->a[998][anon_sym_STAR] = actions(2009);
	v->a[998][anon_sym_QMARK] = actions(2009);
	v->a[998][anon_sym_DOLLAR] = actions(2009);
	v->a[998][anon_sym_DQUOTE] = actions(2089);
	v->a[998][sym_string_content] = actions(2013);
	v->a[998][anon_sym_POUND] = actions(2009);
	v->a[998][sym_comment] = actions(3);
	v->a[998][aux_sym__simple_variable_name_token1] = actions(2015);
	return (parse_table_1251(v));
}

void	parse_table_1251(t_parse_table_array *v)
{
	v->a[998][aux_sym__multiline_variable_name_token1] = actions(2015);
	v->a[998][anon_sym_AT] = actions(2009);
	v->a[998][anon_sym_0] = actions(2009);
	v->a[998][sym_variable_name] = actions(2017);
	v->a[999][sym_file_redirect] = state(996);
	v->a[999][aux_sym_redirected_statement_repeat2] = state(996);
	v->a[999][ts_builtin_sym_end] = actions(2065);
	v->a[999][anon_sym_PIPE] = actions(2063);
	v->a[999][anon_sym_SEMI_SEMI] = actions(2063);
	v->a[999][anon_sym_AMP_AMP] = actions(2063);
	v->a[999][anon_sym_PIPE_PIPE] = actions(2063);
	v->a[999][anon_sym_LT] = actions(1872);
	v->a[999][anon_sym_GT] = actions(1872);
	v->a[999][anon_sym_GT_GT] = actions(1872);
	v->a[999][anon_sym_LT_LT] = actions(2063);
	v->a[999][aux_sym_heredoc_redirect_token1] = actions(2065);
	v->a[999][sym_comment] = actions(3);
	v->a[999][anon_sym_SEMI] = actions(2063);
	v->a[1000][sym_file_redirect] = state(1004);
	v->a[1000][aux_sym_redirected_statement_repeat2] = state(1004);
	return (parse_table_1252(v));
}

void	parse_table_1252(t_parse_table_array *v)
{
	v->a[1000][anon_sym_PIPE] = actions(2091);
	v->a[1000][anon_sym_SEMI_SEMI] = actions(2091);
	v->a[1000][anon_sym_AMP_AMP] = actions(2091);
	v->a[1000][anon_sym_PIPE_PIPE] = actions(2091);
	v->a[1000][anon_sym_LT] = actions(1880);
	v->a[1000][anon_sym_GT] = actions(1880);
	v->a[1000][anon_sym_GT_GT] = actions(1880);
	v->a[1000][anon_sym_LT_LT] = actions(2091);
	v->a[1000][aux_sym_heredoc_redirect_token1] = actions(2093);
	v->a[1000][anon_sym_BQUOTE] = actions(2091);
	v->a[1000][sym_comment] = actions(3);
	v->a[1000][anon_sym_SEMI] = actions(2091);
	v->a[1001][sym_file_redirect] = state(1040);
	v->a[1001][sym_heredoc_redirect] = state(1040);
	v->a[1001][sym_terminator] = state(469);
	v->a[1001][aux_sym_redirected_statement_repeat1] = state(1040);
	v->a[1001][anon_sym_SEMI_SEMI] = actions(831);
	v->a[1001][anon_sym_AMP_AMP] = actions(769);
	v->a[1001][anon_sym_PIPE_PIPE] = actions(769);
	v->a[1001][anon_sym_LT] = actions(1924);
	return (parse_table_1253(v));
}

void	parse_table_1253(t_parse_table_array *v)
{
	v->a[1001][anon_sym_GT] = actions(1924);
	v->a[1001][anon_sym_GT_GT] = actions(1924);
	v->a[1001][anon_sym_LT_LT] = actions(597);
	v->a[1001][aux_sym_heredoc_redirect_token1] = actions(1983);
	v->a[1001][sym_comment] = actions(3);
	v->a[1001][anon_sym_SEMI] = actions(831);
	v->a[1002][ts_builtin_sym_end] = actions(2095);
	v->a[1002][anon_sym_PIPE] = actions(2097);
	v->a[1002][anon_sym_RPAREN] = actions(2097);
	v->a[1002][anon_sym_SEMI_SEMI] = actions(2097);
	v->a[1002][anon_sym_AMP_AMP] = actions(2097);
	v->a[1002][anon_sym_PIPE_PIPE] = actions(2097);
	v->a[1002][anon_sym_LT] = actions(2097);
	v->a[1002][anon_sym_GT] = actions(2097);
	v->a[1002][anon_sym_GT_GT] = actions(2097);
	v->a[1002][anon_sym_LT_LT] = actions(2097);
	v->a[1002][aux_sym_heredoc_redirect_token1] = actions(2095);
	v->a[1002][anon_sym_BQUOTE] = actions(2097);
	v->a[1002][sym_comment] = actions(3);
	v->a[1002][anon_sym_SEMI] = actions(2097);
	return (parse_table_1254(v));
}

void	parse_table_1254(t_parse_table_array *v)
{
	v->a[1003][anon_sym_BANG] = actions(2009);
	v->a[1003][anon_sym_DASH] = actions(2009);
	v->a[1003][anon_sym_STAR] = actions(2009);
	v->a[1003][anon_sym_QMARK] = actions(2009);
	v->a[1003][anon_sym_DOLLAR] = actions(2009);
	v->a[1003][anon_sym_DQUOTE] = actions(2099);
	v->a[1003][sym_string_content] = actions(2013);
	v->a[1003][anon_sym_POUND] = actions(2009);
	v->a[1003][sym_comment] = actions(3);
	v->a[1003][aux_sym__simple_variable_name_token1] = actions(2015);
	v->a[1003][aux_sym__multiline_variable_name_token1] = actions(2015);
	v->a[1003][anon_sym_AT] = actions(2009);
	v->a[1003][anon_sym_0] = actions(2009);
	v->a[1003][sym_variable_name] = actions(2017);
	v->a[1004][sym_file_redirect] = state(1004);
	v->a[1004][aux_sym_redirected_statement_repeat2] = state(1004);
	v->a[1004][anon_sym_PIPE] = actions(2080);
	v->a[1004][anon_sym_SEMI_SEMI] = actions(2080);
	v->a[1004][anon_sym_AMP_AMP] = actions(2080);
	v->a[1004][anon_sym_PIPE_PIPE] = actions(2080);
	return (parse_table_1255(v));
}

/* EOF parse_table_250.c */
