/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_424.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_2120(t_parse_table_array *v)
{
	v->a[469][anon_sym_BQUOTE] = actions(1261);
	v->a[469][anon_sym_DOLLAR_BQUOTE] = actions(1261);
	v->a[469][anon_sym_LT_LPAREN] = actions(1261);
	v->a[469][anon_sym_GT_LPAREN] = actions(1261);
	v->a[469][sym_comment] = actions(3);
	v->a[469][sym_file_descriptor] = actions(1263);
	v->a[469][sym__concat] = actions(280);
	v->a[469][sym_test_operator] = actions(1263);
	v->a[469][sym__bare_dollar] = actions(1263);
	v->a[469][sym__brace_start] = actions(1263);
	v->a[470][aux_sym_concatenation_repeat1] = state(468);
	v->a[470][sym_word] = actions(1265);
	v->a[470][anon_sym_LPAREN_LPAREN] = actions(1265);
	v->a[470][anon_sym_SEMI] = actions(1265);
	v->a[470][anon_sym_EQ] = actions(1265);
	v->a[470][anon_sym_PLUS_PLUS] = actions(1265);
	v->a[470][anon_sym_DASH_DASH] = actions(1265);
	v->a[470][anon_sym_PLUS_EQ] = actions(1265);
	v->a[470][anon_sym_DASH_EQ] = actions(1265);
	v->a[470][anon_sym_STAR_EQ] = actions(1265);
	parse_table_2121(v);
}

void	parse_table_2121(t_parse_table_array *v)
{
	v->a[470][anon_sym_SLASH_EQ] = actions(1265);
	v->a[470][anon_sym_PERCENT_EQ] = actions(1265);
	v->a[470][anon_sym_STAR_STAR_EQ] = actions(1265);
	v->a[470][anon_sym_LT_LT_EQ] = actions(1265);
	v->a[470][anon_sym_GT_GT_EQ] = actions(1265);
	v->a[470][anon_sym_AMP_EQ] = actions(1265);
	v->a[470][anon_sym_CARET_EQ] = actions(1265);
	v->a[470][anon_sym_PIPE_EQ] = actions(1265);
	v->a[470][anon_sym_PIPE_PIPE] = actions(1265);
	v->a[470][anon_sym_AMP_AMP] = actions(1265);
	v->a[470][anon_sym_PIPE] = actions(1265);
	v->a[470][anon_sym_CARET] = actions(1265);
	v->a[470][anon_sym_AMP] = actions(1265);
	v->a[470][anon_sym_EQ_EQ] = actions(1265);
	v->a[470][anon_sym_BANG_EQ] = actions(1265);
	v->a[470][anon_sym_LT] = actions(1265);
	v->a[470][anon_sym_GT] = actions(1265);
	v->a[470][anon_sym_LT_EQ] = actions(1265);
	v->a[470][anon_sym_GT_EQ] = actions(1265);
	v->a[470][anon_sym_LT_LT] = actions(1265);
	parse_table_2122(v);
}

void	parse_table_2122(t_parse_table_array *v)
{
	v->a[470][anon_sym_GT_GT] = actions(1265);
	v->a[470][anon_sym_PLUS] = actions(1265);
	v->a[470][anon_sym_DASH] = actions(1265);
	v->a[470][anon_sym_STAR] = actions(1265);
	v->a[470][anon_sym_SLASH] = actions(1265);
	v->a[470][anon_sym_PERCENT] = actions(1265);
	v->a[470][anon_sym_STAR_STAR] = actions(1265);
	v->a[470][anon_sym_LPAREN] = actions(1265);
	v->a[470][anon_sym_RPAREN] = actions(1265);
	v->a[470][anon_sym_SEMI_SEMI] = actions(1265);
	v->a[470][anon_sym_PIPE_AMP] = actions(1265);
	v->a[470][anon_sym_EQ_TILDE] = actions(1265);
	v->a[470][anon_sym_AMP_GT] = actions(1265);
	v->a[470][anon_sym_AMP_GT_GT] = actions(1265);
	v->a[470][anon_sym_LT_AMP] = actions(1265);
	v->a[470][anon_sym_GT_AMP] = actions(1265);
	v->a[470][anon_sym_GT_PIPE] = actions(1265);
	v->a[470][anon_sym_LT_AMP_DASH] = actions(1265);
	v->a[470][anon_sym_GT_AMP_DASH] = actions(1265);
	v->a[470][anon_sym_LT_LT_DASH] = actions(1265);
	parse_table_2123(v);
}

void	parse_table_2123(t_parse_table_array *v)
{
	v->a[470][aux_sym_heredoc_redirect_token1] = actions(1267);
	v->a[470][anon_sym_LT_LT_LT] = actions(1265);
	v->a[470][anon_sym_QMARK] = actions(1265);
	v->a[470][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(1265);
	v->a[470][anon_sym_DOLLAR_LBRACK] = actions(1265);
	v->a[470][aux_sym_concatenation_token1] = actions(256);
	v->a[470][anon_sym_DOLLAR] = actions(1265);
	v->a[470][sym__special_character] = actions(1265);
	v->a[470][anon_sym_DQUOTE] = actions(1265);
	v->a[470][sym_raw_string] = actions(1265);
	v->a[470][sym_ansi_c_string] = actions(1265);
	v->a[470][aux_sym_number_token1] = actions(1265);
	v->a[470][aux_sym_number_token2] = actions(1265);
	v->a[470][anon_sym_DOLLAR_LBRACE] = actions(1265);
	v->a[470][anon_sym_DOLLAR_LPAREN] = actions(1265);
	v->a[470][anon_sym_BQUOTE] = actions(1265);
	v->a[470][anon_sym_DOLLAR_BQUOTE] = actions(1265);
	v->a[470][anon_sym_LT_LPAREN] = actions(1265);
	v->a[470][anon_sym_GT_LPAREN] = actions(1265);
	v->a[470][sym_comment] = actions(3);
	parse_table_2124(v);
}

void	parse_table_2124(t_parse_table_array *v)
{
	v->a[470][sym_file_descriptor] = actions(1267);
	v->a[470][sym__concat] = actions(1269);
	v->a[470][sym_test_operator] = actions(1267);
	v->a[470][sym__bare_dollar] = actions(1267);
	v->a[470][sym__brace_start] = actions(1267);
	v->a[471][aux_sym_concatenation_repeat1] = state(473);
	v->a[471][sym_word] = actions(1271);
	v->a[471][anon_sym_LPAREN_LPAREN] = actions(1271);
	v->a[471][anon_sym_SEMI] = actions(1271);
	v->a[471][anon_sym_EQ] = actions(1273);
	v->a[471][anon_sym_PLUS_PLUS] = actions(1273);
	v->a[471][anon_sym_DASH_DASH] = actions(1273);
	v->a[471][anon_sym_PLUS_EQ] = actions(1273);
	v->a[471][anon_sym_DASH_EQ] = actions(1273);
	v->a[471][anon_sym_STAR_EQ] = actions(1273);
	v->a[471][anon_sym_SLASH_EQ] = actions(1273);
	v->a[471][anon_sym_PERCENT_EQ] = actions(1273);
	v->a[471][anon_sym_STAR_STAR_EQ] = actions(1273);
	v->a[471][anon_sym_LT_LT_EQ] = actions(1273);
	v->a[471][anon_sym_GT_GT_EQ] = actions(1273);
	parse_table_2125(v);
}

/* EOF parse_table_424.c */
