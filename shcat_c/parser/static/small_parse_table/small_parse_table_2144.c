/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2144.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10720(t_small_parse_table_array *v)
{
	v->a[214400] = sym_variable_name;
	v->a[214401] = actions(10216);
	v->a[214402] = 1;
	v->a[214403] = aux_sym__simple_variable_name_token1;
	v->a[214404] = state(3391);
	v->a[214405] = 1;
	v->a[214406] = sym__arithmetic_binary_expression;
	v->a[214407] = state(3396);
	v->a[214408] = 1;
	v->a[214409] = sym__arithmetic_ternary_expression;
	v->a[214410] = state(3398);
	v->a[214411] = 1;
	v->a[214412] = sym__arithmetic_unary_expression;
	v->a[214413] = state(3400);
	v->a[214414] = 1;
	v->a[214415] = sym__arithmetic_postfix_expression;
	v->a[214416] = actions(9368);
	v->a[214417] = 2;
	v->a[214418] = anon_sym_PLUS_PLUS2;
	v->a[214419] = anon_sym_DASH_DASH2;
	small_parse_table_10721(v);
}

void	small_parse_table_10721(t_small_parse_table_array *v)
{
	v->a[214420] = actions(9370);
	v->a[214421] = 2;
	v->a[214422] = anon_sym_DASH2;
	v->a[214423] = anon_sym_PLUS2;
	v->a[214424] = state(3329);
	v->a[214425] = 9;
	v->a[214426] = sym_subscript;
	v->a[214427] = sym__arithmetic_expression;
	v->a[214428] = sym__arithmetic_literal;
	v->a[214429] = sym__arithmetic_parenthesized_expression;
	v->a[214430] = sym_string;
	v->a[214431] = sym_number;
	v->a[214432] = sym_simple_expansion;
	v->a[214433] = sym_expansion;
	v->a[214434] = sym_command_substitution;
	v->a[214435] = 21;
	v->a[214436] = actions(71);
	v->a[214437] = 1;
	v->a[214438] = sym_comment;
	v->a[214439] = actions(3064);
	small_parse_table_10722(v);
}

void	small_parse_table_10722(t_small_parse_table_array *v)
{
	v->a[214440] = 1;
	v->a[214441] = sym_variable_name;
	v->a[214442] = actions(9278);
	v->a[214443] = 1;
	v->a[214444] = anon_sym_LPAREN;
	v->a[214445] = actions(9280);
	v->a[214446] = 1;
	v->a[214447] = anon_sym_BANG;
	v->a[214448] = actions(9286);
	v->a[214449] = 1;
	v->a[214450] = anon_sym_TILDE;
	v->a[214451] = actions(9288);
	v->a[214452] = 1;
	v->a[214453] = anon_sym_DOLLAR;
	v->a[214454] = actions(9290);
	v->a[214455] = 1;
	v->a[214456] = anon_sym_DQUOTE;
	v->a[214457] = actions(9292);
	v->a[214458] = 1;
	v->a[214459] = aux_sym_number_token1;
	small_parse_table_10723(v);
}

void	small_parse_table_10723(t_small_parse_table_array *v)
{
	v->a[214460] = actions(9294);
	v->a[214461] = 1;
	v->a[214462] = aux_sym_number_token2;
	v->a[214463] = actions(9296);
	v->a[214464] = 1;
	v->a[214465] = anon_sym_DOLLAR_LBRACE;
	v->a[214466] = actions(9298);
	v->a[214467] = 1;
	v->a[214468] = anon_sym_DOLLAR_LPAREN;
	v->a[214469] = actions(9300);
	v->a[214470] = 1;
	v->a[214471] = anon_sym_BQUOTE;
	v->a[214472] = actions(9302);
	v->a[214473] = 1;
	v->a[214474] = anon_sym_DOLLAR_BQUOTE;
	v->a[214475] = actions(10218);
	v->a[214476] = 1;
	v->a[214477] = aux_sym__simple_variable_name_token1;
	v->a[214478] = state(2801);
	v->a[214479] = 1;
	small_parse_table_10724(v);
}

void	small_parse_table_10724(t_small_parse_table_array *v)
{
	v->a[214480] = sym__arithmetic_binary_expression;
	v->a[214481] = state(2803);
	v->a[214482] = 1;
	v->a[214483] = sym__arithmetic_ternary_expression;
	v->a[214484] = state(2809);
	v->a[214485] = 1;
	v->a[214486] = sym__arithmetic_unary_expression;
	v->a[214487] = state(2825);
	v->a[214488] = 1;
	v->a[214489] = sym__arithmetic_postfix_expression;
	v->a[214490] = actions(9282);
	v->a[214491] = 2;
	v->a[214492] = anon_sym_PLUS_PLUS2;
	v->a[214493] = anon_sym_DASH_DASH2;
	v->a[214494] = actions(9284);
	v->a[214495] = 2;
	v->a[214496] = anon_sym_DASH2;
	v->a[214497] = anon_sym_PLUS2;
	v->a[214498] = state(2757);
	v->a[214499] = 9;
	small_parse_table_10725(v);
}

/* EOF small_parse_table_2144.c */
