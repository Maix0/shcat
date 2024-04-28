/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_224.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1120(t_small_parse_table_array *v)
{
	v->a[22400] = actions(1181);
	v->a[22401] = 1;
	v->a[22402] = sym__special_character;
	v->a[22403] = actions(1185);
	v->a[22404] = 1;
	v->a[22405] = sym_test_operator;
	v->a[22406] = actions(3050);
	v->a[22407] = 1;
	v->a[22408] = anon_sym_LPAREN;
	v->a[22409] = actions(3052);
	v->a[22410] = 1;
	v->a[22411] = anon_sym_BANG;
	v->a[22412] = actions(3058);
	v->a[22413] = 1;
	v->a[22414] = anon_sym_TILDE;
	v->a[22415] = actions(3060);
	v->a[22416] = 1;
	v->a[22417] = anon_sym_BQUOTE;
	v->a[22418] = actions(3064);
	v->a[22419] = 1;
	small_parse_table_1121(v);
}

void	small_parse_table_1121(t_small_parse_table_array *v)
{
	v->a[22420] = sym_variable_name;
	v->a[22421] = actions(4048);
	v->a[22422] = 1;
	v->a[22423] = aux_sym__simple_variable_name_token1;
	v->a[22424] = state(2387);
	v->a[22425] = 1;
	v->a[22426] = sym_command_substitution;
	v->a[22427] = state(2484);
	v->a[22428] = 1;
	v->a[22429] = aux_sym__literal_repeat1;
	v->a[22430] = state(2801);
	v->a[22431] = 1;
	v->a[22432] = sym__arithmetic_binary_expression;
	v->a[22433] = state(2803);
	v->a[22434] = 1;
	v->a[22435] = sym__arithmetic_ternary_expression;
	v->a[22436] = state(2809);
	v->a[22437] = 1;
	v->a[22438] = sym__arithmetic_unary_expression;
	v->a[22439] = state(2825);
	small_parse_table_1122(v);
}

void	small_parse_table_1122(t_small_parse_table_array *v)
{
	v->a[22440] = 1;
	v->a[22441] = sym__arithmetic_postfix_expression;
	v->a[22442] = state(3101);
	v->a[22443] = 1;
	v->a[22444] = sym__expression;
	v->a[22445] = actions(1129);
	v->a[22446] = 2;
	v->a[22447] = anon_sym_LPAREN_LPAREN;
	v->a[22448] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22449] = actions(1165);
	v->a[22450] = 2;
	v->a[22451] = anon_sym_LT_LPAREN;
	v->a[22452] = anon_sym_GT_LPAREN;
	v->a[22453] = actions(1183);
	v->a[22454] = 2;
	v->a[22455] = sym_raw_string;
	v->a[22456] = sym_ansi_c_string;
	v->a[22457] = actions(3054);
	v->a[22458] = 2;
	v->a[22459] = anon_sym_PLUS_PLUS2;
	small_parse_table_1123(v);
}

void	small_parse_table_1123(t_small_parse_table_array *v)
{
	v->a[22460] = anon_sym_DASH_DASH2;
	v->a[22461] = actions(3056);
	v->a[22462] = 2;
	v->a[22463] = anon_sym_DASH2;
	v->a[22464] = anon_sym_PLUS2;
	v->a[22465] = state(2397);
	v->a[22466] = 4;
	v->a[22467] = sym_string;
	v->a[22468] = sym_number;
	v->a[22469] = sym_simple_expansion;
	v->a[22470] = sym_expansion;
	v->a[22471] = state(2456);
	v->a[22472] = 4;
	v->a[22473] = sym_arithmetic_expansion;
	v->a[22474] = sym_brace_expression;
	v->a[22475] = sym_translated_string;
	v->a[22476] = sym_process_substitution;
	v->a[22477] = state(2848);
	v->a[22478] = 4;
	v->a[22479] = sym_subscript;
	small_parse_table_1124(v);
}

void	small_parse_table_1124(t_small_parse_table_array *v)
{
	v->a[22480] = sym__arithmetic_expression;
	v->a[22481] = sym__arithmetic_literal;
	v->a[22482] = sym__arithmetic_parenthesized_expression;
	v->a[22483] = state(2594);
	v->a[22484] = 6;
	v->a[22485] = sym_binary_expression;
	v->a[22486] = sym_ternary_expression;
	v->a[22487] = sym_unary_expression;
	v->a[22488] = sym_postfix_expression;
	v->a[22489] = sym_parenthesized_expression;
	v->a[22490] = sym_concatenation;
	v->a[22491] = 21;
	v->a[22492] = actions(3);
	v->a[22493] = 1;
	v->a[22494] = sym_comment;
	v->a[22495] = actions(3785);
	v->a[22496] = 1;
	v->a[22497] = anon_sym_DOLLAR_LBRACK;
	v->a[22498] = actions(3787);
	v->a[22499] = 1;
	small_parse_table_1125(v);
}

/* EOF small_parse_table_224.c */
