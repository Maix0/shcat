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
	v->a[57600] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[57601] = actions(1643);
	v->a[57602] = 1;
	v->a[57603] = anon_sym_DOLLAR;
	v->a[57604] = actions(1645);
	v->a[57605] = 1;
	v->a[57606] = anon_sym_DQUOTE;
	v->a[57607] = actions(1647);
	v->a[57608] = 1;
	v->a[57609] = anon_sym_DOLLAR_LBRACE;
	v->a[57610] = actions(1649);
	v->a[57611] = 1;
	v->a[57612] = anon_sym_DOLLAR_LPAREN;
	v->a[57613] = actions(1651);
	v->a[57614] = 1;
	v->a[57615] = anon_sym_BQUOTE;
	v->a[57616] = actions(1653);
	v->a[57617] = 1;
	v->a[57618] = sym_extglob_pattern;
	v->a[57619] = state(1123);
	small_parse_table_2881(v);
}

void	small_parse_table_2881(t_small_parse_table_array *v)
{
	v->a[57620] = 1;
	v->a[57621] = aux_sym_case_statement_repeat1;
	v->a[57622] = state(1713);
	v->a[57623] = 1;
	v->a[57624] = sym_case_item;
	v->a[57625] = state(1978);
	v->a[57626] = 1;
	v->a[57627] = sym__case_item_last;
	v->a[57628] = state(1873);
	v->a[57629] = 2;
	v->a[57630] = sym_concatenation;
	v->a[57631] = sym__extglob_blob;
	v->a[57632] = actions(1633);
	v->a[57633] = 3;
	v->a[57634] = sym_raw_string;
	v->a[57635] = sym_number;
	v->a[57636] = sym_word;
	v->a[57637] = state(1806);
	v->a[57638] = 5;
	v->a[57639] = sym_arithmetic_expansion;
	small_parse_table_2882(v);
}

void	small_parse_table_2882(t_small_parse_table_array *v)
{
	v->a[57640] = sym_string;
	v->a[57641] = sym_simple_expansion;
	v->a[57642] = sym_expansion;
	v->a[57643] = sym_command_substitution;
	v->a[57644] = 15;
	v->a[57645] = actions(3);
	v->a[57646] = 1;
	v->a[57647] = sym_comment;
	v->a[57648] = actions(1637);
	v->a[57649] = 1;
	v->a[57650] = anon_sym_LPAREN;
	v->a[57651] = actions(1641);
	v->a[57652] = 1;
	v->a[57653] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[57654] = actions(1643);
	v->a[57655] = 1;
	v->a[57656] = anon_sym_DOLLAR;
	v->a[57657] = actions(1645);
	v->a[57658] = 1;
	v->a[57659] = anon_sym_DQUOTE;
	small_parse_table_2883(v);
}

void	small_parse_table_2883(t_small_parse_table_array *v)
{
	v->a[57660] = actions(1647);
	v->a[57661] = 1;
	v->a[57662] = anon_sym_DOLLAR_LBRACE;
	v->a[57663] = actions(1649);
	v->a[57664] = 1;
	v->a[57665] = anon_sym_DOLLAR_LPAREN;
	v->a[57666] = actions(1651);
	v->a[57667] = 1;
	v->a[57668] = anon_sym_BQUOTE;
	v->a[57669] = actions(1653);
	v->a[57670] = 1;
	v->a[57671] = sym_extglob_pattern;
	v->a[57672] = state(1123);
	v->a[57673] = 1;
	v->a[57674] = aux_sym_case_statement_repeat1;
	v->a[57675] = state(1713);
	v->a[57676] = 1;
	v->a[57677] = sym_case_item;
	v->a[57678] = state(1970);
	v->a[57679] = 1;
	small_parse_table_2884(v);
}

void	small_parse_table_2884(t_small_parse_table_array *v)
{
	v->a[57680] = sym__case_item_last;
	v->a[57681] = state(1873);
	v->a[57682] = 2;
	v->a[57683] = sym_concatenation;
	v->a[57684] = sym__extglob_blob;
	v->a[57685] = actions(1633);
	v->a[57686] = 3;
	v->a[57687] = sym_raw_string;
	v->a[57688] = sym_number;
	v->a[57689] = sym_word;
	v->a[57690] = state(1806);
	v->a[57691] = 5;
	v->a[57692] = sym_arithmetic_expansion;
	v->a[57693] = sym_string;
	v->a[57694] = sym_simple_expansion;
	v->a[57695] = sym_expansion;
	v->a[57696] = sym_command_substitution;
	v->a[57697] = 7;
	v->a[57698] = actions(3);
	v->a[57699] = 1;
	small_parse_table_2885(v);
}

/* EOF small_parse_table_576.c */
