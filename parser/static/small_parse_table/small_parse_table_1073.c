/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1073.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5365(t_small_parse_table_array *v)
{
	v->a[107300] = anon_sym_GT;
	v->a[107301] = anon_sym_GT_GT;
	v->a[107302] = anon_sym_AMP_GT;
	v->a[107303] = anon_sym_AMP_GT_GT;
	v->a[107304] = anon_sym_LT_AMP;
	v->a[107305] = anon_sym_GT_AMP;
	v->a[107306] = anon_sym_GT_PIPE;
	v->a[107307] = anon_sym_LT_AMP_DASH;
	v->a[107308] = anon_sym_GT_AMP_DASH;
	v->a[107309] = anon_sym_LT_LT;
	v->a[107310] = anon_sym_LT_LT_DASH;
	v->a[107311] = anon_sym_AMP;
	v->a[107312] = anon_sym_SEMI;
	v->a[107313] = 3;
	v->a[107314] = actions(3);
	v->a[107315] = 1;
	v->a[107316] = sym_comment;
	v->a[107317] = actions(6215);
	v->a[107318] = 2;
	v->a[107319] = sym_file_descriptor;
	small_parse_table_5366(v);
}

void	small_parse_table_5366(t_small_parse_table_array *v)
{
	v->a[107320] = aux_sym_heredoc_redirect_token1;
	v->a[107321] = actions(6213);
	v->a[107322] = 22;
	v->a[107323] = anon_sym_esac;
	v->a[107324] = anon_sym_PIPE;
	v->a[107325] = anon_sym_SEMI_SEMI;
	v->a[107326] = anon_sym_SEMI_AMP;
	v->a[107327] = anon_sym_SEMI_SEMI_AMP;
	v->a[107328] = anon_sym_PIPE_AMP;
	v->a[107329] = anon_sym_AMP_AMP;
	v->a[107330] = anon_sym_PIPE_PIPE;
	v->a[107331] = anon_sym_LT;
	v->a[107332] = anon_sym_GT;
	v->a[107333] = anon_sym_GT_GT;
	v->a[107334] = anon_sym_AMP_GT;
	v->a[107335] = anon_sym_AMP_GT_GT;
	v->a[107336] = anon_sym_LT_AMP;
	v->a[107337] = anon_sym_GT_AMP;
	v->a[107338] = anon_sym_GT_PIPE;
	v->a[107339] = anon_sym_LT_AMP_DASH;
	small_parse_table_5367(v);
}

void	small_parse_table_5367(t_small_parse_table_array *v)
{
	v->a[107340] = anon_sym_GT_AMP_DASH;
	v->a[107341] = anon_sym_LT_LT;
	v->a[107342] = anon_sym_LT_LT_DASH;
	v->a[107343] = anon_sym_AMP;
	v->a[107344] = anon_sym_SEMI;
	v->a[107345] = 17;
	v->a[107346] = actions(57);
	v->a[107347] = 1;
	v->a[107348] = sym_comment;
	v->a[107349] = actions(1536);
	v->a[107350] = 1;
	v->a[107351] = sym_word;
	v->a[107352] = actions(1540);
	v->a[107353] = 1;
	v->a[107354] = anon_sym_DOLLAR;
	v->a[107355] = actions(1546);
	v->a[107356] = 1;
	v->a[107357] = aux_sym_number_token1;
	v->a[107358] = actions(1548);
	v->a[107359] = 1;
	small_parse_table_5368(v);
}

void	small_parse_table_5368(t_small_parse_table_array *v)
{
	v->a[107360] = aux_sym_number_token2;
	v->a[107361] = actions(1552);
	v->a[107362] = 1;
	v->a[107363] = anon_sym_DOLLAR_LPAREN;
	v->a[107364] = actions(1560);
	v->a[107365] = 1;
	v->a[107366] = sym__brace_start;
	v->a[107367] = actions(6169);
	v->a[107368] = 1;
	v->a[107369] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[107370] = actions(6171);
	v->a[107371] = 1;
	v->a[107372] = sym__special_character;
	v->a[107373] = actions(6173);
	v->a[107374] = 1;
	v->a[107375] = anon_sym_DQUOTE;
	v->a[107376] = actions(6175);
	v->a[107377] = 1;
	v->a[107378] = anon_sym_DOLLAR_LBRACE;
	v->a[107379] = actions(6177);
	small_parse_table_5369(v);
}

void	small_parse_table_5369(t_small_parse_table_array *v)
{
	v->a[107380] = 1;
	v->a[107381] = anon_sym_BQUOTE;
	v->a[107382] = actions(6179);
	v->a[107383] = 1;
	v->a[107384] = anon_sym_DOLLAR_BQUOTE;
	v->a[107385] = state(1034);
	v->a[107386] = 1;
	v->a[107387] = aux_sym__literal_repeat1;
	v->a[107388] = actions(1558);
	v->a[107389] = 2;
	v->a[107390] = sym_test_operator;
	v->a[107391] = sym_raw_string;
	v->a[107392] = state(323);
	v->a[107393] = 2;
	v->a[107394] = sym_concatenation;
	v->a[107395] = aux_sym_for_statement_repeat1;
	v->a[107396] = state(634);
	v->a[107397] = 7;
	v->a[107398] = sym_arithmetic_expansion;
	v->a[107399] = sym_brace_expression;
	small_parse_table_5370(v);
}

/* EOF small_parse_table_1073.c */
