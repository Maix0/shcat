/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_493.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2465(t_small_parse_table_array *v)
{
	v->a[49300] = anon_sym_until;
	v->a[49301] = anon_sym_if;
	v->a[49302] = anon_sym_case;
	v->a[49303] = anon_sym_LPAREN;
	v->a[49304] = anon_sym_LBRACE;
	v->a[49305] = anon_sym_BANG;
	v->a[49306] = anon_sym_LT;
	v->a[49307] = anon_sym_GT;
	v->a[49308] = anon_sym_GT_GT;
	v->a[49309] = anon_sym_LT_AMP;
	v->a[49310] = anon_sym_GT_AMP;
	v->a[49311] = anon_sym_GT_PIPE;
	v->a[49312] = anon_sym_LT_GT;
	v->a[49313] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[49314] = anon_sym_DOLLAR;
	v->a[49315] = anon_sym_DQUOTE;
	v->a[49316] = sym_raw_string;
	v->a[49317] = sym_number;
	v->a[49318] = anon_sym_DOLLAR_LBRACE;
	v->a[49319] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_2466(v);
}

void	small_parse_table_2466(t_small_parse_table_array *v)
{
	v->a[49320] = sym_word;
	v->a[49321] = 15;
	v->a[49322] = actions(680);
	v->a[49323] = 1;
	v->a[49324] = sym_comment;
	v->a[49325] = actions(1574);
	v->a[49326] = 1;
	v->a[49327] = anon_sym_LPAREN;
	v->a[49328] = actions(1576);
	v->a[49329] = 1;
	v->a[49330] = anon_sym_BANG;
	v->a[49331] = actions(1584);
	v->a[49332] = 1;
	v->a[49333] = anon_sym_TILDE;
	v->a[49334] = actions(1586);
	v->a[49335] = 1;
	v->a[49336] = anon_sym_DOLLAR;
	v->a[49337] = actions(1588);
	v->a[49338] = 1;
	v->a[49339] = anon_sym_DQUOTE;
	small_parse_table_2467(v);
}

void	small_parse_table_2467(t_small_parse_table_array *v)
{
	v->a[49340] = actions(1592);
	v->a[49341] = 1;
	v->a[49342] = anon_sym_DOLLAR_LBRACE;
	v->a[49343] = actions(1594);
	v->a[49344] = 1;
	v->a[49345] = anon_sym_DOLLAR_LPAREN;
	v->a[49346] = actions(1596);
	v->a[49347] = 1;
	v->a[49348] = anon_sym_BQUOTE;
	v->a[49349] = actions(1598);
	v->a[49350] = 1;
	v->a[49351] = sym_variable_name;
	v->a[49352] = actions(1580);
	v->a[49353] = 2;
	v->a[49354] = anon_sym_PLUS_PLUS;
	v->a[49355] = anon_sym_DASH_DASH;
	v->a[49356] = actions(1582);
	v->a[49357] = 2;
	v->a[49358] = anon_sym_DASH2;
	v->a[49359] = anon_sym_PLUS2;
	small_parse_table_2468(v);
}

void	small_parse_table_2468(t_small_parse_table_array *v)
{
	v->a[49360] = actions(1590);
	v->a[49361] = 2;
	v->a[49362] = sym_number;
	v->a[49363] = aux_sym__simple_variable_name_token1;
	v->a[49364] = state(238);
	v->a[49365] = 3;
	v->a[49366] = sym_string;
	v->a[49367] = sym_simple_expansion;
	v->a[49368] = sym_expansion;
	v->a[49369] = state(225);
	v->a[49370] = 8;
	v->a[49371] = sym__arithmetic_expression;
	v->a[49372] = sym_arithmetic_literal;
	v->a[49373] = sym_arithmetic_binary_expression;
	v->a[49374] = sym_arithmetic_ternary_expression;
	v->a[49375] = sym_arithmetic_unary_expression;
	v->a[49376] = sym_arithmetic_postfix_expression;
	v->a[49377] = sym_arithmetic_parenthesized_expression;
	v->a[49378] = sym_command_substitution;
	v->a[49379] = 15;
	small_parse_table_2469(v);
}

void	small_parse_table_2469(t_small_parse_table_array *v)
{
	v->a[49380] = actions(680);
	v->a[49381] = 1;
	v->a[49382] = sym_comment;
	v->a[49383] = actions(1574);
	v->a[49384] = 1;
	v->a[49385] = anon_sym_LPAREN;
	v->a[49386] = actions(1576);
	v->a[49387] = 1;
	v->a[49388] = anon_sym_BANG;
	v->a[49389] = actions(1584);
	v->a[49390] = 1;
	v->a[49391] = anon_sym_TILDE;
	v->a[49392] = actions(1586);
	v->a[49393] = 1;
	v->a[49394] = anon_sym_DOLLAR;
	v->a[49395] = actions(1588);
	v->a[49396] = 1;
	v->a[49397] = anon_sym_DQUOTE;
	v->a[49398] = actions(1592);
	v->a[49399] = 1;
	small_parse_table_2470(v);
}

/* EOF small_parse_table_493.c */
