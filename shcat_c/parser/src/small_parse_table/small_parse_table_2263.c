/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2263.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11315(t_small_parse_table_array *v)
{
	v->a[226300] = 1;
	v->a[226301] = anon_sym_BANG;
	v->a[226302] = actions(9906);
	v->a[226303] = 1;
	v->a[226304] = anon_sym_TILDE;
	v->a[226305] = actions(9908);
	v->a[226306] = 1;
	v->a[226307] = anon_sym_DOLLAR;
	v->a[226308] = actions(9910);
	v->a[226309] = 1;
	v->a[226310] = anon_sym_DQUOTE;
	v->a[226311] = actions(9912);
	v->a[226312] = 1;
	v->a[226313] = aux_sym_number_token1;
	v->a[226314] = actions(9914);
	v->a[226315] = 1;
	v->a[226316] = aux_sym_number_token2;
	v->a[226317] = actions(9916);
	v->a[226318] = 1;
	v->a[226319] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_11316(v);
}

void	small_parse_table_11316(t_small_parse_table_array *v)
{
	v->a[226320] = actions(9918);
	v->a[226321] = 1;
	v->a[226322] = anon_sym_DOLLAR_LPAREN;
	v->a[226323] = actions(9920);
	v->a[226324] = 1;
	v->a[226325] = anon_sym_BQUOTE;
	v->a[226326] = actions(9922);
	v->a[226327] = 1;
	v->a[226328] = anon_sym_DOLLAR_BQUOTE;
	v->a[226329] = actions(10756);
	v->a[226330] = 1;
	v->a[226331] = aux_sym__simple_variable_name_token1;
	v->a[226332] = state(3359);
	v->a[226333] = 1;
	v->a[226334] = sym__arithmetic_postfix_expression;
	v->a[226335] = state(3361);
	v->a[226336] = 1;
	v->a[226337] = sym__arithmetic_unary_expression;
	v->a[226338] = state(3367);
	v->a[226339] = 1;
	small_parse_table_11317(v);
}

void	small_parse_table_11317(t_small_parse_table_array *v)
{
	v->a[226340] = sym__arithmetic_ternary_expression;
	v->a[226341] = state(3375);
	v->a[226342] = 1;
	v->a[226343] = sym__arithmetic_binary_expression;
	v->a[226344] = actions(9902);
	v->a[226345] = 2;
	v->a[226346] = anon_sym_PLUS_PLUS2;
	v->a[226347] = anon_sym_DASH_DASH2;
	v->a[226348] = actions(9904);
	v->a[226349] = 2;
	v->a[226350] = anon_sym_DASH2;
	v->a[226351] = anon_sym_PLUS2;
	v->a[226352] = state(3246);
	v->a[226353] = 9;
	v->a[226354] = sym_subscript;
	v->a[226355] = sym__arithmetic_expression;
	v->a[226356] = sym__arithmetic_literal;
	v->a[226357] = sym__arithmetic_parenthesized_expression;
	v->a[226358] = sym_string;
	v->a[226359] = sym_number;
	small_parse_table_11318(v);
}

void	small_parse_table_11318(t_small_parse_table_array *v)
{
	v->a[226360] = sym_simple_expansion;
	v->a[226361] = sym_expansion;
	v->a[226362] = sym_command_substitution;
	v->a[226363] = 18;
	v->a[226364] = actions(3);
	v->a[226365] = 1;
	v->a[226366] = sym_comment;
	v->a[226367] = actions(1587);
	v->a[226368] = 1;
	v->a[226369] = anon_sym_DOLLAR;
	v->a[226370] = actions(1593);
	v->a[226371] = 1;
	v->a[226372] = aux_sym_number_token1;
	v->a[226373] = actions(1595);
	v->a[226374] = 1;
	v->a[226375] = aux_sym_number_token2;
	v->a[226376] = actions(1599);
	v->a[226377] = 1;
	v->a[226378] = anon_sym_DOLLAR_LPAREN;
	v->a[226379] = actions(1611);
	small_parse_table_11319(v);
}

void	small_parse_table_11319(t_small_parse_table_array *v)
{
	v->a[226380] = 1;
	v->a[226381] = sym__brace_start;
	v->a[226382] = actions(9240);
	v->a[226383] = 1;
	v->a[226384] = anon_sym_DOLLAR_LBRACK;
	v->a[226385] = actions(9244);
	v->a[226386] = 1;
	v->a[226387] = anon_sym_DQUOTE;
	v->a[226388] = actions(9248);
	v->a[226389] = 1;
	v->a[226390] = anon_sym_DOLLAR_LBRACE;
	v->a[226391] = actions(9250);
	v->a[226392] = 1;
	v->a[226393] = anon_sym_BQUOTE;
	v->a[226394] = actions(9252);
	v->a[226395] = 1;
	v->a[226396] = anon_sym_DOLLAR_BQUOTE;
	v->a[226397] = actions(10094);
	v->a[226398] = 1;
	v->a[226399] = sym_word;
	small_parse_table_11320(v);
}

/* EOF small_parse_table_2263.c */
