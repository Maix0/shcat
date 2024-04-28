/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1163.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5815(t_small_parse_table_array *v)
{
	v->a[116300] = anon_sym_DOLLAR_LBRACE;
	v->a[116301] = actions(1159);
	v->a[116302] = 1;
	v->a[116303] = anon_sym_DOLLAR_LPAREN;
	v->a[116304] = actions(1163);
	v->a[116305] = 1;
	v->a[116306] = anon_sym_DOLLAR_BQUOTE;
	v->a[116307] = actions(1169);
	v->a[116308] = 1;
	v->a[116309] = sym__brace_start;
	v->a[116310] = actions(1187);
	v->a[116311] = 1;
	v->a[116312] = sym_word;
	v->a[116313] = actions(1189);
	v->a[116314] = 1;
	v->a[116315] = anon_sym_BANG;
	v->a[116316] = actions(1195);
	v->a[116317] = 1;
	v->a[116318] = anon_sym_TILDE;
	v->a[116319] = actions(1201);
	small_parse_table_5816(v);
}

void	small_parse_table_5816(t_small_parse_table_array *v)
{
	v->a[116320] = 1;
	v->a[116321] = sym_test_operator;
	v->a[116322] = actions(3060);
	v->a[116323] = 1;
	v->a[116324] = anon_sym_BQUOTE;
	v->a[116325] = actions(5779);
	v->a[116326] = 1;
	v->a[116327] = sym__special_character;
	v->a[116328] = state(2717);
	v->a[116329] = 1;
	v->a[116330] = aux_sym__literal_repeat1;
	v->a[116331] = state(3001);
	v->a[116332] = 1;
	v->a[116333] = sym__expression;
	v->a[116334] = actions(1129);
	v->a[116335] = 2;
	v->a[116336] = anon_sym_LPAREN_LPAREN;
	v->a[116337] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[116338] = actions(1165);
	v->a[116339] = 2;
	small_parse_table_5817(v);
}

void	small_parse_table_5817(t_small_parse_table_array *v)
{
	v->a[116340] = anon_sym_LT_LPAREN;
	v->a[116341] = anon_sym_GT_LPAREN;
	v->a[116342] = actions(1191);
	v->a[116343] = 2;
	v->a[116344] = anon_sym_PLUS_PLUS2;
	v->a[116345] = anon_sym_DASH_DASH2;
	v->a[116346] = actions(1193);
	v->a[116347] = 2;
	v->a[116348] = anon_sym_DASH2;
	v->a[116349] = anon_sym_PLUS2;
	v->a[116350] = actions(1199);
	v->a[116351] = 2;
	v->a[116352] = sym_raw_string;
	v->a[116353] = sym_ansi_c_string;
	v->a[116354] = state(2594);
	v->a[116355] = 6;
	v->a[116356] = sym_binary_expression;
	v->a[116357] = sym_ternary_expression;
	v->a[116358] = sym_unary_expression;
	v->a[116359] = sym_postfix_expression;
	small_parse_table_5818(v);
}

void	small_parse_table_5818(t_small_parse_table_array *v)
{
	v->a[116360] = sym_parenthesized_expression;
	v->a[116361] = sym_concatenation;
	v->a[116362] = state(2503);
	v->a[116363] = 9;
	v->a[116364] = sym_arithmetic_expansion;
	v->a[116365] = sym_brace_expression;
	v->a[116366] = sym_string;
	v->a[116367] = sym_translated_string;
	v->a[116368] = sym_number;
	v->a[116369] = sym_simple_expansion;
	v->a[116370] = sym_expansion;
	v->a[116371] = sym_command_substitution;
	v->a[116372] = sym_process_substitution;
	v->a[116373] = 26;
	v->a[116374] = actions(71);
	v->a[116375] = 1;
	v->a[116376] = sym_comment;
	v->a[116377] = actions(107);
	v->a[116378] = 1;
	v->a[116379] = anon_sym_TILDE;
	small_parse_table_5819(v);
}

void	small_parse_table_5819(t_small_parse_table_array *v)
{
	v->a[116380] = actions(237);
	v->a[116381] = 1;
	v->a[116382] = sym_word;
	v->a[116383] = actions(248);
	v->a[116384] = 1;
	v->a[116385] = anon_sym_LPAREN;
	v->a[116386] = actions(250);
	v->a[116387] = 1;
	v->a[116388] = anon_sym_BANG;
	v->a[116389] = actions(258);
	v->a[116390] = 1;
	v->a[116391] = anon_sym_DOLLAR;
	v->a[116392] = actions(264);
	v->a[116393] = 1;
	v->a[116394] = aux_sym_number_token1;
	v->a[116395] = actions(266);
	v->a[116396] = 1;
	v->a[116397] = aux_sym_number_token2;
	v->a[116398] = actions(270);
	v->a[116399] = 1;
	small_parse_table_5820(v);
}

/* EOF small_parse_table_1163.c */
