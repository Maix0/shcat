/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_730.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3650(t_small_parse_table_array *v)
{
	v->a[73000] = actions(2910);
	v->a[73001] = 1;
	v->a[73002] = anon_sym_DQUOTE;
	v->a[73003] = actions(2854);
	v->a[73004] = 2;
	v->a[73005] = aux_sym__simple_variable_name_token1;
	v->a[73006] = aux_sym__multiline_variable_name_token1;
	v->a[73007] = actions(2848);
	v->a[73008] = 9;
	v->a[73009] = anon_sym_BANG;
	v->a[73010] = anon_sym_DASH;
	v->a[73011] = anon_sym_STAR;
	v->a[73012] = anon_sym_QMARK;
	v->a[73013] = anon_sym_DOLLAR;
	v->a[73014] = anon_sym_POUND;
	v->a[73015] = anon_sym_AT;
	v->a[73016] = anon_sym_0;
	v->a[73017] = anon_sym__;
	v->a[73018] = 5;
	v->a[73019] = actions(664);
	small_parse_table_3651(v);
}

void	small_parse_table_3651(t_small_parse_table_array *v)
{
	v->a[73020] = 1;
	v->a[73021] = sym_comment;
	v->a[73022] = actions(2912);
	v->a[73023] = 1;
	v->a[73024] = anon_sym_PIPE;
	v->a[73025] = state(1484);
	v->a[73026] = 1;
	v->a[73027] = aux_sym_pipeline_repeat1;
	v->a[73028] = actions(1979);
	v->a[73029] = 3;
	v->a[73030] = anon_sym_LT;
	v->a[73031] = anon_sym_GT;
	v->a[73032] = anon_sym_LT_LT;
	v->a[73033] = actions(1974);
	v->a[73034] = 9;
	v->a[73035] = sym_file_descriptor;
	v->a[73036] = anon_sym_AMP_AMP;
	v->a[73037] = anon_sym_PIPE_PIPE;
	v->a[73038] = anon_sym_GT_GT;
	v->a[73039] = anon_sym_LT_AMP;
	small_parse_table_3652(v);
}

void	small_parse_table_3652(t_small_parse_table_array *v)
{
	v->a[73040] = anon_sym_GT_AMP;
	v->a[73041] = anon_sym_GT_PIPE;
	v->a[73042] = anon_sym_LT_GT;
	v->a[73043] = anon_sym_LT_LT_DASH;
	v->a[73044] = 6;
	v->a[73045] = actions(3);
	v->a[73046] = 1;
	v->a[73047] = sym_comment;
	v->a[73048] = actions(2852);
	v->a[73049] = 1;
	v->a[73050] = sym_string_content;
	v->a[73051] = actions(2856);
	v->a[73052] = 1;
	v->a[73053] = sym_variable_name;
	v->a[73054] = actions(2915);
	v->a[73055] = 1;
	v->a[73056] = anon_sym_DQUOTE;
	v->a[73057] = actions(2854);
	v->a[73058] = 2;
	v->a[73059] = aux_sym__simple_variable_name_token1;
	small_parse_table_3653(v);
}

void	small_parse_table_3653(t_small_parse_table_array *v)
{
	v->a[73060] = aux_sym__multiline_variable_name_token1;
	v->a[73061] = actions(2848);
	v->a[73062] = 9;
	v->a[73063] = anon_sym_BANG;
	v->a[73064] = anon_sym_DASH;
	v->a[73065] = anon_sym_STAR;
	v->a[73066] = anon_sym_QMARK;
	v->a[73067] = anon_sym_DOLLAR;
	v->a[73068] = anon_sym_POUND;
	v->a[73069] = anon_sym_AT;
	v->a[73070] = anon_sym_0;
	v->a[73071] = anon_sym__;
	v->a[73072] = 3;
	v->a[73073] = actions(664);
	v->a[73074] = 1;
	v->a[73075] = sym_comment;
	v->a[73076] = actions(1207);
	v->a[73077] = 4;
	v->a[73078] = anon_sym_PIPE;
	v->a[73079] = anon_sym_LT;
	small_parse_table_3654(v);
}

void	small_parse_table_3654(t_small_parse_table_array *v)
{
	v->a[73080] = anon_sym_GT;
	v->a[73081] = anon_sym_LT_LT;
	v->a[73082] = actions(1209);
	v->a[73083] = 10;
	v->a[73084] = sym_file_descriptor;
	v->a[73085] = sym_variable_name;
	v->a[73086] = anon_sym_AMP_AMP;
	v->a[73087] = anon_sym_PIPE_PIPE;
	v->a[73088] = anon_sym_GT_GT;
	v->a[73089] = anon_sym_LT_AMP;
	v->a[73090] = anon_sym_GT_AMP;
	v->a[73091] = anon_sym_GT_PIPE;
	v->a[73092] = anon_sym_LT_GT;
	v->a[73093] = anon_sym_LT_LT_DASH;
	v->a[73094] = 6;
	v->a[73095] = actions(3);
	v->a[73096] = 1;
	v->a[73097] = sym_comment;
	v->a[73098] = actions(2852);
	v->a[73099] = 1;
	small_parse_table_3655(v);
}

/* EOF small_parse_table_730.c */
