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
	v->a[20300] = actions(385);
	v->a[20301] = 1;
	v->a[20302] = sym_file_descriptor;
	v->a[20303] = actions(423);
	v->a[20304] = 1;
	v->a[20305] = sym_variable_name;
	v->a[20306] = actions(421);
	v->a[20307] = 2;
	v->a[20308] = aux_sym__simple_variable_name_token1;
	v->a[20309] = aux_sym__multiline_variable_name_token1;
	v->a[20310] = actions(419);
	v->a[20311] = 9;
	v->a[20312] = anon_sym_BANG;
	v->a[20313] = anon_sym_DASH;
	v->a[20314] = anon_sym_STAR;
	v->a[20315] = anon_sym_QMARK;
	v->a[20316] = anon_sym_DOLLAR;
	v->a[20317] = anon_sym_POUND;
	v->a[20318] = anon_sym_AT;
	v->a[20319] = anon_sym_0;
	small_parse_table_1016(v);
}

void	small_parse_table_1016(t_small_parse_table_array *v)
{
	v->a[20320] = anon_sym__;
	v->a[20321] = actions(379);
	v->a[20322] = 28;
	v->a[20323] = anon_sym_PIPE;
	v->a[20324] = anon_sym_RPAREN;
	v->a[20325] = anon_sym_SEMI_SEMI;
	v->a[20326] = anon_sym_AMP_AMP;
	v->a[20327] = anon_sym_PIPE_PIPE;
	v->a[20328] = anon_sym_LT;
	v->a[20329] = anon_sym_GT;
	v->a[20330] = anon_sym_GT_GT;
	v->a[20331] = anon_sym_AMP_GT;
	v->a[20332] = anon_sym_AMP_GT_GT;
	v->a[20333] = anon_sym_LT_AMP;
	v->a[20334] = anon_sym_GT_AMP;
	v->a[20335] = anon_sym_GT_PIPE;
	v->a[20336] = anon_sym_LT_AMP_DASH;
	v->a[20337] = anon_sym_GT_AMP_DASH;
	v->a[20338] = anon_sym_LT_LT;
	v->a[20339] = anon_sym_LT_LT_DASH;
	small_parse_table_1017(v);
}

void	small_parse_table_1017(t_small_parse_table_array *v)
{
	v->a[20340] = aux_sym_heredoc_redirect_token1;
	v->a[20341] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20342] = anon_sym_AMP;
	v->a[20343] = anon_sym_DQUOTE;
	v->a[20344] = sym_raw_string;
	v->a[20345] = sym_number;
	v->a[20346] = anon_sym_DOLLAR_LBRACE;
	v->a[20347] = anon_sym_DOLLAR_LPAREN;
	v->a[20348] = anon_sym_BQUOTE;
	v->a[20349] = sym_word;
	v->a[20350] = anon_sym_SEMI;
	v->a[20351] = 6;
	v->a[20352] = actions(3);
	v->a[20353] = 1;
	v->a[20354] = sym_comment;
	v->a[20355] = actions(429);
	v->a[20356] = 1;
	v->a[20357] = sym_variable_name;
	v->a[20358] = actions(385);
	v->a[20359] = 2;
	small_parse_table_1018(v);
}

void	small_parse_table_1018(t_small_parse_table_array *v)
{
	v->a[20360] = sym_file_descriptor;
	v->a[20361] = ts_builtin_sym_end;
	v->a[20362] = actions(427);
	v->a[20363] = 2;
	v->a[20364] = aux_sym__simple_variable_name_token1;
	v->a[20365] = aux_sym__multiline_variable_name_token1;
	v->a[20366] = actions(425);
	v->a[20367] = 9;
	v->a[20368] = anon_sym_BANG;
	v->a[20369] = anon_sym_DASH;
	v->a[20370] = anon_sym_STAR;
	v->a[20371] = anon_sym_QMARK;
	v->a[20372] = anon_sym_DOLLAR;
	v->a[20373] = anon_sym_POUND;
	v->a[20374] = anon_sym_AT;
	v->a[20375] = anon_sym_0;
	v->a[20376] = anon_sym__;
	v->a[20377] = actions(379);
	v->a[20378] = 27;
	v->a[20379] = anon_sym_PIPE;
	small_parse_table_1019(v);
}

void	small_parse_table_1019(t_small_parse_table_array *v)
{
	v->a[20380] = anon_sym_SEMI_SEMI;
	v->a[20381] = anon_sym_AMP_AMP;
	v->a[20382] = anon_sym_PIPE_PIPE;
	v->a[20383] = anon_sym_LT;
	v->a[20384] = anon_sym_GT;
	v->a[20385] = anon_sym_GT_GT;
	v->a[20386] = anon_sym_AMP_GT;
	v->a[20387] = anon_sym_AMP_GT_GT;
	v->a[20388] = anon_sym_LT_AMP;
	v->a[20389] = anon_sym_GT_AMP;
	v->a[20390] = anon_sym_GT_PIPE;
	v->a[20391] = anon_sym_LT_AMP_DASH;
	v->a[20392] = anon_sym_GT_AMP_DASH;
	v->a[20393] = anon_sym_LT_LT;
	v->a[20394] = anon_sym_LT_LT_DASH;
	v->a[20395] = aux_sym_heredoc_redirect_token1;
	v->a[20396] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20397] = anon_sym_AMP;
	v->a[20398] = anon_sym_DQUOTE;
	v->a[20399] = sym_raw_string;
	small_parse_table_1020(v);
}

/* EOF small_parse_table_203.c */
