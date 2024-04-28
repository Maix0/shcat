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
	v->a[107300] = 9;
	v->a[107301] = anon_sym_SEMI;
	v->a[107302] = anon_sym_PIPE_PIPE;
	v->a[107303] = anon_sym_AMP_AMP;
	v->a[107304] = anon_sym_PIPE;
	v->a[107305] = anon_sym_AMP;
	v->a[107306] = anon_sym_LT_LT;
	v->a[107307] = anon_sym_SEMI_SEMI;
	v->a[107308] = anon_sym_PIPE_AMP;
	v->a[107309] = anon_sym_LT_LT_DASH;
	v->a[107310] = actions(5823);
	v->a[107311] = 11;
	v->a[107312] = anon_sym_LT;
	v->a[107313] = anon_sym_GT;
	v->a[107314] = anon_sym_GT_GT;
	v->a[107315] = anon_sym_AMP_GT;
	v->a[107316] = anon_sym_AMP_GT_GT;
	v->a[107317] = anon_sym_LT_AMP;
	v->a[107318] = anon_sym_GT_AMP;
	v->a[107319] = anon_sym_GT_PIPE;
	small_parse_table_5366(v);
}

void	small_parse_table_5366(t_small_parse_table_array *v)
{
	v->a[107320] = anon_sym_LT_AMP_DASH;
	v->a[107321] = anon_sym_GT_AMP_DASH;
	v->a[107322] = anon_sym_LT_LT_LT;
	v->a[107323] = actions(5819);
	v->a[107324] = 17;
	v->a[107325] = anon_sym_LPAREN_LPAREN;
	v->a[107326] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[107327] = anon_sym_DOLLAR_LBRACK;
	v->a[107328] = anon_sym_DOLLAR;
	v->a[107329] = sym__special_character;
	v->a[107330] = anon_sym_DQUOTE;
	v->a[107331] = sym_raw_string;
	v->a[107332] = sym_ansi_c_string;
	v->a[107333] = aux_sym_number_token1;
	v->a[107334] = aux_sym_number_token2;
	v->a[107335] = anon_sym_DOLLAR_LBRACE;
	v->a[107336] = anon_sym_DOLLAR_LPAREN;
	v->a[107337] = anon_sym_BQUOTE;
	v->a[107338] = anon_sym_DOLLAR_BQUOTE;
	v->a[107339] = anon_sym_LT_LPAREN;
	small_parse_table_5367(v);
}

void	small_parse_table_5367(t_small_parse_table_array *v)
{
	v->a[107340] = anon_sym_GT_LPAREN;
	v->a[107341] = sym_word;
	v->a[107342] = 3;
	v->a[107343] = actions(3);
	v->a[107344] = 1;
	v->a[107345] = sym_comment;
	v->a[107346] = actions(1314);
	v->a[107347] = 6;
	v->a[107348] = sym_file_descriptor;
	v->a[107349] = sym__concat;
	v->a[107350] = sym_test_operator;
	v->a[107351] = sym__brace_start;
	v->a[107352] = ts_builtin_sym_end;
	v->a[107353] = aux_sym_heredoc_redirect_token1;
	v->a[107354] = actions(1312);
	v->a[107355] = 37;
	v->a[107356] = anon_sym_LPAREN_LPAREN;
	v->a[107357] = anon_sym_SEMI;
	v->a[107358] = anon_sym_PIPE_PIPE;
	v->a[107359] = anon_sym_AMP_AMP;
	small_parse_table_5368(v);
}

void	small_parse_table_5368(t_small_parse_table_array *v)
{
	v->a[107360] = anon_sym_PIPE;
	v->a[107361] = anon_sym_AMP;
	v->a[107362] = anon_sym_LT;
	v->a[107363] = anon_sym_GT;
	v->a[107364] = anon_sym_LT_LT;
	v->a[107365] = anon_sym_GT_GT;
	v->a[107366] = anon_sym_SEMI_SEMI;
	v->a[107367] = anon_sym_PIPE_AMP;
	v->a[107368] = anon_sym_AMP_GT;
	v->a[107369] = anon_sym_AMP_GT_GT;
	v->a[107370] = anon_sym_LT_AMP;
	v->a[107371] = anon_sym_GT_AMP;
	v->a[107372] = anon_sym_GT_PIPE;
	v->a[107373] = anon_sym_LT_AMP_DASH;
	v->a[107374] = anon_sym_GT_AMP_DASH;
	v->a[107375] = anon_sym_LT_LT_DASH;
	v->a[107376] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[107377] = anon_sym_DOLLAR_LBRACK;
	v->a[107378] = aux_sym_concatenation_token1;
	v->a[107379] = anon_sym_DOLLAR;
	small_parse_table_5369(v);
}

void	small_parse_table_5369(t_small_parse_table_array *v)
{
	v->a[107380] = sym__special_character;
	v->a[107381] = anon_sym_DQUOTE;
	v->a[107382] = sym_raw_string;
	v->a[107383] = sym_ansi_c_string;
	v->a[107384] = aux_sym_number_token1;
	v->a[107385] = aux_sym_number_token2;
	v->a[107386] = anon_sym_DOLLAR_LBRACE;
	v->a[107387] = anon_sym_DOLLAR_LPAREN;
	v->a[107388] = anon_sym_BQUOTE;
	v->a[107389] = anon_sym_DOLLAR_BQUOTE;
	v->a[107390] = anon_sym_LT_LPAREN;
	v->a[107391] = anon_sym_GT_LPAREN;
	v->a[107392] = sym_word;
	v->a[107393] = 3;
	v->a[107394] = actions(3);
	v->a[107395] = 1;
	v->a[107396] = sym_comment;
	v->a[107397] = actions(5772);
	v->a[107398] = 6;
	v->a[107399] = sym_file_descriptor;
	small_parse_table_5370(v);
}

/* EOF small_parse_table_1073.c */
