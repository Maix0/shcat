/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_473.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2365(t_small_parse_table_array *v)
{
	v->a[47300] = 2;
	v->a[47301] = sym_number;
	v->a[47302] = aux_sym__simple_variable_name_token1;
	v->a[47303] = state(255);
	v->a[47304] = 3;
	v->a[47305] = sym_string;
	v->a[47306] = sym_simple_expansion;
	v->a[47307] = sym_expansion;
	v->a[47308] = state(280);
	v->a[47309] = 8;
	v->a[47310] = sym__arithmetic_expression;
	v->a[47311] = sym_arithmetic_literal;
	v->a[47312] = sym_arithmetic_binary_expression;
	v->a[47313] = sym_arithmetic_ternary_expression;
	v->a[47314] = sym_arithmetic_unary_expression;
	v->a[47315] = sym_arithmetic_postfix_expression;
	v->a[47316] = sym_arithmetic_parenthesized_expression;
	v->a[47317] = sym_command_substitution;
	v->a[47318] = 16;
	v->a[47319] = actions(664);
	small_parse_table_2366(v);
}

void	small_parse_table_2366(t_small_parse_table_array *v)
{
	v->a[47320] = 1;
	v->a[47321] = sym_comment;
	v->a[47322] = actions(1560);
	v->a[47323] = 1;
	v->a[47324] = anon_sym_LPAREN;
	v->a[47325] = actions(1562);
	v->a[47326] = 1;
	v->a[47327] = anon_sym_BANG;
	v->a[47328] = actions(1570);
	v->a[47329] = 1;
	v->a[47330] = anon_sym_TILDE;
	v->a[47331] = actions(1572);
	v->a[47332] = 1;
	v->a[47333] = anon_sym_DOLLAR;
	v->a[47334] = actions(1574);
	v->a[47335] = 1;
	v->a[47336] = anon_sym_DQUOTE;
	v->a[47337] = actions(1578);
	v->a[47338] = 1;
	v->a[47339] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_2367(v);
}

void	small_parse_table_2367(t_small_parse_table_array *v)
{
	v->a[47340] = actions(1580);
	v->a[47341] = 1;
	v->a[47342] = anon_sym_DOLLAR_LPAREN;
	v->a[47343] = actions(1582);
	v->a[47344] = 1;
	v->a[47345] = anon_sym_BQUOTE;
	v->a[47346] = actions(1584);
	v->a[47347] = 1;
	v->a[47348] = sym_variable_name;
	v->a[47349] = actions(1720);
	v->a[47350] = 1;
	v->a[47351] = anon_sym_RPAREN_RPAREN;
	v->a[47352] = actions(1566);
	v->a[47353] = 2;
	v->a[47354] = anon_sym_PLUS_PLUS;
	v->a[47355] = anon_sym_DASH_DASH;
	v->a[47356] = actions(1568);
	v->a[47357] = 2;
	v->a[47358] = anon_sym_DASH2;
	v->a[47359] = anon_sym_PLUS2;
	small_parse_table_2368(v);
}

void	small_parse_table_2368(t_small_parse_table_array *v)
{
	v->a[47360] = actions(1576);
	v->a[47361] = 2;
	v->a[47362] = sym_number;
	v->a[47363] = aux_sym__simple_variable_name_token1;
	v->a[47364] = state(255);
	v->a[47365] = 3;
	v->a[47366] = sym_string;
	v->a[47367] = sym_simple_expansion;
	v->a[47368] = sym_expansion;
	v->a[47369] = state(343);
	v->a[47370] = 8;
	v->a[47371] = sym__arithmetic_expression;
	v->a[47372] = sym_arithmetic_literal;
	v->a[47373] = sym_arithmetic_binary_expression;
	v->a[47374] = sym_arithmetic_ternary_expression;
	v->a[47375] = sym_arithmetic_unary_expression;
	v->a[47376] = sym_arithmetic_postfix_expression;
	v->a[47377] = sym_arithmetic_parenthesized_expression;
	v->a[47378] = sym_command_substitution;
	v->a[47379] = 4;
	small_parse_table_2369(v);
}

void	small_parse_table_2369(t_small_parse_table_array *v)
{
	v->a[47380] = actions(3);
	v->a[47381] = 1;
	v->a[47382] = sym_comment;
	v->a[47383] = actions(1612);
	v->a[47384] = 1;
	v->a[47385] = ts_builtin_sym_end;
	v->a[47386] = actions(1441);
	v->a[47387] = 2;
	v->a[47388] = sym_file_descriptor;
	v->a[47389] = sym_variable_name;
	v->a[47390] = actions(1437);
	v->a[47391] = 24;
	v->a[47392] = anon_sym_for;
	v->a[47393] = anon_sym_while;
	v->a[47394] = anon_sym_until;
	v->a[47395] = anon_sym_if;
	v->a[47396] = anon_sym_case;
	v->a[47397] = anon_sym_LPAREN;
	v->a[47398] = anon_sym_LBRACE;
	v->a[47399] = anon_sym_BANG;
	small_parse_table_2370(v);
}

/* EOF small_parse_table_473.c */
