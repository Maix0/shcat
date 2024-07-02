/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_494.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2470(t_small_parse_table_array *v)
{
	v->a[49400] = anon_sym_DOLLAR_LBRACE;
	v->a[49401] = actions(1594);
	v->a[49402] = 1;
	v->a[49403] = anon_sym_DOLLAR_LPAREN;
	v->a[49404] = actions(1596);
	v->a[49405] = 1;
	v->a[49406] = anon_sym_BQUOTE;
	v->a[49407] = actions(1598);
	v->a[49408] = 1;
	v->a[49409] = sym_variable_name;
	v->a[49410] = actions(1580);
	v->a[49411] = 2;
	v->a[49412] = anon_sym_PLUS_PLUS;
	v->a[49413] = anon_sym_DASH_DASH;
	v->a[49414] = actions(1582);
	v->a[49415] = 2;
	v->a[49416] = anon_sym_DASH2;
	v->a[49417] = anon_sym_PLUS2;
	v->a[49418] = actions(1590);
	v->a[49419] = 2;
	small_parse_table_2471(v);
}

void	small_parse_table_2471(t_small_parse_table_array *v)
{
	v->a[49420] = sym_number;
	v->a[49421] = aux_sym__simple_variable_name_token1;
	v->a[49422] = state(238);
	v->a[49423] = 3;
	v->a[49424] = sym_string;
	v->a[49425] = sym_simple_expansion;
	v->a[49426] = sym_expansion;
	v->a[49427] = state(204);
	v->a[49428] = 8;
	v->a[49429] = sym__arithmetic_expression;
	v->a[49430] = sym_arithmetic_literal;
	v->a[49431] = sym_arithmetic_binary_expression;
	v->a[49432] = sym_arithmetic_ternary_expression;
	v->a[49433] = sym_arithmetic_unary_expression;
	v->a[49434] = sym_arithmetic_postfix_expression;
	v->a[49435] = sym_arithmetic_parenthesized_expression;
	v->a[49436] = sym_command_substitution;
	v->a[49437] = 15;
	v->a[49438] = actions(680);
	v->a[49439] = 1;
	small_parse_table_2472(v);
}

void	small_parse_table_2472(t_small_parse_table_array *v)
{
	v->a[49440] = sym_comment;
	v->a[49441] = actions(1730);
	v->a[49442] = 1;
	v->a[49443] = anon_sym_LPAREN;
	v->a[49444] = actions(1732);
	v->a[49445] = 1;
	v->a[49446] = anon_sym_BANG;
	v->a[49447] = actions(1738);
	v->a[49448] = 1;
	v->a[49449] = anon_sym_TILDE;
	v->a[49450] = actions(1740);
	v->a[49451] = 1;
	v->a[49452] = anon_sym_DOLLAR;
	v->a[49453] = actions(1742);
	v->a[49454] = 1;
	v->a[49455] = anon_sym_DQUOTE;
	v->a[49456] = actions(1746);
	v->a[49457] = 1;
	v->a[49458] = anon_sym_DOLLAR_LBRACE;
	v->a[49459] = actions(1748);
	small_parse_table_2473(v);
}

void	small_parse_table_2473(t_small_parse_table_array *v)
{
	v->a[49460] = 1;
	v->a[49461] = anon_sym_DOLLAR_LPAREN;
	v->a[49462] = actions(1750);
	v->a[49463] = 1;
	v->a[49464] = anon_sym_BQUOTE;
	v->a[49465] = actions(1752);
	v->a[49466] = 1;
	v->a[49467] = sym_variable_name;
	v->a[49468] = actions(1734);
	v->a[49469] = 2;
	v->a[49470] = anon_sym_PLUS_PLUS;
	v->a[49471] = anon_sym_DASH_DASH;
	v->a[49472] = actions(1736);
	v->a[49473] = 2;
	v->a[49474] = anon_sym_DASH2;
	v->a[49475] = anon_sym_PLUS2;
	v->a[49476] = actions(1744);
	v->a[49477] = 2;
	v->a[49478] = sym_number;
	v->a[49479] = aux_sym__simple_variable_name_token1;
	small_parse_table_2474(v);
}

void	small_parse_table_2474(t_small_parse_table_array *v)
{
	v->a[49480] = state(264);
	v->a[49481] = 3;
	v->a[49482] = sym_string;
	v->a[49483] = sym_simple_expansion;
	v->a[49484] = sym_expansion;
	v->a[49485] = state(316);
	v->a[49486] = 8;
	v->a[49487] = sym__arithmetic_expression;
	v->a[49488] = sym_arithmetic_literal;
	v->a[49489] = sym_arithmetic_binary_expression;
	v->a[49490] = sym_arithmetic_ternary_expression;
	v->a[49491] = sym_arithmetic_unary_expression;
	v->a[49492] = sym_arithmetic_postfix_expression;
	v->a[49493] = sym_arithmetic_parenthesized_expression;
	v->a[49494] = sym_command_substitution;
	v->a[49495] = 15;
	v->a[49496] = actions(680);
	v->a[49497] = 1;
	v->a[49498] = sym_comment;
	v->a[49499] = actions(1574);
	small_parse_table_2475(v);
}

/* EOF small_parse_table_494.c */
