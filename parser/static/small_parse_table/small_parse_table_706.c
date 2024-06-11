/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_706.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3530(t_small_parse_table_array *v)
{
	v->a[70600] = aux_sym_redirected_statement_repeat1;
	v->a[70601] = actions(809);
	v->a[70602] = 19;
	v->a[70603] = anon_sym_PIPE;
	v->a[70604] = anon_sym_SEMI_SEMI;
	v->a[70605] = anon_sym_AMP_AMP;
	v->a[70606] = anon_sym_PIPE_PIPE;
	v->a[70607] = anon_sym_LT;
	v->a[70608] = anon_sym_GT;
	v->a[70609] = anon_sym_GT_GT;
	v->a[70610] = anon_sym_AMP_GT;
	v->a[70611] = anon_sym_AMP_GT_GT;
	v->a[70612] = anon_sym_LT_AMP;
	v->a[70613] = anon_sym_GT_AMP;
	v->a[70614] = anon_sym_GT_PIPE;
	v->a[70615] = anon_sym_LT_AMP_DASH;
	v->a[70616] = anon_sym_GT_AMP_DASH;
	v->a[70617] = anon_sym_LT_LT;
	v->a[70618] = anon_sym_LT_LT_DASH;
	v->a[70619] = anon_sym_AMP;
	small_parse_table_3531(v);
}

void	small_parse_table_3531(t_small_parse_table_array *v)
{
	v->a[70620] = anon_sym_BQUOTE;
	v->a[70621] = anon_sym_SEMI;
	v->a[70622] = 6;
	v->a[70623] = actions(3);
	v->a[70624] = 1;
	v->a[70625] = sym_comment;
	v->a[70626] = actions(2085);
	v->a[70627] = 1;
	v->a[70628] = aux_sym_concatenation_token1;
	v->a[70629] = actions(2174);
	v->a[70630] = 1;
	v->a[70631] = sym__concat;
	v->a[70632] = state(1190);
	v->a[70633] = 1;
	v->a[70634] = aux_sym_concatenation_repeat1;
	v->a[70635] = actions(543);
	v->a[70636] = 2;
	v->a[70637] = sym_file_descriptor;
	v->a[70638] = aux_sym_heredoc_redirect_token1;
	v->a[70639] = actions(541);
	small_parse_table_3532(v);
}

void	small_parse_table_3532(t_small_parse_table_array *v)
{
	v->a[70640] = 19;
	v->a[70641] = anon_sym_PIPE;
	v->a[70642] = anon_sym_SEMI_SEMI;
	v->a[70643] = anon_sym_AMP_AMP;
	v->a[70644] = anon_sym_PIPE_PIPE;
	v->a[70645] = anon_sym_LT;
	v->a[70646] = anon_sym_GT;
	v->a[70647] = anon_sym_GT_GT;
	v->a[70648] = anon_sym_AMP_GT;
	v->a[70649] = anon_sym_AMP_GT_GT;
	v->a[70650] = anon_sym_LT_AMP;
	v->a[70651] = anon_sym_GT_AMP;
	v->a[70652] = anon_sym_GT_PIPE;
	v->a[70653] = anon_sym_LT_AMP_DASH;
	v->a[70654] = anon_sym_GT_AMP_DASH;
	v->a[70655] = anon_sym_LT_LT;
	v->a[70656] = anon_sym_LT_LT_DASH;
	v->a[70657] = anon_sym_AMP;
	v->a[70658] = anon_sym_BQUOTE;
	v->a[70659] = anon_sym_SEMI;
	small_parse_table_3533(v);
}

void	small_parse_table_3533(t_small_parse_table_array *v)
{
	v->a[70660] = 13;
	v->a[70661] = actions(3);
	v->a[70662] = 1;
	v->a[70663] = sym_comment;
	v->a[70664] = actions(807);
	v->a[70665] = 1;
	v->a[70666] = anon_sym_PIPE;
	v->a[70667] = actions(840);
	v->a[70668] = 1;
	v->a[70669] = anon_sym_BQUOTE;
	v->a[70670] = actions(2164);
	v->a[70671] = 1;
	v->a[70672] = sym_file_descriptor;
	v->a[70673] = actions(2394);
	v->a[70674] = 1;
	v->a[70675] = anon_sym_SEMI_SEMI;
	v->a[70676] = actions(2396);
	v->a[70677] = 1;
	v->a[70678] = aux_sym_heredoc_redirect_token1;
	v->a[70679] = actions(2398);
	small_parse_table_3534(v);
}

void	small_parse_table_3534(t_small_parse_table_array *v)
{
	v->a[70680] = 1;
	v->a[70681] = anon_sym_AMP;
	v->a[70682] = actions(2400);
	v->a[70683] = 1;
	v->a[70684] = anon_sym_SEMI;
	v->a[70685] = actions(861);
	v->a[70686] = 2;
	v->a[70687] = anon_sym_LT_LT;
	v->a[70688] = anon_sym_LT_LT_DASH;
	v->a[70689] = actions(1032);
	v->a[70690] = 2;
	v->a[70691] = anon_sym_AMP_AMP;
	v->a[70692] = anon_sym_PIPE_PIPE;
	v->a[70693] = actions(2160);
	v->a[70694] = 2;
	v->a[70695] = anon_sym_LT_AMP_DASH;
	v->a[70696] = anon_sym_GT_AMP_DASH;
	v->a[70697] = state(1297);
	v->a[70698] = 3;
	v->a[70699] = sym_file_redirect;
	small_parse_table_3535(v);
}

/* EOF small_parse_table_706.c */
