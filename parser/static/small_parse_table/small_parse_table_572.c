/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_572.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2860(t_small_parse_table_array *v)
{
	v->a[57200] = anon_sym_LPAREN;
	v->a[57201] = actions(1833);
	v->a[57202] = 1;
	v->a[57203] = anon_sym_BANG;
	v->a[57204] = actions(1841);
	v->a[57205] = 1;
	v->a[57206] = anon_sym_TILDE;
	v->a[57207] = actions(1843);
	v->a[57208] = 1;
	v->a[57209] = anon_sym_DOLLAR;
	v->a[57210] = actions(1845);
	v->a[57211] = 1;
	v->a[57212] = anon_sym_DQUOTE;
	v->a[57213] = actions(1849);
	v->a[57214] = 1;
	v->a[57215] = anon_sym_DOLLAR_LBRACE;
	v->a[57216] = actions(1851);
	v->a[57217] = 1;
	v->a[57218] = anon_sym_DOLLAR_LPAREN;
	v->a[57219] = actions(1853);
	small_parse_table_2861(v);
}

void	small_parse_table_2861(t_small_parse_table_array *v)
{
	v->a[57220] = 1;
	v->a[57221] = anon_sym_BQUOTE;
	v->a[57222] = actions(1855);
	v->a[57223] = 1;
	v->a[57224] = sym_variable_name;
	v->a[57225] = actions(1937);
	v->a[57226] = 1;
	v->a[57227] = anon_sym_RPAREN_RPAREN;
	v->a[57228] = actions(1837);
	v->a[57229] = 2;
	v->a[57230] = anon_sym_PLUS_PLUS;
	v->a[57231] = anon_sym_DASH_DASH;
	v->a[57232] = actions(1839);
	v->a[57233] = 2;
	v->a[57234] = anon_sym_DASH2;
	v->a[57235] = anon_sym_PLUS2;
	v->a[57236] = actions(1847);
	v->a[57237] = 2;
	v->a[57238] = sym_number;
	v->a[57239] = aux_sym__simple_variable_name_token1;
	small_parse_table_2862(v);
}

void	small_parse_table_2862(t_small_parse_table_array *v)
{
	v->a[57240] = state(370);
	v->a[57241] = 3;
	v->a[57242] = sym_string;
	v->a[57243] = sym_simple_expansion;
	v->a[57244] = sym_expansion;
	v->a[57245] = state(528);
	v->a[57246] = 8;
	v->a[57247] = sym__arithmetic_expression;
	v->a[57248] = sym_arithmetic_literal;
	v->a[57249] = sym_arithmetic_binary_expression;
	v->a[57250] = sym_arithmetic_ternary_expression;
	v->a[57251] = sym_arithmetic_unary_expression;
	v->a[57252] = sym_arithmetic_postfix_expression;
	v->a[57253] = sym_arithmetic_parenthesized_expression;
	v->a[57254] = sym_command_substitution;
	v->a[57255] = 16;
	v->a[57256] = actions(1074);
	v->a[57257] = 1;
	v->a[57258] = sym_comment;
	v->a[57259] = actions(1831);
	small_parse_table_2863(v);
}

void	small_parse_table_2863(t_small_parse_table_array *v)
{
	v->a[57260] = 1;
	v->a[57261] = anon_sym_LPAREN;
	v->a[57262] = actions(1833);
	v->a[57263] = 1;
	v->a[57264] = anon_sym_BANG;
	v->a[57265] = actions(1841);
	v->a[57266] = 1;
	v->a[57267] = anon_sym_TILDE;
	v->a[57268] = actions(1843);
	v->a[57269] = 1;
	v->a[57270] = anon_sym_DOLLAR;
	v->a[57271] = actions(1845);
	v->a[57272] = 1;
	v->a[57273] = anon_sym_DQUOTE;
	v->a[57274] = actions(1849);
	v->a[57275] = 1;
	v->a[57276] = anon_sym_DOLLAR_LBRACE;
	v->a[57277] = actions(1851);
	v->a[57278] = 1;
	v->a[57279] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_2864(v);
}

void	small_parse_table_2864(t_small_parse_table_array *v)
{
	v->a[57280] = actions(1853);
	v->a[57281] = 1;
	v->a[57282] = anon_sym_BQUOTE;
	v->a[57283] = actions(1855);
	v->a[57284] = 1;
	v->a[57285] = sym_variable_name;
	v->a[57286] = actions(1939);
	v->a[57287] = 1;
	v->a[57288] = anon_sym_RPAREN_RPAREN;
	v->a[57289] = actions(1837);
	v->a[57290] = 2;
	v->a[57291] = anon_sym_PLUS_PLUS;
	v->a[57292] = anon_sym_DASH_DASH;
	v->a[57293] = actions(1839);
	v->a[57294] = 2;
	v->a[57295] = anon_sym_DASH2;
	v->a[57296] = anon_sym_PLUS2;
	v->a[57297] = actions(1847);
	v->a[57298] = 2;
	v->a[57299] = sym_number;
	small_parse_table_2865(v);
}

/* EOF small_parse_table_572.c */
