/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2224.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11120(t_small_parse_table_array *v)
{
	v->a[222400] = actions(9368);
	v->a[222401] = 2;
	v->a[222402] = anon_sym_PLUS_PLUS2;
	v->a[222403] = anon_sym_DASH_DASH2;
	v->a[222404] = actions(9370);
	v->a[222405] = 2;
	v->a[222406] = anon_sym_DASH2;
	v->a[222407] = anon_sym_PLUS2;
	v->a[222408] = state(3315);
	v->a[222409] = 9;
	v->a[222410] = sym_subscript;
	v->a[222411] = sym__arithmetic_expression;
	v->a[222412] = sym__arithmetic_literal;
	v->a[222413] = sym__arithmetic_parenthesized_expression;
	v->a[222414] = sym_string;
	v->a[222415] = sym_number;
	v->a[222416] = sym_simple_expansion;
	v->a[222417] = sym_expansion;
	v->a[222418] = sym_command_substitution;
	v->a[222419] = 21;
	small_parse_table_11121(v);
}

void	small_parse_table_11121(t_small_parse_table_array *v)
{
	v->a[222420] = actions(71);
	v->a[222421] = 1;
	v->a[222422] = sym_comment;
	v->a[222423] = actions(3064);
	v->a[222424] = 1;
	v->a[222425] = sym_variable_name;
	v->a[222426] = actions(9278);
	v->a[222427] = 1;
	v->a[222428] = anon_sym_LPAREN;
	v->a[222429] = actions(9280);
	v->a[222430] = 1;
	v->a[222431] = anon_sym_BANG;
	v->a[222432] = actions(9286);
	v->a[222433] = 1;
	v->a[222434] = anon_sym_TILDE;
	v->a[222435] = actions(9288);
	v->a[222436] = 1;
	v->a[222437] = anon_sym_DOLLAR;
	v->a[222438] = actions(9290);
	v->a[222439] = 1;
	small_parse_table_11122(v);
}

void	small_parse_table_11122(t_small_parse_table_array *v)
{
	v->a[222440] = anon_sym_DQUOTE;
	v->a[222441] = actions(9292);
	v->a[222442] = 1;
	v->a[222443] = aux_sym_number_token1;
	v->a[222444] = actions(9294);
	v->a[222445] = 1;
	v->a[222446] = aux_sym_number_token2;
	v->a[222447] = actions(9296);
	v->a[222448] = 1;
	v->a[222449] = anon_sym_DOLLAR_LBRACE;
	v->a[222450] = actions(9298);
	v->a[222451] = 1;
	v->a[222452] = anon_sym_DOLLAR_LPAREN;
	v->a[222453] = actions(9300);
	v->a[222454] = 1;
	v->a[222455] = anon_sym_BQUOTE;
	v->a[222456] = actions(9302);
	v->a[222457] = 1;
	v->a[222458] = anon_sym_DOLLAR_BQUOTE;
	v->a[222459] = actions(10628);
	small_parse_table_11123(v);
}

void	small_parse_table_11123(t_small_parse_table_array *v)
{
	v->a[222460] = 1;
	v->a[222461] = aux_sym__simple_variable_name_token1;
	v->a[222462] = state(2801);
	v->a[222463] = 1;
	v->a[222464] = sym__arithmetic_binary_expression;
	v->a[222465] = state(2803);
	v->a[222466] = 1;
	v->a[222467] = sym__arithmetic_ternary_expression;
	v->a[222468] = state(2809);
	v->a[222469] = 1;
	v->a[222470] = sym__arithmetic_unary_expression;
	v->a[222471] = state(2825);
	v->a[222472] = 1;
	v->a[222473] = sym__arithmetic_postfix_expression;
	v->a[222474] = actions(9282);
	v->a[222475] = 2;
	v->a[222476] = anon_sym_PLUS_PLUS2;
	v->a[222477] = anon_sym_DASH_DASH2;
	v->a[222478] = actions(9284);
	v->a[222479] = 2;
	small_parse_table_11124(v);
}

void	small_parse_table_11124(t_small_parse_table_array *v)
{
	v->a[222480] = anon_sym_DASH2;
	v->a[222481] = anon_sym_PLUS2;
	v->a[222482] = state(2765);
	v->a[222483] = 9;
	v->a[222484] = sym_subscript;
	v->a[222485] = sym__arithmetic_expression;
	v->a[222486] = sym__arithmetic_literal;
	v->a[222487] = sym__arithmetic_parenthesized_expression;
	v->a[222488] = sym_string;
	v->a[222489] = sym_number;
	v->a[222490] = sym_simple_expansion;
	v->a[222491] = sym_expansion;
	v->a[222492] = sym_command_substitution;
	v->a[222493] = 18;
	v->a[222494] = actions(3);
	v->a[222495] = 1;
	v->a[222496] = sym_comment;
	v->a[222497] = actions(3616);
	v->a[222498] = 1;
	v->a[222499] = aux_sym_number_token1;
	small_parse_table_11125(v);
}

/* EOF small_parse_table_2224.c */
