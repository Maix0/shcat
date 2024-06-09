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
	v->a[79600] = anon_sym_DOLLAR;
	v->a[79601] = actions(3122);
	v->a[79602] = 3;
	v->a[79603] = sym_raw_string;
	v->a[79604] = sym__comment_word;
	v->a[79605] = sym_word;
	v->a[79606] = state(657);
	v->a[79607] = 6;
	v->a[79608] = sym_arithmetic_expansion;
	v->a[79609] = sym_string;
	v->a[79610] = sym_number;
	v->a[79611] = sym_simple_expansion;
	v->a[79612] = sym_expansion;
	v->a[79613] = sym_command_substitution;
	v->a[79614] = 12;
	v->a[79615] = actions(3);
	v->a[79616] = 1;
	v->a[79617] = sym_comment;
	v->a[79618] = actions(2873);
	v->a[79619] = 1;
	small_parse_table_3981(v);
}

void	small_parse_table_3981(t_small_parse_table_array *v)
{
	v->a[79620] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[79621] = actions(2877);
	v->a[79622] = 1;
	v->a[79623] = anon_sym_DQUOTE;
	v->a[79624] = actions(2879);
	v->a[79625] = 1;
	v->a[79626] = aux_sym_number_token1;
	v->a[79627] = actions(2881);
	v->a[79628] = 1;
	v->a[79629] = aux_sym_number_token2;
	v->a[79630] = actions(2883);
	v->a[79631] = 1;
	v->a[79632] = anon_sym_DOLLAR_LBRACE;
	v->a[79633] = actions(2885);
	v->a[79634] = 1;
	v->a[79635] = anon_sym_DOLLAR_LPAREN;
	v->a[79636] = actions(2887);
	v->a[79637] = 1;
	v->a[79638] = anon_sym_BQUOTE;
	v->a[79639] = actions(3073);
	small_parse_table_3982(v);
}

void	small_parse_table_3982(t_small_parse_table_array *v)
{
	v->a[79640] = 1;
	v->a[79641] = sym__bare_dollar;
	v->a[79642] = actions(3296);
	v->a[79643] = 1;
	v->a[79644] = anon_sym_DOLLAR;
	v->a[79645] = actions(3071);
	v->a[79646] = 3;
	v->a[79647] = sym_raw_string;
	v->a[79648] = sym__comment_word;
	v->a[79649] = sym_word;
	v->a[79650] = state(956);
	v->a[79651] = 6;
	v->a[79652] = sym_arithmetic_expansion;
	v->a[79653] = sym_string;
	v->a[79654] = sym_number;
	v->a[79655] = sym_simple_expansion;
	v->a[79656] = sym_expansion;
	v->a[79657] = sym_command_substitution;
	v->a[79658] = 12;
	v->a[79659] = actions(3);
	small_parse_table_3983(v);
}

void	small_parse_table_3983(t_small_parse_table_array *v)
{
	v->a[79660] = 1;
	v->a[79661] = sym_comment;
	v->a[79662] = actions(457);
	v->a[79663] = 1;
	v->a[79664] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[79665] = actions(459);
	v->a[79666] = 1;
	v->a[79667] = anon_sym_DOLLAR;
	v->a[79668] = actions(461);
	v->a[79669] = 1;
	v->a[79670] = anon_sym_DQUOTE;
	v->a[79671] = actions(463);
	v->a[79672] = 1;
	v->a[79673] = aux_sym_number_token1;
	v->a[79674] = actions(465);
	v->a[79675] = 1;
	v->a[79676] = aux_sym_number_token2;
	v->a[79677] = actions(467);
	v->a[79678] = 1;
	v->a[79679] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_3984(v);
}

void	small_parse_table_3984(t_small_parse_table_array *v)
{
	v->a[79680] = actions(469);
	v->a[79681] = 1;
	v->a[79682] = anon_sym_DOLLAR_LPAREN;
	v->a[79683] = actions(471);
	v->a[79684] = 1;
	v->a[79685] = anon_sym_BQUOTE;
	v->a[79686] = actions(3248);
	v->a[79687] = 1;
	v->a[79688] = sym__bare_dollar;
	v->a[79689] = actions(3244);
	v->a[79690] = 3;
	v->a[79691] = sym_raw_string;
	v->a[79692] = sym__comment_word;
	v->a[79693] = sym_word;
	v->a[79694] = state(471);
	v->a[79695] = 6;
	v->a[79696] = sym_arithmetic_expansion;
	v->a[79697] = sym_string;
	v->a[79698] = sym_number;
	v->a[79699] = sym_simple_expansion;
	small_parse_table_3985(v);
}

/* EOF small_parse_table_796.c */
