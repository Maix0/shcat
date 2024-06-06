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
	v->a[57600] = anon_sym_LT_LT_DASH;
	v->a[57601] = anon_sym_AMP;
	v->a[57602] = anon_sym_SEMI;
	v->a[57603] = actions(3629);
	v->a[57604] = 10;
	v->a[57605] = anon_sym_LT;
	v->a[57606] = anon_sym_GT;
	v->a[57607] = anon_sym_GT_GT;
	v->a[57608] = anon_sym_AMP_GT;
	v->a[57609] = anon_sym_AMP_GT_GT;
	v->a[57610] = anon_sym_LT_AMP;
	v->a[57611] = anon_sym_GT_AMP;
	v->a[57612] = anon_sym_GT_PIPE;
	v->a[57613] = anon_sym_LT_AMP_DASH;
	v->a[57614] = anon_sym_GT_AMP_DASH;
	v->a[57615] = actions(3625);
	v->a[57616] = 12;
	v->a[57617] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[57618] = anon_sym_DOLLAR;
	v->a[57619] = sym__special_character;
	small_parse_table_2881(v);
}

void	small_parse_table_2881(t_small_parse_table_array *v)
{
	v->a[57620] = anon_sym_DQUOTE;
	v->a[57621] = sym_raw_string;
	v->a[57622] = aux_sym_number_token1;
	v->a[57623] = aux_sym_number_token2;
	v->a[57624] = anon_sym_DOLLAR_LBRACE;
	v->a[57625] = anon_sym_DOLLAR_LPAREN;
	v->a[57626] = anon_sym_BQUOTE;
	v->a[57627] = anon_sym_DOLLAR_BQUOTE;
	v->a[57628] = sym_word;
	v->a[57629] = 3;
	v->a[57630] = actions(3);
	v->a[57631] = 1;
	v->a[57632] = sym_comment;
	v->a[57633] = actions(2664);
	v->a[57634] = 4;
	v->a[57635] = sym_file_descriptor;
	v->a[57636] = sym_test_operator;
	v->a[57637] = sym__brace_start;
	v->a[57638] = aux_sym_heredoc_redirect_token1;
	v->a[57639] = actions(2662);
	small_parse_table_2882(v);
}

void	small_parse_table_2882(t_small_parse_table_array *v)
{
	v->a[57640] = 33;
	v->a[57641] = anon_sym_PIPE;
	v->a[57642] = anon_sym_RPAREN;
	v->a[57643] = anon_sym_SEMI_SEMI;
	v->a[57644] = anon_sym_PIPE_AMP;
	v->a[57645] = anon_sym_AMP_AMP;
	v->a[57646] = anon_sym_PIPE_PIPE;
	v->a[57647] = anon_sym_LT;
	v->a[57648] = anon_sym_GT;
	v->a[57649] = anon_sym_GT_GT;
	v->a[57650] = anon_sym_AMP_GT;
	v->a[57651] = anon_sym_AMP_GT_GT;
	v->a[57652] = anon_sym_LT_AMP;
	v->a[57653] = anon_sym_GT_AMP;
	v->a[57654] = anon_sym_GT_PIPE;
	v->a[57655] = anon_sym_LT_AMP_DASH;
	v->a[57656] = anon_sym_GT_AMP_DASH;
	v->a[57657] = anon_sym_LT_LT;
	v->a[57658] = anon_sym_LT_LT_DASH;
	v->a[57659] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_2883(v);
}

void	small_parse_table_2883(t_small_parse_table_array *v)
{
	v->a[57660] = anon_sym_AMP;
	v->a[57661] = anon_sym_DOLLAR;
	v->a[57662] = sym__special_character;
	v->a[57663] = anon_sym_DQUOTE;
	v->a[57664] = sym_raw_string;
	v->a[57665] = aux_sym_number_token1;
	v->a[57666] = aux_sym_number_token2;
	v->a[57667] = anon_sym_DOLLAR_LBRACE;
	v->a[57668] = anon_sym_DOLLAR_LPAREN;
	v->a[57669] = anon_sym_BQUOTE;
	v->a[57670] = anon_sym_DOLLAR_BQUOTE;
	v->a[57671] = aux_sym__simple_variable_name_token1;
	v->a[57672] = sym_word;
	v->a[57673] = anon_sym_SEMI;
	v->a[57674] = 8;
	v->a[57675] = actions(3);
	v->a[57676] = 1;
	v->a[57677] = sym_comment;
	v->a[57678] = actions(3632);
	v->a[57679] = 1;
	small_parse_table_2884(v);
}

void	small_parse_table_2884(t_small_parse_table_array *v)
{
	v->a[57680] = aux_sym_heredoc_redirect_token1;
	v->a[57681] = actions(3634);
	v->a[57682] = 1;
	v->a[57683] = sym_file_descriptor;
	v->a[57684] = actions(3847);
	v->a[57685] = 1;
	v->a[57686] = anon_sym_RPAREN;
	v->a[57687] = actions(3637);
	v->a[57688] = 3;
	v->a[57689] = sym_variable_name;
	v->a[57690] = sym_test_operator;
	v->a[57691] = sym__brace_start;
	v->a[57692] = actions(3627);
	v->a[57693] = 9;
	v->a[57694] = anon_sym_PIPE;
	v->a[57695] = anon_sym_SEMI_SEMI;
	v->a[57696] = anon_sym_PIPE_AMP;
	v->a[57697] = anon_sym_AMP_AMP;
	v->a[57698] = anon_sym_PIPE_PIPE;
	v->a[57699] = anon_sym_LT_LT;
	small_parse_table_2885(v);
}

/* EOF small_parse_table_576.c */
