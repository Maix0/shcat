/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_464.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2320(t_small_parse_table_array *v)
{
	v->a[46400] = actions(1582);
	v->a[46401] = 2;
	v->a[46402] = anon_sym_DASH2;
	v->a[46403] = anon_sym_PLUS2;
	v->a[46404] = actions(1590);
	v->a[46405] = 2;
	v->a[46406] = sym_number;
	v->a[46407] = aux_sym__simple_variable_name_token1;
	v->a[46408] = state(238);
	v->a[46409] = 3;
	v->a[46410] = sym_string;
	v->a[46411] = sym_simple_expansion;
	v->a[46412] = sym_expansion;
	v->a[46413] = state(276);
	v->a[46414] = 8;
	v->a[46415] = sym__arithmetic_expression;
	v->a[46416] = sym_arithmetic_literal;
	v->a[46417] = sym_arithmetic_binary_expression;
	v->a[46418] = sym_arithmetic_ternary_expression;
	v->a[46419] = sym_arithmetic_unary_expression;
	small_parse_table_2321(v);
}

void	small_parse_table_2321(t_small_parse_table_array *v)
{
	v->a[46420] = sym_arithmetic_postfix_expression;
	v->a[46421] = sym_arithmetic_parenthesized_expression;
	v->a[46422] = sym_command_substitution;
	v->a[46423] = 16;
	v->a[46424] = actions(680);
	v->a[46425] = 1;
	v->a[46426] = sym_comment;
	v->a[46427] = actions(1574);
	v->a[46428] = 1;
	v->a[46429] = anon_sym_LPAREN;
	v->a[46430] = actions(1576);
	v->a[46431] = 1;
	v->a[46432] = anon_sym_BANG;
	v->a[46433] = actions(1584);
	v->a[46434] = 1;
	v->a[46435] = anon_sym_TILDE;
	v->a[46436] = actions(1586);
	v->a[46437] = 1;
	v->a[46438] = anon_sym_DOLLAR;
	v->a[46439] = actions(1588);
	small_parse_table_2322(v);
}

void	small_parse_table_2322(t_small_parse_table_array *v)
{
	v->a[46440] = 1;
	v->a[46441] = anon_sym_DQUOTE;
	v->a[46442] = actions(1592);
	v->a[46443] = 1;
	v->a[46444] = anon_sym_DOLLAR_LBRACE;
	v->a[46445] = actions(1594);
	v->a[46446] = 1;
	v->a[46447] = anon_sym_DOLLAR_LPAREN;
	v->a[46448] = actions(1596);
	v->a[46449] = 1;
	v->a[46450] = anon_sym_BQUOTE;
	v->a[46451] = actions(1598);
	v->a[46452] = 1;
	v->a[46453] = sym_variable_name;
	v->a[46454] = actions(1681);
	v->a[46455] = 1;
	v->a[46456] = anon_sym_RPAREN_RPAREN;
	v->a[46457] = actions(1580);
	v->a[46458] = 2;
	v->a[46459] = anon_sym_PLUS_PLUS;
	small_parse_table_2323(v);
}

void	small_parse_table_2323(t_small_parse_table_array *v)
{
	v->a[46460] = anon_sym_DASH_DASH;
	v->a[46461] = actions(1582);
	v->a[46462] = 2;
	v->a[46463] = anon_sym_DASH2;
	v->a[46464] = anon_sym_PLUS2;
	v->a[46465] = actions(1590);
	v->a[46466] = 2;
	v->a[46467] = sym_number;
	v->a[46468] = aux_sym__simple_variable_name_token1;
	v->a[46469] = state(238);
	v->a[46470] = 3;
	v->a[46471] = sym_string;
	v->a[46472] = sym_simple_expansion;
	v->a[46473] = sym_expansion;
	v->a[46474] = state(285);
	v->a[46475] = 8;
	v->a[46476] = sym__arithmetic_expression;
	v->a[46477] = sym_arithmetic_literal;
	v->a[46478] = sym_arithmetic_binary_expression;
	v->a[46479] = sym_arithmetic_ternary_expression;
	small_parse_table_2324(v);
}

void	small_parse_table_2324(t_small_parse_table_array *v)
{
	v->a[46480] = sym_arithmetic_unary_expression;
	v->a[46481] = sym_arithmetic_postfix_expression;
	v->a[46482] = sym_arithmetic_parenthesized_expression;
	v->a[46483] = sym_command_substitution;
	v->a[46484] = 16;
	v->a[46485] = actions(680);
	v->a[46486] = 1;
	v->a[46487] = sym_comment;
	v->a[46488] = actions(1574);
	v->a[46489] = 1;
	v->a[46490] = anon_sym_LPAREN;
	v->a[46491] = actions(1576);
	v->a[46492] = 1;
	v->a[46493] = anon_sym_BANG;
	v->a[46494] = actions(1584);
	v->a[46495] = 1;
	v->a[46496] = anon_sym_TILDE;
	v->a[46497] = actions(1586);
	v->a[46498] = 1;
	v->a[46499] = anon_sym_DOLLAR;
	small_parse_table_2325(v);
}

/* EOF small_parse_table_464.c */
