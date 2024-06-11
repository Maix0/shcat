/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_693.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3465(t_small_parse_table_array *v)
{
	v->a[69300] = actions(2178);
	v->a[69301] = 8;
	v->a[69302] = anon_sym_LT;
	v->a[69303] = anon_sym_GT;
	v->a[69304] = anon_sym_GT_GT;
	v->a[69305] = anon_sym_AMP_GT;
	v->a[69306] = anon_sym_AMP_GT_GT;
	v->a[69307] = anon_sym_LT_AMP;
	v->a[69308] = anon_sym_GT_AMP;
	v->a[69309] = anon_sym_GT_PIPE;
	v->a[69310] = 12;
	v->a[69311] = actions(3);
	v->a[69312] = 1;
	v->a[69313] = sym_comment;
	v->a[69314] = actions(807);
	v->a[69315] = 1;
	v->a[69316] = anon_sym_PIPE;
	v->a[69317] = actions(2184);
	v->a[69318] = 1;
	v->a[69319] = sym_file_descriptor;
	small_parse_table_3466(v);
}

void	small_parse_table_3466(t_small_parse_table_array *v)
{
	v->a[69320] = actions(2226);
	v->a[69321] = 1;
	v->a[69322] = aux_sym_heredoc_redirect_token1;
	v->a[69323] = actions(2228);
	v->a[69324] = 1;
	v->a[69325] = anon_sym_AMP;
	v->a[69326] = actions(2230);
	v->a[69327] = 1;
	v->a[69328] = anon_sym_SEMI;
	v->a[69329] = actions(840);
	v->a[69330] = 2;
	v->a[69331] = anon_sym_esac;
	v->a[69332] = anon_sym_SEMI_SEMI;
	v->a[69333] = actions(842);
	v->a[69334] = 2;
	v->a[69335] = anon_sym_AMP_AMP;
	v->a[69336] = anon_sym_PIPE_PIPE;
	v->a[69337] = actions(844);
	v->a[69338] = 2;
	v->a[69339] = anon_sym_LT_LT;
	small_parse_table_3467(v);
}

void	small_parse_table_3467(t_small_parse_table_array *v)
{
	v->a[69340] = anon_sym_LT_LT_DASH;
	v->a[69341] = actions(2180);
	v->a[69342] = 2;
	v->a[69343] = anon_sym_LT_AMP_DASH;
	v->a[69344] = anon_sym_GT_AMP_DASH;
	v->a[69345] = state(1214);
	v->a[69346] = 3;
	v->a[69347] = sym_file_redirect;
	v->a[69348] = sym_heredoc_redirect;
	v->a[69349] = aux_sym_redirected_statement_repeat1;
	v->a[69350] = actions(2178);
	v->a[69351] = 8;
	v->a[69352] = anon_sym_LT;
	v->a[69353] = anon_sym_GT;
	v->a[69354] = anon_sym_GT_GT;
	v->a[69355] = anon_sym_AMP_GT;
	v->a[69356] = anon_sym_AMP_GT_GT;
	v->a[69357] = anon_sym_LT_AMP;
	v->a[69358] = anon_sym_GT_AMP;
	v->a[69359] = anon_sym_GT_PIPE;
	small_parse_table_3468(v);
}

void	small_parse_table_3468(t_small_parse_table_array *v)
{
	v->a[69360] = 13;
	v->a[69361] = actions(3);
	v->a[69362] = 1;
	v->a[69363] = sym_comment;
	v->a[69364] = actions(807);
	v->a[69365] = 1;
	v->a[69366] = anon_sym_PIPE;
	v->a[69367] = actions(840);
	v->a[69368] = 1;
	v->a[69369] = anon_sym_BQUOTE;
	v->a[69370] = actions(2164);
	v->a[69371] = 1;
	v->a[69372] = sym_file_descriptor;
	v->a[69373] = actions(2232);
	v->a[69374] = 1;
	v->a[69375] = anon_sym_SEMI_SEMI;
	v->a[69376] = actions(2234);
	v->a[69377] = 1;
	v->a[69378] = aux_sym_heredoc_redirect_token1;
	v->a[69379] = actions(2236);
	small_parse_table_3469(v);
}

void	small_parse_table_3469(t_small_parse_table_array *v)
{
	v->a[69380] = 1;
	v->a[69381] = anon_sym_AMP;
	v->a[69382] = actions(2238);
	v->a[69383] = 1;
	v->a[69384] = anon_sym_SEMI;
	v->a[69385] = actions(861);
	v->a[69386] = 2;
	v->a[69387] = anon_sym_LT_LT;
	v->a[69388] = anon_sym_LT_LT_DASH;
	v->a[69389] = actions(1032);
	v->a[69390] = 2;
	v->a[69391] = anon_sym_AMP_AMP;
	v->a[69392] = anon_sym_PIPE_PIPE;
	v->a[69393] = actions(2160);
	v->a[69394] = 2;
	v->a[69395] = anon_sym_LT_AMP_DASH;
	v->a[69396] = anon_sym_GT_AMP_DASH;
	v->a[69397] = state(1297);
	v->a[69398] = 3;
	v->a[69399] = sym_file_redirect;
	small_parse_table_3470(v);
}

/* EOF small_parse_table_693.c */
