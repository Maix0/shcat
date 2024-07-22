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
	v->a[42300] = 16;
	v->a[42301] = actions(501);
	v->a[42302] = 1;
	v->a[42303] = sym_comment;
	v->a[42304] = actions(1469);
	v->a[42305] = 1;
	v->a[42306] = anon_sym_LPAREN;
	v->a[42307] = actions(1471);
	v->a[42308] = 1;
	v->a[42309] = anon_sym_BANG;
	v->a[42310] = actions(1479);
	v->a[42311] = 1;
	v->a[42312] = anon_sym_TILDE;
	v->a[42313] = actions(1481);
	v->a[42314] = 1;
	v->a[42315] = anon_sym_DOLLAR;
	v->a[42316] = actions(1483);
	v->a[42317] = 1;
	v->a[42318] = anon_sym_DQUOTE;
	v->a[42319] = actions(1487);
	small_parse_table_2116(v);
}

void	small_parse_table_2116(t_small_parse_table_array *v)
{
	v->a[42320] = 1;
	v->a[42321] = anon_sym_DOLLAR_LBRACE;
	v->a[42322] = actions(1489);
	v->a[42323] = 1;
	v->a[42324] = anon_sym_DOLLAR_LPAREN;
	v->a[42325] = actions(1491);
	v->a[42326] = 1;
	v->a[42327] = anon_sym_BQUOTE;
	v->a[42328] = actions(1493);
	v->a[42329] = 1;
	v->a[42330] = sym_variable_name;
	v->a[42331] = actions(1516);
	v->a[42332] = 1;
	v->a[42333] = anon_sym_RPAREN_RPAREN;
	v->a[42334] = actions(1475);
	v->a[42335] = 2;
	v->a[42336] = anon_sym_PLUS_PLUS;
	v->a[42337] = anon_sym_DASH_DASH;
	v->a[42338] = actions(1477);
	v->a[42339] = 2;
	small_parse_table_2117(v);
}

void	small_parse_table_2117(t_small_parse_table_array *v)
{
	v->a[42340] = anon_sym_DASH2;
	v->a[42341] = anon_sym_PLUS2;
	v->a[42342] = actions(1485);
	v->a[42343] = 2;
	v->a[42344] = sym_number;
	v->a[42345] = aux_sym__simple_variable_name_token1;
	v->a[42346] = state(194);
	v->a[42347] = 3;
	v->a[42348] = sym_string;
	v->a[42349] = sym_simple_expansion;
	v->a[42350] = sym_expansion;
	v->a[42351] = state(311);
	v->a[42352] = 8;
	v->a[42353] = sym__arithmetic_expression;
	v->a[42354] = sym_arithmetic_literal;
	v->a[42355] = sym_arithmetic_binary_expression;
	v->a[42356] = sym_arithmetic_ternary_expression;
	v->a[42357] = sym_arithmetic_unary_expression;
	v->a[42358] = sym_arithmetic_postfix_expression;
	v->a[42359] = sym_arithmetic_parenthesized_expression;
	small_parse_table_2118(v);
}

void	small_parse_table_2118(t_small_parse_table_array *v)
{
	v->a[42360] = sym_command_substitution;
	v->a[42361] = 16;
	v->a[42362] = actions(501);
	v->a[42363] = 1;
	v->a[42364] = sym_comment;
	v->a[42365] = actions(1469);
	v->a[42366] = 1;
	v->a[42367] = anon_sym_LPAREN;
	v->a[42368] = actions(1471);
	v->a[42369] = 1;
	v->a[42370] = anon_sym_BANG;
	v->a[42371] = actions(1479);
	v->a[42372] = 1;
	v->a[42373] = anon_sym_TILDE;
	v->a[42374] = actions(1481);
	v->a[42375] = 1;
	v->a[42376] = anon_sym_DOLLAR;
	v->a[42377] = actions(1483);
	v->a[42378] = 1;
	v->a[42379] = anon_sym_DQUOTE;
	small_parse_table_2119(v);
}

void	small_parse_table_2119(t_small_parse_table_array *v)
{
	v->a[42380] = actions(1487);
	v->a[42381] = 1;
	v->a[42382] = anon_sym_DOLLAR_LBRACE;
	v->a[42383] = actions(1489);
	v->a[42384] = 1;
	v->a[42385] = anon_sym_DOLLAR_LPAREN;
	v->a[42386] = actions(1491);
	v->a[42387] = 1;
	v->a[42388] = anon_sym_BQUOTE;
	v->a[42389] = actions(1493);
	v->a[42390] = 1;
	v->a[42391] = sym_variable_name;
	v->a[42392] = actions(1518);
	v->a[42393] = 1;
	v->a[42394] = anon_sym_RPAREN_RPAREN;
	v->a[42395] = actions(1475);
	v->a[42396] = 2;
	v->a[42397] = anon_sym_PLUS_PLUS;
	v->a[42398] = anon_sym_DASH_DASH;
	v->a[42399] = actions(1477);
	small_parse_table_2120(v);
}

/* EOF small_parse_table_423.c */
