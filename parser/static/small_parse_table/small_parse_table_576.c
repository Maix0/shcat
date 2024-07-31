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
	v->a[57600] = anon_sym_GT;
	v->a[57601] = anon_sym_GT_GT;
	v->a[57602] = anon_sym_LT_AMP;
	v->a[57603] = anon_sym_GT_AMP;
	v->a[57604] = anon_sym_GT_PIPE;
	v->a[57605] = anon_sym_LT_GT;
	v->a[57606] = anon_sym_LT_LT;
	v->a[57607] = anon_sym_LT_LT_DASH;
	v->a[57608] = anon_sym_SEMI;
	v->a[57609] = 10;
	v->a[57610] = actions(3);
	v->a[57611] = 1;
	v->a[57612] = sym_comment;
	v->a[57613] = actions(886);
	v->a[57614] = 1;
	v->a[57615] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[57616] = actions(888);
	v->a[57617] = 1;
	v->a[57618] = anon_sym_DOLLAR;
	v->a[57619] = actions(890);
	small_parse_table_2881(v);
}

void	small_parse_table_2881(t_small_parse_table_array *v)
{
	v->a[57620] = 1;
	v->a[57621] = anon_sym_DQUOTE;
	v->a[57622] = actions(892);
	v->a[57623] = 1;
	v->a[57624] = anon_sym_DOLLAR_LBRACE;
	v->a[57625] = actions(894);
	v->a[57626] = 1;
	v->a[57627] = anon_sym_DOLLAR_LPAREN;
	v->a[57628] = actions(896);
	v->a[57629] = 1;
	v->a[57630] = anon_sym_BQUOTE;
	v->a[57631] = state(290);
	v->a[57632] = 2;
	v->a[57633] = sym_concatenation;
	v->a[57634] = aux_sym_for_statement_repeat1;
	v->a[57635] = actions(944);
	v->a[57636] = 3;
	v->a[57637] = sym_raw_string;
	v->a[57638] = sym_number;
	v->a[57639] = sym_word;
	small_parse_table_2882(v);
}

void	small_parse_table_2882(t_small_parse_table_array *v)
{
	v->a[57640] = state(512);
	v->a[57641] = 5;
	v->a[57642] = sym_arithmetic_expansion;
	v->a[57643] = sym_string;
	v->a[57644] = sym_simple_expansion;
	v->a[57645] = sym_expansion;
	v->a[57646] = sym_command_substitution;
	v->a[57647] = 10;
	v->a[57648] = actions(3);
	v->a[57649] = 1;
	v->a[57650] = sym_comment;
	v->a[57651] = actions(930);
	v->a[57652] = 1;
	v->a[57653] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[57654] = actions(932);
	v->a[57655] = 1;
	v->a[57656] = anon_sym_DOLLAR;
	v->a[57657] = actions(934);
	v->a[57658] = 1;
	v->a[57659] = anon_sym_DQUOTE;
	small_parse_table_2883(v);
}

void	small_parse_table_2883(t_small_parse_table_array *v)
{
	v->a[57660] = actions(936);
	v->a[57661] = 1;
	v->a[57662] = anon_sym_DOLLAR_LBRACE;
	v->a[57663] = actions(938);
	v->a[57664] = 1;
	v->a[57665] = anon_sym_DOLLAR_LPAREN;
	v->a[57666] = actions(940);
	v->a[57667] = 1;
	v->a[57668] = anon_sym_BQUOTE;
	v->a[57669] = state(821);
	v->a[57670] = 2;
	v->a[57671] = sym_concatenation;
	v->a[57672] = aux_sym_for_statement_repeat1;
	v->a[57673] = actions(1607);
	v->a[57674] = 3;
	v->a[57675] = sym_raw_string;
	v->a[57676] = sym_number;
	v->a[57677] = sym_word;
	v->a[57678] = state(1227);
	v->a[57679] = 5;
	small_parse_table_2884(v);
}

void	small_parse_table_2884(t_small_parse_table_array *v)
{
	v->a[57680] = sym_arithmetic_expansion;
	v->a[57681] = sym_string;
	v->a[57682] = sym_simple_expansion;
	v->a[57683] = sym_expansion;
	v->a[57684] = sym_command_substitution;
	v->a[57685] = 7;
	v->a[57686] = actions(3);
	v->a[57687] = 1;
	v->a[57688] = sym_comment;
	v->a[57689] = actions(746);
	v->a[57690] = 1;
	v->a[57691] = anon_sym_PIPE;
	v->a[57692] = actions(2313);
	v->a[57693] = 1;
	v->a[57694] = aux_sym_heredoc_redirect_token1;
	v->a[57695] = actions(850);
	v->a[57696] = 2;
	v->a[57697] = anon_sym_LT_LT;
	v->a[57698] = anon_sym_LT_LT_DASH;
	v->a[57699] = actions(1213);
	small_parse_table_2885(v);
}

/* EOF small_parse_table_576.c */
