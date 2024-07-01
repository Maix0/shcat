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
	v->a[20300] = 1;
	v->a[20301] = aux_sym_command_repeat2;
	v->a[20302] = state(627);
	v->a[20303] = 1;
	v->a[20304] = sym_concatenation;
	v->a[20305] = actions(588);
	v->a[20306] = 3;
	v->a[20307] = sym_raw_string;
	v->a[20308] = sym_number;
	v->a[20309] = sym_word;
	v->a[20310] = state(373);
	v->a[20311] = 5;
	v->a[20312] = sym_arithmetic_expansion;
	v->a[20313] = sym_string;
	v->a[20314] = sym_simple_expansion;
	v->a[20315] = sym_expansion;
	v->a[20316] = sym_command_substitution;
	v->a[20317] = actions(529);
	v->a[20318] = 17;
	v->a[20319] = anon_sym_PIPE;
	small_parse_table_1016(v);
}

void	small_parse_table_1016(t_small_parse_table_array *v)
{
	v->a[20320] = anon_sym_RPAREN;
	v->a[20321] = anon_sym_SEMI_SEMI;
	v->a[20322] = anon_sym_AMP_AMP;
	v->a[20323] = anon_sym_PIPE_PIPE;
	v->a[20324] = anon_sym_LT;
	v->a[20325] = anon_sym_GT;
	v->a[20326] = anon_sym_GT_GT;
	v->a[20327] = anon_sym_LT_AMP;
	v->a[20328] = anon_sym_GT_AMP;
	v->a[20329] = anon_sym_GT_PIPE;
	v->a[20330] = anon_sym_LT_GT;
	v->a[20331] = anon_sym_LT_LT;
	v->a[20332] = anon_sym_LT_LT_DASH;
	v->a[20333] = aux_sym_heredoc_redirect_token1;
	v->a[20334] = anon_sym_AMP;
	v->a[20335] = anon_sym_SEMI;
	v->a[20336] = 6;
	v->a[20337] = actions(3);
	v->a[20338] = 1;
	v->a[20339] = sym_comment;
	small_parse_table_1017(v);
}

void	small_parse_table_1017(t_small_parse_table_array *v)
{
	v->a[20340] = actions(616);
	v->a[20341] = 1;
	v->a[20342] = sym_variable_name;
	v->a[20343] = actions(367);
	v->a[20344] = 2;
	v->a[20345] = sym_file_descriptor;
	v->a[20346] = sym__bare_dollar;
	v->a[20347] = actions(614);
	v->a[20348] = 2;
	v->a[20349] = aux_sym__simple_variable_name_token1;
	v->a[20350] = aux_sym__multiline_variable_name_token1;
	v->a[20351] = actions(612);
	v->a[20352] = 9;
	v->a[20353] = anon_sym_BANG;
	v->a[20354] = anon_sym_DASH;
	v->a[20355] = anon_sym_STAR;
	v->a[20356] = anon_sym_QMARK;
	v->a[20357] = anon_sym_DOLLAR;
	v->a[20358] = anon_sym_POUND;
	v->a[20359] = anon_sym_AT;
	small_parse_table_1018(v);
}

void	small_parse_table_1018(t_small_parse_table_array *v)
{
	v->a[20360] = anon_sym_0;
	v->a[20361] = anon_sym__;
	v->a[20362] = actions(361);
	v->a[20363] = 21;
	v->a[20364] = anon_sym_LPAREN;
	v->a[20365] = anon_sym_PIPE;
	v->a[20366] = anon_sym_AMP_AMP;
	v->a[20367] = anon_sym_PIPE_PIPE;
	v->a[20368] = anon_sym_LT;
	v->a[20369] = anon_sym_GT;
	v->a[20370] = anon_sym_GT_GT;
	v->a[20371] = anon_sym_LT_AMP;
	v->a[20372] = anon_sym_GT_AMP;
	v->a[20373] = anon_sym_GT_PIPE;
	v->a[20374] = anon_sym_LT_GT;
	v->a[20375] = anon_sym_LT_LT;
	v->a[20376] = anon_sym_LT_LT_DASH;
	v->a[20377] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20378] = anon_sym_DQUOTE;
	v->a[20379] = sym_raw_string;
	small_parse_table_1019(v);
}

void	small_parse_table_1019(t_small_parse_table_array *v)
{
	v->a[20380] = sym_number;
	v->a[20381] = anon_sym_DOLLAR_LBRACE;
	v->a[20382] = anon_sym_DOLLAR_LPAREN;
	v->a[20383] = anon_sym_BQUOTE;
	v->a[20384] = sym_word;
	v->a[20385] = 14;
	v->a[20386] = actions(3);
	v->a[20387] = 1;
	v->a[20388] = sym_comment;
	v->a[20389] = actions(443);
	v->a[20390] = 1;
	v->a[20391] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20392] = actions(445);
	v->a[20393] = 1;
	v->a[20394] = anon_sym_DOLLAR;
	v->a[20395] = actions(447);
	v->a[20396] = 1;
	v->a[20397] = anon_sym_DQUOTE;
	v->a[20398] = actions(449);
	v->a[20399] = 1;
	small_parse_table_1020(v);
}

/* EOF small_parse_table_203.c */
