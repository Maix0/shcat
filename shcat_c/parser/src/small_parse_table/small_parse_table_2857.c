/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2857.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_14285(t_small_parse_table_array *v)
{
	v->a[285700] = actions(71);
	v->a[285701] = 1;
	v->a[285702] = sym_comment;
	v->a[285703] = actions(1261);
	v->a[285704] = 8;
	v->a[285705] = anon_sym_PIPE;
	v->a[285706] = anon_sym_LT;
	v->a[285707] = anon_sym_GT;
	v->a[285708] = anon_sym_LT_LT;
	v->a[285709] = anon_sym_AMP_GT;
	v->a[285710] = anon_sym_LT_AMP;
	v->a[285711] = anon_sym_GT_AMP;
	v->a[285712] = sym__special_character;
	v->a[285713] = actions(1263);
	v->a[285714] = 12;
	v->a[285715] = sym_file_descriptor;
	v->a[285716] = anon_sym_PIPE_PIPE;
	v->a[285717] = anon_sym_AMP_AMP;
	v->a[285718] = anon_sym_GT_GT;
	v->a[285719] = anon_sym_PIPE_AMP;
	small_parse_table_14286(v);
}

void	small_parse_table_14286(t_small_parse_table_array *v)
{
	v->a[285720] = anon_sym_RBRACK;
	v->a[285721] = anon_sym_AMP_GT_GT;
	v->a[285722] = anon_sym_GT_PIPE;
	v->a[285723] = anon_sym_LT_AMP_DASH;
	v->a[285724] = anon_sym_GT_AMP_DASH;
	v->a[285725] = anon_sym_LT_LT_DASH;
	v->a[285726] = anon_sym_LT_LT_LT;
	v->a[285727] = 5;
	v->a[285728] = actions(71);
	v->a[285729] = 1;
	v->a[285730] = sym_comment;
	v->a[285731] = state(5411);
	v->a[285732] = 1;
	v->a[285733] = aux_sym_concatenation_repeat1;
	v->a[285734] = actions(12844);
	v->a[285735] = 2;
	v->a[285736] = sym__concat;
	v->a[285737] = aux_sym_concatenation_token1;
	v->a[285738] = actions(1251);
	v->a[285739] = 7;
	small_parse_table_14287(v);
}

void	small_parse_table_14287(t_small_parse_table_array *v)
{
	v->a[285740] = anon_sym_PIPE;
	v->a[285741] = anon_sym_LT;
	v->a[285742] = anon_sym_GT;
	v->a[285743] = anon_sym_LT_LT;
	v->a[285744] = anon_sym_AMP_GT;
	v->a[285745] = anon_sym_LT_AMP;
	v->a[285746] = anon_sym_GT_AMP;
	v->a[285747] = actions(1253);
	v->a[285748] = 10;
	v->a[285749] = sym_file_descriptor;
	v->a[285750] = anon_sym_PIPE_PIPE;
	v->a[285751] = anon_sym_AMP_AMP;
	v->a[285752] = anon_sym_GT_GT;
	v->a[285753] = anon_sym_PIPE_AMP;
	v->a[285754] = anon_sym_AMP_GT_GT;
	v->a[285755] = anon_sym_GT_PIPE;
	v->a[285756] = anon_sym_LT_AMP_DASH;
	v->a[285757] = anon_sym_GT_AMP_DASH;
	v->a[285758] = anon_sym_LT_LT_DASH;
	v->a[285759] = 5;
	small_parse_table_14288(v);
}

void	small_parse_table_14288(t_small_parse_table_array *v)
{
	v->a[285760] = actions(71);
	v->a[285761] = 1;
	v->a[285762] = sym_comment;
	v->a[285763] = state(5407);
	v->a[285764] = 1;
	v->a[285765] = aux_sym_concatenation_repeat1;
	v->a[285766] = actions(12688);
	v->a[285767] = 2;
	v->a[285768] = sym__concat;
	v->a[285769] = aux_sym_concatenation_token1;
	v->a[285770] = actions(4370);
	v->a[285771] = 7;
	v->a[285772] = anon_sym_PIPE;
	v->a[285773] = anon_sym_LT;
	v->a[285774] = anon_sym_GT;
	v->a[285775] = anon_sym_LT_LT;
	v->a[285776] = anon_sym_AMP_GT;
	v->a[285777] = anon_sym_LT_AMP;
	v->a[285778] = anon_sym_GT_AMP;
	v->a[285779] = actions(4372);
	small_parse_table_14289(v);
}

void	small_parse_table_14289(t_small_parse_table_array *v)
{
	v->a[285780] = 10;
	v->a[285781] = sym_file_descriptor;
	v->a[285782] = anon_sym_PIPE_PIPE;
	v->a[285783] = anon_sym_AMP_AMP;
	v->a[285784] = anon_sym_GT_GT;
	v->a[285785] = anon_sym_PIPE_AMP;
	v->a[285786] = anon_sym_AMP_GT_GT;
	v->a[285787] = anon_sym_GT_PIPE;
	v->a[285788] = anon_sym_LT_AMP_DASH;
	v->a[285789] = anon_sym_GT_AMP_DASH;
	v->a[285790] = anon_sym_LT_LT_DASH;
	v->a[285791] = 3;
	v->a[285792] = actions(71);
	v->a[285793] = 1;
	v->a[285794] = sym_comment;
	v->a[285795] = actions(1324);
	v->a[285796] = 7;
	v->a[285797] = anon_sym_PIPE;
	v->a[285798] = anon_sym_LT;
	v->a[285799] = anon_sym_GT;
	small_parse_table_14290(v);
}

/* EOF small_parse_table_2857.c */
