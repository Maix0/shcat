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
	v->a[20300] = actions(501);
	v->a[20301] = 16;
	v->a[20302] = anon_sym_PIPE;
	v->a[20303] = anon_sym_SEMI_SEMI;
	v->a[20304] = anon_sym_AMP_AMP;
	v->a[20305] = anon_sym_PIPE_PIPE;
	v->a[20306] = anon_sym_LT;
	v->a[20307] = anon_sym_GT;
	v->a[20308] = anon_sym_GT_GT;
	v->a[20309] = anon_sym_LT_AMP;
	v->a[20310] = anon_sym_GT_AMP;
	v->a[20311] = anon_sym_GT_PIPE;
	v->a[20312] = anon_sym_LT_GT;
	v->a[20313] = anon_sym_LT_LT;
	v->a[20314] = anon_sym_LT_LT_DASH;
	v->a[20315] = aux_sym_heredoc_redirect_token1;
	v->a[20316] = anon_sym_AMP;
	v->a[20317] = anon_sym_SEMI;
	v->a[20318] = 14;
	v->a[20319] = actions(3);
	small_parse_table_1016(v);
}

void	small_parse_table_1016(t_small_parse_table_array *v)
{
	v->a[20320] = 1;
	v->a[20321] = sym_comment;
	v->a[20322] = actions(573);
	v->a[20323] = 1;
	v->a[20324] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20325] = actions(576);
	v->a[20326] = 1;
	v->a[20327] = anon_sym_DOLLAR;
	v->a[20328] = actions(579);
	v->a[20329] = 1;
	v->a[20330] = anon_sym_DQUOTE;
	v->a[20331] = actions(582);
	v->a[20332] = 1;
	v->a[20333] = anon_sym_DOLLAR_LBRACE;
	v->a[20334] = actions(585);
	v->a[20335] = 1;
	v->a[20336] = anon_sym_DOLLAR_LPAREN;
	v->a[20337] = actions(588);
	v->a[20338] = 1;
	v->a[20339] = anon_sym_BQUOTE;
	small_parse_table_1017(v);
}

void	small_parse_table_1017(t_small_parse_table_array *v)
{
	v->a[20340] = actions(591);
	v->a[20341] = 1;
	v->a[20342] = sym__bare_dollar;
	v->a[20343] = state(194);
	v->a[20344] = 1;
	v->a[20345] = aux_sym_command_repeat2;
	v->a[20346] = state(637);
	v->a[20347] = 1;
	v->a[20348] = sym_concatenation;
	v->a[20349] = actions(565);
	v->a[20350] = 2;
	v->a[20351] = sym_file_descriptor;
	v->a[20352] = ts_builtin_sym_end;
	v->a[20353] = actions(570);
	v->a[20354] = 3;
	v->a[20355] = sym_raw_string;
	v->a[20356] = sym_number;
	v->a[20357] = sym_word;
	v->a[20358] = state(431);
	v->a[20359] = 5;
	small_parse_table_1018(v);
}

void	small_parse_table_1018(t_small_parse_table_array *v)
{
	v->a[20360] = sym_arithmetic_expansion;
	v->a[20361] = sym_string;
	v->a[20362] = sym_simple_expansion;
	v->a[20363] = sym_expansion;
	v->a[20364] = sym_command_substitution;
	v->a[20365] = actions(545);
	v->a[20366] = 16;
	v->a[20367] = anon_sym_PIPE;
	v->a[20368] = anon_sym_SEMI_SEMI;
	v->a[20369] = anon_sym_AMP_AMP;
	v->a[20370] = anon_sym_PIPE_PIPE;
	v->a[20371] = anon_sym_LT;
	v->a[20372] = anon_sym_GT;
	v->a[20373] = anon_sym_GT_GT;
	v->a[20374] = anon_sym_LT_AMP;
	v->a[20375] = anon_sym_GT_AMP;
	v->a[20376] = anon_sym_GT_PIPE;
	v->a[20377] = anon_sym_LT_GT;
	v->a[20378] = anon_sym_LT_LT;
	v->a[20379] = anon_sym_LT_LT_DASH;
	small_parse_table_1019(v);
}

void	small_parse_table_1019(t_small_parse_table_array *v)
{
	v->a[20380] = aux_sym_heredoc_redirect_token1;
	v->a[20381] = anon_sym_AMP;
	v->a[20382] = anon_sym_SEMI;
	v->a[20383] = 12;
	v->a[20384] = actions(3);
	v->a[20385] = 1;
	v->a[20386] = sym_comment;
	v->a[20387] = actions(597);
	v->a[20388] = 1;
	v->a[20389] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20390] = actions(600);
	v->a[20391] = 1;
	v->a[20392] = anon_sym_DOLLAR;
	v->a[20393] = actions(603);
	v->a[20394] = 1;
	v->a[20395] = anon_sym_DQUOTE;
	v->a[20396] = actions(606);
	v->a[20397] = 1;
	v->a[20398] = anon_sym_DOLLAR_LBRACE;
	v->a[20399] = actions(609);
	small_parse_table_1020(v);
}

/* EOF small_parse_table_203.c */
