/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_904.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4520(t_small_parse_table_array *v)
{
	v->a[90400] = actions(5779);
	v->a[90401] = 1;
	v->a[90402] = sym__special_character;
	v->a[90403] = state(2717);
	v->a[90404] = 1;
	v->a[90405] = aux_sym__literal_repeat1;
	v->a[90406] = state(3153);
	v->a[90407] = 1;
	v->a[90408] = sym__expression;
	v->a[90409] = state(7318);
	v->a[90410] = 1;
	v->a[90411] = sym__test_command_binary_expression;
	v->a[90412] = actions(1129);
	v->a[90413] = 2;
	v->a[90414] = anon_sym_LPAREN_LPAREN;
	v->a[90415] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[90416] = actions(1165);
	v->a[90417] = 2;
	v->a[90418] = anon_sym_LT_LPAREN;
	v->a[90419] = anon_sym_GT_LPAREN;
	small_parse_table_4521(v);
}

void	small_parse_table_4521(t_small_parse_table_array *v)
{
	v->a[90420] = actions(1191);
	v->a[90421] = 2;
	v->a[90422] = anon_sym_PLUS_PLUS2;
	v->a[90423] = anon_sym_DASH_DASH2;
	v->a[90424] = actions(1193);
	v->a[90425] = 2;
	v->a[90426] = anon_sym_DASH2;
	v->a[90427] = anon_sym_PLUS2;
	v->a[90428] = actions(1199);
	v->a[90429] = 2;
	v->a[90430] = sym_raw_string;
	v->a[90431] = sym_ansi_c_string;
	v->a[90432] = state(2594);
	v->a[90433] = 6;
	v->a[90434] = sym_binary_expression;
	v->a[90435] = sym_ternary_expression;
	v->a[90436] = sym_unary_expression;
	v->a[90437] = sym_postfix_expression;
	v->a[90438] = sym_parenthesized_expression;
	v->a[90439] = sym_concatenation;
	small_parse_table_4522(v);
}

void	small_parse_table_4522(t_small_parse_table_array *v)
{
	v->a[90440] = state(2503);
	v->a[90441] = 9;
	v->a[90442] = sym_arithmetic_expansion;
	v->a[90443] = sym_brace_expression;
	v->a[90444] = sym_string;
	v->a[90445] = sym_translated_string;
	v->a[90446] = sym_number;
	v->a[90447] = sym_simple_expansion;
	v->a[90448] = sym_expansion;
	v->a[90449] = sym_command_substitution;
	v->a[90450] = sym_process_substitution;
	v->a[90451] = 3;
	v->a[90452] = actions(3);
	v->a[90453] = 1;
	v->a[90454] = sym_comment;
	v->a[90455] = actions(1354);
	v->a[90456] = 6;
	v->a[90457] = sym_file_descriptor;
	v->a[90458] = sym__concat;
	v->a[90459] = sym_test_operator;
	small_parse_table_4523(v);
}

void	small_parse_table_4523(t_small_parse_table_array *v)
{
	v->a[90460] = sym__brace_start;
	v->a[90461] = ts_builtin_sym_end;
	v->a[90462] = aux_sym_heredoc_redirect_token1;
	v->a[90463] = actions(1352);
	v->a[90464] = 38;
	v->a[90465] = anon_sym_LPAREN_LPAREN;
	v->a[90466] = anon_sym_SEMI;
	v->a[90467] = anon_sym_PIPE_PIPE;
	v->a[90468] = anon_sym_AMP_AMP;
	v->a[90469] = anon_sym_PIPE;
	v->a[90470] = anon_sym_AMP;
	v->a[90471] = anon_sym_LT;
	v->a[90472] = anon_sym_GT;
	v->a[90473] = anon_sym_LT_LT;
	v->a[90474] = anon_sym_GT_GT;
	v->a[90475] = anon_sym_SEMI_SEMI;
	v->a[90476] = anon_sym_PIPE_AMP;
	v->a[90477] = anon_sym_AMP_GT;
	v->a[90478] = anon_sym_AMP_GT_GT;
	v->a[90479] = anon_sym_LT_AMP;
	small_parse_table_4524(v);
}

void	small_parse_table_4524(t_small_parse_table_array *v)
{
	v->a[90480] = anon_sym_GT_AMP;
	v->a[90481] = anon_sym_GT_PIPE;
	v->a[90482] = anon_sym_LT_AMP_DASH;
	v->a[90483] = anon_sym_GT_AMP_DASH;
	v->a[90484] = anon_sym_LT_LT_DASH;
	v->a[90485] = anon_sym_LT_LT_LT;
	v->a[90486] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[90487] = anon_sym_DOLLAR_LBRACK;
	v->a[90488] = aux_sym_concatenation_token1;
	v->a[90489] = anon_sym_DOLLAR;
	v->a[90490] = sym__special_character;
	v->a[90491] = anon_sym_DQUOTE;
	v->a[90492] = sym_raw_string;
	v->a[90493] = sym_ansi_c_string;
	v->a[90494] = aux_sym_number_token1;
	v->a[90495] = aux_sym_number_token2;
	v->a[90496] = anon_sym_DOLLAR_LBRACE;
	v->a[90497] = anon_sym_DOLLAR_LPAREN;
	v->a[90498] = anon_sym_BQUOTE;
	v->a[90499] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_4525(v);
}

/* EOF small_parse_table_904.c */
