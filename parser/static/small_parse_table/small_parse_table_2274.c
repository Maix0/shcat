/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2274.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11370(t_small_parse_table_array *v)
{
	v->a[227400] = actions(9386);
	v->a[227401] = 1;
	v->a[227402] = anon_sym_BQUOTE;
	v->a[227403] = actions(9388);
	v->a[227404] = 1;
	v->a[227405] = anon_sym_DOLLAR_BQUOTE;
	v->a[227406] = actions(9392);
	v->a[227407] = 1;
	v->a[227408] = sym_variable_name;
	v->a[227409] = actions(10800);
	v->a[227410] = 1;
	v->a[227411] = aux_sym__simple_variable_name_token1;
	v->a[227412] = state(3391);
	v->a[227413] = 1;
	v->a[227414] = sym__arithmetic_binary_expression;
	v->a[227415] = state(3396);
	v->a[227416] = 1;
	v->a[227417] = sym__arithmetic_ternary_expression;
	v->a[227418] = state(3398);
	v->a[227419] = 1;
	small_parse_table_11371(v);
}

void	small_parse_table_11371(t_small_parse_table_array *v)
{
	v->a[227420] = sym__arithmetic_unary_expression;
	v->a[227421] = state(3400);
	v->a[227422] = 1;
	v->a[227423] = sym__arithmetic_postfix_expression;
	v->a[227424] = actions(9368);
	v->a[227425] = 2;
	v->a[227426] = anon_sym_PLUS_PLUS2;
	v->a[227427] = anon_sym_DASH_DASH2;
	v->a[227428] = actions(9370);
	v->a[227429] = 2;
	v->a[227430] = anon_sym_DASH2;
	v->a[227431] = anon_sym_PLUS2;
	v->a[227432] = state(3296);
	v->a[227433] = 9;
	v->a[227434] = sym_subscript;
	v->a[227435] = sym__arithmetic_expression;
	v->a[227436] = sym__arithmetic_literal;
	v->a[227437] = sym__arithmetic_parenthesized_expression;
	v->a[227438] = sym_string;
	v->a[227439] = sym_number;
	small_parse_table_11372(v);
}

void	small_parse_table_11372(t_small_parse_table_array *v)
{
	v->a[227440] = sym_simple_expansion;
	v->a[227441] = sym_expansion;
	v->a[227442] = sym_command_substitution;
	v->a[227443] = 21;
	v->a[227444] = actions(71);
	v->a[227445] = 1;
	v->a[227446] = sym_comment;
	v->a[227447] = actions(3064);
	v->a[227448] = 1;
	v->a[227449] = sym_variable_name;
	v->a[227450] = actions(9278);
	v->a[227451] = 1;
	v->a[227452] = anon_sym_LPAREN;
	v->a[227453] = actions(9280);
	v->a[227454] = 1;
	v->a[227455] = anon_sym_BANG;
	v->a[227456] = actions(9286);
	v->a[227457] = 1;
	v->a[227458] = anon_sym_TILDE;
	v->a[227459] = actions(9288);
	small_parse_table_11373(v);
}

void	small_parse_table_11373(t_small_parse_table_array *v)
{
	v->a[227460] = 1;
	v->a[227461] = anon_sym_DOLLAR;
	v->a[227462] = actions(9290);
	v->a[227463] = 1;
	v->a[227464] = anon_sym_DQUOTE;
	v->a[227465] = actions(9292);
	v->a[227466] = 1;
	v->a[227467] = aux_sym_number_token1;
	v->a[227468] = actions(9294);
	v->a[227469] = 1;
	v->a[227470] = aux_sym_number_token2;
	v->a[227471] = actions(9296);
	v->a[227472] = 1;
	v->a[227473] = anon_sym_DOLLAR_LBRACE;
	v->a[227474] = actions(9298);
	v->a[227475] = 1;
	v->a[227476] = anon_sym_DOLLAR_LPAREN;
	v->a[227477] = actions(9300);
	v->a[227478] = 1;
	v->a[227479] = anon_sym_BQUOTE;
	small_parse_table_11374(v);
}

void	small_parse_table_11374(t_small_parse_table_array *v)
{
	v->a[227480] = actions(9302);
	v->a[227481] = 1;
	v->a[227482] = anon_sym_DOLLAR_BQUOTE;
	v->a[227483] = actions(10802);
	v->a[227484] = 1;
	v->a[227485] = aux_sym__simple_variable_name_token1;
	v->a[227486] = state(2801);
	v->a[227487] = 1;
	v->a[227488] = sym__arithmetic_binary_expression;
	v->a[227489] = state(2803);
	v->a[227490] = 1;
	v->a[227491] = sym__arithmetic_ternary_expression;
	v->a[227492] = state(2809);
	v->a[227493] = 1;
	v->a[227494] = sym__arithmetic_unary_expression;
	v->a[227495] = state(2825);
	v->a[227496] = 1;
	v->a[227497] = sym__arithmetic_postfix_expression;
	v->a[227498] = actions(9282);
	v->a[227499] = 2;
	small_parse_table_11375(v);
}

/* EOF small_parse_table_2274.c */
