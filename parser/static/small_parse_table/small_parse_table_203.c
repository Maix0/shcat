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
	v->a[20300] = anon_sym_DOLLAR_LPAREN;
	v->a[20301] = actions(3894);
	v->a[20302] = 1;
	v->a[20303] = anon_sym_BQUOTE;
	v->a[20304] = actions(3896);
	v->a[20305] = 1;
	v->a[20306] = anon_sym_DOLLAR_BQUOTE;
	v->a[20307] = actions(3900);
	v->a[20308] = 1;
	v->a[20309] = sym_test_operator;
	v->a[20310] = actions(3902);
	v->a[20311] = 1;
	v->a[20312] = sym__brace_start;
	v->a[20313] = state(2281);
	v->a[20314] = 1;
	v->a[20315] = aux_sym__literal_repeat1;
	v->a[20316] = actions(3878);
	v->a[20317] = 2;
	v->a[20318] = anon_sym_LPAREN_LPAREN;
	v->a[20319] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_1016(v);
}

void	small_parse_table_1016(t_small_parse_table_array *v)
{
	v->a[20320] = actions(3898);
	v->a[20321] = 2;
	v->a[20322] = anon_sym_LT_LPAREN;
	v->a[20323] = anon_sym_GT_LPAREN;
	v->a[20324] = state(747);
	v->a[20325] = 2;
	v->a[20326] = sym_concatenation;
	v->a[20327] = aux_sym_for_statement_repeat1;
	v->a[20328] = actions(2096);
	v->a[20329] = 3;
	v->a[20330] = sym_file_descriptor;
	v->a[20331] = ts_builtin_sym_end;
	v->a[20332] = aux_sym_heredoc_redirect_token1;
	v->a[20333] = actions(3876);
	v->a[20334] = 3;
	v->a[20335] = sym_raw_string;
	v->a[20336] = sym_ansi_c_string;
	v->a[20337] = sym_word;
	v->a[20338] = state(1846);
	v->a[20339] = 9;
	small_parse_table_1017(v);
}

void	small_parse_table_1017(t_small_parse_table_array *v)
{
	v->a[20340] = sym_arithmetic_expansion;
	v->a[20341] = sym_brace_expression;
	v->a[20342] = sym_string;
	v->a[20343] = sym_translated_string;
	v->a[20344] = sym_number;
	v->a[20345] = sym_simple_expansion;
	v->a[20346] = sym_expansion;
	v->a[20347] = sym_command_substitution;
	v->a[20348] = sym_process_substitution;
	v->a[20349] = actions(2094);
	v->a[20350] = 19;
	v->a[20351] = anon_sym_SEMI;
	v->a[20352] = anon_sym_PIPE_PIPE;
	v->a[20353] = anon_sym_AMP_AMP;
	v->a[20354] = anon_sym_PIPE;
	v->a[20355] = anon_sym_AMP;
	v->a[20356] = anon_sym_LT;
	v->a[20357] = anon_sym_GT;
	v->a[20358] = anon_sym_LT_LT;
	v->a[20359] = anon_sym_GT_GT;
	small_parse_table_1018(v);
}

void	small_parse_table_1018(t_small_parse_table_array *v)
{
	v->a[20360] = anon_sym_SEMI_SEMI;
	v->a[20361] = anon_sym_PIPE_AMP;
	v->a[20362] = anon_sym_AMP_GT;
	v->a[20363] = anon_sym_AMP_GT_GT;
	v->a[20364] = anon_sym_LT_AMP;
	v->a[20365] = anon_sym_GT_AMP;
	v->a[20366] = anon_sym_GT_PIPE;
	v->a[20367] = anon_sym_LT_AMP_DASH;
	v->a[20368] = anon_sym_GT_AMP_DASH;
	v->a[20369] = anon_sym_LT_LT_DASH;
	v->a[20370] = 22;
	v->a[20371] = actions(3);
	v->a[20372] = 1;
	v->a[20373] = sym_comment;
	v->a[20374] = actions(3183);
	v->a[20375] = 1;
	v->a[20376] = anon_sym_DOLLAR_LBRACK;
	v->a[20377] = actions(3185);
	v->a[20378] = 1;
	v->a[20379] = anon_sym_DOLLAR;
	small_parse_table_1019(v);
}

void	small_parse_table_1019(t_small_parse_table_array *v)
{
	v->a[20380] = actions(3189);
	v->a[20381] = 1;
	v->a[20382] = anon_sym_DQUOTE;
	v->a[20383] = actions(3191);
	v->a[20384] = 1;
	v->a[20385] = aux_sym_number_token1;
	v->a[20386] = actions(3193);
	v->a[20387] = 1;
	v->a[20388] = aux_sym_number_token2;
	v->a[20389] = actions(3195);
	v->a[20390] = 1;
	v->a[20391] = anon_sym_DOLLAR_LBRACE;
	v->a[20392] = actions(3197);
	v->a[20393] = 1;
	v->a[20394] = anon_sym_DOLLAR_LPAREN;
	v->a[20395] = actions(3199);
	v->a[20396] = 1;
	v->a[20397] = anon_sym_BQUOTE;
	v->a[20398] = actions(3201);
	v->a[20399] = 1;
	small_parse_table_1020(v);
}

/* EOF small_parse_table_203.c */
