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
	v->a[49300] = anon_sym_PLUS_PLUS;
	v->a[49301] = anon_sym_DASH_DASH;
	v->a[49302] = actions(1477);
	v->a[49303] = 2;
	v->a[49304] = anon_sym_DASH2;
	v->a[49305] = anon_sym_PLUS2;
	v->a[49306] = actions(1485);
	v->a[49307] = 2;
	v->a[49308] = sym_number;
	v->a[49309] = aux_sym__simple_variable_name_token1;
	v->a[49310] = state(194);
	v->a[49311] = 3;
	v->a[49312] = sym_string;
	v->a[49313] = sym_simple_expansion;
	v->a[49314] = sym_expansion;
	v->a[49315] = state(217);
	v->a[49316] = 8;
	v->a[49317] = sym__arithmetic_expression;
	v->a[49318] = sym_arithmetic_literal;
	v->a[49319] = sym_arithmetic_binary_expression;
	small_parse_table_2466(v);
}

void	small_parse_table_2466(t_small_parse_table_array *v)
{
	v->a[49320] = sym_arithmetic_ternary_expression;
	v->a[49321] = sym_arithmetic_unary_expression;
	v->a[49322] = sym_arithmetic_postfix_expression;
	v->a[49323] = sym_arithmetic_parenthesized_expression;
	v->a[49324] = sym_command_substitution;
	v->a[49325] = 15;
	v->a[49326] = actions(501);
	v->a[49327] = 1;
	v->a[49328] = sym_comment;
	v->a[49329] = actions(1469);
	v->a[49330] = 1;
	v->a[49331] = anon_sym_LPAREN;
	v->a[49332] = actions(1471);
	v->a[49333] = 1;
	v->a[49334] = anon_sym_BANG;
	v->a[49335] = actions(1479);
	v->a[49336] = 1;
	v->a[49337] = anon_sym_TILDE;
	v->a[49338] = actions(1481);
	v->a[49339] = 1;
	small_parse_table_2467(v);
}

void	small_parse_table_2467(t_small_parse_table_array *v)
{
	v->a[49340] = anon_sym_DOLLAR;
	v->a[49341] = actions(1483);
	v->a[49342] = 1;
	v->a[49343] = anon_sym_DQUOTE;
	v->a[49344] = actions(1487);
	v->a[49345] = 1;
	v->a[49346] = anon_sym_DOLLAR_LBRACE;
	v->a[49347] = actions(1489);
	v->a[49348] = 1;
	v->a[49349] = anon_sym_DOLLAR_LPAREN;
	v->a[49350] = actions(1491);
	v->a[49351] = 1;
	v->a[49352] = anon_sym_BQUOTE;
	v->a[49353] = actions(1493);
	v->a[49354] = 1;
	v->a[49355] = sym_variable_name;
	v->a[49356] = actions(1475);
	v->a[49357] = 2;
	v->a[49358] = anon_sym_PLUS_PLUS;
	v->a[49359] = anon_sym_DASH_DASH;
	small_parse_table_2468(v);
}

void	small_parse_table_2468(t_small_parse_table_array *v)
{
	v->a[49360] = actions(1477);
	v->a[49361] = 2;
	v->a[49362] = anon_sym_DASH2;
	v->a[49363] = anon_sym_PLUS2;
	v->a[49364] = actions(1485);
	v->a[49365] = 2;
	v->a[49366] = sym_number;
	v->a[49367] = aux_sym__simple_variable_name_token1;
	v->a[49368] = state(194);
	v->a[49369] = 3;
	v->a[49370] = sym_string;
	v->a[49371] = sym_simple_expansion;
	v->a[49372] = sym_expansion;
	v->a[49373] = state(218);
	v->a[49374] = 8;
	v->a[49375] = sym__arithmetic_expression;
	v->a[49376] = sym_arithmetic_literal;
	v->a[49377] = sym_arithmetic_binary_expression;
	v->a[49378] = sym_arithmetic_ternary_expression;
	v->a[49379] = sym_arithmetic_unary_expression;
	small_parse_table_2469(v);
}

void	small_parse_table_2469(t_small_parse_table_array *v)
{
	v->a[49380] = sym_arithmetic_postfix_expression;
	v->a[49381] = sym_arithmetic_parenthesized_expression;
	v->a[49382] = sym_command_substitution;
	v->a[49383] = 4;
	v->a[49384] = actions(3);
	v->a[49385] = 1;
	v->a[49386] = sym_comment;
	v->a[49387] = actions(1410);
	v->a[49388] = 1;
	v->a[49389] = anon_sym_BQUOTE;
	v->a[49390] = actions(1412);
	v->a[49391] = 2;
	v->a[49392] = sym_file_descriptor;
	v->a[49393] = sym_variable_name;
	v->a[49394] = actions(1408);
	v->a[49395] = 23;
	v->a[49396] = anon_sym_for;
	v->a[49397] = anon_sym_while;
	v->a[49398] = anon_sym_until;
	v->a[49399] = anon_sym_if;
	small_parse_table_2470(v);
}

/* EOF small_parse_table_493.c */
