/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_203.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1015(t_small_parse_table_array *v)
{
	v->a[20300] = 26;
	v->a[20301] = anon_sym_PIPE;
	v->a[20302] = anon_sym_RPAREN;
	v->a[20303] = anon_sym_SEMI_SEMI;
	v->a[20304] = anon_sym_AMP_AMP;
	v->a[20305] = anon_sym_PIPE_PIPE;
	v->a[20306] = anon_sym_LT;
	v->a[20307] = anon_sym_GT;
	v->a[20308] = anon_sym_GT_GT;
	v->a[20309] = anon_sym_LT_AMP;
	v->a[20310] = anon_sym_GT_AMP;
	v->a[20311] = anon_sym_GT_PIPE;
	v->a[20312] = anon_sym_LT_AMP_DASH;
	v->a[20313] = anon_sym_GT_AMP_DASH;
	v->a[20314] = anon_sym_LT_LT;
	v->a[20315] = anon_sym_LT_LT_DASH;
	v->a[20316] = aux_sym_heredoc_redirect_token1;
	v->a[20317] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20318] = anon_sym_AMP;
	v->a[20319] = anon_sym_DQUOTE;
	small_parse_table_1016(v);
}

void	small_parse_table_1016(t_small_parse_table_array *v)
{
	v->a[20320] = sym_raw_string;
	v->a[20321] = sym_number;
	v->a[20322] = anon_sym_DOLLAR_LBRACE;
	v->a[20323] = anon_sym_DOLLAR_LPAREN;
	v->a[20324] = anon_sym_BQUOTE;
	v->a[20325] = sym_word;
	v->a[20326] = anon_sym_SEMI;
	v->a[20327] = 6;
	v->a[20328] = actions(3);
	v->a[20329] = 1;
	v->a[20330] = sym_comment;
	v->a[20331] = actions(379);
	v->a[20332] = 1;
	v->a[20333] = sym_file_descriptor;
	v->a[20334] = actions(453);
	v->a[20335] = 1;
	v->a[20336] = sym_variable_name;
	v->a[20337] = actions(451);
	v->a[20338] = 2;
	v->a[20339] = aux_sym__simple_variable_name_token1;
	small_parse_table_1017(v);
}

void	small_parse_table_1017(t_small_parse_table_array *v)
{
	v->a[20340] = aux_sym__multiline_variable_name_token1;
	v->a[20341] = actions(449);
	v->a[20342] = 9;
	v->a[20343] = anon_sym_BANG;
	v->a[20344] = anon_sym_DASH;
	v->a[20345] = anon_sym_STAR;
	v->a[20346] = anon_sym_QMARK;
	v->a[20347] = anon_sym_DOLLAR;
	v->a[20348] = anon_sym_POUND;
	v->a[20349] = anon_sym_AT;
	v->a[20350] = anon_sym_0;
	v->a[20351] = anon_sym__;
	v->a[20352] = actions(381);
	v->a[20353] = 25;
	v->a[20354] = anon_sym_PIPE;
	v->a[20355] = anon_sym_SEMI_SEMI;
	v->a[20356] = anon_sym_AMP_AMP;
	v->a[20357] = anon_sym_PIPE_PIPE;
	v->a[20358] = anon_sym_LT;
	v->a[20359] = anon_sym_GT;
	small_parse_table_1018(v);
}

void	small_parse_table_1018(t_small_parse_table_array *v)
{
	v->a[20360] = anon_sym_GT_GT;
	v->a[20361] = anon_sym_LT_AMP;
	v->a[20362] = anon_sym_GT_AMP;
	v->a[20363] = anon_sym_GT_PIPE;
	v->a[20364] = anon_sym_LT_AMP_DASH;
	v->a[20365] = anon_sym_GT_AMP_DASH;
	v->a[20366] = anon_sym_LT_LT;
	v->a[20367] = anon_sym_LT_LT_DASH;
	v->a[20368] = aux_sym_heredoc_redirect_token1;
	v->a[20369] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20370] = anon_sym_AMP;
	v->a[20371] = anon_sym_DQUOTE;
	v->a[20372] = sym_raw_string;
	v->a[20373] = sym_number;
	v->a[20374] = anon_sym_DOLLAR_LBRACE;
	v->a[20375] = anon_sym_DOLLAR_LPAREN;
	v->a[20376] = anon_sym_BQUOTE;
	v->a[20377] = sym_word;
	v->a[20378] = anon_sym_SEMI;
	v->a[20379] = 16;
	small_parse_table_1019(v);
}

void	small_parse_table_1019(t_small_parse_table_array *v)
{
	v->a[20380] = actions(3);
	v->a[20381] = 1;
	v->a[20382] = sym_comment;
	v->a[20383] = actions(17);
	v->a[20384] = 1;
	v->a[20385] = anon_sym_LPAREN;
	v->a[20386] = actions(459);
	v->a[20387] = 1;
	v->a[20388] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20389] = actions(461);
	v->a[20390] = 1;
	v->a[20391] = anon_sym_DOLLAR;
	v->a[20392] = actions(463);
	v->a[20393] = 1;
	v->a[20394] = anon_sym_DQUOTE;
	v->a[20395] = actions(465);
	v->a[20396] = 1;
	v->a[20397] = anon_sym_DOLLAR_LBRACE;
	v->a[20398] = actions(467);
	v->a[20399] = 1;
	small_parse_table_1020(v);
}

/* EOF small_parse_table_203.c */
