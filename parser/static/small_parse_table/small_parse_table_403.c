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
	v->a[40300] = anon_sym_DOLLAR_LPAREN;
	v->a[40301] = actions(1418);
	v->a[40302] = 1;
	v->a[40303] = anon_sym_BQUOTE;
	v->a[40304] = state(561);
	v->a[40305] = 2;
	v->a[40306] = sym_concatenation;
	v->a[40307] = aux_sym_for_statement_repeat1;
	v->a[40308] = actions(1406);
	v->a[40309] = 3;
	v->a[40310] = sym_raw_string;
	v->a[40311] = sym_number;
	v->a[40312] = sym_word;
	v->a[40313] = state(852);
	v->a[40314] = 5;
	v->a[40315] = sym_arithmetic_expansion;
	v->a[40316] = sym_string;
	v->a[40317] = sym_simple_expansion;
	v->a[40318] = sym_expansion;
	v->a[40319] = sym_command_substitution;
	small_parse_table_2016(v);
}

void	small_parse_table_2016(t_small_parse_table_array *v)
{
	v->a[40320] = actions(497);
	v->a[40321] = 12;
	v->a[40322] = anon_sym_PIPE;
	v->a[40323] = anon_sym_AMP_AMP;
	v->a[40324] = anon_sym_PIPE_PIPE;
	v->a[40325] = anon_sym_LT;
	v->a[40326] = anon_sym_GT;
	v->a[40327] = anon_sym_GT_GT;
	v->a[40328] = anon_sym_LT_AMP;
	v->a[40329] = anon_sym_GT_AMP;
	v->a[40330] = anon_sym_GT_PIPE;
	v->a[40331] = anon_sym_LT_GT;
	v->a[40332] = anon_sym_LT_LT;
	v->a[40333] = anon_sym_LT_LT_DASH;
	v->a[40334] = 6;
	v->a[40335] = actions(3);
	v->a[40336] = 1;
	v->a[40337] = sym_comment;
	v->a[40338] = actions(1172);
	v->a[40339] = 1;
	small_parse_table_2017(v);
}

void	small_parse_table_2017(t_small_parse_table_array *v)
{
	v->a[40340] = sym_file_descriptor;
	v->a[40341] = actions(1315);
	v->a[40342] = 1;
	v->a[40343] = aux_sym_concatenation_token1;
	v->a[40344] = actions(1317);
	v->a[40345] = 1;
	v->a[40346] = sym__concat;
	v->a[40347] = state(600);
	v->a[40348] = 1;
	v->a[40349] = aux_sym_concatenation_repeat1;
	v->a[40350] = actions(1168);
	v->a[40351] = 25;
	v->a[40352] = anon_sym_PIPE;
	v->a[40353] = anon_sym_SEMI_SEMI;
	v->a[40354] = anon_sym_AMP_AMP;
	v->a[40355] = anon_sym_PIPE_PIPE;
	v->a[40356] = anon_sym_LT;
	v->a[40357] = anon_sym_GT;
	v->a[40358] = anon_sym_GT_GT;
	v->a[40359] = anon_sym_LT_AMP;
	small_parse_table_2018(v);
}

void	small_parse_table_2018(t_small_parse_table_array *v)
{
	v->a[40360] = anon_sym_GT_AMP;
	v->a[40361] = anon_sym_GT_PIPE;
	v->a[40362] = anon_sym_LT_GT;
	v->a[40363] = anon_sym_LT_LT;
	v->a[40364] = anon_sym_LT_LT_DASH;
	v->a[40365] = aux_sym_heredoc_redirect_token1;
	v->a[40366] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[40367] = anon_sym_AMP;
	v->a[40368] = anon_sym_DOLLAR;
	v->a[40369] = anon_sym_DQUOTE;
	v->a[40370] = sym_raw_string;
	v->a[40371] = sym_number;
	v->a[40372] = anon_sym_DOLLAR_LBRACE;
	v->a[40373] = anon_sym_DOLLAR_LPAREN;
	v->a[40374] = anon_sym_BQUOTE;
	v->a[40375] = sym_word;
	v->a[40376] = anon_sym_SEMI;
	v->a[40377] = 10;
	v->a[40378] = actions(3);
	v->a[40379] = 1;
	small_parse_table_2019(v);
}

void	small_parse_table_2019(t_small_parse_table_array *v)
{
	v->a[40380] = sym_comment;
	v->a[40381] = actions(736);
	v->a[40382] = 1;
	v->a[40383] = anon_sym_PIPE;
	v->a[40384] = actions(746);
	v->a[40385] = 1;
	v->a[40386] = sym_file_descriptor;
	v->a[40387] = actions(1393);
	v->a[40388] = 1;
	v->a[40389] = sym_variable_name;
	v->a[40390] = actions(1420);
	v->a[40391] = 1;
	v->a[40392] = aux_sym_heredoc_redirect_token1;
	v->a[40393] = actions(744);
	v->a[40394] = 2;
	v->a[40395] = anon_sym_LT_LT;
	v->a[40396] = anon_sym_LT_LT_DASH;
	v->a[40397] = actions(1396);
	v->a[40398] = 2;
	v->a[40399] = anon_sym_AMP_AMP;
	small_parse_table_2020(v);
}

/* EOF small_parse_table_403.c */
