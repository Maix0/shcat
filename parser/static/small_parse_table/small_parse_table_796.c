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
	v->a[79600] = sym__extglob_blob;
	v->a[79601] = actions(2943);
	v->a[79602] = 3;
	v->a[79603] = sym_raw_string;
	v->a[79604] = sym_number;
	v->a[79605] = sym_word;
	v->a[79606] = state(1998);
	v->a[79607] = 5;
	v->a[79608] = sym_arithmetic_expansion;
	v->a[79609] = sym_string;
	v->a[79610] = sym_simple_expansion;
	v->a[79611] = sym_expansion;
	v->a[79612] = sym_command_substitution;
	v->a[79613] = 5;
	v->a[79614] = actions(1074);
	v->a[79615] = 1;
	v->a[79616] = sym_comment;
	v->a[79617] = actions(2945);
	v->a[79618] = 1;
	v->a[79619] = anon_sym_PIPE;
	small_parse_table_3981(v);
}

void	small_parse_table_3981(t_small_parse_table_array *v)
{
	v->a[79620] = state(1544);
	v->a[79621] = 1;
	v->a[79622] = aux_sym_pipeline_repeat1;
	v->a[79623] = actions(2444);
	v->a[79624] = 6;
	v->a[79625] = anon_sym_LT;
	v->a[79626] = anon_sym_GT;
	v->a[79627] = anon_sym_AMP_GT;
	v->a[79628] = anon_sym_LT_AMP;
	v->a[79629] = anon_sym_GT_AMP;
	v->a[79630] = anon_sym_LT_LT;
	v->a[79631] = actions(2440);
	v->a[79632] = 9;
	v->a[79633] = sym_file_descriptor;
	v->a[79634] = anon_sym_AMP_AMP;
	v->a[79635] = anon_sym_PIPE_PIPE;
	v->a[79636] = anon_sym_GT_GT;
	v->a[79637] = anon_sym_AMP_GT_GT;
	v->a[79638] = anon_sym_GT_PIPE;
	v->a[79639] = anon_sym_LT_AMP_DASH;
	small_parse_table_3982(v);
}

void	small_parse_table_3982(t_small_parse_table_array *v)
{
	v->a[79640] = anon_sym_GT_AMP_DASH;
	v->a[79641] = anon_sym_LT_LT_DASH;
	v->a[79642] = 10;
	v->a[79643] = actions(3);
	v->a[79644] = 1;
	v->a[79645] = sym_comment;
	v->a[79646] = actions(2809);
	v->a[79647] = 1;
	v->a[79648] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[79649] = actions(2813);
	v->a[79650] = 1;
	v->a[79651] = anon_sym_DQUOTE;
	v->a[79652] = actions(2815);
	v->a[79653] = 1;
	v->a[79654] = anon_sym_DOLLAR_LBRACE;
	v->a[79655] = actions(2817);
	v->a[79656] = 1;
	v->a[79657] = anon_sym_DOLLAR_LPAREN;
	v->a[79658] = actions(2819);
	v->a[79659] = 1;
	small_parse_table_3983(v);
}

void	small_parse_table_3983(t_small_parse_table_array *v)
{
	v->a[79660] = anon_sym_BQUOTE;
	v->a[79661] = actions(2821);
	v->a[79662] = 1;
	v->a[79663] = sym__bare_dollar;
	v->a[79664] = actions(2947);
	v->a[79665] = 1;
	v->a[79666] = anon_sym_DOLLAR;
	v->a[79667] = actions(2807);
	v->a[79668] = 5;
	v->a[79669] = aux_sym_concatenation_token1;
	v->a[79670] = sym_raw_string;
	v->a[79671] = sym_number;
	v->a[79672] = sym__comment_word;
	v->a[79673] = sym_word;
	v->a[79674] = state(992);
	v->a[79675] = 5;
	v->a[79676] = sym_arithmetic_expansion;
	v->a[79677] = sym_string;
	v->a[79678] = sym_simple_expansion;
	v->a[79679] = sym_expansion;
	small_parse_table_3984(v);
}

void	small_parse_table_3984(t_small_parse_table_array *v)
{
	v->a[79680] = sym_command_substitution;
	v->a[79681] = 5;
	v->a[79682] = actions(1074);
	v->a[79683] = 1;
	v->a[79684] = sym_comment;
	v->a[79685] = actions(2188);
	v->a[79686] = 1;
	v->a[79687] = anon_sym_PIPE;
	v->a[79688] = state(1512);
	v->a[79689] = 1;
	v->a[79690] = aux_sym_pipeline_repeat1;
	v->a[79691] = actions(2191);
	v->a[79692] = 6;
	v->a[79693] = anon_sym_LT;
	v->a[79694] = anon_sym_GT;
	v->a[79695] = anon_sym_AMP_GT;
	v->a[79696] = anon_sym_LT_AMP;
	v->a[79697] = anon_sym_GT_AMP;
	v->a[79698] = anon_sym_LT_LT;
	v->a[79699] = actions(2186);
	small_parse_table_3985(v);
}

/* EOF small_parse_table_796.c */
