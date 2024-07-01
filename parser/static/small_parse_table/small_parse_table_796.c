/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_796.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3980(t_small_parse_table_array *v)
{
	v->a[79600] = state(628);
	v->a[79601] = 5;
	v->a[79602] = sym_arithmetic_expansion;
	v->a[79603] = sym_string;
	v->a[79604] = sym_simple_expansion;
	v->a[79605] = sym_expansion;
	v->a[79606] = sym_command_substitution;
	v->a[79607] = 3;
	v->a[79608] = actions(870);
	v->a[79609] = 1;
	v->a[79610] = sym_comment;
	v->a[79611] = actions(1266);
	v->a[79612] = 6;
	v->a[79613] = anon_sym_PIPE;
	v->a[79614] = anon_sym_LT;
	v->a[79615] = anon_sym_GT;
	v->a[79616] = anon_sym_LT_AMP;
	v->a[79617] = anon_sym_GT_AMP;
	v->a[79618] = anon_sym_LT_LT;
	v->a[79619] = actions(1264);
	small_parse_table_3981(v);
}

void	small_parse_table_3981(t_small_parse_table_array *v)
{
	v->a[79620] = 10;
	v->a[79621] = sym_file_descriptor;
	v->a[79622] = sym__concat;
	v->a[79623] = anon_sym_AMP_AMP;
	v->a[79624] = anon_sym_PIPE_PIPE;
	v->a[79625] = anon_sym_GT_GT;
	v->a[79626] = anon_sym_GT_PIPE;
	v->a[79627] = anon_sym_LT_AMP_DASH;
	v->a[79628] = anon_sym_GT_AMP_DASH;
	v->a[79629] = anon_sym_LT_LT_DASH;
	v->a[79630] = aux_sym_concatenation_token1;
	v->a[79631] = 10;
	v->a[79632] = actions(3);
	v->a[79633] = 1;
	v->a[79634] = sym_comment;
	v->a[79635] = actions(767);
	v->a[79636] = 1;
	v->a[79637] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[79638] = actions(769);
	v->a[79639] = 1;
	small_parse_table_3982(v);
}

void	small_parse_table_3982(t_small_parse_table_array *v)
{
	v->a[79640] = anon_sym_DOLLAR;
	v->a[79641] = actions(771);
	v->a[79642] = 1;
	v->a[79643] = anon_sym_DQUOTE;
	v->a[79644] = actions(773);
	v->a[79645] = 1;
	v->a[79646] = anon_sym_DOLLAR_LBRACE;
	v->a[79647] = actions(775);
	v->a[79648] = 1;
	v->a[79649] = anon_sym_DOLLAR_LPAREN;
	v->a[79650] = actions(777);
	v->a[79651] = 1;
	v->a[79652] = anon_sym_BQUOTE;
	v->a[79653] = state(226);
	v->a[79654] = 2;
	v->a[79655] = sym_concatenation;
	v->a[79656] = aux_sym_for_statement_repeat1;
	v->a[79657] = actions(765);
	v->a[79658] = 3;
	v->a[79659] = sym_raw_string;
	small_parse_table_3983(v);
}

void	small_parse_table_3983(t_small_parse_table_array *v)
{
	v->a[79660] = sym_number;
	v->a[79661] = sym_word;
	v->a[79662] = state(552);
	v->a[79663] = 5;
	v->a[79664] = sym_arithmetic_expansion;
	v->a[79665] = sym_string;
	v->a[79666] = sym_simple_expansion;
	v->a[79667] = sym_expansion;
	v->a[79668] = sym_command_substitution;
	v->a[79669] = 3;
	v->a[79670] = actions(870);
	v->a[79671] = 1;
	v->a[79672] = sym_comment;
	v->a[79673] = actions(968);
	v->a[79674] = 6;
	v->a[79675] = anon_sym_PIPE;
	v->a[79676] = anon_sym_LT;
	v->a[79677] = anon_sym_GT;
	v->a[79678] = anon_sym_LT_AMP;
	v->a[79679] = anon_sym_GT_AMP;
	small_parse_table_3984(v);
}

void	small_parse_table_3984(t_small_parse_table_array *v)
{
	v->a[79680] = anon_sym_LT_LT;
	v->a[79681] = actions(970);
	v->a[79682] = 10;
	v->a[79683] = sym_file_descriptor;
	v->a[79684] = sym__concat;
	v->a[79685] = anon_sym_AMP_AMP;
	v->a[79686] = anon_sym_PIPE_PIPE;
	v->a[79687] = anon_sym_GT_GT;
	v->a[79688] = anon_sym_GT_PIPE;
	v->a[79689] = anon_sym_LT_AMP_DASH;
	v->a[79690] = anon_sym_GT_AMP_DASH;
	v->a[79691] = anon_sym_LT_LT_DASH;
	v->a[79692] = aux_sym_concatenation_token1;
	v->a[79693] = 10;
	v->a[79694] = actions(3);
	v->a[79695] = 1;
	v->a[79696] = sym_comment;
	v->a[79697] = actions(1690);
	v->a[79698] = 1;
	v->a[79699] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_3985(v);
}

/* EOF small_parse_table_796.c */
