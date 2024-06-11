/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_652.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3260(t_small_parse_table_array *v)
{
	v->a[65200] = sym_arithmetic_ternary_expression;
	v->a[65201] = sym_arithmetic_unary_expression;
	v->a[65202] = sym_arithmetic_postfix_expression;
	v->a[65203] = sym_arithmetic_parenthesized_expression;
	v->a[65204] = sym_command_substitution;
	v->a[65205] = 15;
	v->a[65206] = actions(1094);
	v->a[65207] = 1;
	v->a[65208] = sym_comment;
	v->a[65209] = actions(1869);
	v->a[65210] = 1;
	v->a[65211] = anon_sym_LPAREN;
	v->a[65212] = actions(1871);
	v->a[65213] = 1;
	v->a[65214] = anon_sym_BANG;
	v->a[65215] = actions(1879);
	v->a[65216] = 1;
	v->a[65217] = anon_sym_TILDE;
	v->a[65218] = actions(1881);
	v->a[65219] = 1;
	small_parse_table_3261(v);
}

void	small_parse_table_3261(t_small_parse_table_array *v)
{
	v->a[65220] = anon_sym_DOLLAR;
	v->a[65221] = actions(1883);
	v->a[65222] = 1;
	v->a[65223] = anon_sym_DQUOTE;
	v->a[65224] = actions(1887);
	v->a[65225] = 1;
	v->a[65226] = anon_sym_DOLLAR_LBRACE;
	v->a[65227] = actions(1889);
	v->a[65228] = 1;
	v->a[65229] = anon_sym_DOLLAR_LPAREN;
	v->a[65230] = actions(1891);
	v->a[65231] = 1;
	v->a[65232] = anon_sym_BQUOTE;
	v->a[65233] = actions(1893);
	v->a[65234] = 1;
	v->a[65235] = sym_variable_name;
	v->a[65236] = actions(1875);
	v->a[65237] = 2;
	v->a[65238] = anon_sym_PLUS_PLUS;
	v->a[65239] = anon_sym_DASH_DASH;
	small_parse_table_3262(v);
}

void	small_parse_table_3262(t_small_parse_table_array *v)
{
	v->a[65240] = actions(1877);
	v->a[65241] = 2;
	v->a[65242] = anon_sym_DASH2;
	v->a[65243] = anon_sym_PLUS2;
	v->a[65244] = actions(1885);
	v->a[65245] = 2;
	v->a[65246] = sym_number;
	v->a[65247] = aux_sym__simple_variable_name_token1;
	v->a[65248] = state(365);
	v->a[65249] = 3;
	v->a[65250] = sym_string;
	v->a[65251] = sym_simple_expansion;
	v->a[65252] = sym_expansion;
	v->a[65253] = state(596);
	v->a[65254] = 8;
	v->a[65255] = sym__arithmetic_expression;
	v->a[65256] = sym_arithmetic_literal;
	v->a[65257] = sym_arithmetic_binary_expression;
	v->a[65258] = sym_arithmetic_ternary_expression;
	v->a[65259] = sym_arithmetic_unary_expression;
	small_parse_table_3263(v);
}

void	small_parse_table_3263(t_small_parse_table_array *v)
{
	v->a[65260] = sym_arithmetic_postfix_expression;
	v->a[65261] = sym_arithmetic_parenthesized_expression;
	v->a[65262] = sym_command_substitution;
	v->a[65263] = 15;
	v->a[65264] = actions(1094);
	v->a[65265] = 1;
	v->a[65266] = sym_comment;
	v->a[65267] = actions(2003);
	v->a[65268] = 1;
	v->a[65269] = anon_sym_LPAREN;
	v->a[65270] = actions(2005);
	v->a[65271] = 1;
	v->a[65272] = anon_sym_BANG;
	v->a[65273] = actions(2011);
	v->a[65274] = 1;
	v->a[65275] = anon_sym_TILDE;
	v->a[65276] = actions(2013);
	v->a[65277] = 1;
	v->a[65278] = anon_sym_DOLLAR;
	v->a[65279] = actions(2015);
	small_parse_table_3264(v);
}

void	small_parse_table_3264(t_small_parse_table_array *v)
{
	v->a[65280] = 1;
	v->a[65281] = anon_sym_DQUOTE;
	v->a[65282] = actions(2019);
	v->a[65283] = 1;
	v->a[65284] = anon_sym_DOLLAR_LBRACE;
	v->a[65285] = actions(2021);
	v->a[65286] = 1;
	v->a[65287] = anon_sym_DOLLAR_LPAREN;
	v->a[65288] = actions(2023);
	v->a[65289] = 1;
	v->a[65290] = anon_sym_BQUOTE;
	v->a[65291] = actions(2025);
	v->a[65292] = 1;
	v->a[65293] = sym_variable_name;
	v->a[65294] = actions(2007);
	v->a[65295] = 2;
	v->a[65296] = anon_sym_PLUS_PLUS;
	v->a[65297] = anon_sym_DASH_DASH;
	v->a[65298] = actions(2009);
	v->a[65299] = 2;
	small_parse_table_3265(v);
}

/* EOF small_parse_table_652.c */
