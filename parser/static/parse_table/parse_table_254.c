/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_254.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_1270(t_parse_table_array *v)
{
	v->a[1025][sym_comment] = actions(3);
	v->a[1025][anon_sym_SEMI] = actions(2143);
	v->a[1026][anon_sym_BANG] = actions(2009);
	v->a[1026][anon_sym_DASH] = actions(2009);
	v->a[1026][anon_sym_STAR] = actions(2009);
	v->a[1026][anon_sym_QMARK] = actions(2009);
	v->a[1026][anon_sym_DOLLAR] = actions(2009);
	v->a[1026][anon_sym_DQUOTE] = actions(2145);
	v->a[1026][sym_string_content] = actions(2013);
	v->a[1026][anon_sym_POUND] = actions(2009);
	v->a[1026][sym_comment] = actions(3);
	v->a[1026][aux_sym__simple_variable_name_token1] = actions(2015);
	v->a[1026][aux_sym__multiline_variable_name_token1] = actions(2015);
	v->a[1026][anon_sym_AT] = actions(2009);
	v->a[1026][anon_sym_0] = actions(2009);
	v->a[1026][sym_variable_name] = actions(2017);
	v->a[1027][aux_sym_concatenation_repeat1] = state(601);
	v->a[1027][sym_word] = actions(923);
	v->a[1027][aux_sym_heredoc_redirect_token1] = actions(923);
	v->a[1027][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(923);
	return (parse_table_1271(v));
}

void	parse_table_1271(t_parse_table_array *v)
{
	v->a[1027][aux_sym_concatenation_token1] = actions(1465);
	v->a[1027][anon_sym_DOLLAR] = actions(923);
	v->a[1027][anon_sym_DQUOTE] = actions(923);
	v->a[1027][sym_raw_string] = actions(923);
	v->a[1027][sym_number] = actions(923);
	v->a[1027][anon_sym_DOLLAR_LBRACE] = actions(923);
	v->a[1027][anon_sym_DOLLAR_LPAREN] = actions(923);
	v->a[1027][anon_sym_BQUOTE] = actions(923);
	v->a[1027][sym_comment] = actions(3);
	v->a[1027][sym__concat] = actions(2147);
	v->a[1028][ts_builtin_sym_end] = actions(2149);
	v->a[1028][anon_sym_PIPE] = actions(2151);
	v->a[1028][anon_sym_RPAREN] = actions(2151);
	v->a[1028][anon_sym_SEMI_SEMI] = actions(2151);
	v->a[1028][anon_sym_AMP_AMP] = actions(2151);
	v->a[1028][anon_sym_PIPE_PIPE] = actions(2151);
	v->a[1028][anon_sym_LT] = actions(2151);
	v->a[1028][anon_sym_GT] = actions(2151);
	v->a[1028][anon_sym_GT_GT] = actions(2151);
	v->a[1028][anon_sym_LT_LT] = actions(2151);
	return (parse_table_1272(v));
}

void	parse_table_1272(t_parse_table_array *v)
{
	v->a[1028][aux_sym_heredoc_redirect_token1] = actions(2149);
	v->a[1028][anon_sym_BQUOTE] = actions(2151);
	v->a[1028][sym_comment] = actions(3);
	v->a[1028][anon_sym_SEMI] = actions(2151);
	v->a[1029][ts_builtin_sym_end] = actions(2153);
	v->a[1029][anon_sym_PIPE] = actions(2155);
	v->a[1029][anon_sym_RPAREN] = actions(2155);
	v->a[1029][anon_sym_SEMI_SEMI] = actions(2155);
	v->a[1029][anon_sym_AMP_AMP] = actions(2155);
	v->a[1029][anon_sym_PIPE_PIPE] = actions(2155);
	v->a[1029][anon_sym_LT] = actions(2155);
	v->a[1029][anon_sym_GT] = actions(2155);
	v->a[1029][anon_sym_GT_GT] = actions(2155);
	v->a[1029][anon_sym_LT_LT] = actions(2155);
	v->a[1029][aux_sym_heredoc_redirect_token1] = actions(2153);
	v->a[1029][anon_sym_BQUOTE] = actions(2155);
	v->a[1029][sym_comment] = actions(3);
	v->a[1029][anon_sym_SEMI] = actions(2155);
	v->a[1030][anon_sym_BANG] = actions(2009);
	v->a[1030][anon_sym_DASH] = actions(2009);
	return (parse_table_1273(v));
}

void	parse_table_1273(t_parse_table_array *v)
{
	v->a[1030][anon_sym_STAR] = actions(2009);
	v->a[1030][anon_sym_QMARK] = actions(2009);
	v->a[1030][anon_sym_DOLLAR] = actions(2009);
	v->a[1030][anon_sym_DQUOTE] = actions(2157);
	v->a[1030][sym_string_content] = actions(2013);
	v->a[1030][anon_sym_POUND] = actions(2009);
	v->a[1030][sym_comment] = actions(3);
	v->a[1030][aux_sym__simple_variable_name_token1] = actions(2015);
	v->a[1030][aux_sym__multiline_variable_name_token1] = actions(2015);
	v->a[1030][anon_sym_AT] = actions(2009);
	v->a[1030][anon_sym_0] = actions(2009);
	v->a[1030][sym_variable_name] = actions(2017);
	v->a[1031][anon_sym_BANG] = actions(2009);
	v->a[1031][anon_sym_DASH] = actions(2009);
	v->a[1031][anon_sym_STAR] = actions(2009);
	v->a[1031][anon_sym_QMARK] = actions(2009);
	v->a[1031][anon_sym_DOLLAR] = actions(2009);
	v->a[1031][anon_sym_DQUOTE] = actions(2159);
	v->a[1031][sym_string_content] = actions(2013);
	v->a[1031][anon_sym_POUND] = actions(2009);
	return (parse_table_1274(v));
}

void	parse_table_1274(t_parse_table_array *v)
{
	v->a[1031][sym_comment] = actions(3);
	v->a[1031][aux_sym__simple_variable_name_token1] = actions(2015);
	v->a[1031][aux_sym__multiline_variable_name_token1] = actions(2015);
	v->a[1031][anon_sym_AT] = actions(2009);
	v->a[1031][anon_sym_0] = actions(2009);
	v->a[1031][sym_variable_name] = actions(2017);
	v->a[1032][ts_builtin_sym_end] = actions(2141);
	v->a[1032][anon_sym_PIPE] = actions(2143);
	v->a[1032][anon_sym_RPAREN] = actions(2143);
	v->a[1032][anon_sym_SEMI_SEMI] = actions(2143);
	v->a[1032][anon_sym_AMP_AMP] = actions(2143);
	v->a[1032][anon_sym_PIPE_PIPE] = actions(2143);
	v->a[1032][anon_sym_LT] = actions(2143);
	v->a[1032][anon_sym_GT] = actions(2143);
	v->a[1032][anon_sym_GT_GT] = actions(2143);
	v->a[1032][anon_sym_LT_LT] = actions(2143);
	v->a[1032][aux_sym_heredoc_redirect_token1] = actions(2141);
	v->a[1032][anon_sym_BQUOTE] = actions(2143);
	v->a[1032][sym_comment] = actions(3);
	v->a[1032][anon_sym_SEMI] = actions(2143);
	return (parse_table_1275(v));
}

/* EOF parse_table_254.c */
