/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_543.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2715(t_small_parse_table_array *v)
{
	v->a[54300] = 18;
	v->a[54301] = actions(1404);
	v->a[54302] = 1;
	v->a[54303] = sym_comment;
	v->a[54304] = actions(1979);
	v->a[54305] = 1;
	v->a[54306] = anon_sym_LPAREN;
	v->a[54307] = actions(1981);
	v->a[54308] = 1;
	v->a[54309] = anon_sym_BANG;
	v->a[54310] = actions(1989);
	v->a[54311] = 1;
	v->a[54312] = anon_sym_TILDE;
	v->a[54313] = actions(1991);
	v->a[54314] = 1;
	v->a[54315] = anon_sym_DOLLAR;
	v->a[54316] = actions(1993);
	v->a[54317] = 1;
	v->a[54318] = anon_sym_DQUOTE;
	v->a[54319] = actions(1995);
	small_parse_table_2716(v);
}

void	small_parse_table_2716(t_small_parse_table_array *v)
{
	v->a[54320] = 1;
	v->a[54321] = aux_sym_number_token1;
	v->a[54322] = actions(1997);
	v->a[54323] = 1;
	v->a[54324] = aux_sym_number_token2;
	v->a[54325] = actions(1999);
	v->a[54326] = 1;
	v->a[54327] = anon_sym_DOLLAR_LBRACE;
	v->a[54328] = actions(2001);
	v->a[54329] = 1;
	v->a[54330] = anon_sym_DOLLAR_LPAREN;
	v->a[54331] = actions(2003);
	v->a[54332] = 1;
	v->a[54333] = anon_sym_BQUOTE;
	v->a[54334] = actions(2005);
	v->a[54335] = 1;
	v->a[54336] = aux_sym__simple_variable_name_token1;
	v->a[54337] = actions(2007);
	v->a[54338] = 1;
	v->a[54339] = sym_variable_name;
	small_parse_table_2717(v);
}

void	small_parse_table_2717(t_small_parse_table_array *v)
{
	v->a[54340] = actions(2023);
	v->a[54341] = 1;
	v->a[54342] = anon_sym_RPAREN_RPAREN;
	v->a[54343] = actions(1985);
	v->a[54344] = 2;
	v->a[54345] = anon_sym_PLUS_PLUS;
	v->a[54346] = anon_sym_DASH_DASH;
	v->a[54347] = actions(1987);
	v->a[54348] = 2;
	v->a[54349] = anon_sym_DASH2;
	v->a[54350] = anon_sym_PLUS2;
	v->a[54351] = state(530);
	v->a[54352] = 4;
	v->a[54353] = sym_string;
	v->a[54354] = sym_number;
	v->a[54355] = sym_simple_expansion;
	v->a[54356] = sym_expansion;
	v->a[54357] = state(677);
	v->a[54358] = 8;
	v->a[54359] = sym__arithmetic_expression;
	small_parse_table_2718(v);
}

void	small_parse_table_2718(t_small_parse_table_array *v)
{
	v->a[54360] = sym_arithmetic_literal;
	v->a[54361] = sym_arithmetic_binary_expression;
	v->a[54362] = sym_arithmetic_ternary_expression;
	v->a[54363] = sym_arithmetic_unary_expression;
	v->a[54364] = sym_arithmetic_postfix_expression;
	v->a[54365] = sym_arithmetic_parenthesized_expression;
	v->a[54366] = sym_command_substitution;
	v->a[54367] = 18;
	v->a[54368] = actions(1404);
	v->a[54369] = 1;
	v->a[54370] = sym_comment;
	v->a[54371] = actions(1979);
	v->a[54372] = 1;
	v->a[54373] = anon_sym_LPAREN;
	v->a[54374] = actions(1981);
	v->a[54375] = 1;
	v->a[54376] = anon_sym_BANG;
	v->a[54377] = actions(1989);
	v->a[54378] = 1;
	v->a[54379] = anon_sym_TILDE;
	small_parse_table_2719(v);
}

void	small_parse_table_2719(t_small_parse_table_array *v)
{
	v->a[54380] = actions(1991);
	v->a[54381] = 1;
	v->a[54382] = anon_sym_DOLLAR;
	v->a[54383] = actions(1993);
	v->a[54384] = 1;
	v->a[54385] = anon_sym_DQUOTE;
	v->a[54386] = actions(1995);
	v->a[54387] = 1;
	v->a[54388] = aux_sym_number_token1;
	v->a[54389] = actions(1997);
	v->a[54390] = 1;
	v->a[54391] = aux_sym_number_token2;
	v->a[54392] = actions(1999);
	v->a[54393] = 1;
	v->a[54394] = anon_sym_DOLLAR_LBRACE;
	v->a[54395] = actions(2001);
	v->a[54396] = 1;
	v->a[54397] = anon_sym_DOLLAR_LPAREN;
	v->a[54398] = actions(2003);
	v->a[54399] = 1;
	small_parse_table_2720(v);
}

/* EOF small_parse_table_543.c */
