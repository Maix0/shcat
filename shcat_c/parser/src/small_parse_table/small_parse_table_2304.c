/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2304.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11520(t_small_parse_table_array *v)
{
	v->a[230400] = sym_comment;
	v->a[230401] = actions(3064);
	v->a[230402] = 1;
	v->a[230403] = sym_variable_name;
	v->a[230404] = actions(9278);
	v->a[230405] = 1;
	v->a[230406] = anon_sym_LPAREN;
	v->a[230407] = actions(9280);
	v->a[230408] = 1;
	v->a[230409] = anon_sym_BANG;
	v->a[230410] = actions(9286);
	v->a[230411] = 1;
	v->a[230412] = anon_sym_TILDE;
	v->a[230413] = actions(9288);
	v->a[230414] = 1;
	v->a[230415] = anon_sym_DOLLAR;
	v->a[230416] = actions(9290);
	v->a[230417] = 1;
	v->a[230418] = anon_sym_DQUOTE;
	v->a[230419] = actions(9292);
	small_parse_table_11521(v);
}

void	small_parse_table_11521(t_small_parse_table_array *v)
{
	v->a[230420] = 1;
	v->a[230421] = aux_sym_number_token1;
	v->a[230422] = actions(9294);
	v->a[230423] = 1;
	v->a[230424] = aux_sym_number_token2;
	v->a[230425] = actions(9296);
	v->a[230426] = 1;
	v->a[230427] = anon_sym_DOLLAR_LBRACE;
	v->a[230428] = actions(9298);
	v->a[230429] = 1;
	v->a[230430] = anon_sym_DOLLAR_LPAREN;
	v->a[230431] = actions(9300);
	v->a[230432] = 1;
	v->a[230433] = anon_sym_BQUOTE;
	v->a[230434] = actions(9302);
	v->a[230435] = 1;
	v->a[230436] = anon_sym_DOLLAR_BQUOTE;
	v->a[230437] = actions(10902);
	v->a[230438] = 1;
	v->a[230439] = aux_sym__simple_variable_name_token1;
	small_parse_table_11522(v);
}

void	small_parse_table_11522(t_small_parse_table_array *v)
{
	v->a[230440] = state(2801);
	v->a[230441] = 1;
	v->a[230442] = sym__arithmetic_binary_expression;
	v->a[230443] = state(2803);
	v->a[230444] = 1;
	v->a[230445] = sym__arithmetic_ternary_expression;
	v->a[230446] = state(2809);
	v->a[230447] = 1;
	v->a[230448] = sym__arithmetic_unary_expression;
	v->a[230449] = state(2825);
	v->a[230450] = 1;
	v->a[230451] = sym__arithmetic_postfix_expression;
	v->a[230452] = actions(9282);
	v->a[230453] = 2;
	v->a[230454] = anon_sym_PLUS_PLUS2;
	v->a[230455] = anon_sym_DASH_DASH2;
	v->a[230456] = actions(9284);
	v->a[230457] = 2;
	v->a[230458] = anon_sym_DASH2;
	v->a[230459] = anon_sym_PLUS2;
	small_parse_table_11523(v);
}

void	small_parse_table_11523(t_small_parse_table_array *v)
{
	v->a[230460] = state(2916);
	v->a[230461] = 9;
	v->a[230462] = sym_subscript;
	v->a[230463] = sym__arithmetic_expression;
	v->a[230464] = sym__arithmetic_literal;
	v->a[230465] = sym__arithmetic_parenthesized_expression;
	v->a[230466] = sym_string;
	v->a[230467] = sym_number;
	v->a[230468] = sym_simple_expansion;
	v->a[230469] = sym_expansion;
	v->a[230470] = sym_command_substitution;
	v->a[230471] = 21;
	v->a[230472] = actions(71);
	v->a[230473] = 1;
	v->a[230474] = sym_comment;
	v->a[230475] = actions(3064);
	v->a[230476] = 1;
	v->a[230477] = sym_variable_name;
	v->a[230478] = actions(9278);
	v->a[230479] = 1;
	small_parse_table_11524(v);
}

void	small_parse_table_11524(t_small_parse_table_array *v)
{
	v->a[230480] = anon_sym_LPAREN;
	v->a[230481] = actions(9280);
	v->a[230482] = 1;
	v->a[230483] = anon_sym_BANG;
	v->a[230484] = actions(9286);
	v->a[230485] = 1;
	v->a[230486] = anon_sym_TILDE;
	v->a[230487] = actions(9288);
	v->a[230488] = 1;
	v->a[230489] = anon_sym_DOLLAR;
	v->a[230490] = actions(9290);
	v->a[230491] = 1;
	v->a[230492] = anon_sym_DQUOTE;
	v->a[230493] = actions(9292);
	v->a[230494] = 1;
	v->a[230495] = aux_sym_number_token1;
	v->a[230496] = actions(9294);
	v->a[230497] = 1;
	v->a[230498] = aux_sym_number_token2;
	v->a[230499] = actions(9296);
	small_parse_table_11525(v);
}

/* EOF small_parse_table_2304.c */
