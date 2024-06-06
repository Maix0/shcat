/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_904.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4520(t_small_parse_table_array *v)
{
	v->a[90400] = sym_variable_name;
	v->a[90401] = state(1476);
	v->a[90402] = 1;
	v->a[90403] = sym__arithmetic_postfix_expression;
	v->a[90404] = state(1478);
	v->a[90405] = 1;
	v->a[90406] = sym__arithmetic_unary_expression;
	v->a[90407] = state(1490);
	v->a[90408] = 1;
	v->a[90409] = sym__arithmetic_ternary_expression;
	v->a[90410] = state(1511);
	v->a[90411] = 1;
	v->a[90412] = sym__arithmetic_binary_expression;
	v->a[90413] = actions(4588);
	v->a[90414] = 2;
	v->a[90415] = anon_sym_PLUS_PLUS;
	v->a[90416] = anon_sym_DASH_DASH;
	v->a[90417] = actions(4590);
	v->a[90418] = 2;
	v->a[90419] = anon_sym_DASH2;
	small_parse_table_4521(v);
}

void	small_parse_table_4521(t_small_parse_table_array *v)
{
	v->a[90420] = anon_sym_PLUS2;
	v->a[90421] = state(1413);
	v->a[90422] = 8;
	v->a[90423] = sym__arithmetic_expression;
	v->a[90424] = sym__arithmetic_literal;
	v->a[90425] = sym__arithmetic_parenthesized_expression;
	v->a[90426] = sym_string;
	v->a[90427] = sym_number;
	v->a[90428] = sym_simple_expansion;
	v->a[90429] = sym_expansion;
	v->a[90430] = sym_command_substitution;
	v->a[90431] = 21;
	v->a[90432] = actions(57);
	v->a[90433] = 1;
	v->a[90434] = sym_comment;
	v->a[90435] = actions(4584);
	v->a[90436] = 1;
	v->a[90437] = anon_sym_LPAREN;
	v->a[90438] = actions(4586);
	v->a[90439] = 1;
	small_parse_table_4522(v);
}

void	small_parse_table_4522(t_small_parse_table_array *v)
{
	v->a[90440] = anon_sym_BANG;
	v->a[90441] = actions(4592);
	v->a[90442] = 1;
	v->a[90443] = anon_sym_TILDE;
	v->a[90444] = actions(4594);
	v->a[90445] = 1;
	v->a[90446] = anon_sym_DOLLAR;
	v->a[90447] = actions(4596);
	v->a[90448] = 1;
	v->a[90449] = anon_sym_DQUOTE;
	v->a[90450] = actions(4598);
	v->a[90451] = 1;
	v->a[90452] = aux_sym_number_token1;
	v->a[90453] = actions(4600);
	v->a[90454] = 1;
	v->a[90455] = aux_sym_number_token2;
	v->a[90456] = actions(4602);
	v->a[90457] = 1;
	v->a[90458] = anon_sym_DOLLAR_LBRACE;
	v->a[90459] = actions(4604);
	small_parse_table_4523(v);
}

void	small_parse_table_4523(t_small_parse_table_array *v)
{
	v->a[90460] = 1;
	v->a[90461] = anon_sym_DOLLAR_LPAREN;
	v->a[90462] = actions(4606);
	v->a[90463] = 1;
	v->a[90464] = anon_sym_BQUOTE;
	v->a[90465] = actions(4608);
	v->a[90466] = 1;
	v->a[90467] = anon_sym_DOLLAR_BQUOTE;
	v->a[90468] = actions(4989);
	v->a[90469] = 1;
	v->a[90470] = aux_sym__simple_variable_name_token1;
	v->a[90471] = actions(4991);
	v->a[90472] = 1;
	v->a[90473] = sym_variable_name;
	v->a[90474] = state(1476);
	v->a[90475] = 1;
	v->a[90476] = sym__arithmetic_postfix_expression;
	v->a[90477] = state(1478);
	v->a[90478] = 1;
	v->a[90479] = sym__arithmetic_unary_expression;
	small_parse_table_4524(v);
}

void	small_parse_table_4524(t_small_parse_table_array *v)
{
	v->a[90480] = state(1490);
	v->a[90481] = 1;
	v->a[90482] = sym__arithmetic_ternary_expression;
	v->a[90483] = state(1511);
	v->a[90484] = 1;
	v->a[90485] = sym__arithmetic_binary_expression;
	v->a[90486] = actions(4588);
	v->a[90487] = 2;
	v->a[90488] = anon_sym_PLUS_PLUS;
	v->a[90489] = anon_sym_DASH_DASH;
	v->a[90490] = actions(4590);
	v->a[90491] = 2;
	v->a[90492] = anon_sym_DASH2;
	v->a[90493] = anon_sym_PLUS2;
	v->a[90494] = state(1454);
	v->a[90495] = 8;
	v->a[90496] = sym__arithmetic_expression;
	v->a[90497] = sym__arithmetic_literal;
	v->a[90498] = sym__arithmetic_parenthesized_expression;
	v->a[90499] = sym_string;
	small_parse_table_4525(v);
}

/* EOF small_parse_table_904.c */
