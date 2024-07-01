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
	v->a[57600] = 1;
	v->a[57601] = anon_sym_PIPE;
	v->a[57602] = actions(842);
	v->a[57603] = 1;
	v->a[57604] = anon_sym_SEMI_SEMI;
	v->a[57605] = actions(1865);
	v->a[57606] = 1;
	v->a[57607] = aux_sym_heredoc_redirect_token1;
	v->a[57608] = actions(1889);
	v->a[57609] = 1;
	v->a[57610] = sym_file_descriptor;
	v->a[57611] = state(651);
	v->a[57612] = 1;
	v->a[57613] = sym_terminator;
	v->a[57614] = actions(740);
	v->a[57615] = 2;
	v->a[57616] = anon_sym_AMP;
	v->a[57617] = anon_sym_SEMI;
	v->a[57618] = actions(744);
	v->a[57619] = 2;
	small_parse_table_2881(v);
}

void	small_parse_table_2881(t_small_parse_table_array *v)
{
	v->a[57620] = anon_sym_LT_LT;
	v->a[57621] = anon_sym_LT_LT_DASH;
	v->a[57622] = actions(955);
	v->a[57623] = 2;
	v->a[57624] = anon_sym_AMP_AMP;
	v->a[57625] = anon_sym_PIPE_PIPE;
	v->a[57626] = state(1194);
	v->a[57627] = 3;
	v->a[57628] = sym_file_redirect;
	v->a[57629] = sym_heredoc_redirect;
	v->a[57630] = aux_sym_redirected_statement_repeat1;
	v->a[57631] = actions(1887);
	v->a[57632] = 7;
	v->a[57633] = anon_sym_LT;
	v->a[57634] = anon_sym_GT;
	v->a[57635] = anon_sym_GT_GT;
	v->a[57636] = anon_sym_LT_AMP;
	v->a[57637] = anon_sym_GT_AMP;
	v->a[57638] = anon_sym_GT_PIPE;
	v->a[57639] = anon_sym_LT_GT;
	small_parse_table_2882(v);
}

void	small_parse_table_2882(t_small_parse_table_array *v)
{
	v->a[57640] = 7;
	v->a[57641] = actions(3);
	v->a[57642] = 1;
	v->a[57643] = sym_comment;
	v->a[57644] = actions(1900);
	v->a[57645] = 1;
	v->a[57646] = sym_file_descriptor;
	v->a[57647] = actions(1903);
	v->a[57648] = 1;
	v->a[57649] = sym_variable_name;
	v->a[57650] = state(1225);
	v->a[57651] = 1;
	v->a[57652] = sym_file_redirect;
	v->a[57653] = state(1024);
	v->a[57654] = 2;
	v->a[57655] = sym_variable_assignment;
	v->a[57656] = aux_sym_command_repeat1;
	v->a[57657] = actions(1897);
	v->a[57658] = 7;
	v->a[57659] = anon_sym_LT;
	small_parse_table_2883(v);
}

void	small_parse_table_2883(t_small_parse_table_array *v)
{
	v->a[57660] = anon_sym_GT;
	v->a[57661] = anon_sym_GT_GT;
	v->a[57662] = anon_sym_LT_AMP;
	v->a[57663] = anon_sym_GT_AMP;
	v->a[57664] = anon_sym_GT_PIPE;
	v->a[57665] = anon_sym_LT_GT;
	v->a[57666] = actions(1895);
	v->a[57667] = 9;
	v->a[57668] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[57669] = anon_sym_DOLLAR;
	v->a[57670] = anon_sym_DQUOTE;
	v->a[57671] = sym_raw_string;
	v->a[57672] = sym_number;
	v->a[57673] = anon_sym_DOLLAR_LBRACE;
	v->a[57674] = anon_sym_DOLLAR_LPAREN;
	v->a[57675] = anon_sym_BQUOTE;
	v->a[57676] = sym_word;
	v->a[57677] = 11;
	v->a[57678] = actions(3);
	v->a[57679] = 1;
	small_parse_table_2884(v);
}

void	small_parse_table_2884(t_small_parse_table_array *v)
{
	v->a[57680] = sym_comment;
	v->a[57681] = actions(736);
	v->a[57682] = 1;
	v->a[57683] = anon_sym_PIPE;
	v->a[57684] = actions(842);
	v->a[57685] = 1;
	v->a[57686] = anon_sym_SEMI_SEMI;
	v->a[57687] = actions(1865);
	v->a[57688] = 1;
	v->a[57689] = aux_sym_heredoc_redirect_token1;
	v->a[57690] = actions(1889);
	v->a[57691] = 1;
	v->a[57692] = sym_file_descriptor;
	v->a[57693] = state(655);
	v->a[57694] = 1;
	v->a[57695] = sym_terminator;
	v->a[57696] = actions(740);
	v->a[57697] = 2;
	v->a[57698] = anon_sym_AMP;
	v->a[57699] = anon_sym_SEMI;
	small_parse_table_2885(v);
}

/* EOF small_parse_table_576.c */
