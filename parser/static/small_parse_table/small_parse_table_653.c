/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_653.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3265(t_small_parse_table_array *v)
{
	v->a[65300] = anon_sym_DASH2;
	v->a[65301] = anon_sym_PLUS2;
	v->a[65302] = actions(2017);
	v->a[65303] = 2;
	v->a[65304] = sym_number;
	v->a[65305] = aux_sym__simple_variable_name_token1;
	v->a[65306] = state(503);
	v->a[65307] = 3;
	v->a[65308] = sym_string;
	v->a[65309] = sym_simple_expansion;
	v->a[65310] = sym_expansion;
	v->a[65311] = state(583);
	v->a[65312] = 8;
	v->a[65313] = sym__arithmetic_expression;
	v->a[65314] = sym_arithmetic_literal;
	v->a[65315] = sym_arithmetic_binary_expression;
	v->a[65316] = sym_arithmetic_ternary_expression;
	v->a[65317] = sym_arithmetic_unary_expression;
	v->a[65318] = sym_arithmetic_postfix_expression;
	v->a[65319] = sym_arithmetic_parenthesized_expression;
	small_parse_table_3266(v);
}

void	small_parse_table_3266(t_small_parse_table_array *v)
{
	v->a[65320] = sym_command_substitution;
	v->a[65321] = 15;
	v->a[65322] = actions(1094);
	v->a[65323] = 1;
	v->a[65324] = sym_comment;
	v->a[65325] = actions(2003);
	v->a[65326] = 1;
	v->a[65327] = anon_sym_LPAREN;
	v->a[65328] = actions(2005);
	v->a[65329] = 1;
	v->a[65330] = anon_sym_BANG;
	v->a[65331] = actions(2011);
	v->a[65332] = 1;
	v->a[65333] = anon_sym_TILDE;
	v->a[65334] = actions(2013);
	v->a[65335] = 1;
	v->a[65336] = anon_sym_DOLLAR;
	v->a[65337] = actions(2015);
	v->a[65338] = 1;
	v->a[65339] = anon_sym_DQUOTE;
	small_parse_table_3267(v);
}

void	small_parse_table_3267(t_small_parse_table_array *v)
{
	v->a[65340] = actions(2019);
	v->a[65341] = 1;
	v->a[65342] = anon_sym_DOLLAR_LBRACE;
	v->a[65343] = actions(2021);
	v->a[65344] = 1;
	v->a[65345] = anon_sym_DOLLAR_LPAREN;
	v->a[65346] = actions(2023);
	v->a[65347] = 1;
	v->a[65348] = anon_sym_BQUOTE;
	v->a[65349] = actions(2025);
	v->a[65350] = 1;
	v->a[65351] = sym_variable_name;
	v->a[65352] = actions(2007);
	v->a[65353] = 2;
	v->a[65354] = anon_sym_PLUS_PLUS;
	v->a[65355] = anon_sym_DASH_DASH;
	v->a[65356] = actions(2009);
	v->a[65357] = 2;
	v->a[65358] = anon_sym_DASH2;
	v->a[65359] = anon_sym_PLUS2;
	small_parse_table_3268(v);
}

void	small_parse_table_3268(t_small_parse_table_array *v)
{
	v->a[65360] = actions(2017);
	v->a[65361] = 2;
	v->a[65362] = sym_number;
	v->a[65363] = aux_sym__simple_variable_name_token1;
	v->a[65364] = state(503);
	v->a[65365] = 3;
	v->a[65366] = sym_string;
	v->a[65367] = sym_simple_expansion;
	v->a[65368] = sym_expansion;
	v->a[65369] = state(584);
	v->a[65370] = 8;
	v->a[65371] = sym__arithmetic_expression;
	v->a[65372] = sym_arithmetic_literal;
	v->a[65373] = sym_arithmetic_binary_expression;
	v->a[65374] = sym_arithmetic_ternary_expression;
	v->a[65375] = sym_arithmetic_unary_expression;
	v->a[65376] = sym_arithmetic_postfix_expression;
	v->a[65377] = sym_arithmetic_parenthesized_expression;
	v->a[65378] = sym_command_substitution;
	v->a[65379] = 15;
	small_parse_table_3269(v);
}

void	small_parse_table_3269(t_small_parse_table_array *v)
{
	v->a[65380] = actions(1094);
	v->a[65381] = 1;
	v->a[65382] = sym_comment;
	v->a[65383] = actions(2003);
	v->a[65384] = 1;
	v->a[65385] = anon_sym_LPAREN;
	v->a[65386] = actions(2005);
	v->a[65387] = 1;
	v->a[65388] = anon_sym_BANG;
	v->a[65389] = actions(2011);
	v->a[65390] = 1;
	v->a[65391] = anon_sym_TILDE;
	v->a[65392] = actions(2013);
	v->a[65393] = 1;
	v->a[65394] = anon_sym_DOLLAR;
	v->a[65395] = actions(2015);
	v->a[65396] = 1;
	v->a[65397] = anon_sym_DQUOTE;
	v->a[65398] = actions(2019);
	v->a[65399] = 1;
	small_parse_table_3270(v);
}

/* EOF small_parse_table_653.c */
