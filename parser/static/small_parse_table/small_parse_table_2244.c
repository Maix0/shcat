/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2244.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11220(t_small_parse_table_array *v)
{
	v->a[224400] = sym_command_substitution;
	v->a[224401] = 21;
	v->a[224402] = actions(71);
	v->a[224403] = 1;
	v->a[224404] = sym_comment;
	v->a[224405] = actions(3064);
	v->a[224406] = 1;
	v->a[224407] = sym_variable_name;
	v->a[224408] = actions(9278);
	v->a[224409] = 1;
	v->a[224410] = anon_sym_LPAREN;
	v->a[224411] = actions(9280);
	v->a[224412] = 1;
	v->a[224413] = anon_sym_BANG;
	v->a[224414] = actions(9286);
	v->a[224415] = 1;
	v->a[224416] = anon_sym_TILDE;
	v->a[224417] = actions(9288);
	v->a[224418] = 1;
	v->a[224419] = anon_sym_DOLLAR;
	small_parse_table_11221(v);
}

void	small_parse_table_11221(t_small_parse_table_array *v)
{
	v->a[224420] = actions(9290);
	v->a[224421] = 1;
	v->a[224422] = anon_sym_DQUOTE;
	v->a[224423] = actions(9292);
	v->a[224424] = 1;
	v->a[224425] = aux_sym_number_token1;
	v->a[224426] = actions(9294);
	v->a[224427] = 1;
	v->a[224428] = aux_sym_number_token2;
	v->a[224429] = actions(9296);
	v->a[224430] = 1;
	v->a[224431] = anon_sym_DOLLAR_LBRACE;
	v->a[224432] = actions(9298);
	v->a[224433] = 1;
	v->a[224434] = anon_sym_DOLLAR_LPAREN;
	v->a[224435] = actions(9300);
	v->a[224436] = 1;
	v->a[224437] = anon_sym_BQUOTE;
	v->a[224438] = actions(9302);
	v->a[224439] = 1;
	small_parse_table_11222(v);
}

void	small_parse_table_11222(t_small_parse_table_array *v)
{
	v->a[224440] = anon_sym_DOLLAR_BQUOTE;
	v->a[224441] = actions(10684);
	v->a[224442] = 1;
	v->a[224443] = aux_sym__simple_variable_name_token1;
	v->a[224444] = state(2801);
	v->a[224445] = 1;
	v->a[224446] = sym__arithmetic_binary_expression;
	v->a[224447] = state(2803);
	v->a[224448] = 1;
	v->a[224449] = sym__arithmetic_ternary_expression;
	v->a[224450] = state(2809);
	v->a[224451] = 1;
	v->a[224452] = sym__arithmetic_unary_expression;
	v->a[224453] = state(2825);
	v->a[224454] = 1;
	v->a[224455] = sym__arithmetic_postfix_expression;
	v->a[224456] = actions(9282);
	v->a[224457] = 2;
	v->a[224458] = anon_sym_PLUS_PLUS2;
	v->a[224459] = anon_sym_DASH_DASH2;
	small_parse_table_11223(v);
}

void	small_parse_table_11223(t_small_parse_table_array *v)
{
	v->a[224460] = actions(9284);
	v->a[224461] = 2;
	v->a[224462] = anon_sym_DASH2;
	v->a[224463] = anon_sym_PLUS2;
	v->a[224464] = state(2770);
	v->a[224465] = 9;
	v->a[224466] = sym_subscript;
	v->a[224467] = sym__arithmetic_expression;
	v->a[224468] = sym__arithmetic_literal;
	v->a[224469] = sym__arithmetic_parenthesized_expression;
	v->a[224470] = sym_string;
	v->a[224471] = sym_number;
	v->a[224472] = sym_simple_expansion;
	v->a[224473] = sym_expansion;
	v->a[224474] = sym_command_substitution;
	v->a[224475] = 18;
	v->a[224476] = actions(3);
	v->a[224477] = 1;
	v->a[224478] = sym_comment;
	v->a[224479] = actions(2269);
	small_parse_table_11224(v);
}

void	small_parse_table_11224(t_small_parse_table_array *v)
{
	v->a[224480] = 1;
	v->a[224481] = aux_sym_number_token1;
	v->a[224482] = actions(2271);
	v->a[224483] = 1;
	v->a[224484] = aux_sym_number_token2;
	v->a[224485] = actions(2275);
	v->a[224486] = 1;
	v->a[224487] = anon_sym_DOLLAR_LPAREN;
	v->a[224488] = actions(2289);
	v->a[224489] = 1;
	v->a[224490] = sym__brace_start;
	v->a[224491] = actions(8066);
	v->a[224492] = 1;
	v->a[224493] = anon_sym_DOLLAR_LBRACK;
	v->a[224494] = actions(8070);
	v->a[224495] = 1;
	v->a[224496] = anon_sym_DQUOTE;
	v->a[224497] = actions(8074);
	v->a[224498] = 1;
	v->a[224499] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_11225(v);
}

/* EOF small_parse_table_2244.c */
