/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_552.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2760(t_small_parse_table_array *v)
{
	v->a[55200] = sym_word;
	v->a[55201] = 15;
	v->a[55202] = actions(870);
	v->a[55203] = 1;
	v->a[55204] = sym_comment;
	v->a[55205] = actions(1744);
	v->a[55206] = 1;
	v->a[55207] = anon_sym_LPAREN;
	v->a[55208] = actions(1746);
	v->a[55209] = 1;
	v->a[55210] = anon_sym_BANG;
	v->a[55211] = actions(1754);
	v->a[55212] = 1;
	v->a[55213] = anon_sym_TILDE;
	v->a[55214] = actions(1756);
	v->a[55215] = 1;
	v->a[55216] = anon_sym_DOLLAR;
	v->a[55217] = actions(1758);
	v->a[55218] = 1;
	v->a[55219] = anon_sym_DQUOTE;
	small_parse_table_2761(v);
}

void	small_parse_table_2761(t_small_parse_table_array *v)
{
	v->a[55220] = actions(1762);
	v->a[55221] = 1;
	v->a[55222] = anon_sym_DOLLAR_LBRACE;
	v->a[55223] = actions(1764);
	v->a[55224] = 1;
	v->a[55225] = anon_sym_DOLLAR_LPAREN;
	v->a[55226] = actions(1766);
	v->a[55227] = 1;
	v->a[55228] = anon_sym_BQUOTE;
	v->a[55229] = actions(1768);
	v->a[55230] = 1;
	v->a[55231] = sym_variable_name;
	v->a[55232] = actions(1750);
	v->a[55233] = 2;
	v->a[55234] = anon_sym_PLUS_PLUS;
	v->a[55235] = anon_sym_DASH_DASH;
	v->a[55236] = actions(1752);
	v->a[55237] = 2;
	v->a[55238] = anon_sym_DASH2;
	v->a[55239] = anon_sym_PLUS2;
	small_parse_table_2762(v);
}

void	small_parse_table_2762(t_small_parse_table_array *v)
{
	v->a[55240] = actions(1760);
	v->a[55241] = 2;
	v->a[55242] = sym_number;
	v->a[55243] = aux_sym__simple_variable_name_token1;
	v->a[55244] = state(271);
	v->a[55245] = 3;
	v->a[55246] = sym_string;
	v->a[55247] = sym_simple_expansion;
	v->a[55248] = sym_expansion;
	v->a[55249] = state(393);
	v->a[55250] = 8;
	v->a[55251] = sym__arithmetic_expression;
	v->a[55252] = sym_arithmetic_literal;
	v->a[55253] = sym_arithmetic_binary_expression;
	v->a[55254] = sym_arithmetic_ternary_expression;
	v->a[55255] = sym_arithmetic_unary_expression;
	v->a[55256] = sym_arithmetic_postfix_expression;
	v->a[55257] = sym_arithmetic_parenthesized_expression;
	v->a[55258] = sym_command_substitution;
	v->a[55259] = 15;
	small_parse_table_2763(v);
}

void	small_parse_table_2763(t_small_parse_table_array *v)
{
	v->a[55260] = actions(870);
	v->a[55261] = 1;
	v->a[55262] = sym_comment;
	v->a[55263] = actions(1921);
	v->a[55264] = 1;
	v->a[55265] = anon_sym_LPAREN;
	v->a[55266] = actions(1923);
	v->a[55267] = 1;
	v->a[55268] = anon_sym_BANG;
	v->a[55269] = actions(1929);
	v->a[55270] = 1;
	v->a[55271] = anon_sym_TILDE;
	v->a[55272] = actions(1931);
	v->a[55273] = 1;
	v->a[55274] = anon_sym_DOLLAR;
	v->a[55275] = actions(1933);
	v->a[55276] = 1;
	v->a[55277] = anon_sym_DQUOTE;
	v->a[55278] = actions(1937);
	v->a[55279] = 1;
	small_parse_table_2764(v);
}

void	small_parse_table_2764(t_small_parse_table_array *v)
{
	v->a[55280] = anon_sym_DOLLAR_LBRACE;
	v->a[55281] = actions(1939);
	v->a[55282] = 1;
	v->a[55283] = anon_sym_DOLLAR_LPAREN;
	v->a[55284] = actions(1941);
	v->a[55285] = 1;
	v->a[55286] = anon_sym_BQUOTE;
	v->a[55287] = actions(1943);
	v->a[55288] = 1;
	v->a[55289] = sym_variable_name;
	v->a[55290] = actions(1925);
	v->a[55291] = 2;
	v->a[55292] = anon_sym_PLUS_PLUS;
	v->a[55293] = anon_sym_DASH_DASH;
	v->a[55294] = actions(1927);
	v->a[55295] = 2;
	v->a[55296] = anon_sym_DASH2;
	v->a[55297] = anon_sym_PLUS2;
	v->a[55298] = actions(1935);
	v->a[55299] = 2;
	small_parse_table_2765(v);
}

/* EOF small_parse_table_552.c */
