/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_164.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_820(t_parse_table_array *v)
{
	v->a[518][sym__extglob_blob] = state(1538);
	v->a[518][aux_sym_case_statement_repeat1] = state(597);
	v->a[518][sym_word] = actions(774);
	v->a[518][anon_sym_LPAREN] = actions(778);
	v->a[518][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(782);
	v->a[518][anon_sym_DOLLAR] = actions(784);
	v->a[518][anon_sym_DQUOTE] = actions(786);
	v->a[518][sym_raw_string] = actions(774);
	v->a[518][sym_number] = actions(774);
	v->a[518][anon_sym_DOLLAR_LBRACE] = actions(788);
	v->a[518][anon_sym_DOLLAR_LPAREN] = actions(790);
	v->a[518][anon_sym_BQUOTE] = actions(792);
	v->a[518][sym_comment] = actions(3);
	v->a[518][sym_extglob_pattern] = actions(794);
	v->a[519][sym_word] = actions(1247);
	v->a[519][anon_sym_PIPE] = actions(1249);
	v->a[519][anon_sym_RPAREN] = actions(1265);
	v->a[519][anon_sym_SEMI_SEMI] = actions(1249);
	v->a[519][anon_sym_AMP_AMP] = actions(1249);
	v->a[519][anon_sym_PIPE_PIPE] = actions(1249);
	return (parse_table_821(v));
}

void	parse_table_821(t_parse_table_array *v)
{
	v->a[519][anon_sym_LT] = actions(1254);
	v->a[519][anon_sym_GT] = actions(1254);
	v->a[519][anon_sym_GT_GT] = actions(1254);
	v->a[519][anon_sym_LT_LT] = actions(1249);
	v->a[519][aux_sym_heredoc_redirect_token1] = actions(1249);
	v->a[519][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(1247);
	v->a[519][anon_sym_DOLLAR] = actions(1247);
	v->a[519][anon_sym_DQUOTE] = actions(1247);
	v->a[519][sym_raw_string] = actions(1247);
	v->a[519][sym_number] = actions(1247);
	v->a[519][anon_sym_DOLLAR_LBRACE] = actions(1247);
	v->a[519][anon_sym_DOLLAR_LPAREN] = actions(1247);
	v->a[519][anon_sym_BQUOTE] = actions(1247);
	v->a[519][sym_comment] = actions(3);
	v->a[519][anon_sym_SEMI] = actions(1249);
	v->a[519][sym_variable_name] = actions(1257);
	v->a[520][ts_builtin_sym_end] = actions(917);
	v->a[520][sym_word] = actions(919);
	v->a[520][anon_sym_PIPE] = actions(919);
	v->a[520][anon_sym_SEMI_SEMI] = actions(919);
	return (parse_table_822(v));
}

void	parse_table_822(t_parse_table_array *v)
{
	v->a[520][anon_sym_AMP_AMP] = actions(919);
	v->a[520][anon_sym_PIPE_PIPE] = actions(919);
	v->a[520][anon_sym_LT] = actions(919);
	v->a[520][anon_sym_GT] = actions(919);
	v->a[520][anon_sym_GT_GT] = actions(919);
	v->a[520][anon_sym_LT_LT] = actions(919);
	v->a[520][aux_sym_heredoc_redirect_token1] = actions(919);
	v->a[520][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(919);
	v->a[520][anon_sym_DOLLAR] = actions(919);
	v->a[520][anon_sym_DQUOTE] = actions(919);
	v->a[520][sym_raw_string] = actions(919);
	v->a[520][sym_number] = actions(919);
	v->a[520][anon_sym_DOLLAR_LBRACE] = actions(919);
	v->a[520][anon_sym_DOLLAR_LPAREN] = actions(919);
	v->a[520][anon_sym_BQUOTE] = actions(919);
	v->a[520][sym_comment] = actions(3);
	v->a[520][anon_sym_SEMI] = actions(919);
	v->a[520][sym_variable_name] = actions(917);
	v->a[521][sym_word] = actions(1247);
	v->a[521][anon_sym_PIPE] = actions(1249);
	return (parse_table_823(v));
}

void	parse_table_823(t_parse_table_array *v)
{
	v->a[521][anon_sym_RPAREN] = actions(1268);
	v->a[521][anon_sym_SEMI_SEMI] = actions(1249);
	v->a[521][anon_sym_AMP_AMP] = actions(1249);
	v->a[521][anon_sym_PIPE_PIPE] = actions(1249);
	v->a[521][anon_sym_LT] = actions(1254);
	v->a[521][anon_sym_GT] = actions(1254);
	v->a[521][anon_sym_GT_GT] = actions(1254);
	v->a[521][anon_sym_LT_LT] = actions(1249);
	v->a[521][aux_sym_heredoc_redirect_token1] = actions(1249);
	v->a[521][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(1247);
	v->a[521][anon_sym_DOLLAR] = actions(1247);
	v->a[521][anon_sym_DQUOTE] = actions(1247);
	v->a[521][sym_raw_string] = actions(1247);
	v->a[521][sym_number] = actions(1247);
	v->a[521][anon_sym_DOLLAR_LBRACE] = actions(1247);
	v->a[521][anon_sym_DOLLAR_LPAREN] = actions(1247);
	v->a[521][anon_sym_BQUOTE] = actions(1247);
	v->a[521][sym_comment] = actions(3);
	v->a[521][anon_sym_SEMI] = actions(1249);
	v->a[521][sym_variable_name] = actions(1257);
	return (parse_table_824(v));
}

void	parse_table_824(t_parse_table_array *v)
{
	v->a[522][sym__case_item_last] = state(1749);
	v->a[522][sym_case_item] = state(1232);
	v->a[522][sym_arithmetic_expansion] = state(1468);
	v->a[522][sym_concatenation] = state(1538);
	v->a[522][sym_string] = state(1468);
	v->a[522][sym_simple_expansion] = state(1468);
	v->a[522][sym_expansion] = state(1468);
	v->a[522][sym_command_substitution] = state(1468);
	v->a[522][sym__extglob_blob] = state(1538);
	v->a[522][aux_sym_case_statement_repeat1] = state(597);
	v->a[522][sym_word] = actions(774);
	v->a[522][anon_sym_LPAREN] = actions(778);
	v->a[522][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(782);
	v->a[522][anon_sym_DOLLAR] = actions(784);
	v->a[522][anon_sym_DQUOTE] = actions(786);
	v->a[522][sym_raw_string] = actions(774);
	v->a[522][sym_number] = actions(774);
	v->a[522][anon_sym_DOLLAR_LBRACE] = actions(788);
	v->a[522][anon_sym_DOLLAR_LPAREN] = actions(790);
	v->a[522][anon_sym_BQUOTE] = actions(792);
	return (parse_table_825(v));
}

/* EOF parse_table_164.c */
