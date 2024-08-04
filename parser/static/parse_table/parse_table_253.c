/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_253.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_1265(t_parse_table_array *v)
{
	v->a[1018][aux_sym_heredoc_redirect_token1] = actions(2119);
	v->a[1018][anon_sym_BQUOTE] = actions(2121);
	v->a[1018][sym_comment] = actions(3);
	v->a[1018][anon_sym_SEMI] = actions(2121);
	v->a[1019][sym_file_redirect] = state(1017);
	v->a[1019][aux_sym_redirected_statement_repeat2] = state(1017);
	v->a[1019][anon_sym_PIPE] = actions(2063);
	v->a[1019][anon_sym_RPAREN] = actions(2063);
	v->a[1019][anon_sym_SEMI_SEMI] = actions(2063);
	v->a[1019][anon_sym_AMP_AMP] = actions(2063);
	v->a[1019][anon_sym_PIPE_PIPE] = actions(2063);
	v->a[1019][anon_sym_LT] = actions(1868);
	v->a[1019][anon_sym_GT] = actions(1868);
	v->a[1019][anon_sym_GT_GT] = actions(1868);
	v->a[1019][anon_sym_LT_LT] = actions(2063);
	v->a[1019][aux_sym_heredoc_redirect_token1] = actions(2065);
	v->a[1019][sym_comment] = actions(3);
	v->a[1019][anon_sym_SEMI] = actions(2063);
	v->a[1020][ts_builtin_sym_end] = actions(2123);
	v->a[1020][anon_sym_PIPE] = actions(2125);
	return (parse_table_1266(v));
}

void	parse_table_1266(t_parse_table_array *v)
{
	v->a[1020][anon_sym_RPAREN] = actions(2125);
	v->a[1020][anon_sym_SEMI_SEMI] = actions(2125);
	v->a[1020][anon_sym_AMP_AMP] = actions(2125);
	v->a[1020][anon_sym_PIPE_PIPE] = actions(2125);
	v->a[1020][anon_sym_LT] = actions(2125);
	v->a[1020][anon_sym_GT] = actions(2125);
	v->a[1020][anon_sym_GT_GT] = actions(2125);
	v->a[1020][anon_sym_LT_LT] = actions(2125);
	v->a[1020][aux_sym_heredoc_redirect_token1] = actions(2123);
	v->a[1020][anon_sym_BQUOTE] = actions(2125);
	v->a[1020][sym_comment] = actions(3);
	v->a[1020][anon_sym_SEMI] = actions(2125);
	v->a[1021][anon_sym_BANG] = actions(2009);
	v->a[1021][anon_sym_DASH] = actions(2009);
	v->a[1021][anon_sym_STAR] = actions(2009);
	v->a[1021][anon_sym_QMARK] = actions(2009);
	v->a[1021][anon_sym_DOLLAR] = actions(2009);
	v->a[1021][anon_sym_DQUOTE] = actions(2127);
	v->a[1021][sym_string_content] = actions(2013);
	v->a[1021][anon_sym_POUND] = actions(2009);
	return (parse_table_1267(v));
}

void	parse_table_1267(t_parse_table_array *v)
{
	v->a[1021][sym_comment] = actions(3);
	v->a[1021][aux_sym__simple_variable_name_token1] = actions(2015);
	v->a[1021][aux_sym__multiline_variable_name_token1] = actions(2015);
	v->a[1021][anon_sym_AT] = actions(2009);
	v->a[1021][anon_sym_0] = actions(2009);
	v->a[1021][sym_variable_name] = actions(2017);
	v->a[1022][ts_builtin_sym_end] = actions(2129);
	v->a[1022][anon_sym_PIPE] = actions(2131);
	v->a[1022][anon_sym_RPAREN] = actions(2131);
	v->a[1022][anon_sym_SEMI_SEMI] = actions(2131);
	v->a[1022][anon_sym_AMP_AMP] = actions(2131);
	v->a[1022][anon_sym_PIPE_PIPE] = actions(2131);
	v->a[1022][anon_sym_LT] = actions(2131);
	v->a[1022][anon_sym_GT] = actions(2131);
	v->a[1022][anon_sym_GT_GT] = actions(2131);
	v->a[1022][anon_sym_LT_LT] = actions(2131);
	v->a[1022][aux_sym_heredoc_redirect_token1] = actions(2129);
	v->a[1022][anon_sym_BQUOTE] = actions(2131);
	v->a[1022][sym_comment] = actions(3);
	v->a[1022][anon_sym_SEMI] = actions(2131);
	return (parse_table_1268(v));
}

void	parse_table_1268(t_parse_table_array *v)
{
	v->a[1023][ts_builtin_sym_end] = actions(2133);
	v->a[1023][anon_sym_PIPE] = actions(2135);
	v->a[1023][anon_sym_RPAREN] = actions(2135);
	v->a[1023][anon_sym_SEMI_SEMI] = actions(2135);
	v->a[1023][anon_sym_AMP_AMP] = actions(2135);
	v->a[1023][anon_sym_PIPE_PIPE] = actions(2135);
	v->a[1023][anon_sym_LT] = actions(2135);
	v->a[1023][anon_sym_GT] = actions(2135);
	v->a[1023][anon_sym_GT_GT] = actions(2135);
	v->a[1023][anon_sym_LT_LT] = actions(2135);
	v->a[1023][aux_sym_heredoc_redirect_token1] = actions(2133);
	v->a[1023][anon_sym_BQUOTE] = actions(2135);
	v->a[1023][sym_comment] = actions(3);
	v->a[1023][anon_sym_SEMI] = actions(2135);
	v->a[1024][ts_builtin_sym_end] = actions(2137);
	v->a[1024][anon_sym_PIPE] = actions(2139);
	v->a[1024][anon_sym_RPAREN] = actions(2139);
	v->a[1024][anon_sym_SEMI_SEMI] = actions(2139);
	v->a[1024][anon_sym_AMP_AMP] = actions(2139);
	v->a[1024][anon_sym_PIPE_PIPE] = actions(2139);
	return (parse_table_1269(v));
}

void	parse_table_1269(t_parse_table_array *v)
{
	v->a[1024][anon_sym_LT] = actions(2139);
	v->a[1024][anon_sym_GT] = actions(2139);
	v->a[1024][anon_sym_GT_GT] = actions(2139);
	v->a[1024][anon_sym_LT_LT] = actions(2139);
	v->a[1024][aux_sym_heredoc_redirect_token1] = actions(2137);
	v->a[1024][anon_sym_BQUOTE] = actions(2139);
	v->a[1024][sym_comment] = actions(3);
	v->a[1024][anon_sym_SEMI] = actions(2139);
	v->a[1025][ts_builtin_sym_end] = actions(2141);
	v->a[1025][anon_sym_PIPE] = actions(2143);
	v->a[1025][anon_sym_RPAREN] = actions(2143);
	v->a[1025][anon_sym_SEMI_SEMI] = actions(2143);
	v->a[1025][anon_sym_AMP_AMP] = actions(2143);
	v->a[1025][anon_sym_PIPE_PIPE] = actions(2143);
	v->a[1025][anon_sym_LT] = actions(2143);
	v->a[1025][anon_sym_GT] = actions(2143);
	v->a[1025][anon_sym_GT_GT] = actions(2143);
	v->a[1025][anon_sym_LT_LT] = actions(2143);
	v->a[1025][aux_sym_heredoc_redirect_token1] = actions(2141);
	v->a[1025][anon_sym_BQUOTE] = actions(2143);
	return (parse_table_1270(v));
}

/* EOF parse_table_253.c */
