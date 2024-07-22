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
	v->a[40300] = anon_sym_PIPE;
	v->a[40301] = anon_sym_AMP_AMP;
	v->a[40302] = anon_sym_PIPE_PIPE;
	v->a[40303] = anon_sym_LT;
	v->a[40304] = anon_sym_GT;
	v->a[40305] = anon_sym_GT_GT;
	v->a[40306] = anon_sym_LT_AMP;
	v->a[40307] = anon_sym_GT_AMP;
	v->a[40308] = anon_sym_GT_PIPE;
	v->a[40309] = anon_sym_LT_GT;
	v->a[40310] = anon_sym_LT_LT;
	v->a[40311] = anon_sym_LT_LT_DASH;
	v->a[40312] = aux_sym_heredoc_redirect_token1;
	v->a[40313] = anon_sym_DOLLAR_LPAREN_LPAREN;
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
	v->a[40322] = 7;
	v->a[40323] = actions(3);
	v->a[40324] = 1;
	v->a[40325] = sym_comment;
	v->a[40326] = actions(1125);
	v->a[40327] = 1;
	v->a[40328] = aux_sym_concatenation_token1;
	v->a[40329] = actions(1144);
	v->a[40330] = 1;
	v->a[40331] = sym__concat;
	v->a[40332] = actions(1440);
	v->a[40333] = 1;
	v->a[40334] = anon_sym_LPAREN;
	v->a[40335] = state(600);
	v->a[40336] = 1;
	v->a[40337] = aux_sym_concatenation_repeat1;
	v->a[40338] = actions(1132);
	v->a[40339] = 2;
	small_parse_table_2017(v);
}

void	small_parse_table_2017(t_small_parse_table_array *v)
{
	v->a[40340] = sym_file_descriptor;
	v->a[40341] = sym__bare_dollar;
	v->a[40342] = actions(1134);
	v->a[40343] = 22;
	v->a[40344] = anon_sym_PIPE;
	v->a[40345] = anon_sym_AMP_AMP;
	v->a[40346] = anon_sym_PIPE_PIPE;
	v->a[40347] = anon_sym_LT;
	v->a[40348] = anon_sym_GT;
	v->a[40349] = anon_sym_GT_GT;
	v->a[40350] = anon_sym_LT_AMP;
	v->a[40351] = anon_sym_GT_AMP;
	v->a[40352] = anon_sym_GT_PIPE;
	v->a[40353] = anon_sym_LT_GT;
	v->a[40354] = anon_sym_LT_LT;
	v->a[40355] = anon_sym_LT_LT_DASH;
	v->a[40356] = aux_sym_heredoc_redirect_token1;
	v->a[40357] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[40358] = anon_sym_DOLLAR;
	v->a[40359] = anon_sym_DQUOTE;
	small_parse_table_2018(v);
}

void	small_parse_table_2018(t_small_parse_table_array *v)
{
	v->a[40360] = sym_raw_string;
	v->a[40361] = sym_number;
	v->a[40362] = anon_sym_DOLLAR_LBRACE;
	v->a[40363] = anon_sym_DOLLAR_LPAREN;
	v->a[40364] = anon_sym_BQUOTE;
	v->a[40365] = sym_word;
	v->a[40366] = 16;
	v->a[40367] = actions(3);
	v->a[40368] = 1;
	v->a[40369] = sym_comment;
	v->a[40370] = actions(55);
	v->a[40371] = 1;
	v->a[40372] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[40373] = actions(57);
	v->a[40374] = 1;
	v->a[40375] = anon_sym_DOLLAR;
	v->a[40376] = actions(59);
	v->a[40377] = 1;
	v->a[40378] = anon_sym_DQUOTE;
	v->a[40379] = actions(63);
	small_parse_table_2019(v);
}

void	small_parse_table_2019(t_small_parse_table_array *v)
{
	v->a[40380] = 1;
	v->a[40381] = anon_sym_DOLLAR_LBRACE;
	v->a[40382] = actions(65);
	v->a[40383] = 1;
	v->a[40384] = anon_sym_DOLLAR_LPAREN;
	v->a[40385] = actions(67);
	v->a[40386] = 1;
	v->a[40387] = anon_sym_BQUOTE;
	v->a[40388] = actions(359);
	v->a[40389] = 1;
	v->a[40390] = sym_variable_name;
	v->a[40391] = actions(1095);
	v->a[40392] = 1;
	v->a[40393] = sym_file_descriptor;
	v->a[40394] = state(249);
	v->a[40395] = 1;
	v->a[40396] = sym_command_name;
	v->a[40397] = state(661);
	v->a[40398] = 1;
	v->a[40399] = sym_concatenation;
	small_parse_table_2020(v);
}

/* EOF small_parse_table_403.c */
