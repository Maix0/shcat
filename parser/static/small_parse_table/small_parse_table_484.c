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
	v->a[48400] = actions(1734);
	v->a[48401] = 2;
	v->a[48402] = anon_sym_PLUS_PLUS;
	v->a[48403] = anon_sym_DASH_DASH;
	v->a[48404] = actions(1736);
	v->a[48405] = 2;
	v->a[48406] = anon_sym_DASH2;
	v->a[48407] = anon_sym_PLUS2;
	v->a[48408] = actions(1744);
	v->a[48409] = 2;
	v->a[48410] = sym_number;
	v->a[48411] = aux_sym__simple_variable_name_token1;
	v->a[48412] = state(264);
	v->a[48413] = 3;
	v->a[48414] = sym_string;
	v->a[48415] = sym_simple_expansion;
	v->a[48416] = sym_expansion;
	v->a[48417] = state(325);
	v->a[48418] = 8;
	v->a[48419] = sym__arithmetic_expression;
	small_parse_table_2421(v);
}

void	small_parse_table_2421(t_small_parse_table_array *v)
{
	v->a[48420] = sym_arithmetic_literal;
	v->a[48421] = sym_arithmetic_binary_expression;
	v->a[48422] = sym_arithmetic_ternary_expression;
	v->a[48423] = sym_arithmetic_unary_expression;
	v->a[48424] = sym_arithmetic_postfix_expression;
	v->a[48425] = sym_arithmetic_parenthesized_expression;
	v->a[48426] = sym_command_substitution;
	v->a[48427] = 15;
	v->a[48428] = actions(680);
	v->a[48429] = 1;
	v->a[48430] = sym_comment;
	v->a[48431] = actions(1730);
	v->a[48432] = 1;
	v->a[48433] = anon_sym_LPAREN;
	v->a[48434] = actions(1732);
	v->a[48435] = 1;
	v->a[48436] = anon_sym_BANG;
	v->a[48437] = actions(1738);
	v->a[48438] = 1;
	v->a[48439] = anon_sym_TILDE;
	small_parse_table_2422(v);
}

void	small_parse_table_2422(t_small_parse_table_array *v)
{
	v->a[48440] = actions(1740);
	v->a[48441] = 1;
	v->a[48442] = anon_sym_DOLLAR;
	v->a[48443] = actions(1742);
	v->a[48444] = 1;
	v->a[48445] = anon_sym_DQUOTE;
	v->a[48446] = actions(1746);
	v->a[48447] = 1;
	v->a[48448] = anon_sym_DOLLAR_LBRACE;
	v->a[48449] = actions(1748);
	v->a[48450] = 1;
	v->a[48451] = anon_sym_DOLLAR_LPAREN;
	v->a[48452] = actions(1750);
	v->a[48453] = 1;
	v->a[48454] = anon_sym_BQUOTE;
	v->a[48455] = actions(1752);
	v->a[48456] = 1;
	v->a[48457] = sym_variable_name;
	v->a[48458] = actions(1734);
	v->a[48459] = 2;
	small_parse_table_2423(v);
}

void	small_parse_table_2423(t_small_parse_table_array *v)
{
	v->a[48460] = anon_sym_PLUS_PLUS;
	v->a[48461] = anon_sym_DASH_DASH;
	v->a[48462] = actions(1736);
	v->a[48463] = 2;
	v->a[48464] = anon_sym_DASH2;
	v->a[48465] = anon_sym_PLUS2;
	v->a[48466] = actions(1744);
	v->a[48467] = 2;
	v->a[48468] = sym_number;
	v->a[48469] = aux_sym__simple_variable_name_token1;
	v->a[48470] = state(264);
	v->a[48471] = 3;
	v->a[48472] = sym_string;
	v->a[48473] = sym_simple_expansion;
	v->a[48474] = sym_expansion;
	v->a[48475] = state(326);
	v->a[48476] = 8;
	v->a[48477] = sym__arithmetic_expression;
	v->a[48478] = sym_arithmetic_literal;
	v->a[48479] = sym_arithmetic_binary_expression;
	small_parse_table_2424(v);
}

void	small_parse_table_2424(t_small_parse_table_array *v)
{
	v->a[48480] = sym_arithmetic_ternary_expression;
	v->a[48481] = sym_arithmetic_unary_expression;
	v->a[48482] = sym_arithmetic_postfix_expression;
	v->a[48483] = sym_arithmetic_parenthesized_expression;
	v->a[48484] = sym_command_substitution;
	v->a[48485] = 15;
	v->a[48486] = actions(680);
	v->a[48487] = 1;
	v->a[48488] = sym_comment;
	v->a[48489] = actions(1730);
	v->a[48490] = 1;
	v->a[48491] = anon_sym_LPAREN;
	v->a[48492] = actions(1732);
	v->a[48493] = 1;
	v->a[48494] = anon_sym_BANG;
	v->a[48495] = actions(1738);
	v->a[48496] = 1;
	v->a[48497] = anon_sym_TILDE;
	v->a[48498] = actions(1740);
	v->a[48499] = 1;
	small_parse_table_2425(v);
}

/* EOF small_parse_table_484.c */
