/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1024.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5120(t_small_parse_table_array *v)
{
	v->a[102400] = anon_sym_DOLLAR_LBRACK;
	v->a[102401] = actions(1145);
	v->a[102402] = 1;
	v->a[102403] = anon_sym_DOLLAR;
	v->a[102404] = actions(1149);
	v->a[102405] = 1;
	v->a[102406] = anon_sym_DQUOTE;
	v->a[102407] = actions(1153);
	v->a[102408] = 1;
	v->a[102409] = aux_sym_number_token1;
	v->a[102410] = actions(1155);
	v->a[102411] = 1;
	v->a[102412] = aux_sym_number_token2;
	v->a[102413] = actions(1157);
	v->a[102414] = 1;
	v->a[102415] = anon_sym_DOLLAR_LBRACE;
	v->a[102416] = actions(1159);
	v->a[102417] = 1;
	v->a[102418] = anon_sym_DOLLAR_LPAREN;
	v->a[102419] = actions(1163);
	small_parse_table_5121(v);
}

void	small_parse_table_5121(t_small_parse_table_array *v)
{
	v->a[102420] = 1;
	v->a[102421] = anon_sym_DOLLAR_BQUOTE;
	v->a[102422] = actions(1169);
	v->a[102423] = 1;
	v->a[102424] = sym__brace_start;
	v->a[102425] = actions(1171);
	v->a[102426] = 1;
	v->a[102427] = sym_word;
	v->a[102428] = actions(1173);
	v->a[102429] = 1;
	v->a[102430] = anon_sym_BANG;
	v->a[102431] = actions(1179);
	v->a[102432] = 1;
	v->a[102433] = anon_sym_TILDE;
	v->a[102434] = actions(1181);
	v->a[102435] = 1;
	v->a[102436] = sym__special_character;
	v->a[102437] = actions(1185);
	v->a[102438] = 1;
	v->a[102439] = sym_test_operator;
	small_parse_table_5122(v);
}

void	small_parse_table_5122(t_small_parse_table_array *v)
{
	v->a[102440] = actions(3060);
	v->a[102441] = 1;
	v->a[102442] = anon_sym_BQUOTE;
	v->a[102443] = state(2484);
	v->a[102444] = 1;
	v->a[102445] = aux_sym__literal_repeat1;
	v->a[102446] = state(2987);
	v->a[102447] = 1;
	v->a[102448] = sym__expression;
	v->a[102449] = actions(1129);
	v->a[102450] = 2;
	v->a[102451] = anon_sym_LPAREN_LPAREN;
	v->a[102452] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[102453] = actions(1165);
	v->a[102454] = 2;
	v->a[102455] = anon_sym_LT_LPAREN;
	v->a[102456] = anon_sym_GT_LPAREN;
	v->a[102457] = actions(1175);
	v->a[102458] = 2;
	v->a[102459] = anon_sym_PLUS_PLUS2;
	small_parse_table_5123(v);
}

void	small_parse_table_5123(t_small_parse_table_array *v)
{
	v->a[102460] = anon_sym_DASH_DASH2;
	v->a[102461] = actions(1177);
	v->a[102462] = 2;
	v->a[102463] = anon_sym_DASH2;
	v->a[102464] = anon_sym_PLUS2;
	v->a[102465] = actions(1183);
	v->a[102466] = 2;
	v->a[102467] = sym_raw_string;
	v->a[102468] = sym_ansi_c_string;
	v->a[102469] = state(2594);
	v->a[102470] = 6;
	v->a[102471] = sym_binary_expression;
	v->a[102472] = sym_ternary_expression;
	v->a[102473] = sym_unary_expression;
	v->a[102474] = sym_postfix_expression;
	v->a[102475] = sym_parenthesized_expression;
	v->a[102476] = sym_concatenation;
	v->a[102477] = state(2456);
	v->a[102478] = 9;
	v->a[102479] = sym_arithmetic_expansion;
	small_parse_table_5124(v);
}

void	small_parse_table_5124(t_small_parse_table_array *v)
{
	v->a[102480] = sym_brace_expression;
	v->a[102481] = sym_string;
	v->a[102482] = sym_translated_string;
	v->a[102483] = sym_number;
	v->a[102484] = sym_simple_expansion;
	v->a[102485] = sym_expansion;
	v->a[102486] = sym_command_substitution;
	v->a[102487] = sym_process_substitution;
	v->a[102488] = 26;
	v->a[102489] = actions(71);
	v->a[102490] = 1;
	v->a[102491] = sym_comment;
	v->a[102492] = actions(1131);
	v->a[102493] = 1;
	v->a[102494] = anon_sym_LPAREN;
	v->a[102495] = actions(1141);
	v->a[102496] = 1;
	v->a[102497] = anon_sym_DOLLAR_LBRACK;
	v->a[102498] = actions(1145);
	v->a[102499] = 1;
	small_parse_table_5125(v);
}

/* EOF small_parse_table_1024.c */
