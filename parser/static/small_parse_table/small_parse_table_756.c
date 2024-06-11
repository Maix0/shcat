/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_756.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3780(t_small_parse_table_array *v)
{
	v->a[75600] = 12;
	v->a[75601] = actions(3);
	v->a[75602] = 1;
	v->a[75603] = sym_comment;
	v->a[75604] = actions(807);
	v->a[75605] = 1;
	v->a[75606] = anon_sym_PIPE;
	v->a[75607] = actions(840);
	v->a[75608] = 1;
	v->a[75609] = anon_sym_SEMI_SEMI;
	v->a[75610] = actions(2571);
	v->a[75611] = 1;
	v->a[75612] = aux_sym_heredoc_redirect_token1;
	v->a[75613] = actions(2573);
	v->a[75614] = 1;
	v->a[75615] = anon_sym_AMP;
	v->a[75616] = actions(2575);
	v->a[75617] = 1;
	v->a[75618] = anon_sym_SEMI;
	v->a[75619] = actions(2602);
	small_parse_table_3781(v);
}

void	small_parse_table_3781(t_small_parse_table_array *v)
{
	v->a[75620] = 1;
	v->a[75621] = sym_file_descriptor;
	v->a[75622] = actions(861);
	v->a[75623] = 2;
	v->a[75624] = anon_sym_LT_LT;
	v->a[75625] = anon_sym_LT_LT_DASH;
	v->a[75626] = actions(965);
	v->a[75627] = 2;
	v->a[75628] = anon_sym_AMP_AMP;
	v->a[75629] = anon_sym_PIPE_PIPE;
	v->a[75630] = actions(2598);
	v->a[75631] = 2;
	v->a[75632] = anon_sym_LT_AMP_DASH;
	v->a[75633] = anon_sym_GT_AMP_DASH;
	v->a[75634] = state(1322);
	v->a[75635] = 3;
	v->a[75636] = sym_file_redirect;
	v->a[75637] = sym_heredoc_redirect;
	v->a[75638] = aux_sym_redirected_statement_repeat1;
	v->a[75639] = actions(2596);
	small_parse_table_3782(v);
}

void	small_parse_table_3782(t_small_parse_table_array *v)
{
	v->a[75640] = 8;
	v->a[75641] = anon_sym_LT;
	v->a[75642] = anon_sym_GT;
	v->a[75643] = anon_sym_GT_GT;
	v->a[75644] = anon_sym_AMP_GT;
	v->a[75645] = anon_sym_AMP_GT_GT;
	v->a[75646] = anon_sym_LT_AMP;
	v->a[75647] = anon_sym_GT_AMP;
	v->a[75648] = anon_sym_GT_PIPE;
	v->a[75649] = 3;
	v->a[75650] = actions(3);
	v->a[75651] = 1;
	v->a[75652] = sym_comment;
	v->a[75653] = actions(2783);
	v->a[75654] = 3;
	v->a[75655] = sym_file_descriptor;
	v->a[75656] = ts_builtin_sym_end;
	v->a[75657] = aux_sym_heredoc_redirect_token1;
	v->a[75658] = actions(2785);
	v->a[75659] = 20;
	small_parse_table_3783(v);
}

void	small_parse_table_3783(t_small_parse_table_array *v)
{
	v->a[75660] = anon_sym_PIPE;
	v->a[75661] = anon_sym_RPAREN;
	v->a[75662] = anon_sym_SEMI_SEMI;
	v->a[75663] = anon_sym_AMP_AMP;
	v->a[75664] = anon_sym_PIPE_PIPE;
	v->a[75665] = anon_sym_LT;
	v->a[75666] = anon_sym_GT;
	v->a[75667] = anon_sym_GT_GT;
	v->a[75668] = anon_sym_AMP_GT;
	v->a[75669] = anon_sym_AMP_GT_GT;
	v->a[75670] = anon_sym_LT_AMP;
	v->a[75671] = anon_sym_GT_AMP;
	v->a[75672] = anon_sym_GT_PIPE;
	v->a[75673] = anon_sym_LT_AMP_DASH;
	v->a[75674] = anon_sym_GT_AMP_DASH;
	v->a[75675] = anon_sym_LT_LT;
	v->a[75676] = anon_sym_LT_LT_DASH;
	v->a[75677] = anon_sym_AMP;
	v->a[75678] = anon_sym_BQUOTE;
	v->a[75679] = anon_sym_SEMI;
	small_parse_table_3784(v);
}

void	small_parse_table_3784(t_small_parse_table_array *v)
{
	v->a[75680] = 7;
	v->a[75681] = actions(3);
	v->a[75682] = 1;
	v->a[75683] = sym_comment;
	v->a[75684] = actions(2793);
	v->a[75685] = 1;
	v->a[75686] = sym_file_descriptor;
	v->a[75687] = actions(2648);
	v->a[75688] = 2;
	v->a[75689] = ts_builtin_sym_end;
	v->a[75690] = aux_sym_heredoc_redirect_token1;
	v->a[75691] = actions(2790);
	v->a[75692] = 2;
	v->a[75693] = anon_sym_LT_AMP_DASH;
	v->a[75694] = anon_sym_GT_AMP_DASH;
	v->a[75695] = state(1386);
	v->a[75696] = 2;
	v->a[75697] = sym_file_redirect;
	v->a[75698] = aux_sym_redirected_statement_repeat2;
	v->a[75699] = actions(2640);
	small_parse_table_3785(v);
}

/* EOF small_parse_table_756.c */
