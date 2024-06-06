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
	v->a[20301] = anon_sym_DQUOTE;
	v->a[20302] = actions(2217);
	v->a[20303] = 1;
	v->a[20304] = aux_sym_number_token1;
	v->a[20305] = actions(2220);
	v->a[20306] = 1;
	v->a[20307] = aux_sym_number_token2;
	v->a[20308] = actions(2223);
	v->a[20309] = 1;
	v->a[20310] = anon_sym_DOLLAR_LBRACE;
	v->a[20311] = actions(2226);
	v->a[20312] = 1;
	v->a[20313] = anon_sym_DOLLAR_LPAREN;
	v->a[20314] = actions(2229);
	v->a[20315] = 1;
	v->a[20316] = anon_sym_BQUOTE;
	v->a[20317] = actions(2232);
	v->a[20318] = 1;
	v->a[20319] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_1016(v);
}

void	small_parse_table_1016(t_small_parse_table_array *v)
{
	v->a[20320] = actions(2238);
	v->a[20321] = 1;
	v->a[20322] = sym__brace_start;
	v->a[20323] = actions(2929);
	v->a[20324] = 1;
	v->a[20325] = sym__special_character;
	v->a[20326] = actions(2932);
	v->a[20327] = 1;
	v->a[20328] = sym_test_operator;
	v->a[20329] = state(1270);
	v->a[20330] = 1;
	v->a[20331] = aux_sym__literal_repeat1;
	v->a[20332] = actions(1287);
	v->a[20333] = 2;
	v->a[20334] = sym_file_descriptor;
	v->a[20335] = aux_sym_heredoc_redirect_token1;
	v->a[20336] = actions(2926);
	v->a[20337] = 2;
	v->a[20338] = sym_raw_string;
	v->a[20339] = sym_word;
	small_parse_table_1017(v);
}

void	small_parse_table_1017(t_small_parse_table_array *v)
{
	v->a[20340] = state(531);
	v->a[20341] = 2;
	v->a[20342] = sym_concatenation;
	v->a[20343] = aux_sym_for_statement_repeat1;
	v->a[20344] = state(1412);
	v->a[20345] = 7;
	v->a[20346] = sym_arithmetic_expansion;
	v->a[20347] = sym_brace_expression;
	v->a[20348] = sym_string;
	v->a[20349] = sym_number;
	v->a[20350] = sym_simple_expansion;
	v->a[20351] = sym_expansion;
	v->a[20352] = sym_command_substitution;
	v->a[20353] = actions(1285);
	v->a[20354] = 16;
	v->a[20355] = anon_sym_PIPE;
	v->a[20356] = anon_sym_PIPE_AMP;
	v->a[20357] = anon_sym_AMP_AMP;
	v->a[20358] = anon_sym_PIPE_PIPE;
	v->a[20359] = anon_sym_LT;
	small_parse_table_1018(v);
}

void	small_parse_table_1018(t_small_parse_table_array *v)
{
	v->a[20360] = anon_sym_GT;
	v->a[20361] = anon_sym_GT_GT;
	v->a[20362] = anon_sym_AMP_GT;
	v->a[20363] = anon_sym_AMP_GT_GT;
	v->a[20364] = anon_sym_LT_AMP;
	v->a[20365] = anon_sym_GT_AMP;
	v->a[20366] = anon_sym_GT_PIPE;
	v->a[20367] = anon_sym_LT_AMP_DASH;
	v->a[20368] = anon_sym_GT_AMP_DASH;
	v->a[20369] = anon_sym_LT_LT;
	v->a[20370] = anon_sym_LT_LT_DASH;
	v->a[20371] = 29;
	v->a[20372] = actions(17);
	v->a[20373] = 1;
	v->a[20374] = anon_sym_LPAREN;
	v->a[20375] = actions(57);
	v->a[20376] = 1;
	v->a[20377] = sym_comment;
	v->a[20378] = actions(87);
	v->a[20379] = 1;
	small_parse_table_1019(v);
}

void	small_parse_table_1019(t_small_parse_table_array *v)
{
	v->a[20380] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20381] = actions(89);
	v->a[20382] = 1;
	v->a[20383] = anon_sym_DOLLAR;
	v->a[20384] = actions(93);
	v->a[20385] = 1;
	v->a[20386] = anon_sym_DQUOTE;
	v->a[20387] = actions(97);
	v->a[20388] = 1;
	v->a[20389] = aux_sym_number_token1;
	v->a[20390] = actions(99);
	v->a[20391] = 1;
	v->a[20392] = aux_sym_number_token2;
	v->a[20393] = actions(101);
	v->a[20394] = 1;
	v->a[20395] = anon_sym_DOLLAR_LBRACE;
	v->a[20396] = actions(103);
	v->a[20397] = 1;
	v->a[20398] = anon_sym_DOLLAR_LPAREN;
	v->a[20399] = actions(105);
	small_parse_table_1020(v);
}

/* EOF small_parse_table_203.c */
