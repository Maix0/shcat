/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_251.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_1255(t_parse_table_array *v)
{
	v->a[1004][anon_sym_LT] = actions(2101);
	v->a[1004][anon_sym_GT] = actions(2101);
	v->a[1004][anon_sym_GT_GT] = actions(2101);
	v->a[1004][anon_sym_LT_LT] = actions(2080);
	v->a[1004][aux_sym_heredoc_redirect_token1] = actions(2078);
	v->a[1004][anon_sym_BQUOTE] = actions(2080);
	v->a[1004][sym_comment] = actions(3);
	v->a[1004][anon_sym_SEMI] = actions(2080);
	v->a[1005][sym_word] = actions(919);
	v->a[1005][anon_sym_LT] = actions(919);
	v->a[1005][anon_sym_GT] = actions(919);
	v->a[1005][anon_sym_GT_GT] = actions(919);
	v->a[1005][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(919);
	v->a[1005][anon_sym_DOLLAR] = actions(919);
	v->a[1005][anon_sym_DQUOTE] = actions(919);
	v->a[1005][sym_raw_string] = actions(919);
	v->a[1005][sym_number] = actions(919);
	v->a[1005][anon_sym_DOLLAR_LBRACE] = actions(919);
	v->a[1005][anon_sym_DOLLAR_LPAREN] = actions(919);
	v->a[1005][anon_sym_BQUOTE] = actions(919);
	return (parse_table_1256(v));
}

void	parse_table_1256(t_parse_table_array *v)
{
	v->a[1005][sym_comment] = actions(3);
	v->a[1005][sym_variable_name] = actions(917);
	v->a[1006][sym_file_redirect] = state(1004);
	v->a[1006][aux_sym_redirected_statement_repeat2] = state(1004);
	v->a[1006][anon_sym_PIPE] = actions(2063);
	v->a[1006][anon_sym_SEMI_SEMI] = actions(2063);
	v->a[1006][anon_sym_AMP_AMP] = actions(2063);
	v->a[1006][anon_sym_PIPE_PIPE] = actions(2063);
	v->a[1006][anon_sym_LT] = actions(1880);
	v->a[1006][anon_sym_GT] = actions(1880);
	v->a[1006][anon_sym_GT_GT] = actions(1880);
	v->a[1006][anon_sym_LT_LT] = actions(2063);
	v->a[1006][aux_sym_heredoc_redirect_token1] = actions(2065);
	v->a[1006][anon_sym_BQUOTE] = actions(2063);
	v->a[1006][sym_comment] = actions(3);
	v->a[1006][anon_sym_SEMI] = actions(2063);
	v->a[1007][ts_builtin_sym_end] = actions(2104);
	v->a[1007][anon_sym_PIPE] = actions(2106);
	v->a[1007][anon_sym_RPAREN] = actions(2106);
	v->a[1007][anon_sym_SEMI_SEMI] = actions(2106);
	return (parse_table_1257(v));
}

void	parse_table_1257(t_parse_table_array *v)
{
	v->a[1007][anon_sym_AMP_AMP] = actions(2106);
	v->a[1007][anon_sym_PIPE_PIPE] = actions(2106);
	v->a[1007][anon_sym_LT] = actions(2106);
	v->a[1007][anon_sym_GT] = actions(2106);
	v->a[1007][anon_sym_GT_GT] = actions(2106);
	v->a[1007][anon_sym_LT_LT] = actions(2106);
	v->a[1007][aux_sym_heredoc_redirect_token1] = actions(2104);
	v->a[1007][anon_sym_BQUOTE] = actions(2106);
	v->a[1007][sym_comment] = actions(3);
	v->a[1007][anon_sym_SEMI] = actions(2106);
	v->a[1008][ts_builtin_sym_end] = actions(2093);
	v->a[1008][anon_sym_PIPE] = actions(2091);
	v->a[1008][anon_sym_RPAREN] = actions(2091);
	v->a[1008][anon_sym_SEMI_SEMI] = actions(2091);
	v->a[1008][anon_sym_AMP_AMP] = actions(2091);
	v->a[1008][anon_sym_PIPE_PIPE] = actions(2091);
	v->a[1008][anon_sym_LT] = actions(2091);
	v->a[1008][anon_sym_GT] = actions(2091);
	v->a[1008][anon_sym_GT_GT] = actions(2091);
	v->a[1008][anon_sym_LT_LT] = actions(2091);
	return (parse_table_1258(v));
}

void	parse_table_1258(t_parse_table_array *v)
{
	v->a[1008][aux_sym_heredoc_redirect_token1] = actions(2093);
	v->a[1008][anon_sym_BQUOTE] = actions(2091);
	v->a[1008][sym_comment] = actions(3);
	v->a[1008][anon_sym_SEMI] = actions(2091);
	v->a[1009][ts_builtin_sym_end] = actions(2104);
	v->a[1009][anon_sym_PIPE] = actions(2106);
	v->a[1009][anon_sym_RPAREN] = actions(2106);
	v->a[1009][anon_sym_SEMI_SEMI] = actions(2106);
	v->a[1009][anon_sym_AMP_AMP] = actions(2106);
	v->a[1009][anon_sym_PIPE_PIPE] = actions(2106);
	v->a[1009][anon_sym_LT] = actions(2106);
	v->a[1009][anon_sym_GT] = actions(2106);
	v->a[1009][anon_sym_GT_GT] = actions(2106);
	v->a[1009][anon_sym_LT_LT] = actions(2106);
	v->a[1009][aux_sym_heredoc_redirect_token1] = actions(2104);
	v->a[1009][anon_sym_BQUOTE] = actions(2106);
	v->a[1009][sym_comment] = actions(3);
	v->a[1009][anon_sym_SEMI] = actions(2106);
	v->a[1010][sym_file_redirect] = state(996);
	v->a[1010][aux_sym_redirected_statement_repeat2] = state(996);
	return (parse_table_1259(v));
}

void	parse_table_1259(t_parse_table_array *v)
{
	v->a[1010][ts_builtin_sym_end] = actions(2093);
	v->a[1010][anon_sym_PIPE] = actions(2091);
	v->a[1010][anon_sym_SEMI_SEMI] = actions(2091);
	v->a[1010][anon_sym_AMP_AMP] = actions(2091);
	v->a[1010][anon_sym_PIPE_PIPE] = actions(2091);
	v->a[1010][anon_sym_LT] = actions(1872);
	v->a[1010][anon_sym_GT] = actions(1872);
	v->a[1010][anon_sym_GT_GT] = actions(1872);
	v->a[1010][anon_sym_LT_LT] = actions(2091);
	v->a[1010][aux_sym_heredoc_redirect_token1] = actions(2093);
	v->a[1010][sym_comment] = actions(3);
	v->a[1010][anon_sym_SEMI] = actions(2091);
	v->a[1011][aux_sym_concatenation_repeat1] = state(1027);
	v->a[1011][sym_word] = actions(2108);
	v->a[1011][aux_sym_heredoc_redirect_token1] = actions(2108);
	v->a[1011][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(2108);
	v->a[1011][aux_sym_concatenation_token1] = actions(1465);
	v->a[1011][anon_sym_DOLLAR] = actions(2108);
	v->a[1011][anon_sym_DQUOTE] = actions(2108);
	v->a[1011][sym_raw_string] = actions(2108);
	return (parse_table_1260(v));
}

/* EOF parse_table_251.c */
