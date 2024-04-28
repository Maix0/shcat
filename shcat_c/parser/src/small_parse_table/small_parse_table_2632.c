/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2632.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_13160(t_small_parse_table_array *v)
{
	v->a[263200] = anon_sym_GT;
	v->a[263201] = anon_sym_GT_GT;
	v->a[263202] = anon_sym_AMP_GT;
	v->a[263203] = anon_sym_AMP_GT_GT;
	v->a[263204] = anon_sym_LT_AMP;
	v->a[263205] = anon_sym_GT_AMP;
	v->a[263206] = anon_sym_GT_PIPE;
	v->a[263207] = 5;
	v->a[263208] = actions(3);
	v->a[263209] = 1;
	v->a[263210] = sym_comment;
	v->a[263211] = state(5602);
	v->a[263212] = 1;
	v->a[263213] = aux_sym_pipeline_repeat1;
	v->a[263214] = actions(11745);
	v->a[263215] = 2;
	v->a[263216] = anon_sym_PIPE;
	v->a[263217] = anon_sym_PIPE_AMP;
	v->a[263218] = actions(11748);
	v->a[263219] = 3;
	small_parse_table_13161(v);
}

void	small_parse_table_13161(t_small_parse_table_array *v)
{
	v->a[263220] = sym_file_descriptor;
	v->a[263221] = ts_builtin_sym_end;
	v->a[263222] = aux_sym_heredoc_redirect_token1;
	v->a[263223] = actions(11743);
	v->a[263224] = 19;
	v->a[263225] = anon_sym_SEMI;
	v->a[263226] = anon_sym_PIPE_PIPE;
	v->a[263227] = anon_sym_AMP_AMP;
	v->a[263228] = anon_sym_AMP;
	v->a[263229] = anon_sym_LT;
	v->a[263230] = anon_sym_GT;
	v->a[263231] = anon_sym_LT_LT;
	v->a[263232] = anon_sym_GT_GT;
	v->a[263233] = anon_sym_RPAREN;
	v->a[263234] = anon_sym_SEMI_SEMI;
	v->a[263235] = anon_sym_AMP_GT;
	v->a[263236] = anon_sym_AMP_GT_GT;
	v->a[263237] = anon_sym_LT_AMP;
	v->a[263238] = anon_sym_GT_AMP;
	v->a[263239] = anon_sym_GT_PIPE;
	small_parse_table_13162(v);
}

void	small_parse_table_13162(t_small_parse_table_array *v)
{
	v->a[263240] = anon_sym_LT_AMP_DASH;
	v->a[263241] = anon_sym_GT_AMP_DASH;
	v->a[263242] = anon_sym_LT_LT_DASH;
	v->a[263243] = anon_sym_BQUOTE;
	v->a[263244] = 6;
	v->a[263245] = actions(3);
	v->a[263246] = 1;
	v->a[263247] = sym_comment;
	v->a[263248] = actions(11651);
	v->a[263249] = 1;
	v->a[263250] = aux_sym_concatenation_token1;
	v->a[263251] = actions(11653);
	v->a[263252] = 1;
	v->a[263253] = sym__concat;
	v->a[263254] = state(4630);
	v->a[263255] = 1;
	v->a[263256] = aux_sym_concatenation_repeat1;
	v->a[263257] = actions(5697);
	v->a[263258] = 3;
	v->a[263259] = sym_file_descriptor;
	small_parse_table_13163(v);
}

void	small_parse_table_13163(t_small_parse_table_array *v)
{
	v->a[263260] = ts_builtin_sym_end;
	v->a[263261] = aux_sym_heredoc_redirect_token1;
	v->a[263262] = actions(5695);
	v->a[263263] = 19;
	v->a[263264] = anon_sym_SEMI;
	v->a[263265] = anon_sym_PIPE_PIPE;
	v->a[263266] = anon_sym_AMP_AMP;
	v->a[263267] = anon_sym_PIPE;
	v->a[263268] = anon_sym_AMP;
	v->a[263269] = anon_sym_LT;
	v->a[263270] = anon_sym_GT;
	v->a[263271] = anon_sym_LT_LT;
	v->a[263272] = anon_sym_GT_GT;
	v->a[263273] = anon_sym_SEMI_SEMI;
	v->a[263274] = anon_sym_PIPE_AMP;
	v->a[263275] = anon_sym_AMP_GT;
	v->a[263276] = anon_sym_AMP_GT_GT;
	v->a[263277] = anon_sym_LT_AMP;
	v->a[263278] = anon_sym_GT_AMP;
	v->a[263279] = anon_sym_GT_PIPE;
	small_parse_table_13164(v);
}

void	small_parse_table_13164(t_small_parse_table_array *v)
{
	v->a[263280] = anon_sym_LT_AMP_DASH;
	v->a[263281] = anon_sym_GT_AMP_DASH;
	v->a[263282] = anon_sym_LT_LT_DASH;
	v->a[263283] = 3;
	v->a[263284] = actions(3);
	v->a[263285] = 1;
	v->a[263286] = sym_comment;
	v->a[263287] = actions(1294);
	v->a[263288] = 3;
	v->a[263289] = sym_file_descriptor;
	v->a[263290] = sym__concat;
	v->a[263291] = aux_sym_heredoc_redirect_token1;
	v->a[263292] = actions(1292);
	v->a[263293] = 22;
	v->a[263294] = anon_sym_SEMI;
	v->a[263295] = anon_sym_PIPE_PIPE;
	v->a[263296] = anon_sym_AMP_AMP;
	v->a[263297] = anon_sym_PIPE;
	v->a[263298] = anon_sym_AMP;
	v->a[263299] = anon_sym_LT;
	small_parse_table_13165(v);
}

/* EOF small_parse_table_2632.c */
