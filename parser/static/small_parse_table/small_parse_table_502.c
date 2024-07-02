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
	v->a[50200] = sym_comment;
	v->a[50201] = actions(1424);
	v->a[50202] = 1;
	v->a[50203] = anon_sym_BQUOTE;
	v->a[50204] = actions(1426);
	v->a[50205] = 2;
	v->a[50206] = sym_file_descriptor;
	v->a[50207] = sym_variable_name;
	v->a[50208] = actions(1422);
	v->a[50209] = 23;
	v->a[50210] = anon_sym_for;
	v->a[50211] = anon_sym_while;
	v->a[50212] = anon_sym_until;
	v->a[50213] = anon_sym_if;
	v->a[50214] = anon_sym_case;
	v->a[50215] = anon_sym_LPAREN;
	v->a[50216] = anon_sym_LBRACE;
	v->a[50217] = anon_sym_BANG;
	v->a[50218] = anon_sym_LT;
	v->a[50219] = anon_sym_GT;
	small_parse_table_2511(v);
}

void	small_parse_table_2511(t_small_parse_table_array *v)
{
	v->a[50220] = anon_sym_GT_GT;
	v->a[50221] = anon_sym_LT_AMP;
	v->a[50222] = anon_sym_GT_AMP;
	v->a[50223] = anon_sym_GT_PIPE;
	v->a[50224] = anon_sym_LT_GT;
	v->a[50225] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[50226] = anon_sym_DOLLAR;
	v->a[50227] = anon_sym_DQUOTE;
	v->a[50228] = sym_raw_string;
	v->a[50229] = sym_number;
	v->a[50230] = anon_sym_DOLLAR_LBRACE;
	v->a[50231] = anon_sym_DOLLAR_LPAREN;
	v->a[50232] = sym_word;
	v->a[50233] = 15;
	v->a[50234] = actions(680);
	v->a[50235] = 1;
	v->a[50236] = sym_comment;
	v->a[50237] = actions(1730);
	v->a[50238] = 1;
	v->a[50239] = anon_sym_LPAREN;
	small_parse_table_2512(v);
}

void	small_parse_table_2512(t_small_parse_table_array *v)
{
	v->a[50240] = actions(1732);
	v->a[50241] = 1;
	v->a[50242] = anon_sym_BANG;
	v->a[50243] = actions(1738);
	v->a[50244] = 1;
	v->a[50245] = anon_sym_TILDE;
	v->a[50246] = actions(1740);
	v->a[50247] = 1;
	v->a[50248] = anon_sym_DOLLAR;
	v->a[50249] = actions(1742);
	v->a[50250] = 1;
	v->a[50251] = anon_sym_DQUOTE;
	v->a[50252] = actions(1746);
	v->a[50253] = 1;
	v->a[50254] = anon_sym_DOLLAR_LBRACE;
	v->a[50255] = actions(1748);
	v->a[50256] = 1;
	v->a[50257] = anon_sym_DOLLAR_LPAREN;
	v->a[50258] = actions(1750);
	v->a[50259] = 1;
	small_parse_table_2513(v);
}

void	small_parse_table_2513(t_small_parse_table_array *v)
{
	v->a[50260] = anon_sym_BQUOTE;
	v->a[50261] = actions(1752);
	v->a[50262] = 1;
	v->a[50263] = sym_variable_name;
	v->a[50264] = actions(1734);
	v->a[50265] = 2;
	v->a[50266] = anon_sym_PLUS_PLUS;
	v->a[50267] = anon_sym_DASH_DASH;
	v->a[50268] = actions(1736);
	v->a[50269] = 2;
	v->a[50270] = anon_sym_DASH2;
	v->a[50271] = anon_sym_PLUS2;
	v->a[50272] = actions(1744);
	v->a[50273] = 2;
	v->a[50274] = sym_number;
	v->a[50275] = aux_sym__simple_variable_name_token1;
	v->a[50276] = state(264);
	v->a[50277] = 3;
	v->a[50278] = sym_string;
	v->a[50279] = sym_simple_expansion;
	small_parse_table_2514(v);
}

void	small_parse_table_2514(t_small_parse_table_array *v)
{
	v->a[50280] = sym_expansion;
	v->a[50281] = state(286);
	v->a[50282] = 8;
	v->a[50283] = sym__arithmetic_expression;
	v->a[50284] = sym_arithmetic_literal;
	v->a[50285] = sym_arithmetic_binary_expression;
	v->a[50286] = sym_arithmetic_ternary_expression;
	v->a[50287] = sym_arithmetic_unary_expression;
	v->a[50288] = sym_arithmetic_postfix_expression;
	v->a[50289] = sym_arithmetic_parenthesized_expression;
	v->a[50290] = sym_command_substitution;
	v->a[50291] = 4;
	v->a[50292] = actions(3);
	v->a[50293] = 1;
	v->a[50294] = sym_comment;
	v->a[50295] = actions(1483);
	v->a[50296] = 1;
	v->a[50297] = anon_sym_BQUOTE;
	v->a[50298] = actions(1426);
	v->a[50299] = 2;
	small_parse_table_2515(v);
}

/* EOF small_parse_table_502.c */
