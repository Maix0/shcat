/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_423.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2115(t_small_parse_table_array *v)
{
	v->a[42300] = sym_variable_name;
	v->a[42301] = actions(1526);
	v->a[42302] = 2;
	v->a[42303] = anon_sym_PLUS_PLUS;
	v->a[42304] = anon_sym_DASH_DASH;
	v->a[42305] = actions(1528);
	v->a[42306] = 2;
	v->a[42307] = anon_sym_DASH2;
	v->a[42308] = anon_sym_PLUS2;
	v->a[42309] = actions(1534);
	v->a[42310] = 2;
	v->a[42311] = sym_number;
	v->a[42312] = aux_sym__simple_variable_name_token1;
	v->a[42313] = state(206);
	v->a[42314] = 3;
	v->a[42315] = sym_string;
	v->a[42316] = sym_simple_expansion;
	v->a[42317] = sym_expansion;
	v->a[42318] = state(231);
	v->a[42319] = 7;
	small_parse_table_2116(v);
}

void	small_parse_table_2116(t_small_parse_table_array *v)
{
	v->a[42320] = sym__arithmetic_expression;
	v->a[42321] = sym_arithmetic_literal;
	v->a[42322] = sym_arithmetic_binary_expression;
	v->a[42323] = sym_arithmetic_ternary_expression;
	v->a[42324] = sym_arithmetic_unary_expression;
	v->a[42325] = sym_arithmetic_postfix_expression;
	v->a[42326] = sym_arithmetic_parenthesized_expression;
	v->a[42327] = 12;
	v->a[42328] = actions(407);
	v->a[42329] = 1;
	v->a[42330] = sym_comment;
	v->a[42331] = actions(1522);
	v->a[42332] = 1;
	v->a[42333] = anon_sym_LPAREN;
	v->a[42334] = actions(1524);
	v->a[42335] = 1;
	v->a[42336] = anon_sym_BANG;
	v->a[42337] = actions(1530);
	v->a[42338] = 1;
	v->a[42339] = anon_sym_DOLLAR;
	small_parse_table_2117(v);
}

void	small_parse_table_2117(t_small_parse_table_array *v)
{
	v->a[42340] = actions(1532);
	v->a[42341] = 1;
	v->a[42342] = anon_sym_DQUOTE;
	v->a[42343] = actions(1536);
	v->a[42344] = 1;
	v->a[42345] = anon_sym_DOLLAR_LBRACE;
	v->a[42346] = actions(1538);
	v->a[42347] = 1;
	v->a[42348] = sym_variable_name;
	v->a[42349] = actions(1526);
	v->a[42350] = 2;
	v->a[42351] = anon_sym_PLUS_PLUS;
	v->a[42352] = anon_sym_DASH_DASH;
	v->a[42353] = actions(1528);
	v->a[42354] = 2;
	v->a[42355] = anon_sym_DASH2;
	v->a[42356] = anon_sym_PLUS2;
	v->a[42357] = actions(1534);
	v->a[42358] = 2;
	v->a[42359] = sym_number;
	small_parse_table_2118(v);
}

void	small_parse_table_2118(t_small_parse_table_array *v)
{
	v->a[42360] = aux_sym__simple_variable_name_token1;
	v->a[42361] = state(206);
	v->a[42362] = 3;
	v->a[42363] = sym_string;
	v->a[42364] = sym_simple_expansion;
	v->a[42365] = sym_expansion;
	v->a[42366] = state(217);
	v->a[42367] = 7;
	v->a[42368] = sym__arithmetic_expression;
	v->a[42369] = sym_arithmetic_literal;
	v->a[42370] = sym_arithmetic_binary_expression;
	v->a[42371] = sym_arithmetic_ternary_expression;
	v->a[42372] = sym_arithmetic_unary_expression;
	v->a[42373] = sym_arithmetic_postfix_expression;
	v->a[42374] = sym_arithmetic_parenthesized_expression;
	v->a[42375] = 16;
	v->a[42376] = actions(3);
	v->a[42377] = 1;
	v->a[42378] = sym_comment;
	v->a[42379] = actions(1337);
	small_parse_table_2119(v);
}

void	small_parse_table_2119(t_small_parse_table_array *v)
{
	v->a[42380] = 1;
	v->a[42381] = anon_sym_LPAREN;
	v->a[42382] = actions(1341);
	v->a[42383] = 1;
	v->a[42384] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[42385] = actions(1343);
	v->a[42386] = 1;
	v->a[42387] = anon_sym_DOLLAR;
	v->a[42388] = actions(1345);
	v->a[42389] = 1;
	v->a[42390] = anon_sym_DQUOTE;
	v->a[42391] = actions(1347);
	v->a[42392] = 1;
	v->a[42393] = anon_sym_DOLLAR_LBRACE;
	v->a[42394] = actions(1349);
	v->a[42395] = 1;
	v->a[42396] = anon_sym_DOLLAR_LPAREN;
	v->a[42397] = actions(1351);
	v->a[42398] = 1;
	v->a[42399] = anon_sym_BQUOTE;
	small_parse_table_2120(v);
}

/* EOF small_parse_table_423.c */
