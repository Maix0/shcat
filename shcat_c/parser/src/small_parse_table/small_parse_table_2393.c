/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2393.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11965(t_small_parse_table_array *v)
{
	v->a[239300] = 1;
	v->a[239301] = anon_sym_DOLLAR_BQUOTE;
	v->a[239302] = actions(10548);
	v->a[239303] = 1;
	v->a[239304] = sym_word;
	v->a[239305] = actions(10554);
	v->a[239306] = 1;
	v->a[239307] = sym__comment_word;
	v->a[239308] = actions(11236);
	v->a[239309] = 1;
	v->a[239310] = anon_sym_DOLLAR;
	v->a[239311] = actions(9062);
	v->a[239312] = 2;
	v->a[239313] = anon_sym_LPAREN_LPAREN;
	v->a[239314] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[239315] = actions(9078);
	v->a[239316] = 2;
	v->a[239317] = anon_sym_LT_LPAREN;
	v->a[239318] = anon_sym_GT_LPAREN;
	v->a[239319] = actions(10550);
	small_parse_table_11966(v);
}

void	small_parse_table_11966(t_small_parse_table_array *v)
{
	v->a[239320] = 2;
	v->a[239321] = sym_test_operator;
	v->a[239322] = sym__special_character;
	v->a[239323] = actions(10552);
	v->a[239324] = 3;
	v->a[239325] = sym__bare_dollar;
	v->a[239326] = sym_raw_string;
	v->a[239327] = sym_ansi_c_string;
	v->a[239328] = state(1669);
	v->a[239329] = 9;
	v->a[239330] = sym_arithmetic_expansion;
	v->a[239331] = sym_brace_expression;
	v->a[239332] = sym_string;
	v->a[239333] = sym_translated_string;
	v->a[239334] = sym_number;
	v->a[239335] = sym_simple_expansion;
	v->a[239336] = sym_expansion;
	v->a[239337] = sym_command_substitution;
	v->a[239338] = sym_process_substitution;
	v->a[239339] = 21;
	small_parse_table_11967(v);
}

void	small_parse_table_11967(t_small_parse_table_array *v)
{
	v->a[239340] = actions(71);
	v->a[239341] = 1;
	v->a[239342] = sym_comment;
	v->a[239343] = actions(9364);
	v->a[239344] = 1;
	v->a[239345] = anon_sym_LPAREN;
	v->a[239346] = actions(9366);
	v->a[239347] = 1;
	v->a[239348] = anon_sym_BANG;
	v->a[239349] = actions(9372);
	v->a[239350] = 1;
	v->a[239351] = anon_sym_TILDE;
	v->a[239352] = actions(9374);
	v->a[239353] = 1;
	v->a[239354] = anon_sym_DOLLAR;
	v->a[239355] = actions(9376);
	v->a[239356] = 1;
	v->a[239357] = anon_sym_DQUOTE;
	v->a[239358] = actions(9378);
	v->a[239359] = 1;
	small_parse_table_11968(v);
}

void	small_parse_table_11968(t_small_parse_table_array *v)
{
	v->a[239360] = aux_sym_number_token1;
	v->a[239361] = actions(9380);
	v->a[239362] = 1;
	v->a[239363] = aux_sym_number_token2;
	v->a[239364] = actions(9382);
	v->a[239365] = 1;
	v->a[239366] = anon_sym_DOLLAR_LBRACE;
	v->a[239367] = actions(9384);
	v->a[239368] = 1;
	v->a[239369] = anon_sym_DOLLAR_LPAREN;
	v->a[239370] = actions(9386);
	v->a[239371] = 1;
	v->a[239372] = anon_sym_BQUOTE;
	v->a[239373] = actions(9388);
	v->a[239374] = 1;
	v->a[239375] = anon_sym_DOLLAR_BQUOTE;
	v->a[239376] = actions(9392);
	v->a[239377] = 1;
	v->a[239378] = sym_variable_name;
	v->a[239379] = actions(11238);
	small_parse_table_11969(v);
}

void	small_parse_table_11969(t_small_parse_table_array *v)
{
	v->a[239380] = 1;
	v->a[239381] = aux_sym__simple_variable_name_token1;
	v->a[239382] = state(3391);
	v->a[239383] = 1;
	v->a[239384] = sym__arithmetic_binary_expression;
	v->a[239385] = state(3396);
	v->a[239386] = 1;
	v->a[239387] = sym__arithmetic_ternary_expression;
	v->a[239388] = state(3398);
	v->a[239389] = 1;
	v->a[239390] = sym__arithmetic_unary_expression;
	v->a[239391] = state(3400);
	v->a[239392] = 1;
	v->a[239393] = sym__arithmetic_postfix_expression;
	v->a[239394] = actions(9368);
	v->a[239395] = 2;
	v->a[239396] = anon_sym_PLUS_PLUS2;
	v->a[239397] = anon_sym_DASH_DASH2;
	v->a[239398] = actions(9370);
	v->a[239399] = 2;
	small_parse_table_11970(v);
}

/* EOF small_parse_table_2393.c */
