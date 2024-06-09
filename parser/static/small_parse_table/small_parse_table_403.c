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
	v->a[40300] = sym_variable_name;
	v->a[40301] = actions(1309);
	v->a[40302] = 31;
	v->a[40303] = anon_sym_esac;
	v->a[40304] = anon_sym_PIPE;
	v->a[40305] = anon_sym_SEMI_SEMI;
	v->a[40306] = anon_sym_AMP_AMP;
	v->a[40307] = anon_sym_PIPE_PIPE;
	v->a[40308] = anon_sym_LT;
	v->a[40309] = anon_sym_GT;
	v->a[40310] = anon_sym_GT_GT;
	v->a[40311] = anon_sym_AMP_GT;
	v->a[40312] = anon_sym_AMP_GT_GT;
	v->a[40313] = anon_sym_LT_AMP;
	v->a[40314] = anon_sym_GT_AMP;
	v->a[40315] = anon_sym_GT_PIPE;
	v->a[40316] = anon_sym_LT_AMP_DASH;
	v->a[40317] = anon_sym_GT_AMP_DASH;
	v->a[40318] = anon_sym_LT_LT;
	v->a[40319] = anon_sym_LT_LT_DASH;
	small_parse_table_2016(v);
}

void	small_parse_table_2016(t_small_parse_table_array *v)
{
	v->a[40320] = aux_sym_heredoc_redirect_token1;
	v->a[40321] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[40322] = anon_sym_AMP;
	v->a[40323] = aux_sym_concatenation_token1;
	v->a[40324] = anon_sym_DOLLAR;
	v->a[40325] = anon_sym_DQUOTE;
	v->a[40326] = sym_raw_string;
	v->a[40327] = aux_sym_number_token1;
	v->a[40328] = aux_sym_number_token2;
	v->a[40329] = anon_sym_DOLLAR_LBRACE;
	v->a[40330] = anon_sym_DOLLAR_LPAREN;
	v->a[40331] = anon_sym_BQUOTE;
	v->a[40332] = sym_word;
	v->a[40333] = anon_sym_SEMI;
	v->a[40334] = 3;
	v->a[40335] = actions(3);
	v->a[40336] = 1;
	v->a[40337] = sym_comment;
	v->a[40338] = actions(1112);
	v->a[40339] = 3;
	small_parse_table_2017(v);
}

void	small_parse_table_2017(t_small_parse_table_array *v)
{
	v->a[40340] = sym_file_descriptor;
	v->a[40341] = sym__concat;
	v->a[40342] = sym_variable_name;
	v->a[40343] = actions(1114);
	v->a[40344] = 31;
	v->a[40345] = anon_sym_PIPE;
	v->a[40346] = anon_sym_RPAREN;
	v->a[40347] = anon_sym_SEMI_SEMI;
	v->a[40348] = anon_sym_AMP_AMP;
	v->a[40349] = anon_sym_PIPE_PIPE;
	v->a[40350] = anon_sym_LT;
	v->a[40351] = anon_sym_GT;
	v->a[40352] = anon_sym_GT_GT;
	v->a[40353] = anon_sym_AMP_GT;
	v->a[40354] = anon_sym_AMP_GT_GT;
	v->a[40355] = anon_sym_LT_AMP;
	v->a[40356] = anon_sym_GT_AMP;
	v->a[40357] = anon_sym_GT_PIPE;
	v->a[40358] = anon_sym_LT_AMP_DASH;
	v->a[40359] = anon_sym_GT_AMP_DASH;
	small_parse_table_2018(v);
}

void	small_parse_table_2018(t_small_parse_table_array *v)
{
	v->a[40360] = anon_sym_LT_LT;
	v->a[40361] = anon_sym_LT_LT_DASH;
	v->a[40362] = aux_sym_heredoc_redirect_token1;
	v->a[40363] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[40364] = anon_sym_AMP;
	v->a[40365] = aux_sym_concatenation_token1;
	v->a[40366] = anon_sym_DOLLAR;
	v->a[40367] = anon_sym_DQUOTE;
	v->a[40368] = sym_raw_string;
	v->a[40369] = aux_sym_number_token1;
	v->a[40370] = aux_sym_number_token2;
	v->a[40371] = anon_sym_DOLLAR_LBRACE;
	v->a[40372] = anon_sym_DOLLAR_LPAREN;
	v->a[40373] = anon_sym_BQUOTE;
	v->a[40374] = sym_word;
	v->a[40375] = anon_sym_SEMI;
	v->a[40376] = 3;
	v->a[40377] = actions(3);
	v->a[40378] = 1;
	v->a[40379] = sym_comment;
	small_parse_table_2019(v);
}

void	small_parse_table_2019(t_small_parse_table_array *v)
{
	v->a[40380] = actions(1251);
	v->a[40381] = 4;
	v->a[40382] = sym_file_descriptor;
	v->a[40383] = sym__concat;
	v->a[40384] = sym__bare_dollar;
	v->a[40385] = ts_builtin_sym_end;
	v->a[40386] = actions(1253);
	v->a[40387] = 30;
	v->a[40388] = anon_sym_PIPE;
	v->a[40389] = anon_sym_SEMI_SEMI;
	v->a[40390] = anon_sym_AMP_AMP;
	v->a[40391] = anon_sym_PIPE_PIPE;
	v->a[40392] = anon_sym_LT;
	v->a[40393] = anon_sym_GT;
	v->a[40394] = anon_sym_GT_GT;
	v->a[40395] = anon_sym_AMP_GT;
	v->a[40396] = anon_sym_AMP_GT_GT;
	v->a[40397] = anon_sym_LT_AMP;
	v->a[40398] = anon_sym_GT_AMP;
	v->a[40399] = anon_sym_GT_PIPE;
	small_parse_table_2020(v);
}

/* EOF small_parse_table_403.c */
