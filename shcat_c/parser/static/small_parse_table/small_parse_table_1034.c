/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1034.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5170(t_small_parse_table_array *v)
{
	v->a[103400] = sym_concatenation;
	v->a[103401] = state(2456);
	v->a[103402] = 9;
	v->a[103403] = sym_arithmetic_expansion;
	v->a[103404] = sym_brace_expression;
	v->a[103405] = sym_string;
	v->a[103406] = sym_translated_string;
	v->a[103407] = sym_number;
	v->a[103408] = sym_simple_expansion;
	v->a[103409] = sym_expansion;
	v->a[103410] = sym_command_substitution;
	v->a[103411] = sym_process_substitution;
	v->a[103412] = 26;
	v->a[103413] = actions(71);
	v->a[103414] = 1;
	v->a[103415] = sym_comment;
	v->a[103416] = actions(1127);
	v->a[103417] = 1;
	v->a[103418] = sym_word;
	v->a[103419] = actions(1131);
	small_parse_table_5171(v);
}

void	small_parse_table_5171(t_small_parse_table_array *v)
{
	v->a[103420] = 1;
	v->a[103421] = anon_sym_LPAREN;
	v->a[103422] = actions(1133);
	v->a[103423] = 1;
	v->a[103424] = anon_sym_BANG;
	v->a[103425] = actions(1139);
	v->a[103426] = 1;
	v->a[103427] = anon_sym_TILDE;
	v->a[103428] = actions(1141);
	v->a[103429] = 1;
	v->a[103430] = anon_sym_DOLLAR_LBRACK;
	v->a[103431] = actions(1145);
	v->a[103432] = 1;
	v->a[103433] = anon_sym_DOLLAR;
	v->a[103434] = actions(1147);
	v->a[103435] = 1;
	v->a[103436] = sym__special_character;
	v->a[103437] = actions(1149);
	v->a[103438] = 1;
	v->a[103439] = anon_sym_DQUOTE;
	small_parse_table_5172(v);
}

void	small_parse_table_5172(t_small_parse_table_array *v)
{
	v->a[103440] = actions(1153);
	v->a[103441] = 1;
	v->a[103442] = aux_sym_number_token1;
	v->a[103443] = actions(1155);
	v->a[103444] = 1;
	v->a[103445] = aux_sym_number_token2;
	v->a[103446] = actions(1157);
	v->a[103447] = 1;
	v->a[103448] = anon_sym_DOLLAR_LBRACE;
	v->a[103449] = actions(1159);
	v->a[103450] = 1;
	v->a[103451] = anon_sym_DOLLAR_LPAREN;
	v->a[103452] = actions(1163);
	v->a[103453] = 1;
	v->a[103454] = anon_sym_DOLLAR_BQUOTE;
	v->a[103455] = actions(1167);
	v->a[103456] = 1;
	v->a[103457] = sym_test_operator;
	v->a[103458] = actions(1169);
	v->a[103459] = 1;
	small_parse_table_5173(v);
}

void	small_parse_table_5173(t_small_parse_table_array *v)
{
	v->a[103460] = sym__brace_start;
	v->a[103461] = actions(3060);
	v->a[103462] = 1;
	v->a[103463] = anon_sym_BQUOTE;
	v->a[103464] = state(2484);
	v->a[103465] = 1;
	v->a[103466] = aux_sym__literal_repeat1;
	v->a[103467] = state(3102);
	v->a[103468] = 1;
	v->a[103469] = sym__expression;
	v->a[103470] = actions(1129);
	v->a[103471] = 2;
	v->a[103472] = anon_sym_LPAREN_LPAREN;
	v->a[103473] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[103474] = actions(1135);
	v->a[103475] = 2;
	v->a[103476] = anon_sym_PLUS_PLUS2;
	v->a[103477] = anon_sym_DASH_DASH2;
	v->a[103478] = actions(1137);
	v->a[103479] = 2;
	small_parse_table_5174(v);
}

void	small_parse_table_5174(t_small_parse_table_array *v)
{
	v->a[103480] = anon_sym_DASH2;
	v->a[103481] = anon_sym_PLUS2;
	v->a[103482] = actions(1151);
	v->a[103483] = 2;
	v->a[103484] = sym_raw_string;
	v->a[103485] = sym_ansi_c_string;
	v->a[103486] = actions(1165);
	v->a[103487] = 2;
	v->a[103488] = anon_sym_LT_LPAREN;
	v->a[103489] = anon_sym_GT_LPAREN;
	v->a[103490] = state(2594);
	v->a[103491] = 6;
	v->a[103492] = sym_binary_expression;
	v->a[103493] = sym_ternary_expression;
	v->a[103494] = sym_unary_expression;
	v->a[103495] = sym_postfix_expression;
	v->a[103496] = sym_parenthesized_expression;
	v->a[103497] = sym_concatenation;
	v->a[103498] = state(2573);
	v->a[103499] = 9;
	small_parse_table_5175(v);
}

/* EOF small_parse_table_1034.c */
