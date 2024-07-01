/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_484.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2420(t_small_parse_table_array *v)
{
	v->a[48400] = actions(1742);
	v->a[48401] = 1;
	v->a[48402] = anon_sym_BANG;
	v->a[48403] = actions(1748);
	v->a[48404] = 1;
	v->a[48405] = anon_sym_TILDE;
	v->a[48406] = actions(1750);
	v->a[48407] = 1;
	v->a[48408] = anon_sym_DOLLAR;
	v->a[48409] = actions(1752);
	v->a[48410] = 1;
	v->a[48411] = anon_sym_DQUOTE;
	v->a[48412] = actions(1756);
	v->a[48413] = 1;
	v->a[48414] = anon_sym_DOLLAR_LBRACE;
	v->a[48415] = actions(1758);
	v->a[48416] = 1;
	v->a[48417] = anon_sym_DOLLAR_LPAREN;
	v->a[48418] = actions(1760);
	v->a[48419] = 1;
	small_parse_table_2421(v);
}

void	small_parse_table_2421(t_small_parse_table_array *v)
{
	v->a[48420] = anon_sym_BQUOTE;
	v->a[48421] = actions(1762);
	v->a[48422] = 1;
	v->a[48423] = sym_variable_name;
	v->a[48424] = actions(1744);
	v->a[48425] = 2;
	v->a[48426] = anon_sym_PLUS_PLUS;
	v->a[48427] = anon_sym_DASH_DASH;
	v->a[48428] = actions(1746);
	v->a[48429] = 2;
	v->a[48430] = anon_sym_DASH2;
	v->a[48431] = anon_sym_PLUS2;
	v->a[48432] = actions(1754);
	v->a[48433] = 2;
	v->a[48434] = sym_number;
	v->a[48435] = aux_sym__simple_variable_name_token1;
	v->a[48436] = state(260);
	v->a[48437] = 3;
	v->a[48438] = sym_string;
	v->a[48439] = sym_simple_expansion;
	small_parse_table_2422(v);
}

void	small_parse_table_2422(t_small_parse_table_array *v)
{
	v->a[48440] = sym_expansion;
	v->a[48441] = state(334);
	v->a[48442] = 8;
	v->a[48443] = sym__arithmetic_expression;
	v->a[48444] = sym_arithmetic_literal;
	v->a[48445] = sym_arithmetic_binary_expression;
	v->a[48446] = sym_arithmetic_ternary_expression;
	v->a[48447] = sym_arithmetic_unary_expression;
	v->a[48448] = sym_arithmetic_postfix_expression;
	v->a[48449] = sym_arithmetic_parenthesized_expression;
	v->a[48450] = sym_command_substitution;
	v->a[48451] = 15;
	v->a[48452] = actions(664);
	v->a[48453] = 1;
	v->a[48454] = sym_comment;
	v->a[48455] = actions(1560);
	v->a[48456] = 1;
	v->a[48457] = anon_sym_LPAREN;
	v->a[48458] = actions(1562);
	v->a[48459] = 1;
	small_parse_table_2423(v);
}

void	small_parse_table_2423(t_small_parse_table_array *v)
{
	v->a[48460] = anon_sym_BANG;
	v->a[48461] = actions(1570);
	v->a[48462] = 1;
	v->a[48463] = anon_sym_TILDE;
	v->a[48464] = actions(1572);
	v->a[48465] = 1;
	v->a[48466] = anon_sym_DOLLAR;
	v->a[48467] = actions(1574);
	v->a[48468] = 1;
	v->a[48469] = anon_sym_DQUOTE;
	v->a[48470] = actions(1578);
	v->a[48471] = 1;
	v->a[48472] = anon_sym_DOLLAR_LBRACE;
	v->a[48473] = actions(1580);
	v->a[48474] = 1;
	v->a[48475] = anon_sym_DOLLAR_LPAREN;
	v->a[48476] = actions(1582);
	v->a[48477] = 1;
	v->a[48478] = anon_sym_BQUOTE;
	v->a[48479] = actions(1584);
	small_parse_table_2424(v);
}

void	small_parse_table_2424(t_small_parse_table_array *v)
{
	v->a[48480] = 1;
	v->a[48481] = sym_variable_name;
	v->a[48482] = actions(1566);
	v->a[48483] = 2;
	v->a[48484] = anon_sym_PLUS_PLUS;
	v->a[48485] = anon_sym_DASH_DASH;
	v->a[48486] = actions(1568);
	v->a[48487] = 2;
	v->a[48488] = anon_sym_DASH2;
	v->a[48489] = anon_sym_PLUS2;
	v->a[48490] = actions(1576);
	v->a[48491] = 2;
	v->a[48492] = sym_number;
	v->a[48493] = aux_sym__simple_variable_name_token1;
	v->a[48494] = state(255);
	v->a[48495] = 3;
	v->a[48496] = sym_string;
	v->a[48497] = sym_simple_expansion;
	v->a[48498] = sym_expansion;
	v->a[48499] = state(208);
	small_parse_table_2425(v);
}

/* EOF small_parse_table_484.c */
