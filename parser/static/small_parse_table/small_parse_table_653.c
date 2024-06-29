/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_653.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3265(t_small_parse_table_array *v)
{
	v->a[65300] = actions(2051);
	v->a[65301] = 1;
	v->a[65302] = aux_sym_concatenation_token1;
	v->a[65303] = actions(2053);
	v->a[65304] = 1;
	v->a[65305] = sym__concat;
	v->a[65306] = state(1139);
	v->a[65307] = 1;
	v->a[65308] = aux_sym_concatenation_repeat1;
	v->a[65309] = actions(1174);
	v->a[65310] = 2;
	v->a[65311] = sym_file_descriptor;
	v->a[65312] = sym_variable_name;
	v->a[65313] = actions(1172);
	v->a[65314] = 19;
	v->a[65315] = anon_sym_LT;
	v->a[65316] = anon_sym_GT;
	v->a[65317] = anon_sym_GT_GT;
	v->a[65318] = anon_sym_AMP_GT;
	v->a[65319] = anon_sym_AMP_GT_GT;
	small_parse_table_3266(v);
}

void	small_parse_table_3266(t_small_parse_table_array *v)
{
	v->a[65320] = anon_sym_LT_AMP;
	v->a[65321] = anon_sym_GT_AMP;
	v->a[65322] = anon_sym_GT_PIPE;
	v->a[65323] = anon_sym_LT_AMP_DASH;
	v->a[65324] = anon_sym_GT_AMP_DASH;
	v->a[65325] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[65326] = anon_sym_DOLLAR;
	v->a[65327] = anon_sym_DQUOTE;
	v->a[65328] = sym_raw_string;
	v->a[65329] = sym_number;
	v->a[65330] = anon_sym_DOLLAR_LBRACE;
	v->a[65331] = anon_sym_DOLLAR_LPAREN;
	v->a[65332] = anon_sym_BQUOTE;
	v->a[65333] = sym_word;
	v->a[65334] = 11;
	v->a[65335] = actions(3);
	v->a[65336] = 1;
	v->a[65337] = sym_comment;
	v->a[65338] = actions(809);
	v->a[65339] = 1;
	small_parse_table_3267(v);
}

void	small_parse_table_3267(t_small_parse_table_array *v)
{
	v->a[65340] = anon_sym_RPAREN;
	v->a[65341] = actions(2031);
	v->a[65342] = 1;
	v->a[65343] = aux_sym_heredoc_redirect_token1;
	v->a[65344] = actions(2043);
	v->a[65345] = 1;
	v->a[65346] = sym_file_descriptor;
	v->a[65347] = state(728);
	v->a[65348] = 1;
	v->a[65349] = sym_terminator;
	v->a[65350] = actions(802);
	v->a[65351] = 2;
	v->a[65352] = anon_sym_AMP_AMP;
	v->a[65353] = anon_sym_PIPE_PIPE;
	v->a[65354] = actions(804);
	v->a[65355] = 2;
	v->a[65356] = anon_sym_LT_LT;
	v->a[65357] = anon_sym_LT_LT_DASH;
	v->a[65358] = actions(2041);
	v->a[65359] = 2;
	small_parse_table_3268(v);
}

void	small_parse_table_3268(t_small_parse_table_array *v)
{
	v->a[65360] = anon_sym_LT_AMP_DASH;
	v->a[65361] = anon_sym_GT_AMP_DASH;
	v->a[65362] = actions(800);
	v->a[65363] = 3;
	v->a[65364] = anon_sym_SEMI_SEMI;
	v->a[65365] = anon_sym_AMP;
	v->a[65366] = anon_sym_SEMI;
	v->a[65367] = state(1137);
	v->a[65368] = 3;
	v->a[65369] = sym_file_redirect;
	v->a[65370] = sym_heredoc_redirect;
	v->a[65371] = aux_sym_redirected_statement_repeat1;
	v->a[65372] = actions(2039);
	v->a[65373] = 8;
	v->a[65374] = anon_sym_LT;
	v->a[65375] = anon_sym_GT;
	v->a[65376] = anon_sym_GT_GT;
	v->a[65377] = anon_sym_AMP_GT;
	v->a[65378] = anon_sym_AMP_GT_GT;
	v->a[65379] = anon_sym_LT_AMP;
	small_parse_table_3269(v);
}

void	small_parse_table_3269(t_small_parse_table_array *v)
{
	v->a[65380] = anon_sym_GT_AMP;
	v->a[65381] = anon_sym_GT_PIPE;
	v->a[65382] = 6;
	v->a[65383] = actions(3);
	v->a[65384] = 1;
	v->a[65385] = sym_comment;
	v->a[65386] = actions(2101);
	v->a[65387] = 1;
	v->a[65388] = aux_sym_concatenation_token1;
	v->a[65389] = actions(2103);
	v->a[65390] = 1;
	v->a[65391] = sym__concat;
	v->a[65392] = state(1171);
	v->a[65393] = 1;
	v->a[65394] = aux_sym_concatenation_repeat1;
	v->a[65395] = actions(548);
	v->a[65396] = 2;
	v->a[65397] = sym_file_descriptor;
	v->a[65398] = aux_sym_heredoc_redirect_token1;
	v->a[65399] = actions(546);
	small_parse_table_3270(v);
}

/* EOF small_parse_table_653.c */
