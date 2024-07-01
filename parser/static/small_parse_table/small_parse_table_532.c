/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_532.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2660(t_small_parse_table_array *v)
{
	v->a[53200] = sym_arithmetic_unary_expression;
	v->a[53201] = sym_arithmetic_postfix_expression;
	v->a[53202] = sym_arithmetic_parenthesized_expression;
	v->a[53203] = sym_command_substitution;
	v->a[53204] = 16;
	v->a[53205] = actions(870);
	v->a[53206] = 1;
	v->a[53207] = sym_comment;
	v->a[53208] = actions(1744);
	v->a[53209] = 1;
	v->a[53210] = anon_sym_LPAREN;
	v->a[53211] = actions(1746);
	v->a[53212] = 1;
	v->a[53213] = anon_sym_BANG;
	v->a[53214] = actions(1754);
	v->a[53215] = 1;
	v->a[53216] = anon_sym_TILDE;
	v->a[53217] = actions(1756);
	v->a[53218] = 1;
	v->a[53219] = anon_sym_DOLLAR;
	small_parse_table_2661(v);
}

void	small_parse_table_2661(t_small_parse_table_array *v)
{
	v->a[53220] = actions(1758);
	v->a[53221] = 1;
	v->a[53222] = anon_sym_DQUOTE;
	v->a[53223] = actions(1762);
	v->a[53224] = 1;
	v->a[53225] = anon_sym_DOLLAR_LBRACE;
	v->a[53226] = actions(1764);
	v->a[53227] = 1;
	v->a[53228] = anon_sym_DOLLAR_LPAREN;
	v->a[53229] = actions(1766);
	v->a[53230] = 1;
	v->a[53231] = anon_sym_BQUOTE;
	v->a[53232] = actions(1768);
	v->a[53233] = 1;
	v->a[53234] = sym_variable_name;
	v->a[53235] = actions(1872);
	v->a[53236] = 1;
	v->a[53237] = anon_sym_RPAREN_RPAREN;
	v->a[53238] = actions(1750);
	v->a[53239] = 2;
	small_parse_table_2662(v);
}

void	small_parse_table_2662(t_small_parse_table_array *v)
{
	v->a[53240] = anon_sym_PLUS_PLUS;
	v->a[53241] = anon_sym_DASH_DASH;
	v->a[53242] = actions(1752);
	v->a[53243] = 2;
	v->a[53244] = anon_sym_DASH2;
	v->a[53245] = anon_sym_PLUS2;
	v->a[53246] = actions(1760);
	v->a[53247] = 2;
	v->a[53248] = sym_number;
	v->a[53249] = aux_sym__simple_variable_name_token1;
	v->a[53250] = state(271);
	v->a[53251] = 3;
	v->a[53252] = sym_string;
	v->a[53253] = sym_simple_expansion;
	v->a[53254] = sym_expansion;
	v->a[53255] = state(358);
	v->a[53256] = 8;
	v->a[53257] = sym__arithmetic_expression;
	v->a[53258] = sym_arithmetic_literal;
	v->a[53259] = sym_arithmetic_binary_expression;
	small_parse_table_2663(v);
}

void	small_parse_table_2663(t_small_parse_table_array *v)
{
	v->a[53260] = sym_arithmetic_ternary_expression;
	v->a[53261] = sym_arithmetic_unary_expression;
	v->a[53262] = sym_arithmetic_postfix_expression;
	v->a[53263] = sym_arithmetic_parenthesized_expression;
	v->a[53264] = sym_command_substitution;
	v->a[53265] = 16;
	v->a[53266] = actions(870);
	v->a[53267] = 1;
	v->a[53268] = sym_comment;
	v->a[53269] = actions(1744);
	v->a[53270] = 1;
	v->a[53271] = anon_sym_LPAREN;
	v->a[53272] = actions(1746);
	v->a[53273] = 1;
	v->a[53274] = anon_sym_BANG;
	v->a[53275] = actions(1754);
	v->a[53276] = 1;
	v->a[53277] = anon_sym_TILDE;
	v->a[53278] = actions(1756);
	v->a[53279] = 1;
	small_parse_table_2664(v);
}

void	small_parse_table_2664(t_small_parse_table_array *v)
{
	v->a[53280] = anon_sym_DOLLAR;
	v->a[53281] = actions(1758);
	v->a[53282] = 1;
	v->a[53283] = anon_sym_DQUOTE;
	v->a[53284] = actions(1762);
	v->a[53285] = 1;
	v->a[53286] = anon_sym_DOLLAR_LBRACE;
	v->a[53287] = actions(1764);
	v->a[53288] = 1;
	v->a[53289] = anon_sym_DOLLAR_LPAREN;
	v->a[53290] = actions(1766);
	v->a[53291] = 1;
	v->a[53292] = anon_sym_BQUOTE;
	v->a[53293] = actions(1768);
	v->a[53294] = 1;
	v->a[53295] = sym_variable_name;
	v->a[53296] = actions(1874);
	v->a[53297] = 1;
	v->a[53298] = anon_sym_RPAREN_RPAREN;
	v->a[53299] = actions(1750);
	small_parse_table_2665(v);
}

/* EOF small_parse_table_532.c */
