/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_433.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2165(t_small_parse_table_array *v)
{
	v->a[43300] = sym_command_substitution;
	v->a[43301] = 12;
	v->a[43302] = actions(407);
	v->a[43303] = 1;
	v->a[43304] = sym_comment;
	v->a[43305] = actions(1540);
	v->a[43306] = 1;
	v->a[43307] = anon_sym_LPAREN;
	v->a[43308] = actions(1542);
	v->a[43309] = 1;
	v->a[43310] = anon_sym_BANG;
	v->a[43311] = actions(1548);
	v->a[43312] = 1;
	v->a[43313] = anon_sym_DOLLAR;
	v->a[43314] = actions(1550);
	v->a[43315] = 1;
	v->a[43316] = anon_sym_DQUOTE;
	v->a[43317] = actions(1554);
	v->a[43318] = 1;
	v->a[43319] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_2166(v);
}

void	small_parse_table_2166(t_small_parse_table_array *v)
{
	v->a[43320] = actions(1556);
	v->a[43321] = 1;
	v->a[43322] = sym_variable_name;
	v->a[43323] = actions(1544);
	v->a[43324] = 2;
	v->a[43325] = anon_sym_PLUS_PLUS;
	v->a[43326] = anon_sym_DASH_DASH;
	v->a[43327] = actions(1546);
	v->a[43328] = 2;
	v->a[43329] = anon_sym_DASH2;
	v->a[43330] = anon_sym_PLUS2;
	v->a[43331] = actions(1552);
	v->a[43332] = 2;
	v->a[43333] = sym_number;
	v->a[43334] = aux_sym__simple_variable_name_token1;
	v->a[43335] = state(157);
	v->a[43336] = 3;
	v->a[43337] = sym_string;
	v->a[43338] = sym_simple_expansion;
	v->a[43339] = sym_expansion;
	small_parse_table_2167(v);
}

void	small_parse_table_2167(t_small_parse_table_array *v)
{
	v->a[43340] = state(178);
	v->a[43341] = 7;
	v->a[43342] = sym__arithmetic_expression;
	v->a[43343] = sym_arithmetic_literal;
	v->a[43344] = sym_arithmetic_binary_expression;
	v->a[43345] = sym_arithmetic_ternary_expression;
	v->a[43346] = sym_arithmetic_unary_expression;
	v->a[43347] = sym_arithmetic_postfix_expression;
	v->a[43348] = sym_arithmetic_parenthesized_expression;
	v->a[43349] = 12;
	v->a[43350] = actions(407);
	v->a[43351] = 1;
	v->a[43352] = sym_comment;
	v->a[43353] = actions(1540);
	v->a[43354] = 1;
	v->a[43355] = anon_sym_LPAREN;
	v->a[43356] = actions(1542);
	v->a[43357] = 1;
	v->a[43358] = anon_sym_BANG;
	v->a[43359] = actions(1548);
	small_parse_table_2168(v);
}

void	small_parse_table_2168(t_small_parse_table_array *v)
{
	v->a[43360] = 1;
	v->a[43361] = anon_sym_DOLLAR;
	v->a[43362] = actions(1550);
	v->a[43363] = 1;
	v->a[43364] = anon_sym_DQUOTE;
	v->a[43365] = actions(1554);
	v->a[43366] = 1;
	v->a[43367] = anon_sym_DOLLAR_LBRACE;
	v->a[43368] = actions(1556);
	v->a[43369] = 1;
	v->a[43370] = sym_variable_name;
	v->a[43371] = actions(1544);
	v->a[43372] = 2;
	v->a[43373] = anon_sym_PLUS_PLUS;
	v->a[43374] = anon_sym_DASH_DASH;
	v->a[43375] = actions(1546);
	v->a[43376] = 2;
	v->a[43377] = anon_sym_DASH2;
	v->a[43378] = anon_sym_PLUS2;
	v->a[43379] = actions(1552);
	small_parse_table_2169(v);
}

void	small_parse_table_2169(t_small_parse_table_array *v)
{
	v->a[43380] = 2;
	v->a[43381] = sym_number;
	v->a[43382] = aux_sym__simple_variable_name_token1;
	v->a[43383] = state(157);
	v->a[43384] = 3;
	v->a[43385] = sym_string;
	v->a[43386] = sym_simple_expansion;
	v->a[43387] = sym_expansion;
	v->a[43388] = state(253);
	v->a[43389] = 7;
	v->a[43390] = sym__arithmetic_expression;
	v->a[43391] = sym_arithmetic_literal;
	v->a[43392] = sym_arithmetic_binary_expression;
	v->a[43393] = sym_arithmetic_ternary_expression;
	v->a[43394] = sym_arithmetic_unary_expression;
	v->a[43395] = sym_arithmetic_postfix_expression;
	v->a[43396] = sym_arithmetic_parenthesized_expression;
	v->a[43397] = 12;
	v->a[43398] = actions(407);
	v->a[43399] = 1;
	small_parse_table_2170(v);
}

/* EOF small_parse_table_433.c */
