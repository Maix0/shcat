/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_584.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2920(t_small_parse_table_array *v)
{
	v->a[58400] = sym_string;
	v->a[58401] = sym_number;
	v->a[58402] = sym_simple_expansion;
	v->a[58403] = sym_expansion;
	v->a[58404] = state(416);
	v->a[58405] = 8;
	v->a[58406] = sym__arithmetic_expression;
	v->a[58407] = sym_arithmetic_literal;
	v->a[58408] = sym_arithmetic_binary_expression;
	v->a[58409] = sym_arithmetic_ternary_expression;
	v->a[58410] = sym_arithmetic_unary_expression;
	v->a[58411] = sym_arithmetic_postfix_expression;
	v->a[58412] = sym_arithmetic_parenthesized_expression;
	v->a[58413] = sym_command_substitution;
	v->a[58414] = 17;
	v->a[58415] = actions(1404);
	v->a[58416] = 1;
	v->a[58417] = sym_comment;
	v->a[58418] = actions(1979);
	v->a[58419] = 1;
	small_parse_table_2921(v);
}

void	small_parse_table_2921(t_small_parse_table_array *v)
{
	v->a[58420] = anon_sym_LPAREN;
	v->a[58421] = actions(1981);
	v->a[58422] = 1;
	v->a[58423] = anon_sym_BANG;
	v->a[58424] = actions(1989);
	v->a[58425] = 1;
	v->a[58426] = anon_sym_TILDE;
	v->a[58427] = actions(1991);
	v->a[58428] = 1;
	v->a[58429] = anon_sym_DOLLAR;
	v->a[58430] = actions(1993);
	v->a[58431] = 1;
	v->a[58432] = anon_sym_DQUOTE;
	v->a[58433] = actions(1995);
	v->a[58434] = 1;
	v->a[58435] = aux_sym_number_token1;
	v->a[58436] = actions(1997);
	v->a[58437] = 1;
	v->a[58438] = aux_sym_number_token2;
	v->a[58439] = actions(1999);
	small_parse_table_2922(v);
}

void	small_parse_table_2922(t_small_parse_table_array *v)
{
	v->a[58440] = 1;
	v->a[58441] = anon_sym_DOLLAR_LBRACE;
	v->a[58442] = actions(2001);
	v->a[58443] = 1;
	v->a[58444] = anon_sym_DOLLAR_LPAREN;
	v->a[58445] = actions(2003);
	v->a[58446] = 1;
	v->a[58447] = anon_sym_BQUOTE;
	v->a[58448] = actions(2005);
	v->a[58449] = 1;
	v->a[58450] = aux_sym__simple_variable_name_token1;
	v->a[58451] = actions(2007);
	v->a[58452] = 1;
	v->a[58453] = sym_variable_name;
	v->a[58454] = actions(1985);
	v->a[58455] = 2;
	v->a[58456] = anon_sym_PLUS_PLUS;
	v->a[58457] = anon_sym_DASH_DASH;
	v->a[58458] = actions(1987);
	v->a[58459] = 2;
	small_parse_table_2923(v);
}

void	small_parse_table_2923(t_small_parse_table_array *v)
{
	v->a[58460] = anon_sym_DASH2;
	v->a[58461] = anon_sym_PLUS2;
	v->a[58462] = state(530);
	v->a[58463] = 4;
	v->a[58464] = sym_string;
	v->a[58465] = sym_number;
	v->a[58466] = sym_simple_expansion;
	v->a[58467] = sym_expansion;
	v->a[58468] = state(415);
	v->a[58469] = 8;
	v->a[58470] = sym__arithmetic_expression;
	v->a[58471] = sym_arithmetic_literal;
	v->a[58472] = sym_arithmetic_binary_expression;
	v->a[58473] = sym_arithmetic_ternary_expression;
	v->a[58474] = sym_arithmetic_unary_expression;
	v->a[58475] = sym_arithmetic_postfix_expression;
	v->a[58476] = sym_arithmetic_parenthesized_expression;
	v->a[58477] = sym_command_substitution;
	v->a[58478] = 17;
	v->a[58479] = actions(1404);
	small_parse_table_2924(v);
}

void	small_parse_table_2924(t_small_parse_table_array *v)
{
	v->a[58480] = 1;
	v->a[58481] = sym_comment;
	v->a[58482] = actions(1979);
	v->a[58483] = 1;
	v->a[58484] = anon_sym_LPAREN;
	v->a[58485] = actions(1981);
	v->a[58486] = 1;
	v->a[58487] = anon_sym_BANG;
	v->a[58488] = actions(1989);
	v->a[58489] = 1;
	v->a[58490] = anon_sym_TILDE;
	v->a[58491] = actions(1991);
	v->a[58492] = 1;
	v->a[58493] = anon_sym_DOLLAR;
	v->a[58494] = actions(1993);
	v->a[58495] = 1;
	v->a[58496] = anon_sym_DQUOTE;
	v->a[58497] = actions(1995);
	v->a[58498] = 1;
	v->a[58499] = aux_sym_number_token1;
	small_parse_table_2925(v);
}

/* EOF small_parse_table_584.c */
