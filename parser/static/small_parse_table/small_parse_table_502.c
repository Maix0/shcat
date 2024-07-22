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
	v->a[50200] = 1;
	v->a[50201] = anon_sym_DOLLAR_LPAREN;
	v->a[50202] = actions(1712);
	v->a[50203] = 1;
	v->a[50204] = anon_sym_BQUOTE;
	v->a[50205] = actions(1714);
	v->a[50206] = 1;
	v->a[50207] = sym_variable_name;
	v->a[50208] = actions(1696);
	v->a[50209] = 2;
	v->a[50210] = anon_sym_PLUS_PLUS;
	v->a[50211] = anon_sym_DASH_DASH;
	v->a[50212] = actions(1698);
	v->a[50213] = 2;
	v->a[50214] = anon_sym_DASH2;
	v->a[50215] = anon_sym_PLUS2;
	v->a[50216] = actions(1706);
	v->a[50217] = 2;
	v->a[50218] = sym_number;
	v->a[50219] = aux_sym__simple_variable_name_token1;
	small_parse_table_2511(v);
}

void	small_parse_table_2511(t_small_parse_table_array *v)
{
	v->a[50220] = state(238);
	v->a[50221] = 3;
	v->a[50222] = sym_string;
	v->a[50223] = sym_simple_expansion;
	v->a[50224] = sym_expansion;
	v->a[50225] = state(295);
	v->a[50226] = 8;
	v->a[50227] = sym__arithmetic_expression;
	v->a[50228] = sym_arithmetic_literal;
	v->a[50229] = sym_arithmetic_binary_expression;
	v->a[50230] = sym_arithmetic_ternary_expression;
	v->a[50231] = sym_arithmetic_unary_expression;
	v->a[50232] = sym_arithmetic_postfix_expression;
	v->a[50233] = sym_arithmetic_parenthesized_expression;
	v->a[50234] = sym_command_substitution;
	v->a[50235] = 15;
	v->a[50236] = actions(501);
	v->a[50237] = 1;
	v->a[50238] = sym_comment;
	v->a[50239] = actions(1692);
	small_parse_table_2512(v);
}

void	small_parse_table_2512(t_small_parse_table_array *v)
{
	v->a[50240] = 1;
	v->a[50241] = anon_sym_LPAREN;
	v->a[50242] = actions(1694);
	v->a[50243] = 1;
	v->a[50244] = anon_sym_BANG;
	v->a[50245] = actions(1700);
	v->a[50246] = 1;
	v->a[50247] = anon_sym_TILDE;
	v->a[50248] = actions(1702);
	v->a[50249] = 1;
	v->a[50250] = anon_sym_DOLLAR;
	v->a[50251] = actions(1704);
	v->a[50252] = 1;
	v->a[50253] = anon_sym_DQUOTE;
	v->a[50254] = actions(1708);
	v->a[50255] = 1;
	v->a[50256] = anon_sym_DOLLAR_LBRACE;
	v->a[50257] = actions(1710);
	v->a[50258] = 1;
	v->a[50259] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_2513(v);
}

void	small_parse_table_2513(t_small_parse_table_array *v)
{
	v->a[50260] = actions(1712);
	v->a[50261] = 1;
	v->a[50262] = anon_sym_BQUOTE;
	v->a[50263] = actions(1714);
	v->a[50264] = 1;
	v->a[50265] = sym_variable_name;
	v->a[50266] = actions(1696);
	v->a[50267] = 2;
	v->a[50268] = anon_sym_PLUS_PLUS;
	v->a[50269] = anon_sym_DASH_DASH;
	v->a[50270] = actions(1698);
	v->a[50271] = 2;
	v->a[50272] = anon_sym_DASH2;
	v->a[50273] = anon_sym_PLUS2;
	v->a[50274] = actions(1706);
	v->a[50275] = 2;
	v->a[50276] = sym_number;
	v->a[50277] = aux_sym__simple_variable_name_token1;
	v->a[50278] = state(238);
	v->a[50279] = 3;
	small_parse_table_2514(v);
}

void	small_parse_table_2514(t_small_parse_table_array *v)
{
	v->a[50280] = sym_string;
	v->a[50281] = sym_simple_expansion;
	v->a[50282] = sym_expansion;
	v->a[50283] = state(286);
	v->a[50284] = 8;
	v->a[50285] = sym__arithmetic_expression;
	v->a[50286] = sym_arithmetic_literal;
	v->a[50287] = sym_arithmetic_binary_expression;
	v->a[50288] = sym_arithmetic_ternary_expression;
	v->a[50289] = sym_arithmetic_unary_expression;
	v->a[50290] = sym_arithmetic_postfix_expression;
	v->a[50291] = sym_arithmetic_parenthesized_expression;
	v->a[50292] = sym_command_substitution;
	v->a[50293] = 15;
	v->a[50294] = actions(501);
	v->a[50295] = 1;
	v->a[50296] = sym_comment;
	v->a[50297] = actions(1692);
	v->a[50298] = 1;
	v->a[50299] = anon_sym_LPAREN;
	small_parse_table_2515(v);
}

/* EOF small_parse_table_502.c */
