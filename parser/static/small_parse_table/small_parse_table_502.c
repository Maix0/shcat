/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_502.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2510(t_small_parse_table_array *v)
{
	v->a[50200] = sym_command_substitution;
	v->a[50201] = 15;
	v->a[50202] = actions(664);
	v->a[50203] = 1;
	v->a[50204] = sym_comment;
	v->a[50205] = actions(1560);
	v->a[50206] = 1;
	v->a[50207] = anon_sym_LPAREN;
	v->a[50208] = actions(1562);
	v->a[50209] = 1;
	v->a[50210] = anon_sym_BANG;
	v->a[50211] = actions(1570);
	v->a[50212] = 1;
	v->a[50213] = anon_sym_TILDE;
	v->a[50214] = actions(1572);
	v->a[50215] = 1;
	v->a[50216] = anon_sym_DOLLAR;
	v->a[50217] = actions(1574);
	v->a[50218] = 1;
	v->a[50219] = anon_sym_DQUOTE;
	small_parse_table_2511(v);
}

void	small_parse_table_2511(t_small_parse_table_array *v)
{
	v->a[50220] = actions(1578);
	v->a[50221] = 1;
	v->a[50222] = anon_sym_DOLLAR_LBRACE;
	v->a[50223] = actions(1580);
	v->a[50224] = 1;
	v->a[50225] = anon_sym_DOLLAR_LPAREN;
	v->a[50226] = actions(1582);
	v->a[50227] = 1;
	v->a[50228] = anon_sym_BQUOTE;
	v->a[50229] = actions(1584);
	v->a[50230] = 1;
	v->a[50231] = sym_variable_name;
	v->a[50232] = actions(1566);
	v->a[50233] = 2;
	v->a[50234] = anon_sym_PLUS_PLUS;
	v->a[50235] = anon_sym_DASH_DASH;
	v->a[50236] = actions(1568);
	v->a[50237] = 2;
	v->a[50238] = anon_sym_DASH2;
	v->a[50239] = anon_sym_PLUS2;
	small_parse_table_2512(v);
}

void	small_parse_table_2512(t_small_parse_table_array *v)
{
	v->a[50240] = actions(1576);
	v->a[50241] = 2;
	v->a[50242] = sym_number;
	v->a[50243] = aux_sym__simple_variable_name_token1;
	v->a[50244] = state(255);
	v->a[50245] = 3;
	v->a[50246] = sym_string;
	v->a[50247] = sym_simple_expansion;
	v->a[50248] = sym_expansion;
	v->a[50249] = state(249);
	v->a[50250] = 8;
	v->a[50251] = sym__arithmetic_expression;
	v->a[50252] = sym_arithmetic_literal;
	v->a[50253] = sym_arithmetic_binary_expression;
	v->a[50254] = sym_arithmetic_ternary_expression;
	v->a[50255] = sym_arithmetic_unary_expression;
	v->a[50256] = sym_arithmetic_postfix_expression;
	v->a[50257] = sym_arithmetic_parenthesized_expression;
	v->a[50258] = sym_command_substitution;
	v->a[50259] = 15;
	small_parse_table_2513(v);
}

void	small_parse_table_2513(t_small_parse_table_array *v)
{
	v->a[50260] = actions(664);
	v->a[50261] = 1;
	v->a[50262] = sym_comment;
	v->a[50263] = actions(1740);
	v->a[50264] = 1;
	v->a[50265] = anon_sym_LPAREN;
	v->a[50266] = actions(1742);
	v->a[50267] = 1;
	v->a[50268] = anon_sym_BANG;
	v->a[50269] = actions(1748);
	v->a[50270] = 1;
	v->a[50271] = anon_sym_TILDE;
	v->a[50272] = actions(1750);
	v->a[50273] = 1;
	v->a[50274] = anon_sym_DOLLAR;
	v->a[50275] = actions(1752);
	v->a[50276] = 1;
	v->a[50277] = anon_sym_DQUOTE;
	v->a[50278] = actions(1756);
	v->a[50279] = 1;
	small_parse_table_2514(v);
}

void	small_parse_table_2514(t_small_parse_table_array *v)
{
	v->a[50280] = anon_sym_DOLLAR_LBRACE;
	v->a[50281] = actions(1758);
	v->a[50282] = 1;
	v->a[50283] = anon_sym_DOLLAR_LPAREN;
	v->a[50284] = actions(1760);
	v->a[50285] = 1;
	v->a[50286] = anon_sym_BQUOTE;
	v->a[50287] = actions(1762);
	v->a[50288] = 1;
	v->a[50289] = sym_variable_name;
	v->a[50290] = actions(1744);
	v->a[50291] = 2;
	v->a[50292] = anon_sym_PLUS_PLUS;
	v->a[50293] = anon_sym_DASH_DASH;
	v->a[50294] = actions(1746);
	v->a[50295] = 2;
	v->a[50296] = anon_sym_DASH2;
	v->a[50297] = anon_sym_PLUS2;
	v->a[50298] = actions(1754);
	v->a[50299] = 2;
	small_parse_table_2515(v);
}

/* EOF small_parse_table_502.c */
