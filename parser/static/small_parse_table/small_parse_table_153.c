/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_153.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_765(t_small_parse_table_array *v)
{
	v->a[15300] = actions(2448);
	v->a[15301] = 2;
	v->a[15302] = anon_sym_PIPE;
	v->a[15303] = anon_sym_PIPE_AMP;
	v->a[15304] = actions(2450);
	v->a[15305] = 2;
	v->a[15306] = anon_sym_AMP_AMP;
	v->a[15307] = anon_sym_PIPE_PIPE;
	v->a[15308] = actions(2454);
	v->a[15309] = 2;
	v->a[15310] = anon_sym_LT_AMP_DASH;
	v->a[15311] = anon_sym_GT_AMP_DASH;
	v->a[15312] = state(2771);
	v->a[15313] = 2;
	v->a[15314] = sym_file_redirect;
	v->a[15315] = aux_sym_redirected_statement_repeat2;
	v->a[15316] = state(2716);
	v->a[15317] = 7;
	v->a[15318] = sym_arithmetic_expansion;
	v->a[15319] = sym_brace_expression;
	small_parse_table_766(v);
}

void	small_parse_table_766(t_small_parse_table_array *v)
{
	v->a[15320] = sym_string;
	v->a[15321] = sym_number;
	v->a[15322] = sym_simple_expansion;
	v->a[15323] = sym_expansion;
	v->a[15324] = sym_command_substitution;
	v->a[15325] = actions(2452);
	v->a[15326] = 8;
	v->a[15327] = anon_sym_LT;
	v->a[15328] = anon_sym_GT;
	v->a[15329] = anon_sym_GT_GT;
	v->a[15330] = anon_sym_AMP_GT;
	v->a[15331] = anon_sym_AMP_GT_GT;
	v->a[15332] = anon_sym_LT_AMP;
	v->a[15333] = anon_sym_GT_AMP;
	v->a[15334] = anon_sym_GT_PIPE;
	v->a[15335] = 6;
	v->a[15336] = actions(3);
	v->a[15337] = 1;
	v->a[15338] = sym_comment;
	v->a[15339] = actions(1424);
	small_parse_table_767(v);
}

void	small_parse_table_767(t_small_parse_table_array *v)
{
	v->a[15340] = 1;
	v->a[15341] = sym_variable_name;
	v->a[15342] = actions(1422);
	v->a[15343] = 2;
	v->a[15344] = aux_sym__simple_variable_name_token1;
	v->a[15345] = aux_sym__multiline_variable_name_token1;
	v->a[15346] = actions(828);
	v->a[15347] = 4;
	v->a[15348] = sym_file_descriptor;
	v->a[15349] = sym_test_operator;
	v->a[15350] = sym__bare_dollar;
	v->a[15351] = sym__brace_start;
	v->a[15352] = actions(1420);
	v->a[15353] = 9;
	v->a[15354] = anon_sym_BANG;
	v->a[15355] = anon_sym_DASH;
	v->a[15356] = anon_sym_STAR;
	v->a[15357] = anon_sym_QMARK;
	v->a[15358] = anon_sym_DOLLAR;
	v->a[15359] = anon_sym_POUND;
	small_parse_table_768(v);
}

void	small_parse_table_768(t_small_parse_table_array *v)
{
	v->a[15360] = anon_sym_AT;
	v->a[15361] = anon_sym_0;
	v->a[15362] = anon_sym__;
	v->a[15363] = actions(826);
	v->a[15364] = 28;
	v->a[15365] = anon_sym_PIPE;
	v->a[15366] = anon_sym_PIPE_AMP;
	v->a[15367] = anon_sym_AMP_AMP;
	v->a[15368] = anon_sym_PIPE_PIPE;
	v->a[15369] = anon_sym_LT;
	v->a[15370] = anon_sym_GT;
	v->a[15371] = anon_sym_GT_GT;
	v->a[15372] = anon_sym_AMP_GT;
	v->a[15373] = anon_sym_AMP_GT_GT;
	v->a[15374] = anon_sym_LT_AMP;
	v->a[15375] = anon_sym_GT_AMP;
	v->a[15376] = anon_sym_GT_PIPE;
	v->a[15377] = anon_sym_LT_AMP_DASH;
	v->a[15378] = anon_sym_GT_AMP_DASH;
	v->a[15379] = anon_sym_LT_LT;
	small_parse_table_769(v);
}

void	small_parse_table_769(t_small_parse_table_array *v)
{
	v->a[15380] = anon_sym_LT_LT_DASH;
	v->a[15381] = aux_sym_heredoc_redirect_token1;
	v->a[15382] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[15383] = sym__special_character;
	v->a[15384] = anon_sym_DQUOTE;
	v->a[15385] = sym_raw_string;
	v->a[15386] = aux_sym_number_token1;
	v->a[15387] = aux_sym_number_token2;
	v->a[15388] = anon_sym_DOLLAR_LBRACE;
	v->a[15389] = anon_sym_DOLLAR_LPAREN;
	v->a[15390] = anon_sym_BQUOTE;
	v->a[15391] = anon_sym_DOLLAR_BQUOTE;
	v->a[15392] = sym_word;
	v->a[15393] = 21;
	v->a[15394] = actions(57);
	v->a[15395] = 1;
	v->a[15396] = sym_comment;
	v->a[15397] = actions(2539);
	v->a[15398] = 1;
	v->a[15399] = sym_word;
	small_parse_table_770(v);
}

/* EOF small_parse_table_153.c */
