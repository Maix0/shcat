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
	v->a[57601] = sym_variable_name;
	v->a[57602] = actions(2081);
	v->a[57603] = 2;
	v->a[57604] = anon_sym_PLUS_PLUS;
	v->a[57605] = anon_sym_DASH_DASH;
	v->a[57606] = actions(2083);
	v->a[57607] = 2;
	v->a[57608] = anon_sym_DASH2;
	v->a[57609] = anon_sym_PLUS2;
	v->a[57610] = state(588);
	v->a[57611] = 4;
	v->a[57612] = sym_string;
	v->a[57613] = sym_number;
	v->a[57614] = sym_simple_expansion;
	v->a[57615] = sym_expansion;
	v->a[57616] = state(618);
	v->a[57617] = 8;
	v->a[57618] = sym__arithmetic_expression;
	v->a[57619] = sym_arithmetic_literal;
	small_parse_table_2881(v);
}

void	small_parse_table_2881(t_small_parse_table_array *v)
{
	v->a[57620] = sym_arithmetic_binary_expression;
	v->a[57621] = sym_arithmetic_ternary_expression;
	v->a[57622] = sym_arithmetic_unary_expression;
	v->a[57623] = sym_arithmetic_postfix_expression;
	v->a[57624] = sym_arithmetic_parenthesized_expression;
	v->a[57625] = sym_command_substitution;
	v->a[57626] = 3;
	v->a[57627] = actions(3);
	v->a[57628] = 1;
	v->a[57629] = sym_comment;
	v->a[57630] = actions(1329);
	v->a[57631] = 2;
	v->a[57632] = sym_file_descriptor;
	v->a[57633] = sym__concat;
	v->a[57634] = actions(1327);
	v->a[57635] = 26;
	v->a[57636] = anon_sym_PIPE;
	v->a[57637] = anon_sym_AMP_AMP;
	v->a[57638] = anon_sym_PIPE_PIPE;
	v->a[57639] = anon_sym_LT;
	small_parse_table_2882(v);
}

void	small_parse_table_2882(t_small_parse_table_array *v)
{
	v->a[57640] = anon_sym_GT;
	v->a[57641] = anon_sym_GT_GT;
	v->a[57642] = anon_sym_AMP_GT;
	v->a[57643] = anon_sym_AMP_GT_GT;
	v->a[57644] = anon_sym_LT_AMP;
	v->a[57645] = anon_sym_GT_AMP;
	v->a[57646] = anon_sym_GT_PIPE;
	v->a[57647] = anon_sym_LT_AMP_DASH;
	v->a[57648] = anon_sym_GT_AMP_DASH;
	v->a[57649] = anon_sym_LT_LT;
	v->a[57650] = anon_sym_LT_LT_DASH;
	v->a[57651] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[57652] = aux_sym_concatenation_token1;
	v->a[57653] = anon_sym_DOLLAR;
	v->a[57654] = anon_sym_DQUOTE;
	v->a[57655] = sym_raw_string;
	v->a[57656] = aux_sym_number_token1;
	v->a[57657] = aux_sym_number_token2;
	v->a[57658] = anon_sym_DOLLAR_LBRACE;
	v->a[57659] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_2883(v);
}

void	small_parse_table_2883(t_small_parse_table_array *v)
{
	v->a[57660] = anon_sym_BQUOTE;
	v->a[57661] = sym_word;
	v->a[57662] = 3;
	v->a[57663] = actions(3);
	v->a[57664] = 1;
	v->a[57665] = sym_comment;
	v->a[57666] = actions(1243);
	v->a[57667] = 2;
	v->a[57668] = sym_file_descriptor;
	v->a[57669] = sym__concat;
	v->a[57670] = actions(1245);
	v->a[57671] = 26;
	v->a[57672] = anon_sym_PIPE;
	v->a[57673] = anon_sym_AMP_AMP;
	v->a[57674] = anon_sym_PIPE_PIPE;
	v->a[57675] = anon_sym_LT;
	v->a[57676] = anon_sym_GT;
	v->a[57677] = anon_sym_GT_GT;
	v->a[57678] = anon_sym_AMP_GT;
	v->a[57679] = anon_sym_AMP_GT_GT;
	small_parse_table_2884(v);
}

void	small_parse_table_2884(t_small_parse_table_array *v)
{
	v->a[57680] = anon_sym_LT_AMP;
	v->a[57681] = anon_sym_GT_AMP;
	v->a[57682] = anon_sym_GT_PIPE;
	v->a[57683] = anon_sym_LT_AMP_DASH;
	v->a[57684] = anon_sym_GT_AMP_DASH;
	v->a[57685] = anon_sym_LT_LT;
	v->a[57686] = anon_sym_LT_LT_DASH;
	v->a[57687] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[57688] = aux_sym_concatenation_token1;
	v->a[57689] = anon_sym_DOLLAR;
	v->a[57690] = anon_sym_DQUOTE;
	v->a[57691] = sym_raw_string;
	v->a[57692] = aux_sym_number_token1;
	v->a[57693] = aux_sym_number_token2;
	v->a[57694] = anon_sym_DOLLAR_LBRACE;
	v->a[57695] = anon_sym_DOLLAR_LPAREN;
	v->a[57696] = anon_sym_BQUOTE;
	v->a[57697] = sym_word;
	v->a[57698] = 17;
	v->a[57699] = actions(1404);
	small_parse_table_2885(v);
}

/* EOF small_parse_table_576.c */
