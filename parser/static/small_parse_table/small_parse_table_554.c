/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_554.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2770(t_small_parse_table_array *v)
{
	v->a[55400] = anon_sym_BANG;
	v->a[55401] = actions(1989);
	v->a[55402] = 1;
	v->a[55403] = anon_sym_TILDE;
	v->a[55404] = actions(1991);
	v->a[55405] = 1;
	v->a[55406] = anon_sym_DOLLAR;
	v->a[55407] = actions(1993);
	v->a[55408] = 1;
	v->a[55409] = anon_sym_DQUOTE;
	v->a[55410] = actions(1995);
	v->a[55411] = 1;
	v->a[55412] = aux_sym_number_token1;
	v->a[55413] = actions(1997);
	v->a[55414] = 1;
	v->a[55415] = aux_sym_number_token2;
	v->a[55416] = actions(1999);
	v->a[55417] = 1;
	v->a[55418] = anon_sym_DOLLAR_LBRACE;
	v->a[55419] = actions(2001);
	small_parse_table_2771(v);
}

void	small_parse_table_2771(t_small_parse_table_array *v)
{
	v->a[55420] = 1;
	v->a[55421] = anon_sym_DOLLAR_LPAREN;
	v->a[55422] = actions(2003);
	v->a[55423] = 1;
	v->a[55424] = anon_sym_BQUOTE;
	v->a[55425] = actions(2005);
	v->a[55426] = 1;
	v->a[55427] = aux_sym__simple_variable_name_token1;
	v->a[55428] = actions(2007);
	v->a[55429] = 1;
	v->a[55430] = sym_variable_name;
	v->a[55431] = actions(2047);
	v->a[55432] = 1;
	v->a[55433] = anon_sym_RPAREN_RPAREN;
	v->a[55434] = actions(1985);
	v->a[55435] = 2;
	v->a[55436] = anon_sym_PLUS_PLUS;
	v->a[55437] = anon_sym_DASH_DASH;
	v->a[55438] = actions(1987);
	v->a[55439] = 2;
	small_parse_table_2772(v);
}

void	small_parse_table_2772(t_small_parse_table_array *v)
{
	v->a[55440] = anon_sym_DASH2;
	v->a[55441] = anon_sym_PLUS2;
	v->a[55442] = state(530);
	v->a[55443] = 4;
	v->a[55444] = sym_string;
	v->a[55445] = sym_number;
	v->a[55446] = sym_simple_expansion;
	v->a[55447] = sym_expansion;
	v->a[55448] = state(590);
	v->a[55449] = 8;
	v->a[55450] = sym__arithmetic_expression;
	v->a[55451] = sym_arithmetic_literal;
	v->a[55452] = sym_arithmetic_binary_expression;
	v->a[55453] = sym_arithmetic_ternary_expression;
	v->a[55454] = sym_arithmetic_unary_expression;
	v->a[55455] = sym_arithmetic_postfix_expression;
	v->a[55456] = sym_arithmetic_parenthesized_expression;
	v->a[55457] = sym_command_substitution;
	v->a[55458] = 18;
	v->a[55459] = actions(1404);
	small_parse_table_2773(v);
}

void	small_parse_table_2773(t_small_parse_table_array *v)
{
	v->a[55460] = 1;
	v->a[55461] = sym_comment;
	v->a[55462] = actions(1979);
	v->a[55463] = 1;
	v->a[55464] = anon_sym_LPAREN;
	v->a[55465] = actions(1981);
	v->a[55466] = 1;
	v->a[55467] = anon_sym_BANG;
	v->a[55468] = actions(1989);
	v->a[55469] = 1;
	v->a[55470] = anon_sym_TILDE;
	v->a[55471] = actions(1991);
	v->a[55472] = 1;
	v->a[55473] = anon_sym_DOLLAR;
	v->a[55474] = actions(1993);
	v->a[55475] = 1;
	v->a[55476] = anon_sym_DQUOTE;
	v->a[55477] = actions(1995);
	v->a[55478] = 1;
	v->a[55479] = aux_sym_number_token1;
	small_parse_table_2774(v);
}

void	small_parse_table_2774(t_small_parse_table_array *v)
{
	v->a[55480] = actions(1997);
	v->a[55481] = 1;
	v->a[55482] = aux_sym_number_token2;
	v->a[55483] = actions(1999);
	v->a[55484] = 1;
	v->a[55485] = anon_sym_DOLLAR_LBRACE;
	v->a[55486] = actions(2001);
	v->a[55487] = 1;
	v->a[55488] = anon_sym_DOLLAR_LPAREN;
	v->a[55489] = actions(2003);
	v->a[55490] = 1;
	v->a[55491] = anon_sym_BQUOTE;
	v->a[55492] = actions(2005);
	v->a[55493] = 1;
	v->a[55494] = aux_sym__simple_variable_name_token1;
	v->a[55495] = actions(2007);
	v->a[55496] = 1;
	v->a[55497] = sym_variable_name;
	v->a[55498] = actions(2049);
	v->a[55499] = 1;
	small_parse_table_2775(v);
}

/* EOF small_parse_table_554.c */
