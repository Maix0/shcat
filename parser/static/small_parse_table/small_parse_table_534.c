/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_534.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2670(t_small_parse_table_array *v)
{
	v->a[53400] = 1;
	v->a[53401] = sym_comment;
	v->a[53402] = actions(1744);
	v->a[53403] = 1;
	v->a[53404] = anon_sym_LPAREN;
	v->a[53405] = actions(1746);
	v->a[53406] = 1;
	v->a[53407] = anon_sym_BANG;
	v->a[53408] = actions(1754);
	v->a[53409] = 1;
	v->a[53410] = anon_sym_TILDE;
	v->a[53411] = actions(1756);
	v->a[53412] = 1;
	v->a[53413] = anon_sym_DOLLAR;
	v->a[53414] = actions(1758);
	v->a[53415] = 1;
	v->a[53416] = anon_sym_DQUOTE;
	v->a[53417] = actions(1762);
	v->a[53418] = 1;
	v->a[53419] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_2671(v);
}

void	small_parse_table_2671(t_small_parse_table_array *v)
{
	v->a[53420] = actions(1764);
	v->a[53421] = 1;
	v->a[53422] = anon_sym_DOLLAR_LPAREN;
	v->a[53423] = actions(1766);
	v->a[53424] = 1;
	v->a[53425] = anon_sym_BQUOTE;
	v->a[53426] = actions(1768);
	v->a[53427] = 1;
	v->a[53428] = sym_variable_name;
	v->a[53429] = actions(1876);
	v->a[53430] = 1;
	v->a[53431] = anon_sym_RPAREN_RPAREN;
	v->a[53432] = actions(1750);
	v->a[53433] = 2;
	v->a[53434] = anon_sym_PLUS_PLUS;
	v->a[53435] = anon_sym_DASH_DASH;
	v->a[53436] = actions(1752);
	v->a[53437] = 2;
	v->a[53438] = anon_sym_DASH2;
	v->a[53439] = anon_sym_PLUS2;
	small_parse_table_2672(v);
}

void	small_parse_table_2672(t_small_parse_table_array *v)
{
	v->a[53440] = actions(1760);
	v->a[53441] = 2;
	v->a[53442] = sym_number;
	v->a[53443] = aux_sym__simple_variable_name_token1;
	v->a[53444] = state(271);
	v->a[53445] = 3;
	v->a[53446] = sym_string;
	v->a[53447] = sym_simple_expansion;
	v->a[53448] = sym_expansion;
	v->a[53449] = state(345);
	v->a[53450] = 8;
	v->a[53451] = sym__arithmetic_expression;
	v->a[53452] = sym_arithmetic_literal;
	v->a[53453] = sym_arithmetic_binary_expression;
	v->a[53454] = sym_arithmetic_ternary_expression;
	v->a[53455] = sym_arithmetic_unary_expression;
	v->a[53456] = sym_arithmetic_postfix_expression;
	v->a[53457] = sym_arithmetic_parenthesized_expression;
	v->a[53458] = sym_command_substitution;
	v->a[53459] = 16;
	small_parse_table_2673(v);
}

void	small_parse_table_2673(t_small_parse_table_array *v)
{
	v->a[53460] = actions(870);
	v->a[53461] = 1;
	v->a[53462] = sym_comment;
	v->a[53463] = actions(1744);
	v->a[53464] = 1;
	v->a[53465] = anon_sym_LPAREN;
	v->a[53466] = actions(1746);
	v->a[53467] = 1;
	v->a[53468] = anon_sym_BANG;
	v->a[53469] = actions(1754);
	v->a[53470] = 1;
	v->a[53471] = anon_sym_TILDE;
	v->a[53472] = actions(1756);
	v->a[53473] = 1;
	v->a[53474] = anon_sym_DOLLAR;
	v->a[53475] = actions(1758);
	v->a[53476] = 1;
	v->a[53477] = anon_sym_DQUOTE;
	v->a[53478] = actions(1762);
	v->a[53479] = 1;
	small_parse_table_2674(v);
}

void	small_parse_table_2674(t_small_parse_table_array *v)
{
	v->a[53480] = anon_sym_DOLLAR_LBRACE;
	v->a[53481] = actions(1764);
	v->a[53482] = 1;
	v->a[53483] = anon_sym_DOLLAR_LPAREN;
	v->a[53484] = actions(1766);
	v->a[53485] = 1;
	v->a[53486] = anon_sym_BQUOTE;
	v->a[53487] = actions(1768);
	v->a[53488] = 1;
	v->a[53489] = sym_variable_name;
	v->a[53490] = actions(1878);
	v->a[53491] = 1;
	v->a[53492] = anon_sym_RPAREN_RPAREN;
	v->a[53493] = actions(1750);
	v->a[53494] = 2;
	v->a[53495] = anon_sym_PLUS_PLUS;
	v->a[53496] = anon_sym_DASH_DASH;
	v->a[53497] = actions(1752);
	v->a[53498] = 2;
	v->a[53499] = anon_sym_DASH2;
	small_parse_table_2675(v);
}

/* EOF small_parse_table_534.c */
