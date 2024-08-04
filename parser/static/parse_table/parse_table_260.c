/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_260.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_1300(t_parse_table_array *v)
{
	v->a[1068][aux_sym_heredoc_redirect_token1] = actions(2225);
	v->a[1068][anon_sym_BQUOTE] = actions(2227);
	v->a[1068][sym_comment] = actions(3);
	v->a[1068][anon_sym_SEMI] = actions(2227);
	v->a[1069][ts_builtin_sym_end] = actions(2229);
	v->a[1069][anon_sym_PIPE] = actions(2231);
	v->a[1069][anon_sym_RPAREN] = actions(2231);
	v->a[1069][anon_sym_SEMI_SEMI] = actions(2231);
	v->a[1069][anon_sym_AMP_AMP] = actions(2231);
	v->a[1069][anon_sym_PIPE_PIPE] = actions(2231);
	v->a[1069][anon_sym_LT] = actions(2231);
	v->a[1069][anon_sym_GT] = actions(2231);
	v->a[1069][anon_sym_GT_GT] = actions(2231);
	v->a[1069][anon_sym_LT_LT] = actions(2231);
	v->a[1069][aux_sym_heredoc_redirect_token1] = actions(2229);
	v->a[1069][anon_sym_BQUOTE] = actions(2231);
	v->a[1069][sym_comment] = actions(3);
	v->a[1069][anon_sym_SEMI] = actions(2231);
	v->a[1070][sym_file_redirect] = state(1040);
	v->a[1070][sym_heredoc_redirect] = state(1040);
	return (parse_table_1301(v));
}

void	parse_table_1301(t_parse_table_array *v)
{
	v->a[1070][sym_terminator] = state(281);
	v->a[1070][aux_sym_redirected_statement_repeat1] = state(1040);
	v->a[1070][anon_sym_SEMI_SEMI] = actions(823);
	v->a[1070][anon_sym_AMP_AMP] = actions(769);
	v->a[1070][anon_sym_PIPE_PIPE] = actions(769);
	v->a[1070][anon_sym_LT] = actions(1924);
	v->a[1070][anon_sym_GT] = actions(1924);
	v->a[1070][anon_sym_GT_GT] = actions(1924);
	v->a[1070][anon_sym_LT_LT] = actions(597);
	v->a[1070][aux_sym_heredoc_redirect_token1] = actions(1926);
	v->a[1070][sym_comment] = actions(3);
	v->a[1070][anon_sym_SEMI] = actions(823);
	v->a[1071][anon_sym_BANG] = actions(2009);
	v->a[1071][anon_sym_DASH] = actions(2009);
	v->a[1071][anon_sym_STAR] = actions(2009);
	v->a[1071][anon_sym_QMARK] = actions(2009);
	v->a[1071][anon_sym_DOLLAR] = actions(2009);
	v->a[1071][anon_sym_DQUOTE] = actions(2233);
	v->a[1071][sym_string_content] = actions(2013);
	v->a[1071][anon_sym_POUND] = actions(2009);
	return (parse_table_1302(v));
}

void	parse_table_1302(t_parse_table_array *v)
{
	v->a[1071][sym_comment] = actions(3);
	v->a[1071][aux_sym__simple_variable_name_token1] = actions(2015);
	v->a[1071][aux_sym__multiline_variable_name_token1] = actions(2015);
	v->a[1071][anon_sym_AT] = actions(2009);
	v->a[1071][anon_sym_0] = actions(2009);
	v->a[1071][sym_variable_name] = actions(2017);
	v->a[1072][anon_sym_BANG] = actions(2009);
	v->a[1072][anon_sym_DASH] = actions(2009);
	v->a[1072][anon_sym_STAR] = actions(2009);
	v->a[1072][anon_sym_QMARK] = actions(2009);
	v->a[1072][anon_sym_DOLLAR] = actions(2009);
	v->a[1072][anon_sym_DQUOTE] = actions(2235);
	v->a[1072][sym_string_content] = actions(2013);
	v->a[1072][anon_sym_POUND] = actions(2009);
	v->a[1072][sym_comment] = actions(3);
	v->a[1072][aux_sym__simple_variable_name_token1] = actions(2015);
	v->a[1072][aux_sym__multiline_variable_name_token1] = actions(2015);
	v->a[1072][anon_sym_AT] = actions(2009);
	v->a[1072][anon_sym_0] = actions(2009);
	v->a[1072][sym_variable_name] = actions(2017);
	return (parse_table_1303(v));
}

void	parse_table_1303(t_parse_table_array *v)
{
	v->a[1073][anon_sym_BANG] = actions(2009);
	v->a[1073][anon_sym_DASH] = actions(2009);
	v->a[1073][anon_sym_STAR] = actions(2009);
	v->a[1073][anon_sym_QMARK] = actions(2009);
	v->a[1073][anon_sym_DOLLAR] = actions(2009);
	v->a[1073][anon_sym_DQUOTE] = actions(2237);
	v->a[1073][sym_string_content] = actions(2013);
	v->a[1073][anon_sym_POUND] = actions(2009);
	v->a[1073][sym_comment] = actions(3);
	v->a[1073][aux_sym__simple_variable_name_token1] = actions(2015);
	v->a[1073][aux_sym__multiline_variable_name_token1] = actions(2015);
	v->a[1073][anon_sym_AT] = actions(2009);
	v->a[1073][anon_sym_0] = actions(2009);
	v->a[1073][sym_variable_name] = actions(2017);
	v->a[1074][anon_sym_BANG] = actions(2009);
	v->a[1074][anon_sym_DASH] = actions(2009);
	v->a[1074][anon_sym_STAR] = actions(2009);
	v->a[1074][anon_sym_QMARK] = actions(2009);
	v->a[1074][anon_sym_DOLLAR] = actions(2009);
	v->a[1074][anon_sym_DQUOTE] = actions(2239);
	return (parse_table_1304(v));
}

void	parse_table_1304(t_parse_table_array *v)
{
	v->a[1074][sym_string_content] = actions(2013);
	v->a[1074][anon_sym_POUND] = actions(2009);
	v->a[1074][sym_comment] = actions(3);
	v->a[1074][aux_sym__simple_variable_name_token1] = actions(2015);
	v->a[1074][aux_sym__multiline_variable_name_token1] = actions(2015);
	v->a[1074][anon_sym_AT] = actions(2009);
	v->a[1074][anon_sym_0] = actions(2009);
	v->a[1074][sym_variable_name] = actions(2017);
	v->a[1075][anon_sym_BANG] = actions(2009);
	v->a[1075][anon_sym_DASH] = actions(2009);
	v->a[1075][anon_sym_STAR] = actions(2009);
	v->a[1075][anon_sym_QMARK] = actions(2009);
	v->a[1075][anon_sym_DOLLAR] = actions(2009);
	v->a[1075][anon_sym_DQUOTE] = actions(2241);
	v->a[1075][sym_string_content] = actions(2013);
	v->a[1075][anon_sym_POUND] = actions(2009);
	v->a[1075][sym_comment] = actions(3);
	v->a[1075][aux_sym__simple_variable_name_token1] = actions(2015);
	v->a[1075][aux_sym__multiline_variable_name_token1] = actions(2015);
	v->a[1075][anon_sym_AT] = actions(2009);
	return (parse_table_1305(v));
}

/* EOF parse_table_260.c */
