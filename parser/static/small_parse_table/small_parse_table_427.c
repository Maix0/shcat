/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_427.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2135(t_small_parse_table_array *v)
{
	v->a[42700] = 2;
	v->a[42701] = sym_number;
	v->a[42702] = aux_sym__simple_variable_name_token1;
	v->a[42703] = state(157);
	v->a[42704] = 3;
	v->a[42705] = sym_string;
	v->a[42706] = sym_simple_expansion;
	v->a[42707] = sym_expansion;
	v->a[42708] = state(168);
	v->a[42709] = 7;
	v->a[42710] = sym__arithmetic_expression;
	v->a[42711] = sym_arithmetic_literal;
	v->a[42712] = sym_arithmetic_binary_expression;
	v->a[42713] = sym_arithmetic_ternary_expression;
	v->a[42714] = sym_arithmetic_unary_expression;
	v->a[42715] = sym_arithmetic_postfix_expression;
	v->a[42716] = sym_arithmetic_parenthesized_expression;
	v->a[42717] = 12;
	v->a[42718] = actions(407);
	v->a[42719] = 1;
	small_parse_table_2136(v);
}

void	small_parse_table_2136(t_small_parse_table_array *v)
{
	v->a[42720] = sym_comment;
	v->a[42721] = actions(1522);
	v->a[42722] = 1;
	v->a[42723] = anon_sym_LPAREN;
	v->a[42724] = actions(1524);
	v->a[42725] = 1;
	v->a[42726] = anon_sym_BANG;
	v->a[42727] = actions(1530);
	v->a[42728] = 1;
	v->a[42729] = anon_sym_DOLLAR;
	v->a[42730] = actions(1532);
	v->a[42731] = 1;
	v->a[42732] = anon_sym_DQUOTE;
	v->a[42733] = actions(1536);
	v->a[42734] = 1;
	v->a[42735] = anon_sym_DOLLAR_LBRACE;
	v->a[42736] = actions(1538);
	v->a[42737] = 1;
	v->a[42738] = sym_variable_name;
	v->a[42739] = actions(1526);
	small_parse_table_2137(v);
}

void	small_parse_table_2137(t_small_parse_table_array *v)
{
	v->a[42740] = 2;
	v->a[42741] = anon_sym_PLUS_PLUS;
	v->a[42742] = anon_sym_DASH_DASH;
	v->a[42743] = actions(1528);
	v->a[42744] = 2;
	v->a[42745] = anon_sym_DASH2;
	v->a[42746] = anon_sym_PLUS2;
	v->a[42747] = actions(1534);
	v->a[42748] = 2;
	v->a[42749] = sym_number;
	v->a[42750] = aux_sym__simple_variable_name_token1;
	v->a[42751] = state(206);
	v->a[42752] = 3;
	v->a[42753] = sym_string;
	v->a[42754] = sym_simple_expansion;
	v->a[42755] = sym_expansion;
	v->a[42756] = state(211);
	v->a[42757] = 7;
	v->a[42758] = sym__arithmetic_expression;
	v->a[42759] = sym_arithmetic_literal;
	small_parse_table_2138(v);
}

void	small_parse_table_2138(t_small_parse_table_array *v)
{
	v->a[42760] = sym_arithmetic_binary_expression;
	v->a[42761] = sym_arithmetic_ternary_expression;
	v->a[42762] = sym_arithmetic_unary_expression;
	v->a[42763] = sym_arithmetic_postfix_expression;
	v->a[42764] = sym_arithmetic_parenthesized_expression;
	v->a[42765] = 12;
	v->a[42766] = actions(407);
	v->a[42767] = 1;
	v->a[42768] = sym_comment;
	v->a[42769] = actions(1540);
	v->a[42770] = 1;
	v->a[42771] = anon_sym_LPAREN;
	v->a[42772] = actions(1542);
	v->a[42773] = 1;
	v->a[42774] = anon_sym_BANG;
	v->a[42775] = actions(1548);
	v->a[42776] = 1;
	v->a[42777] = anon_sym_DOLLAR;
	v->a[42778] = actions(1550);
	v->a[42779] = 1;
	small_parse_table_2139(v);
}

void	small_parse_table_2139(t_small_parse_table_array *v)
{
	v->a[42780] = anon_sym_DQUOTE;
	v->a[42781] = actions(1554);
	v->a[42782] = 1;
	v->a[42783] = anon_sym_DOLLAR_LBRACE;
	v->a[42784] = actions(1556);
	v->a[42785] = 1;
	v->a[42786] = sym_variable_name;
	v->a[42787] = actions(1544);
	v->a[42788] = 2;
	v->a[42789] = anon_sym_PLUS_PLUS;
	v->a[42790] = anon_sym_DASH_DASH;
	v->a[42791] = actions(1546);
	v->a[42792] = 2;
	v->a[42793] = anon_sym_DASH2;
	v->a[42794] = anon_sym_PLUS2;
	v->a[42795] = actions(1552);
	v->a[42796] = 2;
	v->a[42797] = sym_number;
	v->a[42798] = aux_sym__simple_variable_name_token1;
	v->a[42799] = state(157);
	small_parse_table_2140(v);
}

/* EOF small_parse_table_427.c */
