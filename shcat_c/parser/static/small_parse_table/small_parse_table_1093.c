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
	v->a[109300] = sym_ansi_c_string;
	v->a[109301] = anon_sym_DOLLAR_LBRACE;
	v->a[109302] = anon_sym_DOLLAR_BQUOTE;
	v->a[109303] = anon_sym_LT_LPAREN;
	v->a[109304] = anon_sym_GT_LPAREN;
	v->a[109305] = 8;
	v->a[109306] = actions(3);
	v->a[109307] = 1;
	v->a[109308] = sym_comment;
	v->a[109309] = actions(5826);
	v->a[109310] = 1;
	v->a[109311] = aux_sym_heredoc_redirect_token1;
	v->a[109312] = actions(5828);
	v->a[109313] = 1;
	v->a[109314] = sym_file_descriptor;
	v->a[109315] = actions(6236);
	v->a[109316] = 1;
	v->a[109317] = anon_sym_RPAREN;
	v->a[109318] = actions(5831);
	v->a[109319] = 3;
	small_parse_table_5466(v);
}

void	small_parse_table_5466(t_small_parse_table_array *v)
{
	v->a[109320] = sym_variable_name;
	v->a[109321] = sym_test_operator;
	v->a[109322] = sym__brace_start;
	v->a[109323] = actions(5821);
	v->a[109324] = 9;
	v->a[109325] = anon_sym_SEMI;
	v->a[109326] = anon_sym_PIPE_PIPE;
	v->a[109327] = anon_sym_AMP_AMP;
	v->a[109328] = anon_sym_PIPE;
	v->a[109329] = anon_sym_AMP;
	v->a[109330] = anon_sym_LT_LT;
	v->a[109331] = anon_sym_SEMI_SEMI;
	v->a[109332] = anon_sym_PIPE_AMP;
	v->a[109333] = anon_sym_LT_LT_DASH;
	v->a[109334] = actions(5823);
	v->a[109335] = 11;
	v->a[109336] = anon_sym_LT;
	v->a[109337] = anon_sym_GT;
	v->a[109338] = anon_sym_GT_GT;
	v->a[109339] = anon_sym_AMP_GT;
	small_parse_table_5467(v);
}

void	small_parse_table_5467(t_small_parse_table_array *v)
{
	v->a[109340] = anon_sym_AMP_GT_GT;
	v->a[109341] = anon_sym_LT_AMP;
	v->a[109342] = anon_sym_GT_AMP;
	v->a[109343] = anon_sym_GT_PIPE;
	v->a[109344] = anon_sym_LT_AMP_DASH;
	v->a[109345] = anon_sym_GT_AMP_DASH;
	v->a[109346] = anon_sym_LT_LT_LT;
	v->a[109347] = actions(5819);
	v->a[109348] = 17;
	v->a[109349] = anon_sym_LPAREN_LPAREN;
	v->a[109350] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[109351] = anon_sym_DOLLAR_LBRACK;
	v->a[109352] = anon_sym_DOLLAR;
	v->a[109353] = sym__special_character;
	v->a[109354] = anon_sym_DQUOTE;
	v->a[109355] = sym_raw_string;
	v->a[109356] = sym_ansi_c_string;
	v->a[109357] = aux_sym_number_token1;
	v->a[109358] = aux_sym_number_token2;
	v->a[109359] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_5468(v);
}

void	small_parse_table_5468(t_small_parse_table_array *v)
{
	v->a[109360] = anon_sym_DOLLAR_LPAREN;
	v->a[109361] = anon_sym_BQUOTE;
	v->a[109362] = anon_sym_DOLLAR_BQUOTE;
	v->a[109363] = anon_sym_LT_LPAREN;
	v->a[109364] = anon_sym_GT_LPAREN;
	v->a[109365] = sym_word;
	v->a[109366] = 26;
	v->a[109367] = actions(71);
	v->a[109368] = 1;
	v->a[109369] = sym_comment;
	v->a[109370] = actions(1131);
	v->a[109371] = 1;
	v->a[109372] = anon_sym_LPAREN;
	v->a[109373] = actions(1141);
	v->a[109374] = 1;
	v->a[109375] = anon_sym_DOLLAR_LBRACK;
	v->a[109376] = actions(1145);
	v->a[109377] = 1;
	v->a[109378] = anon_sym_DOLLAR;
	v->a[109379] = actions(1149);
	small_parse_table_5469(v);
}

void	small_parse_table_5469(t_small_parse_table_array *v)
{
	v->a[109380] = 1;
	v->a[109381] = anon_sym_DQUOTE;
	v->a[109382] = actions(1153);
	v->a[109383] = 1;
	v->a[109384] = aux_sym_number_token1;
	v->a[109385] = actions(1155);
	v->a[109386] = 1;
	v->a[109387] = aux_sym_number_token2;
	v->a[109388] = actions(1157);
	v->a[109389] = 1;
	v->a[109390] = anon_sym_DOLLAR_LBRACE;
	v->a[109391] = actions(1159);
	v->a[109392] = 1;
	v->a[109393] = anon_sym_DOLLAR_LPAREN;
	v->a[109394] = actions(1163);
	v->a[109395] = 1;
	v->a[109396] = anon_sym_DOLLAR_BQUOTE;
	v->a[109397] = actions(1169);
	v->a[109398] = 1;
	v->a[109399] = sym__brace_start;
	small_parse_table_5470(v);
}

/* EOF small_parse_table_1093.c */
