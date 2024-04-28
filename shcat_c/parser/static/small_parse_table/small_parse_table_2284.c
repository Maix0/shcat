/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2284.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11420(t_small_parse_table_array *v)
{
	v->a[228400] = actions(9286);
	v->a[228401] = 1;
	v->a[228402] = anon_sym_TILDE;
	v->a[228403] = actions(9288);
	v->a[228404] = 1;
	v->a[228405] = anon_sym_DOLLAR;
	v->a[228406] = actions(9290);
	v->a[228407] = 1;
	v->a[228408] = anon_sym_DQUOTE;
	v->a[228409] = actions(9292);
	v->a[228410] = 1;
	v->a[228411] = aux_sym_number_token1;
	v->a[228412] = actions(9294);
	v->a[228413] = 1;
	v->a[228414] = aux_sym_number_token2;
	v->a[228415] = actions(9296);
	v->a[228416] = 1;
	v->a[228417] = anon_sym_DOLLAR_LBRACE;
	v->a[228418] = actions(9298);
	v->a[228419] = 1;
	small_parse_table_11421(v);
}

void	small_parse_table_11421(t_small_parse_table_array *v)
{
	v->a[228420] = anon_sym_DOLLAR_LPAREN;
	v->a[228421] = actions(9300);
	v->a[228422] = 1;
	v->a[228423] = anon_sym_BQUOTE;
	v->a[228424] = actions(9302);
	v->a[228425] = 1;
	v->a[228426] = anon_sym_DOLLAR_BQUOTE;
	v->a[228427] = actions(10840);
	v->a[228428] = 1;
	v->a[228429] = aux_sym__simple_variable_name_token1;
	v->a[228430] = state(2801);
	v->a[228431] = 1;
	v->a[228432] = sym__arithmetic_binary_expression;
	v->a[228433] = state(2803);
	v->a[228434] = 1;
	v->a[228435] = sym__arithmetic_ternary_expression;
	v->a[228436] = state(2809);
	v->a[228437] = 1;
	v->a[228438] = sym__arithmetic_unary_expression;
	v->a[228439] = state(2825);
	small_parse_table_11422(v);
}

void	small_parse_table_11422(t_small_parse_table_array *v)
{
	v->a[228440] = 1;
	v->a[228441] = sym__arithmetic_postfix_expression;
	v->a[228442] = actions(9282);
	v->a[228443] = 2;
	v->a[228444] = anon_sym_PLUS_PLUS2;
	v->a[228445] = anon_sym_DASH_DASH2;
	v->a[228446] = actions(9284);
	v->a[228447] = 2;
	v->a[228448] = anon_sym_DASH2;
	v->a[228449] = anon_sym_PLUS2;
	v->a[228450] = state(2858);
	v->a[228451] = 9;
	v->a[228452] = sym_subscript;
	v->a[228453] = sym__arithmetic_expression;
	v->a[228454] = sym__arithmetic_literal;
	v->a[228455] = sym__arithmetic_parenthesized_expression;
	v->a[228456] = sym_string;
	v->a[228457] = sym_number;
	v->a[228458] = sym_simple_expansion;
	v->a[228459] = sym_expansion;
	small_parse_table_11423(v);
}

void	small_parse_table_11423(t_small_parse_table_array *v)
{
	v->a[228460] = sym_command_substitution;
	v->a[228461] = 21;
	v->a[228462] = actions(71);
	v->a[228463] = 1;
	v->a[228464] = sym_comment;
	v->a[228465] = actions(9364);
	v->a[228466] = 1;
	v->a[228467] = anon_sym_LPAREN;
	v->a[228468] = actions(9366);
	v->a[228469] = 1;
	v->a[228470] = anon_sym_BANG;
	v->a[228471] = actions(9372);
	v->a[228472] = 1;
	v->a[228473] = anon_sym_TILDE;
	v->a[228474] = actions(9374);
	v->a[228475] = 1;
	v->a[228476] = anon_sym_DOLLAR;
	v->a[228477] = actions(9376);
	v->a[228478] = 1;
	v->a[228479] = anon_sym_DQUOTE;
	small_parse_table_11424(v);
}

void	small_parse_table_11424(t_small_parse_table_array *v)
{
	v->a[228480] = actions(9378);
	v->a[228481] = 1;
	v->a[228482] = aux_sym_number_token1;
	v->a[228483] = actions(9380);
	v->a[228484] = 1;
	v->a[228485] = aux_sym_number_token2;
	v->a[228486] = actions(9382);
	v->a[228487] = 1;
	v->a[228488] = anon_sym_DOLLAR_LBRACE;
	v->a[228489] = actions(9384);
	v->a[228490] = 1;
	v->a[228491] = anon_sym_DOLLAR_LPAREN;
	v->a[228492] = actions(9386);
	v->a[228493] = 1;
	v->a[228494] = anon_sym_BQUOTE;
	v->a[228495] = actions(9388);
	v->a[228496] = 1;
	v->a[228497] = anon_sym_DOLLAR_BQUOTE;
	v->a[228498] = actions(9392);
	v->a[228499] = 1;
	small_parse_table_11425(v);
}

/* EOF small_parse_table_2284.c */
