/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2134.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10670(t_small_parse_table_array *v)
{
	v->a[213400] = actions(9310);
	v->a[213401] = 1;
	v->a[213402] = anon_sym_DOLLAR_LBRACK;
	v->a[213403] = actions(9316);
	v->a[213404] = 1;
	v->a[213405] = anon_sym_DQUOTE;
	v->a[213406] = actions(9320);
	v->a[213407] = 1;
	v->a[213408] = anon_sym_DOLLAR_LBRACE;
	v->a[213409] = actions(9322);
	v->a[213410] = 1;
	v->a[213411] = anon_sym_BQUOTE;
	v->a[213412] = actions(9324);
	v->a[213413] = 1;
	v->a[213414] = anon_sym_DOLLAR_BQUOTE;
	v->a[213415] = actions(9328);
	v->a[213416] = 1;
	v->a[213417] = sym__comment_word;
	v->a[213418] = actions(10166);
	v->a[213419] = 1;
	small_parse_table_10671(v);
}

void	small_parse_table_10671(t_small_parse_table_array *v)
{
	v->a[213420] = anon_sym_DOLLAR;
	v->a[213421] = actions(9308);
	v->a[213422] = 2;
	v->a[213423] = anon_sym_LPAREN_LPAREN;
	v->a[213424] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[213425] = actions(9314);
	v->a[213426] = 2;
	v->a[213427] = sym_test_operator;
	v->a[213428] = sym__special_character;
	v->a[213429] = actions(9326);
	v->a[213430] = 2;
	v->a[213431] = anon_sym_LT_LPAREN;
	v->a[213432] = anon_sym_GT_LPAREN;
	v->a[213433] = actions(9318);
	v->a[213434] = 3;
	v->a[213435] = sym__bare_dollar;
	v->a[213436] = sym_raw_string;
	v->a[213437] = sym_ansi_c_string;
	v->a[213438] = state(4566);
	v->a[213439] = 9;
	small_parse_table_10672(v);
}

void	small_parse_table_10672(t_small_parse_table_array *v)
{
	v->a[213440] = sym_arithmetic_expansion;
	v->a[213441] = sym_brace_expression;
	v->a[213442] = sym_string;
	v->a[213443] = sym_translated_string;
	v->a[213444] = sym_number;
	v->a[213445] = sym_simple_expansion;
	v->a[213446] = sym_expansion;
	v->a[213447] = sym_command_substitution;
	v->a[213448] = sym_process_substitution;
	v->a[213449] = 21;
	v->a[213450] = actions(71);
	v->a[213451] = 1;
	v->a[213452] = sym_comment;
	v->a[213453] = actions(3064);
	v->a[213454] = 1;
	v->a[213455] = sym_variable_name;
	v->a[213456] = actions(9278);
	v->a[213457] = 1;
	v->a[213458] = anon_sym_LPAREN;
	v->a[213459] = actions(9280);
	small_parse_table_10673(v);
}

void	small_parse_table_10673(t_small_parse_table_array *v)
{
	v->a[213460] = 1;
	v->a[213461] = anon_sym_BANG;
	v->a[213462] = actions(9286);
	v->a[213463] = 1;
	v->a[213464] = anon_sym_TILDE;
	v->a[213465] = actions(9288);
	v->a[213466] = 1;
	v->a[213467] = anon_sym_DOLLAR;
	v->a[213468] = actions(9290);
	v->a[213469] = 1;
	v->a[213470] = anon_sym_DQUOTE;
	v->a[213471] = actions(9292);
	v->a[213472] = 1;
	v->a[213473] = aux_sym_number_token1;
	v->a[213474] = actions(9294);
	v->a[213475] = 1;
	v->a[213476] = aux_sym_number_token2;
	v->a[213477] = actions(9296);
	v->a[213478] = 1;
	v->a[213479] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_10674(v);
}

void	small_parse_table_10674(t_small_parse_table_array *v)
{
	v->a[213480] = actions(9298);
	v->a[213481] = 1;
	v->a[213482] = anon_sym_DOLLAR_LPAREN;
	v->a[213483] = actions(9300);
	v->a[213484] = 1;
	v->a[213485] = anon_sym_BQUOTE;
	v->a[213486] = actions(9302);
	v->a[213487] = 1;
	v->a[213488] = anon_sym_DOLLAR_BQUOTE;
	v->a[213489] = actions(10168);
	v->a[213490] = 1;
	v->a[213491] = aux_sym__simple_variable_name_token1;
	v->a[213492] = state(2801);
	v->a[213493] = 1;
	v->a[213494] = sym__arithmetic_binary_expression;
	v->a[213495] = state(2803);
	v->a[213496] = 1;
	v->a[213497] = sym__arithmetic_ternary_expression;
	v->a[213498] = state(2809);
	v->a[213499] = 1;
	small_parse_table_10675(v);
}

/* EOF small_parse_table_2134.c */
