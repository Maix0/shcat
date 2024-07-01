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
	v->a[40300] = anon_sym_LT;
	v->a[40301] = anon_sym_GT;
	v->a[40302] = anon_sym_GT_GT;
	v->a[40303] = anon_sym_LT_AMP;
	v->a[40304] = anon_sym_GT_AMP;
	v->a[40305] = anon_sym_GT_PIPE;
	v->a[40306] = anon_sym_LT_AMP_DASH;
	v->a[40307] = anon_sym_GT_AMP_DASH;
	v->a[40308] = anon_sym_LT_LT;
	v->a[40309] = anon_sym_LT_LT_DASH;
	v->a[40310] = aux_sym_heredoc_redirect_token1;
	v->a[40311] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[40312] = anon_sym_AMP;
	v->a[40313] = aux_sym_concatenation_token1;
	v->a[40314] = anon_sym_DOLLAR;
	v->a[40315] = anon_sym_DQUOTE;
	v->a[40316] = sym_raw_string;
	v->a[40317] = sym_number;
	v->a[40318] = anon_sym_DOLLAR_LBRACE;
	v->a[40319] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_2016(v);
}

void	small_parse_table_2016(t_small_parse_table_array *v)
{
	v->a[40320] = anon_sym_BQUOTE;
	v->a[40321] = sym_word;
	v->a[40322] = anon_sym_SEMI;
	v->a[40323] = 12;
	v->a[40324] = actions(3);
	v->a[40325] = 1;
	v->a[40326] = sym_comment;
	v->a[40327] = actions(602);
	v->a[40328] = 1;
	v->a[40329] = sym_file_descriptor;
	v->a[40330] = actions(699);
	v->a[40331] = 1;
	v->a[40332] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[40333] = actions(701);
	v->a[40334] = 1;
	v->a[40335] = anon_sym_DOLLAR;
	v->a[40336] = actions(703);
	v->a[40337] = 1;
	v->a[40338] = anon_sym_DQUOTE;
	v->a[40339] = actions(705);
	small_parse_table_2017(v);
}

void	small_parse_table_2017(t_small_parse_table_array *v)
{
	v->a[40340] = 1;
	v->a[40341] = anon_sym_DOLLAR_LBRACE;
	v->a[40342] = actions(707);
	v->a[40343] = 1;
	v->a[40344] = anon_sym_DOLLAR_LPAREN;
	v->a[40345] = actions(709);
	v->a[40346] = 1;
	v->a[40347] = anon_sym_BQUOTE;
	v->a[40348] = state(603);
	v->a[40349] = 2;
	v->a[40350] = sym_concatenation;
	v->a[40351] = aux_sym_for_statement_repeat1;
	v->a[40352] = actions(1354);
	v->a[40353] = 3;
	v->a[40354] = sym_raw_string;
	v->a[40355] = sym_number;
	v->a[40356] = sym_word;
	v->a[40357] = state(884);
	v->a[40358] = 5;
	v->a[40359] = sym_arithmetic_expansion;
	small_parse_table_2018(v);
}

void	small_parse_table_2018(t_small_parse_table_array *v)
{
	v->a[40360] = sym_string;
	v->a[40361] = sym_simple_expansion;
	v->a[40362] = sym_expansion;
	v->a[40363] = sym_command_substitution;
	v->a[40364] = actions(604);
	v->a[40365] = 14;
	v->a[40366] = anon_sym_PIPE;
	v->a[40367] = anon_sym_AMP_AMP;
	v->a[40368] = anon_sym_PIPE_PIPE;
	v->a[40369] = anon_sym_LT;
	v->a[40370] = anon_sym_GT;
	v->a[40371] = anon_sym_GT_GT;
	v->a[40372] = anon_sym_LT_AMP;
	v->a[40373] = anon_sym_GT_AMP;
	v->a[40374] = anon_sym_GT_PIPE;
	v->a[40375] = anon_sym_LT_AMP_DASH;
	v->a[40376] = anon_sym_GT_AMP_DASH;
	v->a[40377] = anon_sym_LT_LT;
	v->a[40378] = anon_sym_LT_LT_DASH;
	v->a[40379] = aux_sym_heredoc_redirect_token1;
	small_parse_table_2019(v);
}

void	small_parse_table_2019(t_small_parse_table_array *v)
{
	v->a[40380] = 14;
	v->a[40381] = actions(3);
	v->a[40382] = 1;
	v->a[40383] = sym_comment;
	v->a[40384] = actions(543);
	v->a[40385] = 1;
	v->a[40386] = sym_file_descriptor;
	v->a[40387] = actions(1116);
	v->a[40388] = 1;
	v->a[40389] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[40390] = actions(1118);
	v->a[40391] = 1;
	v->a[40392] = anon_sym_DOLLAR;
	v->a[40393] = actions(1120);
	v->a[40394] = 1;
	v->a[40395] = anon_sym_DQUOTE;
	v->a[40396] = actions(1122);
	v->a[40397] = 1;
	v->a[40398] = anon_sym_DOLLAR_LBRACE;
	v->a[40399] = actions(1124);
	small_parse_table_2020(v);
}

/* EOF small_parse_table_403.c */
