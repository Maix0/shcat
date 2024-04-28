/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2384.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11920(t_small_parse_table_array *v)
{
	v->a[238400] = 1;
	v->a[238401] = sym_variable_name;
	v->a[238402] = actions(9278);
	v->a[238403] = 1;
	v->a[238404] = anon_sym_LPAREN;
	v->a[238405] = actions(9280);
	v->a[238406] = 1;
	v->a[238407] = anon_sym_BANG;
	v->a[238408] = actions(9286);
	v->a[238409] = 1;
	v->a[238410] = anon_sym_TILDE;
	v->a[238411] = actions(9288);
	v->a[238412] = 1;
	v->a[238413] = anon_sym_DOLLAR;
	v->a[238414] = actions(9290);
	v->a[238415] = 1;
	v->a[238416] = anon_sym_DQUOTE;
	v->a[238417] = actions(9292);
	v->a[238418] = 1;
	v->a[238419] = aux_sym_number_token1;
	small_parse_table_11921(v);
}

void	small_parse_table_11921(t_small_parse_table_array *v)
{
	v->a[238420] = actions(9294);
	v->a[238421] = 1;
	v->a[238422] = aux_sym_number_token2;
	v->a[238423] = actions(9296);
	v->a[238424] = 1;
	v->a[238425] = anon_sym_DOLLAR_LBRACE;
	v->a[238426] = actions(9298);
	v->a[238427] = 1;
	v->a[238428] = anon_sym_DOLLAR_LPAREN;
	v->a[238429] = actions(9300);
	v->a[238430] = 1;
	v->a[238431] = anon_sym_BQUOTE;
	v->a[238432] = actions(9302);
	v->a[238433] = 1;
	v->a[238434] = anon_sym_DOLLAR_BQUOTE;
	v->a[238435] = actions(11212);
	v->a[238436] = 1;
	v->a[238437] = aux_sym__simple_variable_name_token1;
	v->a[238438] = state(2801);
	v->a[238439] = 1;
	small_parse_table_11922(v);
}

void	small_parse_table_11922(t_small_parse_table_array *v)
{
	v->a[238440] = sym__arithmetic_binary_expression;
	v->a[238441] = state(2803);
	v->a[238442] = 1;
	v->a[238443] = sym__arithmetic_ternary_expression;
	v->a[238444] = state(2809);
	v->a[238445] = 1;
	v->a[238446] = sym__arithmetic_unary_expression;
	v->a[238447] = state(2825);
	v->a[238448] = 1;
	v->a[238449] = sym__arithmetic_postfix_expression;
	v->a[238450] = actions(9282);
	v->a[238451] = 2;
	v->a[238452] = anon_sym_PLUS_PLUS2;
	v->a[238453] = anon_sym_DASH_DASH2;
	v->a[238454] = actions(9284);
	v->a[238455] = 2;
	v->a[238456] = anon_sym_DASH2;
	v->a[238457] = anon_sym_PLUS2;
	v->a[238458] = state(2788);
	v->a[238459] = 9;
	small_parse_table_11923(v);
}

void	small_parse_table_11923(t_small_parse_table_array *v)
{
	v->a[238460] = sym_subscript;
	v->a[238461] = sym__arithmetic_expression;
	v->a[238462] = sym__arithmetic_literal;
	v->a[238463] = sym__arithmetic_parenthesized_expression;
	v->a[238464] = sym_string;
	v->a[238465] = sym_number;
	v->a[238466] = sym_simple_expansion;
	v->a[238467] = sym_expansion;
	v->a[238468] = sym_command_substitution;
	v->a[238469] = 18;
	v->a[238470] = actions(3);
	v->a[238471] = 1;
	v->a[238472] = sym_comment;
	v->a[238473] = actions(8306);
	v->a[238474] = 1;
	v->a[238475] = anon_sym_DOLLAR_LBRACK;
	v->a[238476] = actions(8312);
	v->a[238477] = 1;
	v->a[238478] = anon_sym_DQUOTE;
	v->a[238479] = actions(8316);
	small_parse_table_11924(v);
}

void	small_parse_table_11924(t_small_parse_table_array *v)
{
	v->a[238480] = 1;
	v->a[238481] = aux_sym_number_token1;
	v->a[238482] = actions(8318);
	v->a[238483] = 1;
	v->a[238484] = aux_sym_number_token2;
	v->a[238485] = actions(8320);
	v->a[238486] = 1;
	v->a[238487] = anon_sym_DOLLAR_LBRACE;
	v->a[238488] = actions(8322);
	v->a[238489] = 1;
	v->a[238490] = anon_sym_DOLLAR_LPAREN;
	v->a[238491] = actions(8324);
	v->a[238492] = 1;
	v->a[238493] = anon_sym_BQUOTE;
	v->a[238494] = actions(8326);
	v->a[238495] = 1;
	v->a[238496] = anon_sym_DOLLAR_BQUOTE;
	v->a[238497] = actions(8336);
	v->a[238498] = 1;
	v->a[238499] = sym__brace_start;
	small_parse_table_11925(v);
}

/* EOF small_parse_table_2384.c */
