/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_453.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2265(t_small_parse_table_array *v)
{
	v->a[45300] = anon_sym_TILDE;
	v->a[45301] = actions(1572);
	v->a[45302] = 1;
	v->a[45303] = anon_sym_DOLLAR;
	v->a[45304] = actions(1574);
	v->a[45305] = 1;
	v->a[45306] = anon_sym_DQUOTE;
	v->a[45307] = actions(1578);
	v->a[45308] = 1;
	v->a[45309] = anon_sym_DOLLAR_LBRACE;
	v->a[45310] = actions(1580);
	v->a[45311] = 1;
	v->a[45312] = anon_sym_DOLLAR_LPAREN;
	v->a[45313] = actions(1582);
	v->a[45314] = 1;
	v->a[45315] = anon_sym_BQUOTE;
	v->a[45316] = actions(1584);
	v->a[45317] = 1;
	v->a[45318] = sym_variable_name;
	v->a[45319] = actions(1658);
	small_parse_table_2266(v);
}

void	small_parse_table_2266(t_small_parse_table_array *v)
{
	v->a[45320] = 1;
	v->a[45321] = anon_sym_RPAREN_RPAREN;
	v->a[45322] = actions(1566);
	v->a[45323] = 2;
	v->a[45324] = anon_sym_PLUS_PLUS;
	v->a[45325] = anon_sym_DASH_DASH;
	v->a[45326] = actions(1568);
	v->a[45327] = 2;
	v->a[45328] = anon_sym_DASH2;
	v->a[45329] = anon_sym_PLUS2;
	v->a[45330] = actions(1576);
	v->a[45331] = 2;
	v->a[45332] = sym_number;
	v->a[45333] = aux_sym__simple_variable_name_token1;
	v->a[45334] = state(255);
	v->a[45335] = 3;
	v->a[45336] = sym_string;
	v->a[45337] = sym_simple_expansion;
	v->a[45338] = sym_expansion;
	v->a[45339] = state(324);
	small_parse_table_2267(v);
}

void	small_parse_table_2267(t_small_parse_table_array *v)
{
	v->a[45340] = 8;
	v->a[45341] = sym__arithmetic_expression;
	v->a[45342] = sym_arithmetic_literal;
	v->a[45343] = sym_arithmetic_binary_expression;
	v->a[45344] = sym_arithmetic_ternary_expression;
	v->a[45345] = sym_arithmetic_unary_expression;
	v->a[45346] = sym_arithmetic_postfix_expression;
	v->a[45347] = sym_arithmetic_parenthesized_expression;
	v->a[45348] = sym_command_substitution;
	v->a[45349] = 16;
	v->a[45350] = actions(664);
	v->a[45351] = 1;
	v->a[45352] = sym_comment;
	v->a[45353] = actions(1560);
	v->a[45354] = 1;
	v->a[45355] = anon_sym_LPAREN;
	v->a[45356] = actions(1562);
	v->a[45357] = 1;
	v->a[45358] = anon_sym_BANG;
	v->a[45359] = actions(1570);
	small_parse_table_2268(v);
}

void	small_parse_table_2268(t_small_parse_table_array *v)
{
	v->a[45360] = 1;
	v->a[45361] = anon_sym_TILDE;
	v->a[45362] = actions(1572);
	v->a[45363] = 1;
	v->a[45364] = anon_sym_DOLLAR;
	v->a[45365] = actions(1574);
	v->a[45366] = 1;
	v->a[45367] = anon_sym_DQUOTE;
	v->a[45368] = actions(1578);
	v->a[45369] = 1;
	v->a[45370] = anon_sym_DOLLAR_LBRACE;
	v->a[45371] = actions(1580);
	v->a[45372] = 1;
	v->a[45373] = anon_sym_DOLLAR_LPAREN;
	v->a[45374] = actions(1582);
	v->a[45375] = 1;
	v->a[45376] = anon_sym_BQUOTE;
	v->a[45377] = actions(1584);
	v->a[45378] = 1;
	v->a[45379] = sym_variable_name;
	small_parse_table_2269(v);
}

void	small_parse_table_2269(t_small_parse_table_array *v)
{
	v->a[45380] = actions(1660);
	v->a[45381] = 1;
	v->a[45382] = anon_sym_RPAREN_RPAREN;
	v->a[45383] = actions(1566);
	v->a[45384] = 2;
	v->a[45385] = anon_sym_PLUS_PLUS;
	v->a[45386] = anon_sym_DASH_DASH;
	v->a[45387] = actions(1568);
	v->a[45388] = 2;
	v->a[45389] = anon_sym_DASH2;
	v->a[45390] = anon_sym_PLUS2;
	v->a[45391] = actions(1576);
	v->a[45392] = 2;
	v->a[45393] = sym_number;
	v->a[45394] = aux_sym__simple_variable_name_token1;
	v->a[45395] = state(255);
	v->a[45396] = 3;
	v->a[45397] = sym_string;
	v->a[45398] = sym_simple_expansion;
	v->a[45399] = sym_expansion;
	small_parse_table_2270(v);
}

/* EOF small_parse_table_453.c */
