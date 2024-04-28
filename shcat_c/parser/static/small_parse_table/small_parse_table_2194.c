/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2194.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10970(t_small_parse_table_array *v)
{
	v->a[219400] = 1;
	v->a[219401] = aux_sym__simple_variable_name_token1;
	v->a[219402] = state(2801);
	v->a[219403] = 1;
	v->a[219404] = sym__arithmetic_binary_expression;
	v->a[219405] = state(2803);
	v->a[219406] = 1;
	v->a[219407] = sym__arithmetic_ternary_expression;
	v->a[219408] = state(2809);
	v->a[219409] = 1;
	v->a[219410] = sym__arithmetic_unary_expression;
	v->a[219411] = state(2825);
	v->a[219412] = 1;
	v->a[219413] = sym__arithmetic_postfix_expression;
	v->a[219414] = actions(9282);
	v->a[219415] = 2;
	v->a[219416] = anon_sym_PLUS_PLUS2;
	v->a[219417] = anon_sym_DASH_DASH2;
	v->a[219418] = actions(9284);
	v->a[219419] = 2;
	small_parse_table_10971(v);
}

void	small_parse_table_10971(t_small_parse_table_array *v)
{
	v->a[219420] = anon_sym_DASH2;
	v->a[219421] = anon_sym_PLUS2;
	v->a[219422] = state(2762);
	v->a[219423] = 9;
	v->a[219424] = sym_subscript;
	v->a[219425] = sym__arithmetic_expression;
	v->a[219426] = sym__arithmetic_literal;
	v->a[219427] = sym__arithmetic_parenthesized_expression;
	v->a[219428] = sym_string;
	v->a[219429] = sym_number;
	v->a[219430] = sym_simple_expansion;
	v->a[219431] = sym_expansion;
	v->a[219432] = sym_command_substitution;
	v->a[219433] = 18;
	v->a[219434] = actions(3);
	v->a[219435] = 1;
	v->a[219436] = sym_comment;
	v->a[219437] = actions(314);
	v->a[219438] = 1;
	v->a[219439] = anon_sym_DOLLAR_LBRACK;
	small_parse_table_10972(v);
}

void	small_parse_table_10972(t_small_parse_table_array *v)
{
	v->a[219440] = actions(320);
	v->a[219441] = 1;
	v->a[219442] = anon_sym_DQUOTE;
	v->a[219443] = actions(324);
	v->a[219444] = 1;
	v->a[219445] = aux_sym_number_token1;
	v->a[219446] = actions(326);
	v->a[219447] = 1;
	v->a[219448] = aux_sym_number_token2;
	v->a[219449] = actions(328);
	v->a[219450] = 1;
	v->a[219451] = anon_sym_DOLLAR_LBRACE;
	v->a[219452] = actions(330);
	v->a[219453] = 1;
	v->a[219454] = anon_sym_DOLLAR_LPAREN;
	v->a[219455] = actions(332);
	v->a[219456] = 1;
	v->a[219457] = anon_sym_BQUOTE;
	v->a[219458] = actions(334);
	v->a[219459] = 1;
	small_parse_table_10973(v);
}

void	small_parse_table_10973(t_small_parse_table_array *v)
{
	v->a[219460] = anon_sym_DOLLAR_BQUOTE;
	v->a[219461] = actions(344);
	v->a[219462] = 1;
	v->a[219463] = sym__brace_start;
	v->a[219464] = actions(9400);
	v->a[219465] = 1;
	v->a[219466] = sym_word;
	v->a[219467] = actions(9406);
	v->a[219468] = 1;
	v->a[219469] = sym__comment_word;
	v->a[219470] = actions(10446);
	v->a[219471] = 1;
	v->a[219472] = anon_sym_DOLLAR;
	v->a[219473] = actions(312);
	v->a[219474] = 2;
	v->a[219475] = anon_sym_LPAREN_LPAREN;
	v->a[219476] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[219477] = actions(336);
	v->a[219478] = 2;
	v->a[219479] = anon_sym_LT_LPAREN;
	small_parse_table_10974(v);
}

void	small_parse_table_10974(t_small_parse_table_array *v)
{
	v->a[219480] = anon_sym_GT_LPAREN;
	v->a[219481] = actions(9402);
	v->a[219482] = 2;
	v->a[219483] = sym_test_operator;
	v->a[219484] = sym__special_character;
	v->a[219485] = actions(9404);
	v->a[219486] = 3;
	v->a[219487] = sym__bare_dollar;
	v->a[219488] = sym_raw_string;
	v->a[219489] = sym_ansi_c_string;
	v->a[219490] = state(1037);
	v->a[219491] = 9;
	v->a[219492] = sym_arithmetic_expansion;
	v->a[219493] = sym_brace_expression;
	v->a[219494] = sym_string;
	v->a[219495] = sym_translated_string;
	v->a[219496] = sym_number;
	v->a[219497] = sym_simple_expansion;
	v->a[219498] = sym_expansion;
	v->a[219499] = sym_command_substitution;
	small_parse_table_10975(v);
}

/* EOF small_parse_table_2194.c */
