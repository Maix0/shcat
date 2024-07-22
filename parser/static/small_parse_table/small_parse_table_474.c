/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_474.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2370(t_small_parse_table_array *v)
{
	v->a[47400] = anon_sym_DOLLAR;
	v->a[47401] = actions(1704);
	v->a[47402] = 1;
	v->a[47403] = anon_sym_DQUOTE;
	v->a[47404] = actions(1708);
	v->a[47405] = 1;
	v->a[47406] = anon_sym_DOLLAR_LBRACE;
	v->a[47407] = actions(1710);
	v->a[47408] = 1;
	v->a[47409] = anon_sym_DOLLAR_LPAREN;
	v->a[47410] = actions(1712);
	v->a[47411] = 1;
	v->a[47412] = anon_sym_BQUOTE;
	v->a[47413] = actions(1714);
	v->a[47414] = 1;
	v->a[47415] = sym_variable_name;
	v->a[47416] = actions(1696);
	v->a[47417] = 2;
	v->a[47418] = anon_sym_PLUS_PLUS;
	v->a[47419] = anon_sym_DASH_DASH;
	small_parse_table_2371(v);
}

void	small_parse_table_2371(t_small_parse_table_array *v)
{
	v->a[47420] = actions(1698);
	v->a[47421] = 2;
	v->a[47422] = anon_sym_DASH2;
	v->a[47423] = anon_sym_PLUS2;
	v->a[47424] = actions(1706);
	v->a[47425] = 2;
	v->a[47426] = sym_number;
	v->a[47427] = aux_sym__simple_variable_name_token1;
	v->a[47428] = state(238);
	v->a[47429] = 3;
	v->a[47430] = sym_string;
	v->a[47431] = sym_simple_expansion;
	v->a[47432] = sym_expansion;
	v->a[47433] = state(246);
	v->a[47434] = 8;
	v->a[47435] = sym__arithmetic_expression;
	v->a[47436] = sym_arithmetic_literal;
	v->a[47437] = sym_arithmetic_binary_expression;
	v->a[47438] = sym_arithmetic_ternary_expression;
	v->a[47439] = sym_arithmetic_unary_expression;
	small_parse_table_2372(v);
}

void	small_parse_table_2372(t_small_parse_table_array *v)
{
	v->a[47440] = sym_arithmetic_postfix_expression;
	v->a[47441] = sym_arithmetic_parenthesized_expression;
	v->a[47442] = sym_command_substitution;
	v->a[47443] = 15;
	v->a[47444] = actions(501);
	v->a[47445] = 1;
	v->a[47446] = sym_comment;
	v->a[47447] = actions(1692);
	v->a[47448] = 1;
	v->a[47449] = anon_sym_LPAREN;
	v->a[47450] = actions(1694);
	v->a[47451] = 1;
	v->a[47452] = anon_sym_BANG;
	v->a[47453] = actions(1700);
	v->a[47454] = 1;
	v->a[47455] = anon_sym_TILDE;
	v->a[47456] = actions(1702);
	v->a[47457] = 1;
	v->a[47458] = anon_sym_DOLLAR;
	v->a[47459] = actions(1704);
	small_parse_table_2373(v);
}

void	small_parse_table_2373(t_small_parse_table_array *v)
{
	v->a[47460] = 1;
	v->a[47461] = anon_sym_DQUOTE;
	v->a[47462] = actions(1708);
	v->a[47463] = 1;
	v->a[47464] = anon_sym_DOLLAR_LBRACE;
	v->a[47465] = actions(1710);
	v->a[47466] = 1;
	v->a[47467] = anon_sym_DOLLAR_LPAREN;
	v->a[47468] = actions(1712);
	v->a[47469] = 1;
	v->a[47470] = anon_sym_BQUOTE;
	v->a[47471] = actions(1714);
	v->a[47472] = 1;
	v->a[47473] = sym_variable_name;
	v->a[47474] = actions(1696);
	v->a[47475] = 2;
	v->a[47476] = anon_sym_PLUS_PLUS;
	v->a[47477] = anon_sym_DASH_DASH;
	v->a[47478] = actions(1698);
	v->a[47479] = 2;
	small_parse_table_2374(v);
}

void	small_parse_table_2374(t_small_parse_table_array *v)
{
	v->a[47480] = anon_sym_DASH2;
	v->a[47481] = anon_sym_PLUS2;
	v->a[47482] = actions(1706);
	v->a[47483] = 2;
	v->a[47484] = sym_number;
	v->a[47485] = aux_sym__simple_variable_name_token1;
	v->a[47486] = state(238);
	v->a[47487] = 3;
	v->a[47488] = sym_string;
	v->a[47489] = sym_simple_expansion;
	v->a[47490] = sym_expansion;
	v->a[47491] = state(319);
	v->a[47492] = 8;
	v->a[47493] = sym__arithmetic_expression;
	v->a[47494] = sym_arithmetic_literal;
	v->a[47495] = sym_arithmetic_binary_expression;
	v->a[47496] = sym_arithmetic_ternary_expression;
	v->a[47497] = sym_arithmetic_unary_expression;
	v->a[47498] = sym_arithmetic_postfix_expression;
	v->a[47499] = sym_arithmetic_parenthesized_expression;
	small_parse_table_2375(v);
}

/* EOF small_parse_table_474.c */
