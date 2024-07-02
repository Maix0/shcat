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
	v->a[47300] = anon_sym_until;
	v->a[47301] = anon_sym_if;
	v->a[47302] = anon_sym_case;
	v->a[47303] = anon_sym_LPAREN;
	v->a[47304] = anon_sym_LBRACE;
	v->a[47305] = anon_sym_BANG;
	v->a[47306] = anon_sym_LT;
	v->a[47307] = anon_sym_GT;
	v->a[47308] = anon_sym_GT_GT;
	v->a[47309] = anon_sym_LT_AMP;
	v->a[47310] = anon_sym_GT_AMP;
	v->a[47311] = anon_sym_GT_PIPE;
	v->a[47312] = anon_sym_LT_GT;
	v->a[47313] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[47314] = anon_sym_DOLLAR;
	v->a[47315] = anon_sym_DQUOTE;
	v->a[47316] = sym_raw_string;
	v->a[47317] = sym_number;
	v->a[47318] = anon_sym_DOLLAR_LBRACE;
	v->a[47319] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_2366(v);
}

void	small_parse_table_2366(t_small_parse_table_array *v)
{
	v->a[47320] = anon_sym_BQUOTE;
	v->a[47321] = sym_word;
	v->a[47322] = 16;
	v->a[47323] = actions(680);
	v->a[47324] = 1;
	v->a[47325] = sym_comment;
	v->a[47326] = actions(1574);
	v->a[47327] = 1;
	v->a[47328] = anon_sym_LPAREN;
	v->a[47329] = actions(1576);
	v->a[47330] = 1;
	v->a[47331] = anon_sym_BANG;
	v->a[47332] = actions(1584);
	v->a[47333] = 1;
	v->a[47334] = anon_sym_TILDE;
	v->a[47335] = actions(1586);
	v->a[47336] = 1;
	v->a[47337] = anon_sym_DOLLAR;
	v->a[47338] = actions(1588);
	v->a[47339] = 1;
	small_parse_table_2367(v);
}

void	small_parse_table_2367(t_small_parse_table_array *v)
{
	v->a[47340] = anon_sym_DQUOTE;
	v->a[47341] = actions(1592);
	v->a[47342] = 1;
	v->a[47343] = anon_sym_DOLLAR_LBRACE;
	v->a[47344] = actions(1594);
	v->a[47345] = 1;
	v->a[47346] = anon_sym_DOLLAR_LPAREN;
	v->a[47347] = actions(1596);
	v->a[47348] = 1;
	v->a[47349] = anon_sym_BQUOTE;
	v->a[47350] = actions(1598);
	v->a[47351] = 1;
	v->a[47352] = sym_variable_name;
	v->a[47353] = actions(1701);
	v->a[47354] = 1;
	v->a[47355] = anon_sym_RPAREN_RPAREN;
	v->a[47356] = actions(1580);
	v->a[47357] = 2;
	v->a[47358] = anon_sym_PLUS_PLUS;
	v->a[47359] = anon_sym_DASH_DASH;
	small_parse_table_2368(v);
}

void	small_parse_table_2368(t_small_parse_table_array *v)
{
	v->a[47360] = actions(1582);
	v->a[47361] = 2;
	v->a[47362] = anon_sym_DASH2;
	v->a[47363] = anon_sym_PLUS2;
	v->a[47364] = actions(1590);
	v->a[47365] = 2;
	v->a[47366] = sym_number;
	v->a[47367] = aux_sym__simple_variable_name_token1;
	v->a[47368] = state(238);
	v->a[47369] = 3;
	v->a[47370] = sym_string;
	v->a[47371] = sym_simple_expansion;
	v->a[47372] = sym_expansion;
	v->a[47373] = state(343);
	v->a[47374] = 8;
	v->a[47375] = sym__arithmetic_expression;
	v->a[47376] = sym_arithmetic_literal;
	v->a[47377] = sym_arithmetic_binary_expression;
	v->a[47378] = sym_arithmetic_ternary_expression;
	v->a[47379] = sym_arithmetic_unary_expression;
	small_parse_table_2369(v);
}

void	small_parse_table_2369(t_small_parse_table_array *v)
{
	v->a[47380] = sym_arithmetic_postfix_expression;
	v->a[47381] = sym_arithmetic_parenthesized_expression;
	v->a[47382] = sym_command_substitution;
	v->a[47383] = 4;
	v->a[47384] = actions(3);
	v->a[47385] = 1;
	v->a[47386] = sym_comment;
	v->a[47387] = actions(1661);
	v->a[47388] = 1;
	v->a[47389] = ts_builtin_sym_end;
	v->a[47390] = actions(1426);
	v->a[47391] = 2;
	v->a[47392] = sym_file_descriptor;
	v->a[47393] = sym_variable_name;
	v->a[47394] = actions(1422);
	v->a[47395] = 24;
	v->a[47396] = anon_sym_for;
	v->a[47397] = anon_sym_while;
	v->a[47398] = anon_sym_until;
	v->a[47399] = anon_sym_if;
	small_parse_table_2370(v);
}

/* EOF small_parse_table_473.c */
