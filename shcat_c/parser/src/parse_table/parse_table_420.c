/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_420.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_2100(t_parse_table_array *v)
{
	v->a[464][anon_sym_DQUOTE] = actions(1231);
	v->a[464][sym_raw_string] = actions(1227);
	v->a[464][sym_ansi_c_string] = actions(1227);
	v->a[464][aux_sym_number_token1] = actions(1227);
	v->a[464][aux_sym_number_token2] = actions(1227);
	v->a[464][anon_sym_POUND] = actions(1229);
	v->a[464][anon_sym_DOLLAR_LBRACE] = actions(1227);
	v->a[464][anon_sym_DOLLAR_LPAREN] = actions(1227);
	v->a[464][anon_sym_BQUOTE] = actions(1227);
	v->a[464][anon_sym_DOLLAR_BQUOTE] = actions(1227);
	v->a[464][anon_sym_LT_LPAREN] = actions(1227);
	v->a[464][anon_sym_GT_LPAREN] = actions(1227);
	v->a[464][sym_comment] = actions(3);
	v->a[464][aux_sym__simple_variable_name_token1] = actions(1233);
	v->a[464][aux_sym__multiline_variable_name_token1] = actions(1233);
	v->a[464][anon_sym_AT2] = actions(1229);
	v->a[464][anon_sym_0] = actions(1229);
	v->a[464][anon_sym__] = actions(1229);
	v->a[464][sym_file_descriptor] = actions(1235);
	v->a[464][sym_variable_name] = actions(1237);
	parse_table_2101(v);
}

void	parse_table_2101(t_parse_table_array *v)
{
	v->a[464][sym_test_operator] = actions(1235);
	v->a[464][sym__bare_dollar] = actions(1235);
	v->a[464][sym__brace_start] = actions(1235);
	v->a[465][sym_string] = state(489);
	v->a[465][sym_word] = actions(1239);
	v->a[465][anon_sym_LPAREN_LPAREN] = actions(1239);
	v->a[465][anon_sym_SEMI] = actions(1239);
	v->a[465][anon_sym_EQ] = actions(1239);
	v->a[465][anon_sym_PLUS_PLUS] = actions(1239);
	v->a[465][anon_sym_DASH_DASH] = actions(1239);
	v->a[465][anon_sym_PLUS_EQ] = actions(1239);
	v->a[465][anon_sym_DASH_EQ] = actions(1239);
	v->a[465][anon_sym_STAR_EQ] = actions(1239);
	v->a[465][anon_sym_SLASH_EQ] = actions(1239);
	v->a[465][anon_sym_PERCENT_EQ] = actions(1239);
	v->a[465][anon_sym_STAR_STAR_EQ] = actions(1239);
	v->a[465][anon_sym_LT_LT_EQ] = actions(1239);
	v->a[465][anon_sym_GT_GT_EQ] = actions(1239);
	v->a[465][anon_sym_AMP_EQ] = actions(1239);
	v->a[465][anon_sym_CARET_EQ] = actions(1239);
	parse_table_2102(v);
}

void	parse_table_2102(t_parse_table_array *v)
{
	v->a[465][anon_sym_PIPE_EQ] = actions(1239);
	v->a[465][anon_sym_PIPE_PIPE] = actions(1239);
	v->a[465][anon_sym_AMP_AMP] = actions(1239);
	v->a[465][anon_sym_PIPE] = actions(1239);
	v->a[465][anon_sym_CARET] = actions(1239);
	v->a[465][anon_sym_AMP] = actions(1239);
	v->a[465][anon_sym_EQ_EQ] = actions(1239);
	v->a[465][anon_sym_BANG_EQ] = actions(1239);
	v->a[465][anon_sym_LT] = actions(1239);
	v->a[465][anon_sym_GT] = actions(1239);
	v->a[465][anon_sym_LT_EQ] = actions(1239);
	v->a[465][anon_sym_GT_EQ] = actions(1239);
	v->a[465][anon_sym_LT_LT] = actions(1239);
	v->a[465][anon_sym_GT_GT] = actions(1239);
	v->a[465][anon_sym_PLUS] = actions(1239);
	v->a[465][anon_sym_DASH] = actions(1229);
	v->a[465][anon_sym_STAR] = actions(1229);
	v->a[465][anon_sym_SLASH] = actions(1239);
	v->a[465][anon_sym_PERCENT] = actions(1239);
	v->a[465][anon_sym_STAR_STAR] = actions(1239);
	parse_table_2103(v);
}

void	parse_table_2103(t_parse_table_array *v)
{
	v->a[465][anon_sym_LPAREN] = actions(1239);
	v->a[465][anon_sym_RPAREN] = actions(1239);
	v->a[465][anon_sym_SEMI_SEMI] = actions(1239);
	v->a[465][anon_sym_PIPE_AMP] = actions(1239);
	v->a[465][anon_sym_BANG] = actions(1229);
	v->a[465][anon_sym_EQ_TILDE] = actions(1239);
	v->a[465][anon_sym_AMP_GT] = actions(1239);
	v->a[465][anon_sym_AMP_GT_GT] = actions(1239);
	v->a[465][anon_sym_LT_AMP] = actions(1239);
	v->a[465][anon_sym_GT_AMP] = actions(1239);
	v->a[465][anon_sym_GT_PIPE] = actions(1239);
	v->a[465][anon_sym_LT_AMP_DASH] = actions(1239);
	v->a[465][anon_sym_GT_AMP_DASH] = actions(1239);
	v->a[465][anon_sym_LT_LT_DASH] = actions(1239);
	v->a[465][aux_sym_heredoc_redirect_token1] = actions(1239);
	v->a[465][anon_sym_LT_LT_LT] = actions(1239);
	v->a[465][anon_sym_QMARK] = actions(1229);
	v->a[465][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(1239);
	v->a[465][anon_sym_DOLLAR_LBRACK] = actions(1239);
	v->a[465][anon_sym_DOLLAR] = actions(1229);
	parse_table_2104(v);
}

void	parse_table_2104(t_parse_table_array *v)
{
	v->a[465][sym__special_character] = actions(1239);
	v->a[465][anon_sym_DQUOTE] = actions(1231);
	v->a[465][sym_raw_string] = actions(1239);
	v->a[465][sym_ansi_c_string] = actions(1239);
	v->a[465][aux_sym_number_token1] = actions(1239);
	v->a[465][aux_sym_number_token2] = actions(1239);
	v->a[465][anon_sym_POUND] = actions(1229);
	v->a[465][anon_sym_DOLLAR_LBRACE] = actions(1239);
	v->a[465][anon_sym_DOLLAR_LPAREN] = actions(1239);
	v->a[465][anon_sym_BQUOTE] = actions(1239);
	v->a[465][anon_sym_DOLLAR_BQUOTE] = actions(1239);
	v->a[465][anon_sym_LT_LPAREN] = actions(1239);
	v->a[465][anon_sym_GT_LPAREN] = actions(1239);
	v->a[465][sym_comment] = actions(3);
	v->a[465][aux_sym__simple_variable_name_token1] = actions(1233);
	v->a[465][aux_sym__multiline_variable_name_token1] = actions(1233);
	v->a[465][anon_sym_AT2] = actions(1229);
	v->a[465][anon_sym_0] = actions(1229);
	v->a[465][anon_sym__] = actions(1229);
	v->a[465][sym_file_descriptor] = actions(1241);
	parse_table_2105(v);
}

/* EOF parse_table_420.c */
