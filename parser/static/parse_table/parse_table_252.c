/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_252.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_1260(t_parse_table_array *v)
{
	v->a[1011][sym_number] = actions(2108);
	v->a[1011][anon_sym_DOLLAR_LBRACE] = actions(2108);
	v->a[1011][anon_sym_DOLLAR_LPAREN] = actions(2108);
	v->a[1011][anon_sym_BQUOTE] = actions(2108);
	v->a[1011][sym_comment] = actions(3);
	v->a[1011][sym__concat] = actions(1467);
	v->a[1012][sym_file_redirect] = state(1017);
	v->a[1012][aux_sym_redirected_statement_repeat2] = state(1017);
	v->a[1012][anon_sym_PIPE] = actions(2091);
	v->a[1012][anon_sym_RPAREN] = actions(2091);
	v->a[1012][anon_sym_SEMI_SEMI] = actions(2091);
	v->a[1012][anon_sym_AMP_AMP] = actions(2091);
	v->a[1012][anon_sym_PIPE_PIPE] = actions(2091);
	v->a[1012][anon_sym_LT] = actions(1868);
	v->a[1012][anon_sym_GT] = actions(1868);
	v->a[1012][anon_sym_GT_GT] = actions(1868);
	v->a[1012][anon_sym_LT_LT] = actions(2091);
	v->a[1012][aux_sym_heredoc_redirect_token1] = actions(2093);
	v->a[1012][sym_comment] = actions(3);
	v->a[1012][anon_sym_SEMI] = actions(2091);
	return (parse_table_1261(v));
}

void	parse_table_1261(t_parse_table_array *v)
{
	v->a[1013][anon_sym_BANG] = actions(2009);
	v->a[1013][anon_sym_DASH] = actions(2009);
	v->a[1013][anon_sym_STAR] = actions(2009);
	v->a[1013][anon_sym_QMARK] = actions(2009);
	v->a[1013][anon_sym_DOLLAR] = actions(2009);
	v->a[1013][anon_sym_DQUOTE] = actions(2110);
	v->a[1013][sym_string_content] = actions(2013);
	v->a[1013][anon_sym_POUND] = actions(2009);
	v->a[1013][sym_comment] = actions(3);
	v->a[1013][aux_sym__simple_variable_name_token1] = actions(2015);
	v->a[1013][aux_sym__multiline_variable_name_token1] = actions(2015);
	v->a[1013][anon_sym_AT] = actions(2009);
	v->a[1013][anon_sym_0] = actions(2009);
	v->a[1013][sym_variable_name] = actions(2017);
	v->a[1014][anon_sym_BANG] = actions(2009);
	v->a[1014][anon_sym_DASH] = actions(2009);
	v->a[1014][anon_sym_STAR] = actions(2009);
	v->a[1014][anon_sym_QMARK] = actions(2009);
	v->a[1014][anon_sym_DOLLAR] = actions(2009);
	v->a[1014][anon_sym_DQUOTE] = actions(2112);
	return (parse_table_1262(v));
}

void	parse_table_1262(t_parse_table_array *v)
{
	v->a[1014][sym_string_content] = actions(2013);
	v->a[1014][anon_sym_POUND] = actions(2009);
	v->a[1014][sym_comment] = actions(3);
	v->a[1014][aux_sym__simple_variable_name_token1] = actions(2015);
	v->a[1014][aux_sym__multiline_variable_name_token1] = actions(2015);
	v->a[1014][anon_sym_AT] = actions(2009);
	v->a[1014][anon_sym_0] = actions(2009);
	v->a[1014][sym_variable_name] = actions(2017);
	v->a[1015][sym_file_redirect] = state(1038);
	v->a[1015][aux_sym_redirected_statement_repeat2] = state(1038);
	v->a[1015][anon_sym_esac] = actions(2091);
	v->a[1015][anon_sym_PIPE] = actions(2091);
	v->a[1015][anon_sym_SEMI_SEMI] = actions(2091);
	v->a[1015][anon_sym_AMP_AMP] = actions(2091);
	v->a[1015][anon_sym_PIPE_PIPE] = actions(2091);
	v->a[1015][anon_sym_LT] = actions(1876);
	v->a[1015][anon_sym_GT] = actions(1876);
	v->a[1015][anon_sym_GT_GT] = actions(1876);
	v->a[1015][anon_sym_LT_LT] = actions(2091);
	v->a[1015][aux_sym_heredoc_redirect_token1] = actions(2093);
	return (parse_table_1263(v));
}

void	parse_table_1263(t_parse_table_array *v)
{
	v->a[1015][sym_comment] = actions(3);
	v->a[1015][anon_sym_SEMI] = actions(2091);
	v->a[1016][anon_sym_BANG] = actions(2009);
	v->a[1016][anon_sym_DASH] = actions(2009);
	v->a[1016][anon_sym_STAR] = actions(2009);
	v->a[1016][anon_sym_QMARK] = actions(2009);
	v->a[1016][anon_sym_DOLLAR] = actions(2009);
	v->a[1016][anon_sym_DQUOTE] = actions(2114);
	v->a[1016][sym_string_content] = actions(2013);
	v->a[1016][anon_sym_POUND] = actions(2009);
	v->a[1016][sym_comment] = actions(3);
	v->a[1016][aux_sym__simple_variable_name_token1] = actions(2015);
	v->a[1016][aux_sym__multiline_variable_name_token1] = actions(2015);
	v->a[1016][anon_sym_AT] = actions(2009);
	v->a[1016][anon_sym_0] = actions(2009);
	v->a[1016][sym_variable_name] = actions(2017);
	v->a[1017][sym_file_redirect] = state(1017);
	v->a[1017][aux_sym_redirected_statement_repeat2] = state(1017);
	v->a[1017][anon_sym_PIPE] = actions(2080);
	v->a[1017][anon_sym_RPAREN] = actions(2080);
	return (parse_table_1264(v));
}

void	parse_table_1264(t_parse_table_array *v)
{
	v->a[1017][anon_sym_SEMI_SEMI] = actions(2080);
	v->a[1017][anon_sym_AMP_AMP] = actions(2080);
	v->a[1017][anon_sym_PIPE_PIPE] = actions(2080);
	v->a[1017][anon_sym_LT] = actions(2116);
	v->a[1017][anon_sym_GT] = actions(2116);
	v->a[1017][anon_sym_GT_GT] = actions(2116);
	v->a[1017][anon_sym_LT_LT] = actions(2080);
	v->a[1017][aux_sym_heredoc_redirect_token1] = actions(2078);
	v->a[1017][sym_comment] = actions(3);
	v->a[1017][anon_sym_SEMI] = actions(2080);
	v->a[1018][ts_builtin_sym_end] = actions(2119);
	v->a[1018][anon_sym_PIPE] = actions(2121);
	v->a[1018][anon_sym_RPAREN] = actions(2121);
	v->a[1018][anon_sym_SEMI_SEMI] = actions(2121);
	v->a[1018][anon_sym_AMP_AMP] = actions(2121);
	v->a[1018][anon_sym_PIPE_PIPE] = actions(2121);
	v->a[1018][anon_sym_LT] = actions(2121);
	v->a[1018][anon_sym_GT] = actions(2121);
	v->a[1018][anon_sym_GT_GT] = actions(2121);
	v->a[1018][anon_sym_LT_LT] = actions(2121);
	return (parse_table_1265(v));
}

/* EOF parse_table_252.c */
