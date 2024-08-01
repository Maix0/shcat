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
	v->a[57600] = 6;
	v->a[57601] = actions(1436);
	v->a[57602] = 1;
	v->a[57603] = sym_comment;
	v->a[57604] = actions(2962);
	v->a[57605] = 1;
	v->a[57606] = sym__heredoc_body_beginning;
	v->a[57607] = actions(2964);
	v->a[57608] = 1;
	v->a[57609] = sym_simple_heredoc_body;
	v->a[57610] = state(1261);
	v->a[57611] = 1;
	v->a[57612] = sym__heredoc_body;
	v->a[57613] = state(1262);
	v->a[57614] = 1;
	v->a[57615] = sym__simple_heredoc_body;
	v->a[57616] = state(1662);
	v->a[57617] = 1;
	v->a[57618] = sym_heredoc_body;
	v->a[57619] = 6;
	small_parse_table_2881(v);
}

void	small_parse_table_2881(t_small_parse_table_array *v)
{
	v->a[57620] = actions(1436);
	v->a[57621] = 1;
	v->a[57622] = sym_comment;
	v->a[57623] = actions(2960);
	v->a[57624] = 1;
	v->a[57625] = sym_simple_heredoc_body;
	v->a[57626] = actions(2962);
	v->a[57627] = 1;
	v->a[57628] = sym__heredoc_body_beginning;
	v->a[57629] = state(1007);
	v->a[57630] = 1;
	v->a[57631] = sym__heredoc_body;
	v->a[57632] = state(1009);
	v->a[57633] = 1;
	v->a[57634] = sym__simple_heredoc_body;
	v->a[57635] = state(1664);
	v->a[57636] = 1;
	v->a[57637] = sym_heredoc_body;
	v->a[57638] = 5;
	v->a[57639] = actions(1436);
	small_parse_table_2882(v);
}

void	small_parse_table_2882(t_small_parse_table_array *v)
{
	v->a[57640] = 1;
	v->a[57641] = sym_comment;
	v->a[57642] = actions(2960);
	v->a[57643] = 1;
	v->a[57644] = sym_simple_heredoc_body;
	v->a[57645] = actions(2962);
	v->a[57646] = 1;
	v->a[57647] = sym__heredoc_body_beginning;
	v->a[57648] = state(1664);
	v->a[57649] = 1;
	v->a[57650] = sym_heredoc_body;
	v->a[57651] = state(1002);
	v->a[57652] = 2;
	v->a[57653] = sym__heredoc_body;
	v->a[57654] = sym__simple_heredoc_body;
	v->a[57655] = 6;
	v->a[57656] = actions(1436);
	v->a[57657] = 1;
	v->a[57658] = sym_comment;
	v->a[57659] = actions(2960);
	small_parse_table_2883(v);
}

void	small_parse_table_2883(t_small_parse_table_array *v)
{
	v->a[57660] = 1;
	v->a[57661] = sym_simple_heredoc_body;
	v->a[57662] = actions(2962);
	v->a[57663] = 1;
	v->a[57664] = sym__heredoc_body_beginning;
	v->a[57665] = state(1018);
	v->a[57666] = 1;
	v->a[57667] = sym__heredoc_body;
	v->a[57668] = state(1062);
	v->a[57669] = 1;
	v->a[57670] = sym__simple_heredoc_body;
	v->a[57671] = state(1664);
	v->a[57672] = 1;
	v->a[57673] = sym_heredoc_body;
	v->a[57674] = 4;
	v->a[57675] = actions(1436);
	v->a[57676] = 1;
	v->a[57677] = sym_comment;
	v->a[57678] = actions(2986);
	v->a[57679] = 1;
	small_parse_table_2884(v);
}

void	small_parse_table_2884(t_small_parse_table_array *v)
{
	v->a[57680] = anon_sym_RBRACE;
	v->a[57681] = state(1517);
	v->a[57682] = 1;
	v->a[57683] = aux_sym__concatenation_in_expansion_repeat1;
	v->a[57684] = actions(2988);
	v->a[57685] = 2;
	v->a[57686] = sym__concat;
	v->a[57687] = aux_sym_concatenation_token1;
	v->a[57688] = 4;
	v->a[57689] = actions(1436);
	v->a[57690] = 1;
	v->a[57691] = sym_comment;
	v->a[57692] = actions(2990);
	v->a[57693] = 1;
	v->a[57694] = anon_sym_RBRACE;
	v->a[57695] = state(1518);
	v->a[57696] = 1;
	v->a[57697] = aux_sym__concatenation_in_expansion_repeat1;
	v->a[57698] = actions(2988);
	v->a[57699] = 2;
	small_parse_table_2885(v);
}

/* EOF small_parse_table_576.c */
