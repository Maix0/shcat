/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2184.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10920(t_small_parse_table_array *v)
{
	v->a[218400] = 1;
	v->a[218401] = anon_sym_TILDE;
	v->a[218402] = actions(9374);
	v->a[218403] = 1;
	v->a[218404] = anon_sym_DOLLAR;
	v->a[218405] = actions(9376);
	v->a[218406] = 1;
	v->a[218407] = anon_sym_DQUOTE;
	v->a[218408] = actions(9378);
	v->a[218409] = 1;
	v->a[218410] = aux_sym_number_token1;
	v->a[218411] = actions(9380);
	v->a[218412] = 1;
	v->a[218413] = aux_sym_number_token2;
	v->a[218414] = actions(9382);
	v->a[218415] = 1;
	v->a[218416] = anon_sym_DOLLAR_LBRACE;
	v->a[218417] = actions(9384);
	v->a[218418] = 1;
	v->a[218419] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_10921(v);
}

void	small_parse_table_10921(t_small_parse_table_array *v)
{
	v->a[218420] = actions(9386);
	v->a[218421] = 1;
	v->a[218422] = anon_sym_BQUOTE;
	v->a[218423] = actions(9388);
	v->a[218424] = 1;
	v->a[218425] = anon_sym_DOLLAR_BQUOTE;
	v->a[218426] = actions(9392);
	v->a[218427] = 1;
	v->a[218428] = sym_variable_name;
	v->a[218429] = actions(10404);
	v->a[218430] = 1;
	v->a[218431] = aux_sym__simple_variable_name_token1;
	v->a[218432] = state(3391);
	v->a[218433] = 1;
	v->a[218434] = sym__arithmetic_binary_expression;
	v->a[218435] = state(3396);
	v->a[218436] = 1;
	v->a[218437] = sym__arithmetic_ternary_expression;
	v->a[218438] = state(3398);
	v->a[218439] = 1;
	small_parse_table_10922(v);
}

void	small_parse_table_10922(t_small_parse_table_array *v)
{
	v->a[218440] = sym__arithmetic_unary_expression;
	v->a[218441] = state(3400);
	v->a[218442] = 1;
	v->a[218443] = sym__arithmetic_postfix_expression;
	v->a[218444] = actions(9368);
	v->a[218445] = 2;
	v->a[218446] = anon_sym_PLUS_PLUS2;
	v->a[218447] = anon_sym_DASH_DASH2;
	v->a[218448] = actions(9370);
	v->a[218449] = 2;
	v->a[218450] = anon_sym_DASH2;
	v->a[218451] = anon_sym_PLUS2;
	v->a[218452] = state(3374);
	v->a[218453] = 9;
	v->a[218454] = sym_subscript;
	v->a[218455] = sym__arithmetic_expression;
	v->a[218456] = sym__arithmetic_literal;
	v->a[218457] = sym__arithmetic_parenthesized_expression;
	v->a[218458] = sym_string;
	v->a[218459] = sym_number;
	small_parse_table_10923(v);
}

void	small_parse_table_10923(t_small_parse_table_array *v)
{
	v->a[218460] = sym_simple_expansion;
	v->a[218461] = sym_expansion;
	v->a[218462] = sym_command_substitution;
	v->a[218463] = 18;
	v->a[218464] = actions(3);
	v->a[218465] = 1;
	v->a[218466] = sym_comment;
	v->a[218467] = actions(191);
	v->a[218468] = 1;
	v->a[218469] = anon_sym_DOLLAR_LBRACK;
	v->a[218470] = actions(193);
	v->a[218471] = 1;
	v->a[218472] = anon_sym_DOLLAR;
	v->a[218473] = actions(197);
	v->a[218474] = 1;
	v->a[218475] = anon_sym_DQUOTE;
	v->a[218476] = actions(201);
	v->a[218477] = 1;
	v->a[218478] = aux_sym_number_token1;
	v->a[218479] = actions(203);
	small_parse_table_10924(v);
}

void	small_parse_table_10924(t_small_parse_table_array *v)
{
	v->a[218480] = 1;
	v->a[218481] = aux_sym_number_token2;
	v->a[218482] = actions(205);
	v->a[218483] = 1;
	v->a[218484] = anon_sym_DOLLAR_LBRACE;
	v->a[218485] = actions(207);
	v->a[218486] = 1;
	v->a[218487] = anon_sym_DOLLAR_LPAREN;
	v->a[218488] = actions(209);
	v->a[218489] = 1;
	v->a[218490] = anon_sym_BQUOTE;
	v->a[218491] = actions(211);
	v->a[218492] = 1;
	v->a[218493] = anon_sym_DOLLAR_BQUOTE;
	v->a[218494] = actions(221);
	v->a[218495] = 1;
	v->a[218496] = sym__brace_start;
	v->a[218497] = actions(10406);
	v->a[218498] = 1;
	v->a[218499] = sym_word;
	small_parse_table_10925(v);
}

/* EOF small_parse_table_2184.c */
