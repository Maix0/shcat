/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1144.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5720(t_small_parse_table_array *v)
{
	v->a[114400] = 1;
	v->a[114401] = anon_sym_DOLLAR_LPAREN;
	v->a[114402] = actions(1163);
	v->a[114403] = 1;
	v->a[114404] = anon_sym_DOLLAR_BQUOTE;
	v->a[114405] = actions(1169);
	v->a[114406] = 1;
	v->a[114407] = sym__brace_start;
	v->a[114408] = actions(1171);
	v->a[114409] = 1;
	v->a[114410] = sym_word;
	v->a[114411] = actions(1173);
	v->a[114412] = 1;
	v->a[114413] = anon_sym_BANG;
	v->a[114414] = actions(1179);
	v->a[114415] = 1;
	v->a[114416] = anon_sym_TILDE;
	v->a[114417] = actions(1181);
	v->a[114418] = 1;
	v->a[114419] = sym__special_character;
	small_parse_table_5721(v);
}

void	small_parse_table_5721(t_small_parse_table_array *v)
{
	v->a[114420] = actions(1185);
	v->a[114421] = 1;
	v->a[114422] = sym_test_operator;
	v->a[114423] = actions(3060);
	v->a[114424] = 1;
	v->a[114425] = anon_sym_BQUOTE;
	v->a[114426] = state(2484);
	v->a[114427] = 1;
	v->a[114428] = aux_sym__literal_repeat1;
	v->a[114429] = state(3060);
	v->a[114430] = 1;
	v->a[114431] = sym__expression;
	v->a[114432] = actions(1129);
	v->a[114433] = 2;
	v->a[114434] = anon_sym_LPAREN_LPAREN;
	v->a[114435] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[114436] = actions(1165);
	v->a[114437] = 2;
	v->a[114438] = anon_sym_LT_LPAREN;
	v->a[114439] = anon_sym_GT_LPAREN;
	small_parse_table_5722(v);
}

void	small_parse_table_5722(t_small_parse_table_array *v)
{
	v->a[114440] = actions(1175);
	v->a[114441] = 2;
	v->a[114442] = anon_sym_PLUS_PLUS2;
	v->a[114443] = anon_sym_DASH_DASH2;
	v->a[114444] = actions(1177);
	v->a[114445] = 2;
	v->a[114446] = anon_sym_DASH2;
	v->a[114447] = anon_sym_PLUS2;
	v->a[114448] = actions(1183);
	v->a[114449] = 2;
	v->a[114450] = sym_raw_string;
	v->a[114451] = sym_ansi_c_string;
	v->a[114452] = state(2594);
	v->a[114453] = 6;
	v->a[114454] = sym_binary_expression;
	v->a[114455] = sym_ternary_expression;
	v->a[114456] = sym_unary_expression;
	v->a[114457] = sym_postfix_expression;
	v->a[114458] = sym_parenthesized_expression;
	v->a[114459] = sym_concatenation;
	small_parse_table_5723(v);
}

void	small_parse_table_5723(t_small_parse_table_array *v)
{
	v->a[114460] = state(2456);
	v->a[114461] = 9;
	v->a[114462] = sym_arithmetic_expansion;
	v->a[114463] = sym_brace_expression;
	v->a[114464] = sym_string;
	v->a[114465] = sym_translated_string;
	v->a[114466] = sym_number;
	v->a[114467] = sym_simple_expansion;
	v->a[114468] = sym_expansion;
	v->a[114469] = sym_command_substitution;
	v->a[114470] = sym_process_substitution;
	v->a[114471] = 3;
	v->a[114472] = actions(3);
	v->a[114473] = 1;
	v->a[114474] = sym_comment;
	v->a[114475] = actions(1310);
	v->a[114476] = 6;
	v->a[114477] = sym_file_descriptor;
	v->a[114478] = sym__concat;
	v->a[114479] = sym_test_operator;
	small_parse_table_5724(v);
}

void	small_parse_table_5724(t_small_parse_table_array *v)
{
	v->a[114480] = sym__brace_start;
	v->a[114481] = ts_builtin_sym_end;
	v->a[114482] = aux_sym_heredoc_redirect_token1;
	v->a[114483] = actions(1308);
	v->a[114484] = 37;
	v->a[114485] = anon_sym_LPAREN_LPAREN;
	v->a[114486] = anon_sym_SEMI;
	v->a[114487] = anon_sym_PIPE_PIPE;
	v->a[114488] = anon_sym_AMP_AMP;
	v->a[114489] = anon_sym_PIPE;
	v->a[114490] = anon_sym_AMP;
	v->a[114491] = anon_sym_LT;
	v->a[114492] = anon_sym_GT;
	v->a[114493] = anon_sym_LT_LT;
	v->a[114494] = anon_sym_GT_GT;
	v->a[114495] = anon_sym_SEMI_SEMI;
	v->a[114496] = anon_sym_PIPE_AMP;
	v->a[114497] = anon_sym_AMP_GT;
	v->a[114498] = anon_sym_AMP_GT_GT;
	v->a[114499] = anon_sym_LT_AMP;
	small_parse_table_5725(v);
}

/* EOF small_parse_table_1144.c */
