/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1096.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5480(t_small_parse_table_array *v)
{
	v->a[109600] = sym_comment;
	v->a[109601] = actions(5281);
	v->a[109602] = 1;
	v->a[109603] = aux_sym_heredoc_redirect_token1;
	v->a[109604] = actions(6277);
	v->a[109605] = 1;
	v->a[109606] = sym_file_descriptor;
	v->a[109607] = actions(6274);
	v->a[109608] = 2;
	v->a[109609] = anon_sym_LT_AMP_DASH;
	v->a[109610] = anon_sym_GT_AMP_DASH;
	v->a[109611] = state(2312);
	v->a[109612] = 2;
	v->a[109613] = sym_file_redirect;
	v->a[109614] = aux_sym_redirected_statement_repeat2;
	v->a[109615] = actions(6271);
	v->a[109616] = 8;
	v->a[109617] = anon_sym_LT;
	v->a[109618] = anon_sym_GT;
	v->a[109619] = anon_sym_GT_GT;
	small_parse_table_5481(v);
}

void	small_parse_table_5481(t_small_parse_table_array *v)
{
	v->a[109620] = anon_sym_AMP_GT;
	v->a[109621] = anon_sym_AMP_GT_GT;
	v->a[109622] = anon_sym_LT_AMP;
	v->a[109623] = anon_sym_GT_AMP;
	v->a[109624] = anon_sym_GT_PIPE;
	v->a[109625] = actions(5273);
	v->a[109626] = 10;
	v->a[109627] = anon_sym_PIPE;
	v->a[109628] = anon_sym_RPAREN;
	v->a[109629] = anon_sym_SEMI_SEMI;
	v->a[109630] = anon_sym_PIPE_AMP;
	v->a[109631] = anon_sym_AMP_AMP;
	v->a[109632] = anon_sym_PIPE_PIPE;
	v->a[109633] = anon_sym_LT_LT;
	v->a[109634] = anon_sym_LT_LT_DASH;
	v->a[109635] = anon_sym_AMP;
	v->a[109636] = anon_sym_SEMI;
	v->a[109637] = 6;
	v->a[109638] = actions(3);
	v->a[109639] = 1;
	small_parse_table_5482(v);
}

void	small_parse_table_5482(t_small_parse_table_array *v)
{
	v->a[109640] = sym_comment;
	v->a[109641] = actions(5267);
	v->a[109642] = 1;
	v->a[109643] = aux_sym_concatenation_token1;
	v->a[109644] = actions(5269);
	v->a[109645] = 1;
	v->a[109646] = sym__concat;
	v->a[109647] = state(2170);
	v->a[109648] = 1;
	v->a[109649] = aux_sym_concatenation_repeat1;
	v->a[109650] = actions(1390);
	v->a[109651] = 2;
	v->a[109652] = sym_file_descriptor;
	v->a[109653] = aux_sym_heredoc_redirect_token1;
	v->a[109654] = actions(1388);
	v->a[109655] = 19;
	v->a[109656] = anon_sym_PIPE;
	v->a[109657] = anon_sym_SEMI_SEMI;
	v->a[109658] = anon_sym_PIPE_AMP;
	v->a[109659] = anon_sym_AMP_AMP;
	small_parse_table_5483(v);
}

void	small_parse_table_5483(t_small_parse_table_array *v)
{
	v->a[109660] = anon_sym_PIPE_PIPE;
	v->a[109661] = anon_sym_LT;
	v->a[109662] = anon_sym_GT;
	v->a[109663] = anon_sym_GT_GT;
	v->a[109664] = anon_sym_AMP_GT;
	v->a[109665] = anon_sym_AMP_GT_GT;
	v->a[109666] = anon_sym_LT_AMP;
	v->a[109667] = anon_sym_GT_AMP;
	v->a[109668] = anon_sym_GT_PIPE;
	v->a[109669] = anon_sym_LT_AMP_DASH;
	v->a[109670] = anon_sym_GT_AMP_DASH;
	v->a[109671] = anon_sym_LT_LT;
	v->a[109672] = anon_sym_LT_LT_DASH;
	v->a[109673] = anon_sym_AMP;
	v->a[109674] = anon_sym_SEMI;
	v->a[109675] = 3;
	v->a[109676] = actions(3);
	v->a[109677] = 1;
	v->a[109678] = sym_comment;
	v->a[109679] = actions(6147);
	small_parse_table_5484(v);
}

void	small_parse_table_5484(t_small_parse_table_array *v)
{
	v->a[109680] = 3;
	v->a[109681] = sym_file_descriptor;
	v->a[109682] = ts_builtin_sym_end;
	v->a[109683] = aux_sym_heredoc_redirect_token1;
	v->a[109684] = actions(6145);
	v->a[109685] = 21;
	v->a[109686] = anon_sym_PIPE;
	v->a[109687] = anon_sym_RPAREN;
	v->a[109688] = anon_sym_SEMI_SEMI;
	v->a[109689] = anon_sym_PIPE_AMP;
	v->a[109690] = anon_sym_AMP_AMP;
	v->a[109691] = anon_sym_PIPE_PIPE;
	v->a[109692] = anon_sym_LT;
	v->a[109693] = anon_sym_GT;
	v->a[109694] = anon_sym_GT_GT;
	v->a[109695] = anon_sym_AMP_GT;
	v->a[109696] = anon_sym_AMP_GT_GT;
	v->a[109697] = anon_sym_LT_AMP;
	v->a[109698] = anon_sym_GT_AMP;
	v->a[109699] = anon_sym_GT_PIPE;
	small_parse_table_5485(v);
}

/* EOF small_parse_table_1096.c */
