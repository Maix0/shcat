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
	v->a[57200] = anon_sym_TILDE;
	v->a[57201] = actions(1991);
	v->a[57202] = 1;
	v->a[57203] = anon_sym_DOLLAR;
	v->a[57204] = actions(1993);
	v->a[57205] = 1;
	v->a[57206] = anon_sym_DQUOTE;
	v->a[57207] = actions(1995);
	v->a[57208] = 1;
	v->a[57209] = aux_sym_number_token1;
	v->a[57210] = actions(1997);
	v->a[57211] = 1;
	v->a[57212] = aux_sym_number_token2;
	v->a[57213] = actions(1999);
	v->a[57214] = 1;
	v->a[57215] = anon_sym_DOLLAR_LBRACE;
	v->a[57216] = actions(2001);
	v->a[57217] = 1;
	v->a[57218] = anon_sym_DOLLAR_LPAREN;
	v->a[57219] = actions(2003);
	small_parse_table_2861(v);
}

void	small_parse_table_2861(t_small_parse_table_array *v)
{
	v->a[57220] = 1;
	v->a[57221] = anon_sym_BQUOTE;
	v->a[57222] = actions(2005);
	v->a[57223] = 1;
	v->a[57224] = aux_sym__simple_variable_name_token1;
	v->a[57225] = actions(2007);
	v->a[57226] = 1;
	v->a[57227] = sym_variable_name;
	v->a[57228] = actions(1985);
	v->a[57229] = 2;
	v->a[57230] = anon_sym_PLUS_PLUS;
	v->a[57231] = anon_sym_DASH_DASH;
	v->a[57232] = actions(1987);
	v->a[57233] = 2;
	v->a[57234] = anon_sym_DASH2;
	v->a[57235] = anon_sym_PLUS2;
	v->a[57236] = state(530);
	v->a[57237] = 4;
	v->a[57238] = sym_string;
	v->a[57239] = sym_number;
	small_parse_table_2862(v);
}

void	small_parse_table_2862(t_small_parse_table_array *v)
{
	v->a[57240] = sym_simple_expansion;
	v->a[57241] = sym_expansion;
	v->a[57242] = state(466);
	v->a[57243] = 8;
	v->a[57244] = sym__arithmetic_expression;
	v->a[57245] = sym_arithmetic_literal;
	v->a[57246] = sym_arithmetic_binary_expression;
	v->a[57247] = sym_arithmetic_ternary_expression;
	v->a[57248] = sym_arithmetic_unary_expression;
	v->a[57249] = sym_arithmetic_postfix_expression;
	v->a[57250] = sym_arithmetic_parenthesized_expression;
	v->a[57251] = sym_command_substitution;
	v->a[57252] = 17;
	v->a[57253] = actions(1404);
	v->a[57254] = 1;
	v->a[57255] = sym_comment;
	v->a[57256] = actions(1979);
	v->a[57257] = 1;
	v->a[57258] = anon_sym_LPAREN;
	v->a[57259] = actions(1981);
	small_parse_table_2863(v);
}

void	small_parse_table_2863(t_small_parse_table_array *v)
{
	v->a[57260] = 1;
	v->a[57261] = anon_sym_BANG;
	v->a[57262] = actions(1989);
	v->a[57263] = 1;
	v->a[57264] = anon_sym_TILDE;
	v->a[57265] = actions(1991);
	v->a[57266] = 1;
	v->a[57267] = anon_sym_DOLLAR;
	v->a[57268] = actions(1993);
	v->a[57269] = 1;
	v->a[57270] = anon_sym_DQUOTE;
	v->a[57271] = actions(1995);
	v->a[57272] = 1;
	v->a[57273] = aux_sym_number_token1;
	v->a[57274] = actions(1997);
	v->a[57275] = 1;
	v->a[57276] = aux_sym_number_token2;
	v->a[57277] = actions(1999);
	v->a[57278] = 1;
	v->a[57279] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_2864(v);
}

void	small_parse_table_2864(t_small_parse_table_array *v)
{
	v->a[57280] = actions(2001);
	v->a[57281] = 1;
	v->a[57282] = anon_sym_DOLLAR_LPAREN;
	v->a[57283] = actions(2003);
	v->a[57284] = 1;
	v->a[57285] = anon_sym_BQUOTE;
	v->a[57286] = actions(2005);
	v->a[57287] = 1;
	v->a[57288] = aux_sym__simple_variable_name_token1;
	v->a[57289] = actions(2007);
	v->a[57290] = 1;
	v->a[57291] = sym_variable_name;
	v->a[57292] = actions(1985);
	v->a[57293] = 2;
	v->a[57294] = anon_sym_PLUS_PLUS;
	v->a[57295] = anon_sym_DASH_DASH;
	v->a[57296] = actions(1987);
	v->a[57297] = 2;
	v->a[57298] = anon_sym_DASH2;
	v->a[57299] = anon_sym_PLUS2;
	small_parse_table_2865(v);
}

/* EOF small_parse_table_572.c */
