/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_249.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_1245(t_parse_table_array *v)
{
	v->a[990][anon_sym_esac] = actions(2063);
	v->a[990][anon_sym_PIPE] = actions(2063);
	v->a[990][anon_sym_SEMI_SEMI] = actions(2063);
	v->a[990][anon_sym_AMP_AMP] = actions(2063);
	v->a[990][anon_sym_PIPE_PIPE] = actions(2063);
	v->a[990][anon_sym_LT] = actions(1876);
	v->a[990][anon_sym_GT] = actions(1876);
	v->a[990][anon_sym_GT_GT] = actions(1876);
	v->a[990][anon_sym_LT_LT] = actions(2063);
	v->a[990][aux_sym_heredoc_redirect_token1] = actions(2065);
	v->a[990][sym_comment] = actions(3);
	v->a[990][anon_sym_SEMI] = actions(2063);
	v->a[991][sym_file_redirect] = state(1040);
	v->a[991][sym_heredoc_redirect] = state(1040);
	v->a[991][sym_terminator] = state(428);
	v->a[991][aux_sym_redirected_statement_repeat1] = state(1040);
	v->a[991][anon_sym_SEMI_SEMI] = actions(578);
	v->a[991][anon_sym_AMP_AMP] = actions(769);
	v->a[991][anon_sym_PIPE_PIPE] = actions(769);
	v->a[991][anon_sym_LT] = actions(1924);
	return (parse_table_1246(v));
}

void	parse_table_1246(t_parse_table_array *v)
{
	v->a[991][anon_sym_GT] = actions(1924);
	v->a[991][anon_sym_GT_GT] = actions(1924);
	v->a[991][anon_sym_LT_LT] = actions(597);
	v->a[991][aux_sym_heredoc_redirect_token1] = actions(1870);
	v->a[991][sym_comment] = actions(3);
	v->a[991][anon_sym_SEMI] = actions(593);
	v->a[992][ts_builtin_sym_end] = actions(2067);
	v->a[992][anon_sym_PIPE] = actions(2069);
	v->a[992][anon_sym_RPAREN] = actions(2069);
	v->a[992][anon_sym_SEMI_SEMI] = actions(2069);
	v->a[992][anon_sym_AMP_AMP] = actions(2069);
	v->a[992][anon_sym_PIPE_PIPE] = actions(2069);
	v->a[992][anon_sym_LT] = actions(2069);
	v->a[992][anon_sym_GT] = actions(2069);
	v->a[992][anon_sym_GT_GT] = actions(2069);
	v->a[992][anon_sym_LT_LT] = actions(2069);
	v->a[992][aux_sym_heredoc_redirect_token1] = actions(2067);
	v->a[992][anon_sym_BQUOTE] = actions(2069);
	v->a[992][sym_comment] = actions(3);
	v->a[992][anon_sym_SEMI] = actions(2069);
	return (parse_table_1247(v));
}

void	parse_table_1247(t_parse_table_array *v)
{
	v->a[993][sym_variable_assignment] = state(993);
	v->a[993][aux_sym__variable_assignments_repeat1] = state(993);
	v->a[993][anon_sym_PIPE] = actions(1961);
	v->a[993][anon_sym_SEMI_SEMI] = actions(1961);
	v->a[993][anon_sym_AMP_AMP] = actions(1961);
	v->a[993][anon_sym_PIPE_PIPE] = actions(1961);
	v->a[993][anon_sym_LT] = actions(1961);
	v->a[993][anon_sym_GT] = actions(1961);
	v->a[993][anon_sym_GT_GT] = actions(1961);
	v->a[993][anon_sym_LT_LT] = actions(1961);
	v->a[993][aux_sym_heredoc_redirect_token1] = actions(1963);
	v->a[993][sym_comment] = actions(3);
	v->a[993][anon_sym_SEMI] = actions(1961);
	v->a[993][sym_variable_name] = actions(2071);
	v->a[994][anon_sym_BANG] = actions(2009);
	v->a[994][anon_sym_DASH] = actions(2009);
	v->a[994][anon_sym_STAR] = actions(2009);
	v->a[994][anon_sym_QMARK] = actions(2009);
	v->a[994][anon_sym_DOLLAR] = actions(2009);
	v->a[994][anon_sym_DQUOTE] = actions(2074);
	return (parse_table_1248(v));
}

void	parse_table_1248(t_parse_table_array *v)
{
	v->a[994][sym_string_content] = actions(2013);
	v->a[994][anon_sym_POUND] = actions(2009);
	v->a[994][sym_comment] = actions(3);
	v->a[994][aux_sym__simple_variable_name_token1] = actions(2015);
	v->a[994][aux_sym__multiline_variable_name_token1] = actions(2015);
	v->a[994][anon_sym_AT] = actions(2009);
	v->a[994][anon_sym_0] = actions(2009);
	v->a[994][sym_variable_name] = actions(2017);
	v->a[995][sym_variable_assignment] = state(993);
	v->a[995][aux_sym__variable_assignments_repeat1] = state(993);
	v->a[995][anon_sym_PIPE] = actions(1954);
	v->a[995][anon_sym_SEMI_SEMI] = actions(1954);
	v->a[995][anon_sym_AMP_AMP] = actions(1954);
	v->a[995][anon_sym_PIPE_PIPE] = actions(1954);
	v->a[995][anon_sym_LT] = actions(1954);
	v->a[995][anon_sym_GT] = actions(1954);
	v->a[995][anon_sym_GT_GT] = actions(1954);
	v->a[995][anon_sym_LT_LT] = actions(1954);
	v->a[995][aux_sym_heredoc_redirect_token1] = actions(1952);
	v->a[995][sym_comment] = actions(3);
	return (parse_table_1249(v));
}

void	parse_table_1249(t_parse_table_array *v)
{
	v->a[995][anon_sym_SEMI] = actions(1954);
	v->a[995][sym_variable_name] = actions(2076);
	v->a[996][sym_file_redirect] = state(996);
	v->a[996][aux_sym_redirected_statement_repeat2] = state(996);
	v->a[996][ts_builtin_sym_end] = actions(2078);
	v->a[996][anon_sym_PIPE] = actions(2080);
	v->a[996][anon_sym_SEMI_SEMI] = actions(2080);
	v->a[996][anon_sym_AMP_AMP] = actions(2080);
	v->a[996][anon_sym_PIPE_PIPE] = actions(2080);
	v->a[996][anon_sym_LT] = actions(2082);
	v->a[996][anon_sym_GT] = actions(2082);
	v->a[996][anon_sym_GT_GT] = actions(2082);
	v->a[996][anon_sym_LT_LT] = actions(2080);
	v->a[996][aux_sym_heredoc_redirect_token1] = actions(2078);
	v->a[996][sym_comment] = actions(3);
	v->a[996][anon_sym_SEMI] = actions(2080);
	v->a[997][ts_builtin_sym_end] = actions(2085);
	v->a[997][anon_sym_PIPE] = actions(2087);
	v->a[997][anon_sym_RPAREN] = actions(2087);
	v->a[997][anon_sym_SEMI_SEMI] = actions(2087);
	return (parse_table_1250(v));
}

/* EOF parse_table_249.c */
