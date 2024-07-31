/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_421.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2105(t_small_parse_table_array *v)
{
	v->a[42100] = actions(1532);
	v->a[42101] = 1;
	v->a[42102] = anon_sym_DQUOTE;
	v->a[42103] = actions(1536);
	v->a[42104] = 1;
	v->a[42105] = anon_sym_DOLLAR_LBRACE;
	v->a[42106] = actions(1538);
	v->a[42107] = 1;
	v->a[42108] = sym_variable_name;
	v->a[42109] = actions(1526);
	v->a[42110] = 2;
	v->a[42111] = anon_sym_PLUS_PLUS;
	v->a[42112] = anon_sym_DASH_DASH;
	v->a[42113] = actions(1528);
	v->a[42114] = 2;
	v->a[42115] = anon_sym_DASH2;
	v->a[42116] = anon_sym_PLUS2;
	v->a[42117] = actions(1534);
	v->a[42118] = 2;
	v->a[42119] = sym_number;
	small_parse_table_2106(v);
}

void	small_parse_table_2106(t_small_parse_table_array *v)
{
	v->a[42120] = aux_sym__simple_variable_name_token1;
	v->a[42121] = state(206);
	v->a[42122] = 3;
	v->a[42123] = sym_string;
	v->a[42124] = sym_simple_expansion;
	v->a[42125] = sym_expansion;
	v->a[42126] = state(229);
	v->a[42127] = 7;
	v->a[42128] = sym__arithmetic_expression;
	v->a[42129] = sym_arithmetic_literal;
	v->a[42130] = sym_arithmetic_binary_expression;
	v->a[42131] = sym_arithmetic_ternary_expression;
	v->a[42132] = sym_arithmetic_unary_expression;
	v->a[42133] = sym_arithmetic_postfix_expression;
	v->a[42134] = sym_arithmetic_parenthesized_expression;
	v->a[42135] = 12;
	v->a[42136] = actions(407);
	v->a[42137] = 1;
	v->a[42138] = sym_comment;
	v->a[42139] = actions(1522);
	small_parse_table_2107(v);
}

void	small_parse_table_2107(t_small_parse_table_array *v)
{
	v->a[42140] = 1;
	v->a[42141] = anon_sym_LPAREN;
	v->a[42142] = actions(1524);
	v->a[42143] = 1;
	v->a[42144] = anon_sym_BANG;
	v->a[42145] = actions(1530);
	v->a[42146] = 1;
	v->a[42147] = anon_sym_DOLLAR;
	v->a[42148] = actions(1532);
	v->a[42149] = 1;
	v->a[42150] = anon_sym_DQUOTE;
	v->a[42151] = actions(1536);
	v->a[42152] = 1;
	v->a[42153] = anon_sym_DOLLAR_LBRACE;
	v->a[42154] = actions(1538);
	v->a[42155] = 1;
	v->a[42156] = sym_variable_name;
	v->a[42157] = actions(1526);
	v->a[42158] = 2;
	v->a[42159] = anon_sym_PLUS_PLUS;
	small_parse_table_2108(v);
}

void	small_parse_table_2108(t_small_parse_table_array *v)
{
	v->a[42160] = anon_sym_DASH_DASH;
	v->a[42161] = actions(1528);
	v->a[42162] = 2;
	v->a[42163] = anon_sym_DASH2;
	v->a[42164] = anon_sym_PLUS2;
	v->a[42165] = actions(1534);
	v->a[42166] = 2;
	v->a[42167] = sym_number;
	v->a[42168] = aux_sym__simple_variable_name_token1;
	v->a[42169] = state(206);
	v->a[42170] = 3;
	v->a[42171] = sym_string;
	v->a[42172] = sym_simple_expansion;
	v->a[42173] = sym_expansion;
	v->a[42174] = state(230);
	v->a[42175] = 7;
	v->a[42176] = sym__arithmetic_expression;
	v->a[42177] = sym_arithmetic_literal;
	v->a[42178] = sym_arithmetic_binary_expression;
	v->a[42179] = sym_arithmetic_ternary_expression;
	small_parse_table_2109(v);
}

void	small_parse_table_2109(t_small_parse_table_array *v)
{
	v->a[42180] = sym_arithmetic_unary_expression;
	v->a[42181] = sym_arithmetic_postfix_expression;
	v->a[42182] = sym_arithmetic_parenthesized_expression;
	v->a[42183] = 12;
	v->a[42184] = actions(407);
	v->a[42185] = 1;
	v->a[42186] = sym_comment;
	v->a[42187] = actions(1522);
	v->a[42188] = 1;
	v->a[42189] = anon_sym_LPAREN;
	v->a[42190] = actions(1524);
	v->a[42191] = 1;
	v->a[42192] = anon_sym_BANG;
	v->a[42193] = actions(1530);
	v->a[42194] = 1;
	v->a[42195] = anon_sym_DOLLAR;
	v->a[42196] = actions(1532);
	v->a[42197] = 1;
	v->a[42198] = anon_sym_DQUOTE;
	v->a[42199] = actions(1536);
	small_parse_table_2110(v);
}

/* EOF small_parse_table_421.c */
