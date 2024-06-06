/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1093.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5465(t_small_parse_table_array *v)
{
	v->a[109300] = aux_sym_number_token1;
	v->a[109301] = actions(5346);
	v->a[109302] = 1;
	v->a[109303] = aux_sym_number_token2;
	v->a[109304] = actions(5348);
	v->a[109305] = 1;
	v->a[109306] = anon_sym_DOLLAR_LBRACE;
	v->a[109307] = actions(5350);
	v->a[109308] = 1;
	v->a[109309] = anon_sym_DOLLAR_LPAREN;
	v->a[109310] = actions(5352);
	v->a[109311] = 1;
	v->a[109312] = anon_sym_BQUOTE;
	v->a[109313] = actions(5354);
	v->a[109314] = 1;
	v->a[109315] = anon_sym_DOLLAR_BQUOTE;
	v->a[109316] = actions(5360);
	v->a[109317] = 1;
	v->a[109318] = sym__brace_start;
	v->a[109319] = actions(5757);
	small_parse_table_5466(v);
}

void	small_parse_table_5466(t_small_parse_table_array *v)
{
	v->a[109320] = 1;
	v->a[109321] = sym__special_character;
	v->a[109322] = actions(6267);
	v->a[109323] = 1;
	v->a[109324] = sym_word;
	v->a[109325] = state(1237);
	v->a[109326] = 1;
	v->a[109327] = aux_sym__literal_repeat1;
	v->a[109328] = actions(6269);
	v->a[109329] = 2;
	v->a[109330] = sym_test_operator;
	v->a[109331] = sym_raw_string;
	v->a[109332] = state(418);
	v->a[109333] = 2;
	v->a[109334] = sym_concatenation;
	v->a[109335] = aux_sym_for_statement_repeat1;
	v->a[109336] = state(1107);
	v->a[109337] = 7;
	v->a[109338] = sym_arithmetic_expansion;
	v->a[109339] = sym_brace_expression;
	small_parse_table_5467(v);
}

void	small_parse_table_5467(t_small_parse_table_array *v)
{
	v->a[109340] = sym_string;
	v->a[109341] = sym_number;
	v->a[109342] = sym_simple_expansion;
	v->a[109343] = sym_expansion;
	v->a[109344] = sym_command_substitution;
	v->a[109345] = 3;
	v->a[109346] = actions(3);
	v->a[109347] = 1;
	v->a[109348] = sym_comment;
	v->a[109349] = actions(6151);
	v->a[109350] = 3;
	v->a[109351] = sym_file_descriptor;
	v->a[109352] = ts_builtin_sym_end;
	v->a[109353] = aux_sym_heredoc_redirect_token1;
	v->a[109354] = actions(6149);
	v->a[109355] = 21;
	v->a[109356] = anon_sym_PIPE;
	v->a[109357] = anon_sym_RPAREN;
	v->a[109358] = anon_sym_SEMI_SEMI;
	v->a[109359] = anon_sym_PIPE_AMP;
	small_parse_table_5468(v);
}

void	small_parse_table_5468(t_small_parse_table_array *v)
{
	v->a[109360] = anon_sym_AMP_AMP;
	v->a[109361] = anon_sym_PIPE_PIPE;
	v->a[109362] = anon_sym_LT;
	v->a[109363] = anon_sym_GT;
	v->a[109364] = anon_sym_GT_GT;
	v->a[109365] = anon_sym_AMP_GT;
	v->a[109366] = anon_sym_AMP_GT_GT;
	v->a[109367] = anon_sym_LT_AMP;
	v->a[109368] = anon_sym_GT_AMP;
	v->a[109369] = anon_sym_GT_PIPE;
	v->a[109370] = anon_sym_LT_AMP_DASH;
	v->a[109371] = anon_sym_GT_AMP_DASH;
	v->a[109372] = anon_sym_LT_LT;
	v->a[109373] = anon_sym_LT_LT_DASH;
	v->a[109374] = anon_sym_AMP;
	v->a[109375] = anon_sym_BQUOTE;
	v->a[109376] = anon_sym_SEMI;
	v->a[109377] = 3;
	v->a[109378] = actions(3);
	v->a[109379] = 1;
	small_parse_table_5469(v);
}

void	small_parse_table_5469(t_small_parse_table_array *v)
{
	v->a[109380] = sym_comment;
	v->a[109381] = actions(6111);
	v->a[109382] = 3;
	v->a[109383] = sym_file_descriptor;
	v->a[109384] = ts_builtin_sym_end;
	v->a[109385] = aux_sym_heredoc_redirect_token1;
	v->a[109386] = actions(6109);
	v->a[109387] = 21;
	v->a[109388] = anon_sym_PIPE;
	v->a[109389] = anon_sym_RPAREN;
	v->a[109390] = anon_sym_SEMI_SEMI;
	v->a[109391] = anon_sym_PIPE_AMP;
	v->a[109392] = anon_sym_AMP_AMP;
	v->a[109393] = anon_sym_PIPE_PIPE;
	v->a[109394] = anon_sym_LT;
	v->a[109395] = anon_sym_GT;
	v->a[109396] = anon_sym_GT_GT;
	v->a[109397] = anon_sym_AMP_GT;
	v->a[109398] = anon_sym_AMP_GT_GT;
	v->a[109399] = anon_sym_LT_AMP;
	small_parse_table_5470(v);
}

/* EOF small_parse_table_1093.c */
