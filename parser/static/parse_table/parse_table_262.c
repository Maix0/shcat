/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_262.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_1310(t_parse_table_array *v)
{
	v->a[1083][sym_word] = actions(1247);
	v->a[1083][anon_sym_LT] = actions(1247);
	v->a[1083][anon_sym_GT] = actions(1247);
	v->a[1083][anon_sym_GT_GT] = actions(1247);
	v->a[1083][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(1247);
	v->a[1083][anon_sym_DOLLAR] = actions(1247);
	v->a[1083][anon_sym_DQUOTE] = actions(1247);
	v->a[1083][sym_raw_string] = actions(1247);
	v->a[1083][sym_number] = actions(1247);
	v->a[1083][anon_sym_DOLLAR_LBRACE] = actions(1247);
	v->a[1083][anon_sym_DOLLAR_LPAREN] = actions(1247);
	v->a[1083][anon_sym_BQUOTE] = actions(1247);
	v->a[1083][sym_comment] = actions(3);
	v->a[1083][sym_variable_name] = actions(1257);
	v->a[1084][ts_builtin_sym_end] = actions(2229);
	v->a[1084][anon_sym_PIPE] = actions(2231);
	v->a[1084][anon_sym_RPAREN] = actions(2231);
	v->a[1084][anon_sym_SEMI_SEMI] = actions(2231);
	v->a[1084][anon_sym_AMP_AMP] = actions(2231);
	v->a[1084][anon_sym_PIPE_PIPE] = actions(2231);
	return (parse_table_1311(v));
}

void	parse_table_1311(t_parse_table_array *v)
{
	v->a[1084][anon_sym_LT] = actions(2231);
	v->a[1084][anon_sym_GT] = actions(2231);
	v->a[1084][anon_sym_GT_GT] = actions(2231);
	v->a[1084][anon_sym_LT_LT] = actions(2231);
	v->a[1084][aux_sym_heredoc_redirect_token1] = actions(2229);
	v->a[1084][anon_sym_BQUOTE] = actions(2231);
	v->a[1084][sym_comment] = actions(3);
	v->a[1084][anon_sym_SEMI] = actions(2231);
	v->a[1085][sym_file_redirect] = state(1040);
	v->a[1085][sym_heredoc_redirect] = state(1040);
	v->a[1085][sym_terminator] = state(480);
	v->a[1085][aux_sym_redirected_statement_repeat1] = state(1040);
	v->a[1085][anon_sym_SEMI_SEMI] = actions(812);
	v->a[1085][anon_sym_AMP_AMP] = actions(769);
	v->a[1085][anon_sym_PIPE_PIPE] = actions(769);
	v->a[1085][anon_sym_LT] = actions(1924);
	v->a[1085][anon_sym_GT] = actions(1924);
	v->a[1085][anon_sym_GT_GT] = actions(1924);
	v->a[1085][anon_sym_LT_LT] = actions(597);
	v->a[1085][aux_sym_heredoc_redirect_token1] = actions(1950);
	return (parse_table_1312(v));
}

void	parse_table_1312(t_parse_table_array *v)
{
	v->a[1085][sym_comment] = actions(3);
	v->a[1085][anon_sym_SEMI] = actions(812);
	v->a[1086][anon_sym_BANG] = actions(2009);
	v->a[1086][anon_sym_DASH] = actions(2009);
	v->a[1086][anon_sym_STAR] = actions(2009);
	v->a[1086][anon_sym_QMARK] = actions(2009);
	v->a[1086][anon_sym_DOLLAR] = actions(2009);
	v->a[1086][anon_sym_DQUOTE] = actions(2263);
	v->a[1086][sym_string_content] = actions(2013);
	v->a[1086][anon_sym_POUND] = actions(2009);
	v->a[1086][sym_comment] = actions(3);
	v->a[1086][aux_sym__simple_variable_name_token1] = actions(2015);
	v->a[1086][aux_sym__multiline_variable_name_token1] = actions(2015);
	v->a[1086][anon_sym_AT] = actions(2009);
	v->a[1086][anon_sym_0] = actions(2009);
	v->a[1086][sym_variable_name] = actions(2017);
	v->a[1087][anon_sym_BANG] = actions(2009);
	v->a[1087][anon_sym_DASH] = actions(2009);
	v->a[1087][anon_sym_STAR] = actions(2009);
	v->a[1087][anon_sym_QMARK] = actions(2009);
	return (parse_table_1313(v));
}

void	parse_table_1313(t_parse_table_array *v)
{
	v->a[1087][anon_sym_DOLLAR] = actions(2009);
	v->a[1087][anon_sym_DQUOTE] = actions(2265);
	v->a[1087][sym_string_content] = actions(2013);
	v->a[1087][anon_sym_POUND] = actions(2009);
	v->a[1087][sym_comment] = actions(3);
	v->a[1087][aux_sym__simple_variable_name_token1] = actions(2015);
	v->a[1087][aux_sym__multiline_variable_name_token1] = actions(2015);
	v->a[1087][anon_sym_AT] = actions(2009);
	v->a[1087][anon_sym_0] = actions(2009);
	v->a[1087][sym_variable_name] = actions(2017);
	v->a[1088][anon_sym_BANG] = actions(2009);
	v->a[1088][anon_sym_DASH] = actions(2009);
	v->a[1088][anon_sym_STAR] = actions(2009);
	v->a[1088][anon_sym_QMARK] = actions(2009);
	v->a[1088][anon_sym_DOLLAR] = actions(2009);
	v->a[1088][anon_sym_DQUOTE] = actions(2267);
	v->a[1088][sym_string_content] = actions(2013);
	v->a[1088][anon_sym_POUND] = actions(2009);
	v->a[1088][sym_comment] = actions(3);
	v->a[1088][aux_sym__simple_variable_name_token1] = actions(2015);
	return (parse_table_1314(v));
}

void	parse_table_1314(t_parse_table_array *v)
{
	v->a[1088][aux_sym__multiline_variable_name_token1] = actions(2015);
	v->a[1088][anon_sym_AT] = actions(2009);
	v->a[1088][anon_sym_0] = actions(2009);
	v->a[1088][sym_variable_name] = actions(2017);
	v->a[1089][ts_builtin_sym_end] = actions(2269);
	v->a[1089][anon_sym_PIPE] = actions(2271);
	v->a[1089][anon_sym_RPAREN] = actions(2271);
	v->a[1089][anon_sym_SEMI_SEMI] = actions(2271);
	v->a[1089][anon_sym_AMP_AMP] = actions(2271);
	v->a[1089][anon_sym_PIPE_PIPE] = actions(2271);
	v->a[1089][anon_sym_LT] = actions(2271);
	v->a[1089][anon_sym_GT] = actions(2271);
	v->a[1089][anon_sym_GT_GT] = actions(2271);
	v->a[1089][anon_sym_LT_LT] = actions(2271);
	v->a[1089][aux_sym_heredoc_redirect_token1] = actions(2269);
	v->a[1089][anon_sym_BQUOTE] = actions(2271);
	v->a[1089][sym_comment] = actions(3);
	v->a[1089][anon_sym_SEMI] = actions(2271);
	v->a[1090][sym__expansion_body] = state(1728);
	v->a[1090][anon_sym_RBRACE] = actions(2273);
	return (parse_table_1315(v));
}

/* EOF parse_table_262.c */
