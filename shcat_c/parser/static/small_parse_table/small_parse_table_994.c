/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_994.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4970(t_small_parse_table_array *v)
{
	v->a[99400] = sym__brace_start;
	v->a[99401] = actions(1211);
	v->a[99402] = 1;
	v->a[99403] = sym_word;
	v->a[99404] = actions(1213);
	v->a[99405] = 1;
	v->a[99406] = anon_sym_BANG;
	v->a[99407] = actions(1219);
	v->a[99408] = 1;
	v->a[99409] = anon_sym_TILDE;
	v->a[99410] = actions(1221);
	v->a[99411] = 1;
	v->a[99412] = sym__special_character;
	v->a[99413] = actions(1225);
	v->a[99414] = 1;
	v->a[99415] = sym_test_operator;
	v->a[99416] = actions(3060);
	v->a[99417] = 1;
	v->a[99418] = anon_sym_BQUOTE;
	v->a[99419] = state(2484);
	small_parse_table_4971(v);
}

void	small_parse_table_4971(t_small_parse_table_array *v)
{
	v->a[99420] = 1;
	v->a[99421] = aux_sym__literal_repeat1;
	v->a[99422] = state(3319);
	v->a[99423] = 1;
	v->a[99424] = sym__expression;
	v->a[99425] = actions(1129);
	v->a[99426] = 2;
	v->a[99427] = anon_sym_LPAREN_LPAREN;
	v->a[99428] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[99429] = actions(1165);
	v->a[99430] = 2;
	v->a[99431] = anon_sym_LT_LPAREN;
	v->a[99432] = anon_sym_GT_LPAREN;
	v->a[99433] = actions(1215);
	v->a[99434] = 2;
	v->a[99435] = anon_sym_PLUS_PLUS2;
	v->a[99436] = anon_sym_DASH_DASH2;
	v->a[99437] = actions(1217);
	v->a[99438] = 2;
	v->a[99439] = anon_sym_DASH2;
	small_parse_table_4972(v);
}

void	small_parse_table_4972(t_small_parse_table_array *v)
{
	v->a[99440] = anon_sym_PLUS2;
	v->a[99441] = actions(1223);
	v->a[99442] = 2;
	v->a[99443] = sym_raw_string;
	v->a[99444] = sym_ansi_c_string;
	v->a[99445] = state(2594);
	v->a[99446] = 6;
	v->a[99447] = sym_binary_expression;
	v->a[99448] = sym_ternary_expression;
	v->a[99449] = sym_unary_expression;
	v->a[99450] = sym_postfix_expression;
	v->a[99451] = sym_parenthesized_expression;
	v->a[99452] = sym_concatenation;
	v->a[99453] = state(2588);
	v->a[99454] = 9;
	v->a[99455] = sym_arithmetic_expansion;
	v->a[99456] = sym_brace_expression;
	v->a[99457] = sym_string;
	v->a[99458] = sym_translated_string;
	v->a[99459] = sym_number;
	small_parse_table_4973(v);
}

void	small_parse_table_4973(t_small_parse_table_array *v)
{
	v->a[99460] = sym_simple_expansion;
	v->a[99461] = sym_expansion;
	v->a[99462] = sym_command_substitution;
	v->a[99463] = sym_process_substitution;
	v->a[99464] = 26;
	v->a[99465] = actions(71);
	v->a[99466] = 1;
	v->a[99467] = sym_comment;
	v->a[99468] = actions(187);
	v->a[99469] = 1;
	v->a[99470] = anon_sym_TILDE;
	v->a[99471] = actions(350);
	v->a[99472] = 1;
	v->a[99473] = sym_word;
	v->a[99474] = actions(359);
	v->a[99475] = 1;
	v->a[99476] = anon_sym_LPAREN;
	v->a[99477] = actions(361);
	v->a[99478] = 1;
	v->a[99479] = anon_sym_BANG;
	small_parse_table_4974(v);
}

void	small_parse_table_4974(t_small_parse_table_array *v)
{
	v->a[99480] = actions(363);
	v->a[99481] = 1;
	v->a[99482] = anon_sym_DOLLAR_LBRACK;
	v->a[99483] = actions(367);
	v->a[99484] = 1;
	v->a[99485] = anon_sym_DOLLAR;
	v->a[99486] = actions(371);
	v->a[99487] = 1;
	v->a[99488] = anon_sym_DQUOTE;
	v->a[99489] = actions(375);
	v->a[99490] = 1;
	v->a[99491] = aux_sym_number_token1;
	v->a[99492] = actions(377);
	v->a[99493] = 1;
	v->a[99494] = aux_sym_number_token2;
	v->a[99495] = actions(379);
	v->a[99496] = 1;
	v->a[99497] = anon_sym_DOLLAR_LBRACE;
	v->a[99498] = actions(381);
	v->a[99499] = 1;
	small_parse_table_4975(v);
}

/* EOF small_parse_table_994.c */
