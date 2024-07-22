/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_576.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2880(t_small_parse_table_array *v)
{
	v->a[57600] = state(690);
	v->a[57601] = 1;
	v->a[57602] = sym_terminator;
	v->a[57603] = actions(790);
	v->a[57604] = 2;
	v->a[57605] = anon_sym_LT_LT;
	v->a[57606] = anon_sym_LT_LT_DASH;
	v->a[57607] = actions(808);
	v->a[57608] = 2;
	v->a[57609] = anon_sym_SEMI_SEMI;
	v->a[57610] = anon_sym_SEMI;
	v->a[57611] = actions(810);
	v->a[57612] = 2;
	v->a[57613] = anon_sym_AMP_AMP;
	v->a[57614] = anon_sym_PIPE_PIPE;
	v->a[57615] = state(1046);
	v->a[57616] = 3;
	v->a[57617] = sym_file_redirect;
	v->a[57618] = sym_heredoc_redirect;
	v->a[57619] = aux_sym_redirected_statement_repeat1;
	small_parse_table_2881(v);
}

void	small_parse_table_2881(t_small_parse_table_array *v)
{
	v->a[57620] = actions(1880);
	v->a[57621] = 7;
	v->a[57622] = anon_sym_LT;
	v->a[57623] = anon_sym_GT;
	v->a[57624] = anon_sym_GT_GT;
	v->a[57625] = anon_sym_LT_AMP;
	v->a[57626] = anon_sym_GT_AMP;
	v->a[57627] = anon_sym_GT_PIPE;
	v->a[57628] = anon_sym_LT_GT;
	v->a[57629] = 11;
	v->a[57630] = actions(3);
	v->a[57631] = 1;
	v->a[57632] = sym_comment;
	v->a[57633] = actions(782);
	v->a[57634] = 1;
	v->a[57635] = anon_sym_PIPE;
	v->a[57636] = actions(784);
	v->a[57637] = 1;
	v->a[57638] = anon_sym_SEMI_SEMI;
	v->a[57639] = actions(786);
	small_parse_table_2882(v);
}

void	small_parse_table_2882(t_small_parse_table_array *v)
{
	v->a[57640] = 1;
	v->a[57641] = anon_sym_SEMI;
	v->a[57642] = actions(1888);
	v->a[57643] = 1;
	v->a[57644] = aux_sym_heredoc_redirect_token1;
	v->a[57645] = actions(1945);
	v->a[57646] = 1;
	v->a[57647] = sym_file_descriptor;
	v->a[57648] = state(577);
	v->a[57649] = 1;
	v->a[57650] = sym_terminator;
	v->a[57651] = actions(790);
	v->a[57652] = 2;
	v->a[57653] = anon_sym_LT_LT;
	v->a[57654] = anon_sym_LT_LT_DASH;
	v->a[57655] = actions(1028);
	v->a[57656] = 2;
	v->a[57657] = anon_sym_AMP_AMP;
	v->a[57658] = anon_sym_PIPE_PIPE;
	v->a[57659] = state(1194);
	small_parse_table_2883(v);
}

void	small_parse_table_2883(t_small_parse_table_array *v)
{
	v->a[57660] = 3;
	v->a[57661] = sym_file_redirect;
	v->a[57662] = sym_heredoc_redirect;
	v->a[57663] = aux_sym_redirected_statement_repeat1;
	v->a[57664] = actions(1941);
	v->a[57665] = 7;
	v->a[57666] = anon_sym_LT;
	v->a[57667] = anon_sym_GT;
	v->a[57668] = anon_sym_GT_GT;
	v->a[57669] = anon_sym_LT_AMP;
	v->a[57670] = anon_sym_GT_AMP;
	v->a[57671] = anon_sym_GT_PIPE;
	v->a[57672] = anon_sym_LT_GT;
	v->a[57673] = 11;
	v->a[57674] = actions(3);
	v->a[57675] = 1;
	v->a[57676] = sym_comment;
	v->a[57677] = actions(782);
	v->a[57678] = 1;
	v->a[57679] = anon_sym_PIPE;
	small_parse_table_2884(v);
}

void	small_parse_table_2884(t_small_parse_table_array *v)
{
	v->a[57680] = actions(784);
	v->a[57681] = 1;
	v->a[57682] = anon_sym_SEMI_SEMI;
	v->a[57683] = actions(786);
	v->a[57684] = 1;
	v->a[57685] = anon_sym_SEMI;
	v->a[57686] = actions(1888);
	v->a[57687] = 1;
	v->a[57688] = aux_sym_heredoc_redirect_token1;
	v->a[57689] = actions(1945);
	v->a[57690] = 1;
	v->a[57691] = sym_file_descriptor;
	v->a[57692] = state(574);
	v->a[57693] = 1;
	v->a[57694] = sym_terminator;
	v->a[57695] = actions(790);
	v->a[57696] = 2;
	v->a[57697] = anon_sym_LT_LT;
	v->a[57698] = anon_sym_LT_LT_DASH;
	v->a[57699] = actions(1028);
	small_parse_table_2885(v);
}

/* EOF small_parse_table_576.c */
