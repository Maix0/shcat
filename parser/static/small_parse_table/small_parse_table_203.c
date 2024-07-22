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
	v->a[20300] = actions(443);
	v->a[20301] = 3;
	v->a[20302] = sym_raw_string;
	v->a[20303] = sym_number;
	v->a[20304] = sym_word;
	v->a[20305] = state(418);
	v->a[20306] = 5;
	v->a[20307] = sym_arithmetic_expansion;
	v->a[20308] = sym_string;
	v->a[20309] = sym_simple_expansion;
	v->a[20310] = sym_expansion;
	v->a[20311] = sym_command_substitution;
	v->a[20312] = actions(517);
	v->a[20313] = 15;
	v->a[20314] = anon_sym_PIPE;
	v->a[20315] = anon_sym_SEMI_SEMI;
	v->a[20316] = anon_sym_AMP_AMP;
	v->a[20317] = anon_sym_PIPE_PIPE;
	v->a[20318] = anon_sym_LT;
	v->a[20319] = anon_sym_GT;
	small_parse_table_1016(v);
}

void	small_parse_table_1016(t_small_parse_table_array *v)
{
	v->a[20320] = anon_sym_GT_GT;
	v->a[20321] = anon_sym_LT_AMP;
	v->a[20322] = anon_sym_GT_AMP;
	v->a[20323] = anon_sym_GT_PIPE;
	v->a[20324] = anon_sym_LT_GT;
	v->a[20325] = anon_sym_LT_LT;
	v->a[20326] = anon_sym_LT_LT_DASH;
	v->a[20327] = aux_sym_heredoc_redirect_token1;
	v->a[20328] = anon_sym_SEMI;
	v->a[20329] = 14;
	v->a[20330] = actions(3);
	v->a[20331] = 1;
	v->a[20332] = sym_comment;
	v->a[20333] = actions(546);
	v->a[20334] = 1;
	v->a[20335] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20336] = actions(549);
	v->a[20337] = 1;
	v->a[20338] = anon_sym_DOLLAR;
	v->a[20339] = actions(552);
	small_parse_table_1017(v);
}

void	small_parse_table_1017(t_small_parse_table_array *v)
{
	v->a[20340] = 1;
	v->a[20341] = anon_sym_DQUOTE;
	v->a[20342] = actions(555);
	v->a[20343] = 1;
	v->a[20344] = anon_sym_DOLLAR_LBRACE;
	v->a[20345] = actions(558);
	v->a[20346] = 1;
	v->a[20347] = anon_sym_DOLLAR_LPAREN;
	v->a[20348] = actions(561);
	v->a[20349] = 1;
	v->a[20350] = anon_sym_BQUOTE;
	v->a[20351] = actions(564);
	v->a[20352] = 1;
	v->a[20353] = sym_file_descriptor;
	v->a[20354] = actions(566);
	v->a[20355] = 1;
	v->a[20356] = sym__bare_dollar;
	v->a[20357] = state(197);
	v->a[20358] = 1;
	v->a[20359] = aux_sym_command_repeat2;
	small_parse_table_1018(v);
}

void	small_parse_table_1018(t_small_parse_table_array *v)
{
	v->a[20360] = state(732);
	v->a[20361] = 1;
	v->a[20362] = sym_concatenation;
	v->a[20363] = actions(541);
	v->a[20364] = 3;
	v->a[20365] = sym_raw_string;
	v->a[20366] = sym_number;
	v->a[20367] = sym_word;
	v->a[20368] = state(401);
	v->a[20369] = 5;
	v->a[20370] = sym_arithmetic_expansion;
	v->a[20371] = sym_string;
	v->a[20372] = sym_simple_expansion;
	v->a[20373] = sym_expansion;
	v->a[20374] = sym_command_substitution;
	v->a[20375] = actions(544);
	v->a[20376] = 16;
	v->a[20377] = anon_sym_esac;
	v->a[20378] = anon_sym_PIPE;
	v->a[20379] = anon_sym_SEMI_SEMI;
	small_parse_table_1019(v);
}

void	small_parse_table_1019(t_small_parse_table_array *v)
{
	v->a[20380] = anon_sym_AMP_AMP;
	v->a[20381] = anon_sym_PIPE_PIPE;
	v->a[20382] = anon_sym_LT;
	v->a[20383] = anon_sym_GT;
	v->a[20384] = anon_sym_GT_GT;
	v->a[20385] = anon_sym_LT_AMP;
	v->a[20386] = anon_sym_GT_AMP;
	v->a[20387] = anon_sym_GT_PIPE;
	v->a[20388] = anon_sym_LT_GT;
	v->a[20389] = anon_sym_LT_LT;
	v->a[20390] = anon_sym_LT_LT_DASH;
	v->a[20391] = aux_sym_heredoc_redirect_token1;
	v->a[20392] = anon_sym_SEMI;
	v->a[20393] = 3;
	v->a[20394] = actions(501);
	v->a[20395] = 1;
	v->a[20396] = sym_comment;
	v->a[20397] = actions(569);
	v->a[20398] = 13;
	v->a[20399] = anon_sym_PIPE;
	small_parse_table_1020(v);
}

/* EOF small_parse_table_203.c */
