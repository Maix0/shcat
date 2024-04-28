/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2333.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11665(t_small_parse_table_array *v)
{
	v->a[233300] = sym__arithmetic_unary_expression;
	v->a[233301] = state(3400);
	v->a[233302] = 1;
	v->a[233303] = sym__arithmetic_postfix_expression;
	v->a[233304] = actions(9368);
	v->a[233305] = 2;
	v->a[233306] = anon_sym_PLUS_PLUS2;
	v->a[233307] = anon_sym_DASH_DASH2;
	v->a[233308] = actions(9370);
	v->a[233309] = 2;
	v->a[233310] = anon_sym_DASH2;
	v->a[233311] = anon_sym_PLUS2;
	v->a[233312] = state(3434);
	v->a[233313] = 9;
	v->a[233314] = sym_subscript;
	v->a[233315] = sym__arithmetic_expression;
	v->a[233316] = sym__arithmetic_literal;
	v->a[233317] = sym__arithmetic_parenthesized_expression;
	v->a[233318] = sym_string;
	v->a[233319] = sym_number;
	small_parse_table_11666(v);
}

void	small_parse_table_11666(t_small_parse_table_array *v)
{
	v->a[233320] = sym_simple_expansion;
	v->a[233321] = sym_expansion;
	v->a[233322] = sym_command_substitution;
	v->a[233323] = 21;
	v->a[233324] = actions(71);
	v->a[233325] = 1;
	v->a[233326] = sym_comment;
	v->a[233327] = actions(9364);
	v->a[233328] = 1;
	v->a[233329] = anon_sym_LPAREN;
	v->a[233330] = actions(9366);
	v->a[233331] = 1;
	v->a[233332] = anon_sym_BANG;
	v->a[233333] = actions(9372);
	v->a[233334] = 1;
	v->a[233335] = anon_sym_TILDE;
	v->a[233336] = actions(9374);
	v->a[233337] = 1;
	v->a[233338] = anon_sym_DOLLAR;
	v->a[233339] = actions(9376);
	small_parse_table_11667(v);
}

void	small_parse_table_11667(t_small_parse_table_array *v)
{
	v->a[233340] = 1;
	v->a[233341] = anon_sym_DQUOTE;
	v->a[233342] = actions(9378);
	v->a[233343] = 1;
	v->a[233344] = aux_sym_number_token1;
	v->a[233345] = actions(9380);
	v->a[233346] = 1;
	v->a[233347] = aux_sym_number_token2;
	v->a[233348] = actions(9382);
	v->a[233349] = 1;
	v->a[233350] = anon_sym_DOLLAR_LBRACE;
	v->a[233351] = actions(9384);
	v->a[233352] = 1;
	v->a[233353] = anon_sym_DOLLAR_LPAREN;
	v->a[233354] = actions(9386);
	v->a[233355] = 1;
	v->a[233356] = anon_sym_BQUOTE;
	v->a[233357] = actions(9388);
	v->a[233358] = 1;
	v->a[233359] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_11668(v);
}

void	small_parse_table_11668(t_small_parse_table_array *v)
{
	v->a[233360] = actions(9392);
	v->a[233361] = 1;
	v->a[233362] = sym_variable_name;
	v->a[233363] = actions(11030);
	v->a[233364] = 1;
	v->a[233365] = aux_sym__simple_variable_name_token1;
	v->a[233366] = state(3391);
	v->a[233367] = 1;
	v->a[233368] = sym__arithmetic_binary_expression;
	v->a[233369] = state(3396);
	v->a[233370] = 1;
	v->a[233371] = sym__arithmetic_ternary_expression;
	v->a[233372] = state(3398);
	v->a[233373] = 1;
	v->a[233374] = sym__arithmetic_unary_expression;
	v->a[233375] = state(3400);
	v->a[233376] = 1;
	v->a[233377] = sym__arithmetic_postfix_expression;
	v->a[233378] = actions(9368);
	v->a[233379] = 2;
	small_parse_table_11669(v);
}

void	small_parse_table_11669(t_small_parse_table_array *v)
{
	v->a[233380] = anon_sym_PLUS_PLUS2;
	v->a[233381] = anon_sym_DASH_DASH2;
	v->a[233382] = actions(9370);
	v->a[233383] = 2;
	v->a[233384] = anon_sym_DASH2;
	v->a[233385] = anon_sym_PLUS2;
	v->a[233386] = state(3433);
	v->a[233387] = 9;
	v->a[233388] = sym_subscript;
	v->a[233389] = sym__arithmetic_expression;
	v->a[233390] = sym__arithmetic_literal;
	v->a[233391] = sym__arithmetic_parenthesized_expression;
	v->a[233392] = sym_string;
	v->a[233393] = sym_number;
	v->a[233394] = sym_simple_expansion;
	v->a[233395] = sym_expansion;
	v->a[233396] = sym_command_substitution;
	v->a[233397] = 21;
	v->a[233398] = actions(71);
	v->a[233399] = 1;
	small_parse_table_11670(v);
}

/* EOF small_parse_table_2333.c */
