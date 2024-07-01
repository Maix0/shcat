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
	v->a[65300] = anon_sym_GT_AMP;
	v->a[65301] = anon_sym_GT_PIPE;
	v->a[65302] = anon_sym_LT_AMP_DASH;
	v->a[65303] = anon_sym_GT_AMP_DASH;
	v->a[65304] = anon_sym_LT_LT;
	v->a[65305] = anon_sym_LT_LT_DASH;
	v->a[65306] = anon_sym_AMP;
	v->a[65307] = anon_sym_SEMI;
	v->a[65308] = 11;
	v->a[65309] = actions(3);
	v->a[65310] = 1;
	v->a[65311] = sym_comment;
	v->a[65312] = actions(2017);
	v->a[65313] = 1;
	v->a[65314] = aux_sym_heredoc_redirect_token1;
	v->a[65315] = actions(2019);
	v->a[65316] = 1;
	v->a[65317] = sym_file_descriptor;
	v->a[65318] = state(690);
	v->a[65319] = 1;
	small_parse_table_3266(v);
}

void	small_parse_table_3266(t_small_parse_table_array *v)
{
	v->a[65320] = sym_terminator;
	v->a[65321] = actions(684);
	v->a[65322] = 2;
	v->a[65323] = anon_sym_AMP_AMP;
	v->a[65324] = anon_sym_PIPE_PIPE;
	v->a[65325] = actions(686);
	v->a[65326] = 2;
	v->a[65327] = anon_sym_LT_LT;
	v->a[65328] = anon_sym_LT_LT_DASH;
	v->a[65329] = actions(688);
	v->a[65330] = 2;
	v->a[65331] = anon_sym_AMP;
	v->a[65332] = anon_sym_SEMI;
	v->a[65333] = actions(695);
	v->a[65334] = 2;
	v->a[65335] = anon_sym_esac;
	v->a[65336] = anon_sym_SEMI_SEMI;
	v->a[65337] = actions(2015);
	v->a[65338] = 2;
	v->a[65339] = anon_sym_LT_AMP_DASH;
	small_parse_table_3267(v);
}

void	small_parse_table_3267(t_small_parse_table_array *v)
{
	v->a[65340] = anon_sym_GT_AMP_DASH;
	v->a[65341] = state(1176);
	v->a[65342] = 3;
	v->a[65343] = sym_file_redirect;
	v->a[65344] = sym_heredoc_redirect;
	v->a[65345] = aux_sym_redirected_statement_repeat1;
	v->a[65346] = actions(2013);
	v->a[65347] = 6;
	v->a[65348] = anon_sym_LT;
	v->a[65349] = anon_sym_GT;
	v->a[65350] = anon_sym_GT_GT;
	v->a[65351] = anon_sym_LT_AMP;
	v->a[65352] = anon_sym_GT_AMP;
	v->a[65353] = anon_sym_GT_PIPE;
	v->a[65354] = 11;
	v->a[65355] = actions(3);
	v->a[65356] = 1;
	v->a[65357] = sym_comment;
	v->a[65358] = actions(682);
	v->a[65359] = 1;
	small_parse_table_3268(v);
}

void	small_parse_table_3268(t_small_parse_table_array *v)
{
	v->a[65360] = anon_sym_PIPE;
	v->a[65361] = actions(2065);
	v->a[65362] = 1;
	v->a[65363] = sym_file_descriptor;
	v->a[65364] = actions(2154);
	v->a[65365] = 1;
	v->a[65366] = aux_sym_heredoc_redirect_token1;
	v->a[65367] = state(783);
	v->a[65368] = 1;
	v->a[65369] = sym_terminator;
	v->a[65370] = actions(754);
	v->a[65371] = 2;
	v->a[65372] = anon_sym_LT_LT;
	v->a[65373] = anon_sym_LT_LT_DASH;
	v->a[65374] = actions(924);
	v->a[65375] = 2;
	v->a[65376] = anon_sym_AMP_AMP;
	v->a[65377] = anon_sym_PIPE_PIPE;
	v->a[65378] = actions(2063);
	v->a[65379] = 2;
	small_parse_table_3269(v);
}

void	small_parse_table_3269(t_small_parse_table_array *v)
{
	v->a[65380] = anon_sym_LT_AMP_DASH;
	v->a[65381] = anon_sym_GT_AMP_DASH;
	v->a[65382] = actions(922);
	v->a[65383] = 3;
	v->a[65384] = anon_sym_SEMI_SEMI;
	v->a[65385] = anon_sym_AMP;
	v->a[65386] = anon_sym_SEMI;
	v->a[65387] = state(1268);
	v->a[65388] = 3;
	v->a[65389] = sym_file_redirect;
	v->a[65390] = sym_heredoc_redirect;
	v->a[65391] = aux_sym_redirected_statement_repeat1;
	v->a[65392] = actions(2061);
	v->a[65393] = 6;
	v->a[65394] = anon_sym_LT;
	v->a[65395] = anon_sym_GT;
	v->a[65396] = anon_sym_GT_GT;
	v->a[65397] = anon_sym_LT_AMP;
	v->a[65398] = anon_sym_GT_AMP;
	v->a[65399] = anon_sym_GT_PIPE;
	small_parse_table_3270(v);
}

/* EOF small_parse_table_653.c */
