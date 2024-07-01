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
	v->a[57200] = 8;
	v->a[57201] = sym__arithmetic_expression;
	v->a[57202] = sym_arithmetic_literal;
	v->a[57203] = sym_arithmetic_binary_expression;
	v->a[57204] = sym_arithmetic_ternary_expression;
	v->a[57205] = sym_arithmetic_unary_expression;
	v->a[57206] = sym_arithmetic_postfix_expression;
	v->a[57207] = sym_arithmetic_parenthesized_expression;
	v->a[57208] = sym_command_substitution;
	v->a[57209] = 15;
	v->a[57210] = actions(870);
	v->a[57211] = 1;
	v->a[57212] = sym_comment;
	v->a[57213] = actions(1744);
	v->a[57214] = 1;
	v->a[57215] = anon_sym_LPAREN;
	v->a[57216] = actions(1746);
	v->a[57217] = 1;
	v->a[57218] = anon_sym_BANG;
	v->a[57219] = actions(1754);
	small_parse_table_2861(v);
}

void	small_parse_table_2861(t_small_parse_table_array *v)
{
	v->a[57220] = 1;
	v->a[57221] = anon_sym_TILDE;
	v->a[57222] = actions(1756);
	v->a[57223] = 1;
	v->a[57224] = anon_sym_DOLLAR;
	v->a[57225] = actions(1758);
	v->a[57226] = 1;
	v->a[57227] = anon_sym_DQUOTE;
	v->a[57228] = actions(1762);
	v->a[57229] = 1;
	v->a[57230] = anon_sym_DOLLAR_LBRACE;
	v->a[57231] = actions(1764);
	v->a[57232] = 1;
	v->a[57233] = anon_sym_DOLLAR_LPAREN;
	v->a[57234] = actions(1766);
	v->a[57235] = 1;
	v->a[57236] = anon_sym_BQUOTE;
	v->a[57237] = actions(1768);
	v->a[57238] = 1;
	v->a[57239] = sym_variable_name;
	small_parse_table_2862(v);
}

void	small_parse_table_2862(t_small_parse_table_array *v)
{
	v->a[57240] = actions(1750);
	v->a[57241] = 2;
	v->a[57242] = anon_sym_PLUS_PLUS;
	v->a[57243] = anon_sym_DASH_DASH;
	v->a[57244] = actions(1752);
	v->a[57245] = 2;
	v->a[57246] = anon_sym_DASH2;
	v->a[57247] = anon_sym_PLUS2;
	v->a[57248] = actions(1760);
	v->a[57249] = 2;
	v->a[57250] = sym_number;
	v->a[57251] = aux_sym__simple_variable_name_token1;
	v->a[57252] = state(271);
	v->a[57253] = 3;
	v->a[57254] = sym_string;
	v->a[57255] = sym_simple_expansion;
	v->a[57256] = sym_expansion;
	v->a[57257] = state(304);
	v->a[57258] = 8;
	v->a[57259] = sym__arithmetic_expression;
	small_parse_table_2863(v);
}

void	small_parse_table_2863(t_small_parse_table_array *v)
{
	v->a[57260] = sym_arithmetic_literal;
	v->a[57261] = sym_arithmetic_binary_expression;
	v->a[57262] = sym_arithmetic_ternary_expression;
	v->a[57263] = sym_arithmetic_unary_expression;
	v->a[57264] = sym_arithmetic_postfix_expression;
	v->a[57265] = sym_arithmetic_parenthesized_expression;
	v->a[57266] = sym_command_substitution;
	v->a[57267] = 15;
	v->a[57268] = actions(870);
	v->a[57269] = 1;
	v->a[57270] = sym_comment;
	v->a[57271] = actions(1744);
	v->a[57272] = 1;
	v->a[57273] = anon_sym_LPAREN;
	v->a[57274] = actions(1746);
	v->a[57275] = 1;
	v->a[57276] = anon_sym_BANG;
	v->a[57277] = actions(1754);
	v->a[57278] = 1;
	v->a[57279] = anon_sym_TILDE;
	small_parse_table_2864(v);
}

void	small_parse_table_2864(t_small_parse_table_array *v)
{
	v->a[57280] = actions(1756);
	v->a[57281] = 1;
	v->a[57282] = anon_sym_DOLLAR;
	v->a[57283] = actions(1758);
	v->a[57284] = 1;
	v->a[57285] = anon_sym_DQUOTE;
	v->a[57286] = actions(1762);
	v->a[57287] = 1;
	v->a[57288] = anon_sym_DOLLAR_LBRACE;
	v->a[57289] = actions(1764);
	v->a[57290] = 1;
	v->a[57291] = anon_sym_DOLLAR_LPAREN;
	v->a[57292] = actions(1766);
	v->a[57293] = 1;
	v->a[57294] = anon_sym_BQUOTE;
	v->a[57295] = actions(1768);
	v->a[57296] = 1;
	v->a[57297] = sym_variable_name;
	v->a[57298] = actions(1750);
	v->a[57299] = 2;
	small_parse_table_2865(v);
}

/* EOF small_parse_table_572.c */
