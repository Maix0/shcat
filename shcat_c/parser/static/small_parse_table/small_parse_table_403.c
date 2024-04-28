/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_403.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2015(t_small_parse_table_array *v)
{
	v->a[40300] = anon_sym_DOLLAR_LBRACE;
	v->a[40301] = anon_sym_DOLLAR_LPAREN;
	v->a[40302] = anon_sym_BQUOTE;
	v->a[40303] = anon_sym_DOLLAR_BQUOTE;
	v->a[40304] = anon_sym_LT_LPAREN;
	v->a[40305] = anon_sym_GT_LPAREN;
	v->a[40306] = sym_word;
	v->a[40307] = 8;
	v->a[40308] = actions(3);
	v->a[40309] = 1;
	v->a[40310] = sym_comment;
	v->a[40311] = actions(5061);
	v->a[40312] = 1;
	v->a[40313] = anon_sym_DQUOTE;
	v->a[40314] = actions(5065);
	v->a[40315] = 1;
	v->a[40316] = sym_variable_name;
	v->a[40317] = state(2712);
	v->a[40318] = 1;
	v->a[40319] = sym_string;
	small_parse_table_2016(v);
}

void	small_parse_table_2016(t_small_parse_table_array *v)
{
	v->a[40320] = actions(5063);
	v->a[40321] = 2;
	v->a[40322] = aux_sym__simple_variable_name_token1;
	v->a[40323] = aux_sym__multiline_variable_name_token1;
	v->a[40324] = actions(1241);
	v->a[40325] = 3;
	v->a[40326] = sym_file_descriptor;
	v->a[40327] = sym_test_operator;
	v->a[40328] = sym__brace_start;
	v->a[40329] = actions(5059);
	v->a[40330] = 9;
	v->a[40331] = anon_sym_DASH;
	v->a[40332] = anon_sym_STAR;
	v->a[40333] = anon_sym_BANG;
	v->a[40334] = anon_sym_QMARK;
	v->a[40335] = anon_sym_DOLLAR;
	v->a[40336] = anon_sym_POUND;
	v->a[40337] = anon_sym_AT2;
	v->a[40338] = anon_sym_0;
	v->a[40339] = anon_sym__;
	small_parse_table_2017(v);
}

void	small_parse_table_2017(t_small_parse_table_array *v)
{
	v->a[40340] = actions(1239);
	v->a[40341] = 31;
	v->a[40342] = anon_sym_LPAREN_LPAREN;
	v->a[40343] = anon_sym_PIPE_PIPE;
	v->a[40344] = anon_sym_AMP_AMP;
	v->a[40345] = anon_sym_PIPE;
	v->a[40346] = anon_sym_LT;
	v->a[40347] = anon_sym_GT;
	v->a[40348] = anon_sym_LT_LT;
	v->a[40349] = anon_sym_GT_GT;
	v->a[40350] = anon_sym_PIPE_AMP;
	v->a[40351] = anon_sym_AMP_GT;
	v->a[40352] = anon_sym_AMP_GT_GT;
	v->a[40353] = anon_sym_LT_AMP;
	v->a[40354] = anon_sym_GT_AMP;
	v->a[40355] = anon_sym_GT_PIPE;
	v->a[40356] = anon_sym_LT_AMP_DASH;
	v->a[40357] = anon_sym_GT_AMP_DASH;
	v->a[40358] = anon_sym_LT_LT_DASH;
	v->a[40359] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_2018(v);
}

void	small_parse_table_2018(t_small_parse_table_array *v)
{
	v->a[40360] = anon_sym_DOLLAR_LBRACK;
	v->a[40361] = sym__special_character;
	v->a[40362] = sym_raw_string;
	v->a[40363] = sym_ansi_c_string;
	v->a[40364] = aux_sym_number_token1;
	v->a[40365] = aux_sym_number_token2;
	v->a[40366] = anon_sym_DOLLAR_LBRACE;
	v->a[40367] = anon_sym_DOLLAR_LPAREN;
	v->a[40368] = anon_sym_BQUOTE;
	v->a[40369] = anon_sym_DOLLAR_BQUOTE;
	v->a[40370] = anon_sym_LT_LPAREN;
	v->a[40371] = anon_sym_GT_LPAREN;
	v->a[40372] = sym_word;
	v->a[40373] = 6;
	v->a[40374] = actions(3);
	v->a[40375] = 1;
	v->a[40376] = sym_comment;
	v->a[40377] = actions(5071);
	v->a[40378] = 1;
	v->a[40379] = aux_sym_concatenation_token1;
	small_parse_table_2019(v);
}

void	small_parse_table_2019(t_small_parse_table_array *v)
{
	v->a[40380] = actions(5073);
	v->a[40381] = 1;
	v->a[40382] = sym__concat;
	v->a[40383] = state(1086);
	v->a[40384] = 1;
	v->a[40385] = aux_sym_concatenation_repeat1;
	v->a[40386] = actions(5069);
	v->a[40387] = 5;
	v->a[40388] = sym_file_descriptor;
	v->a[40389] = sym_variable_name;
	v->a[40390] = sym_test_operator;
	v->a[40391] = sym__brace_start;
	v->a[40392] = aux_sym_heredoc_redirect_token1;
	v->a[40393] = actions(5067);
	v->a[40394] = 40;
	v->a[40395] = anon_sym_LPAREN_LPAREN;
	v->a[40396] = anon_sym_SEMI;
	v->a[40397] = anon_sym_PIPE_PIPE;
	v->a[40398] = anon_sym_AMP_AMP;
	v->a[40399] = anon_sym_PIPE;
	small_parse_table_2020(v);
}

/* EOF small_parse_table_403.c */
