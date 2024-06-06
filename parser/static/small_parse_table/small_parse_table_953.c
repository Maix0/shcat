/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_953.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4765(t_small_parse_table_array *v)
{
	v->a[95300] = 21;
	v->a[95301] = anon_sym_PIPE;
	v->a[95302] = anon_sym_SEMI_SEMI;
	v->a[95303] = anon_sym_SEMI_AMP;
	v->a[95304] = anon_sym_SEMI_SEMI_AMP;
	v->a[95305] = anon_sym_PIPE_AMP;
	v->a[95306] = anon_sym_AMP_AMP;
	v->a[95307] = anon_sym_PIPE_PIPE;
	v->a[95308] = anon_sym_LT;
	v->a[95309] = anon_sym_GT;
	v->a[95310] = anon_sym_GT_GT;
	v->a[95311] = anon_sym_AMP_GT;
	v->a[95312] = anon_sym_AMP_GT_GT;
	v->a[95313] = anon_sym_LT_AMP;
	v->a[95314] = anon_sym_GT_AMP;
	v->a[95315] = anon_sym_GT_PIPE;
	v->a[95316] = anon_sym_LT_AMP_DASH;
	v->a[95317] = anon_sym_GT_AMP_DASH;
	v->a[95318] = anon_sym_LT_LT;
	v->a[95319] = anon_sym_LT_LT_DASH;
	small_parse_table_4766(v);
}

void	small_parse_table_4766(t_small_parse_table_array *v)
{
	v->a[95320] = anon_sym_AMP;
	v->a[95321] = anon_sym_SEMI;
	v->a[95322] = 11;
	v->a[95323] = actions(3);
	v->a[95324] = 1;
	v->a[95325] = sym_comment;
	v->a[95326] = actions(2743);
	v->a[95327] = 1;
	v->a[95328] = aux_sym_heredoc_redirect_token1;
	v->a[95329] = actions(5243);
	v->a[95330] = 1;
	v->a[95331] = sym_file_descriptor;
	v->a[95332] = actions(2516);
	v->a[95333] = 2;
	v->a[95334] = anon_sym_PIPE;
	v->a[95335] = anon_sym_PIPE_AMP;
	v->a[95336] = actions(2706);
	v->a[95337] = 2;
	v->a[95338] = anon_sym_AMP_AMP;
	v->a[95339] = anon_sym_PIPE_PIPE;
	small_parse_table_4767(v);
}

void	small_parse_table_4767(t_small_parse_table_array *v)
{
	v->a[95340] = actions(2708);
	v->a[95341] = 2;
	v->a[95342] = anon_sym_LT_LT;
	v->a[95343] = anon_sym_LT_LT_DASH;
	v->a[95344] = actions(2745);
	v->a[95345] = 2;
	v->a[95346] = anon_sym_AMP;
	v->a[95347] = anon_sym_SEMI;
	v->a[95348] = actions(5241);
	v->a[95349] = 2;
	v->a[95350] = anon_sym_LT_AMP_DASH;
	v->a[95351] = anon_sym_GT_AMP_DASH;
	v->a[95352] = actions(2514);
	v->a[95353] = 3;
	v->a[95354] = anon_sym_SEMI_SEMI;
	v->a[95355] = anon_sym_SEMI_AMP;
	v->a[95356] = anon_sym_SEMI_SEMI_AMP;
	v->a[95357] = state(1983);
	v->a[95358] = 3;
	v->a[95359] = sym_file_redirect;
	small_parse_table_4768(v);
}

void	small_parse_table_4768(t_small_parse_table_array *v)
{
	v->a[95360] = sym_heredoc_redirect;
	v->a[95361] = aux_sym_redirected_statement_repeat1;
	v->a[95362] = actions(5239);
	v->a[95363] = 8;
	v->a[95364] = anon_sym_LT;
	v->a[95365] = anon_sym_GT;
	v->a[95366] = anon_sym_GT_GT;
	v->a[95367] = anon_sym_AMP_GT;
	v->a[95368] = anon_sym_AMP_GT_GT;
	v->a[95369] = anon_sym_LT_AMP;
	v->a[95370] = anon_sym_GT_AMP;
	v->a[95371] = anon_sym_GT_PIPE;
	v->a[95372] = 6;
	v->a[95373] = actions(3);
	v->a[95374] = 1;
	v->a[95375] = sym_comment;
	v->a[95376] = actions(4885);
	v->a[95377] = 1;
	v->a[95378] = sym_variable_name;
	v->a[95379] = actions(828);
	small_parse_table_4769(v);
}

void	small_parse_table_4769(t_small_parse_table_array *v)
{
	v->a[95380] = 2;
	v->a[95381] = sym_test_operator;
	v->a[95382] = sym__brace_start;
	v->a[95383] = actions(4883);
	v->a[95384] = 2;
	v->a[95385] = aux_sym__simple_variable_name_token1;
	v->a[95386] = aux_sym__multiline_variable_name_token1;
	v->a[95387] = actions(4881);
	v->a[95388] = 9;
	v->a[95389] = anon_sym_BANG;
	v->a[95390] = anon_sym_DASH;
	v->a[95391] = anon_sym_STAR;
	v->a[95392] = anon_sym_QMARK;
	v->a[95393] = anon_sym_DOLLAR;
	v->a[95394] = anon_sym_POUND;
	v->a[95395] = anon_sym_AT;
	v->a[95396] = anon_sym_0;
	v->a[95397] = anon_sym__;
	v->a[95398] = actions(826);
	v->a[95399] = 12;
	small_parse_table_4770(v);
}

/* EOF small_parse_table_953.c */
