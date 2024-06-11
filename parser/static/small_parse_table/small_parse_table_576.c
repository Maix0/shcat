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
	v->a[57600] = 3;
	v->a[57601] = actions(3);
	v->a[57602] = 1;
	v->a[57603] = sym_comment;
	v->a[57604] = actions(1163);
	v->a[57605] = 3;
	v->a[57606] = sym_file_descriptor;
	v->a[57607] = sym__concat;
	v->a[57608] = sym__bare_dollar;
	v->a[57609] = actions(1161);
	v->a[57610] = 26;
	v->a[57611] = anon_sym_LPAREN;
	v->a[57612] = anon_sym_PIPE;
	v->a[57613] = anon_sym_AMP_AMP;
	v->a[57614] = anon_sym_PIPE_PIPE;
	v->a[57615] = anon_sym_LT;
	v->a[57616] = anon_sym_GT;
	v->a[57617] = anon_sym_GT_GT;
	v->a[57618] = anon_sym_AMP_GT;
	v->a[57619] = anon_sym_AMP_GT_GT;
	small_parse_table_2881(v);
}

void	small_parse_table_2881(t_small_parse_table_array *v)
{
	v->a[57620] = anon_sym_LT_AMP;
	v->a[57621] = anon_sym_GT_AMP;
	v->a[57622] = anon_sym_GT_PIPE;
	v->a[57623] = anon_sym_LT_AMP_DASH;
	v->a[57624] = anon_sym_GT_AMP_DASH;
	v->a[57625] = anon_sym_LT_LT;
	v->a[57626] = anon_sym_LT_LT_DASH;
	v->a[57627] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[57628] = aux_sym_concatenation_token1;
	v->a[57629] = anon_sym_DOLLAR;
	v->a[57630] = anon_sym_DQUOTE;
	v->a[57631] = sym_raw_string;
	v->a[57632] = sym_number;
	v->a[57633] = anon_sym_DOLLAR_LBRACE;
	v->a[57634] = anon_sym_DOLLAR_LPAREN;
	v->a[57635] = anon_sym_BQUOTE;
	v->a[57636] = sym_word;
	v->a[57637] = 4;
	v->a[57638] = actions(3);
	v->a[57639] = 1;
	small_parse_table_2882(v);
}

void	small_parse_table_2882(t_small_parse_table_array *v)
{
	v->a[57640] = sym_comment;
	v->a[57641] = actions(1581);
	v->a[57642] = 1;
	v->a[57643] = anon_sym_BQUOTE;
	v->a[57644] = actions(1556);
	v->a[57645] = 2;
	v->a[57646] = sym_file_descriptor;
	v->a[57647] = sym_variable_name;
	v->a[57648] = actions(1552);
	v->a[57649] = 26;
	v->a[57650] = anon_sym_for;
	v->a[57651] = anon_sym_while;
	v->a[57652] = anon_sym_until;
	v->a[57653] = anon_sym_if;
	v->a[57654] = anon_sym_case;
	v->a[57655] = anon_sym_LPAREN;
	v->a[57656] = anon_sym_LBRACE;
	v->a[57657] = anon_sym_BANG;
	v->a[57658] = anon_sym_LT;
	v->a[57659] = anon_sym_GT;
	small_parse_table_2883(v);
}

void	small_parse_table_2883(t_small_parse_table_array *v)
{
	v->a[57660] = anon_sym_GT_GT;
	v->a[57661] = anon_sym_AMP_GT;
	v->a[57662] = anon_sym_AMP_GT_GT;
	v->a[57663] = anon_sym_LT_AMP;
	v->a[57664] = anon_sym_GT_AMP;
	v->a[57665] = anon_sym_GT_PIPE;
	v->a[57666] = anon_sym_LT_AMP_DASH;
	v->a[57667] = anon_sym_GT_AMP_DASH;
	v->a[57668] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[57669] = anon_sym_DOLLAR;
	v->a[57670] = anon_sym_DQUOTE;
	v->a[57671] = sym_raw_string;
	v->a[57672] = sym_number;
	v->a[57673] = anon_sym_DOLLAR_LBRACE;
	v->a[57674] = anon_sym_DOLLAR_LPAREN;
	v->a[57675] = sym_word;
	v->a[57676] = 4;
	v->a[57677] = actions(3);
	v->a[57678] = 1;
	v->a[57679] = sym_comment;
	small_parse_table_2884(v);
}

void	small_parse_table_2884(t_small_parse_table_array *v)
{
	v->a[57680] = actions(1554);
	v->a[57681] = 1;
	v->a[57682] = anon_sym_BQUOTE;
	v->a[57683] = actions(1556);
	v->a[57684] = 2;
	v->a[57685] = sym_file_descriptor;
	v->a[57686] = sym_variable_name;
	v->a[57687] = actions(1552);
	v->a[57688] = 26;
	v->a[57689] = anon_sym_for;
	v->a[57690] = anon_sym_while;
	v->a[57691] = anon_sym_until;
	v->a[57692] = anon_sym_if;
	v->a[57693] = anon_sym_case;
	v->a[57694] = anon_sym_LPAREN;
	v->a[57695] = anon_sym_LBRACE;
	v->a[57696] = anon_sym_BANG;
	v->a[57697] = anon_sym_LT;
	v->a[57698] = anon_sym_GT;
	v->a[57699] = anon_sym_GT_GT;
	small_parse_table_2885(v);
}

/* EOF small_parse_table_576.c */
