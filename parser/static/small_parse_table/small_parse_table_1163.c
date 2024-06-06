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
	v->a[116300] = sym_comment;
	v->a[116301] = actions(5334);
	v->a[116302] = 1;
	v->a[116303] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[116304] = actions(5340);
	v->a[116305] = 1;
	v->a[116306] = anon_sym_DQUOTE;
	v->a[116307] = actions(5344);
	v->a[116308] = 1;
	v->a[116309] = aux_sym_number_token1;
	v->a[116310] = actions(5346);
	v->a[116311] = 1;
	v->a[116312] = aux_sym_number_token2;
	v->a[116313] = actions(5348);
	v->a[116314] = 1;
	v->a[116315] = anon_sym_DOLLAR_LBRACE;
	v->a[116316] = actions(5350);
	v->a[116317] = 1;
	v->a[116318] = anon_sym_DOLLAR_LPAREN;
	v->a[116319] = actions(5352);
	small_parse_table_5816(v);
}

void	small_parse_table_5816(t_small_parse_table_array *v)
{
	v->a[116320] = 1;
	v->a[116321] = anon_sym_BQUOTE;
	v->a[116322] = actions(5354);
	v->a[116323] = 1;
	v->a[116324] = anon_sym_DOLLAR_BQUOTE;
	v->a[116325] = actions(5360);
	v->a[116326] = 1;
	v->a[116327] = sym__brace_start;
	v->a[116328] = actions(6833);
	v->a[116329] = 1;
	v->a[116330] = sym_word;
	v->a[116331] = actions(6837);
	v->a[116332] = 1;
	v->a[116333] = sym__special_character;
	v->a[116334] = actions(6841);
	v->a[116335] = 1;
	v->a[116336] = sym__comment_word;
	v->a[116337] = actions(6843);
	v->a[116338] = 1;
	v->a[116339] = anon_sym_DOLLAR;
	small_parse_table_5817(v);
}

void	small_parse_table_5817(t_small_parse_table_array *v)
{
	v->a[116340] = actions(6839);
	v->a[116341] = 3;
	v->a[116342] = sym_test_operator;
	v->a[116343] = sym__bare_dollar;
	v->a[116344] = sym_raw_string;
	v->a[116345] = state(1070);
	v->a[116346] = 7;
	v->a[116347] = sym_arithmetic_expansion;
	v->a[116348] = sym_brace_expression;
	v->a[116349] = sym_string;
	v->a[116350] = sym_number;
	v->a[116351] = sym_simple_expansion;
	v->a[116352] = sym_expansion;
	v->a[116353] = sym_command_substitution;
	v->a[116354] = 3;
	v->a[116355] = actions(3);
	v->a[116356] = 1;
	v->a[116357] = sym_comment;
	v->a[116358] = actions(1390);
	v->a[116359] = 2;
	small_parse_table_5818(v);
}

void	small_parse_table_5818(t_small_parse_table_array *v)
{
	v->a[116360] = sym_file_descriptor;
	v->a[116361] = aux_sym_heredoc_redirect_token1;
	v->a[116362] = actions(1388);
	v->a[116363] = 21;
	v->a[116364] = anon_sym_PIPE;
	v->a[116365] = anon_sym_SEMI_SEMI;
	v->a[116366] = anon_sym_SEMI_AMP;
	v->a[116367] = anon_sym_SEMI_SEMI_AMP;
	v->a[116368] = anon_sym_PIPE_AMP;
	v->a[116369] = anon_sym_AMP_AMP;
	v->a[116370] = anon_sym_PIPE_PIPE;
	v->a[116371] = anon_sym_LT;
	v->a[116372] = anon_sym_GT;
	v->a[116373] = anon_sym_GT_GT;
	v->a[116374] = anon_sym_AMP_GT;
	v->a[116375] = anon_sym_AMP_GT_GT;
	v->a[116376] = anon_sym_LT_AMP;
	v->a[116377] = anon_sym_GT_AMP;
	v->a[116378] = anon_sym_GT_PIPE;
	v->a[116379] = anon_sym_LT_AMP_DASH;
	small_parse_table_5819(v);
}

void	small_parse_table_5819(t_small_parse_table_array *v)
{
	v->a[116380] = anon_sym_GT_AMP_DASH;
	v->a[116381] = anon_sym_LT_LT;
	v->a[116382] = anon_sym_LT_LT_DASH;
	v->a[116383] = anon_sym_AMP;
	v->a[116384] = anon_sym_SEMI;
	v->a[116385] = 16;
	v->a[116386] = actions(3);
	v->a[116387] = 1;
	v->a[116388] = sym_comment;
	v->a[116389] = actions(87);
	v->a[116390] = 1;
	v->a[116391] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[116392] = actions(93);
	v->a[116393] = 1;
	v->a[116394] = anon_sym_DQUOTE;
	v->a[116395] = actions(97);
	v->a[116396] = 1;
	v->a[116397] = aux_sym_number_token1;
	v->a[116398] = actions(99);
	v->a[116399] = 1;
	small_parse_table_5820(v);
}

/* EOF small_parse_table_1163.c */
