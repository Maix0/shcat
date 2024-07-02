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
	v->a[73000] = 1;
	v->a[73001] = sym_comment;
	v->a[73002] = actions(2881);
	v->a[73003] = 1;
	v->a[73004] = sym_string_content;
	v->a[73005] = actions(2885);
	v->a[73006] = 1;
	v->a[73007] = sym_variable_name;
	v->a[73008] = actions(2931);
	v->a[73009] = 1;
	v->a[73010] = anon_sym_DQUOTE;
	v->a[73011] = actions(2883);
	v->a[73012] = 2;
	v->a[73013] = aux_sym__simple_variable_name_token1;
	v->a[73014] = aux_sym__multiline_variable_name_token1;
	v->a[73015] = actions(2877);
	v->a[73016] = 9;
	v->a[73017] = anon_sym_BANG;
	v->a[73018] = anon_sym_DASH;
	v->a[73019] = anon_sym_STAR;
	small_parse_table_3651(v);
}

void	small_parse_table_3651(t_small_parse_table_array *v)
{
	v->a[73020] = anon_sym_QMARK;
	v->a[73021] = anon_sym_DOLLAR;
	v->a[73022] = anon_sym_POUND;
	v->a[73023] = anon_sym_AT;
	v->a[73024] = anon_sym_0;
	v->a[73025] = anon_sym__;
	v->a[73026] = 5;
	v->a[73027] = actions(680);
	v->a[73028] = 1;
	v->a[73029] = sym_comment;
	v->a[73030] = actions(2933);
	v->a[73031] = 1;
	v->a[73032] = anon_sym_PIPE;
	v->a[73033] = state(1482);
	v->a[73034] = 1;
	v->a[73035] = aux_sym_pipeline_repeat1;
	v->a[73036] = actions(1923);
	v->a[73037] = 3;
	v->a[73038] = anon_sym_LT;
	v->a[73039] = anon_sym_GT;
	small_parse_table_3652(v);
}

void	small_parse_table_3652(t_small_parse_table_array *v)
{
	v->a[73040] = anon_sym_LT_LT;
	v->a[73041] = actions(1918);
	v->a[73042] = 9;
	v->a[73043] = sym_file_descriptor;
	v->a[73044] = anon_sym_AMP_AMP;
	v->a[73045] = anon_sym_PIPE_PIPE;
	v->a[73046] = anon_sym_GT_GT;
	v->a[73047] = anon_sym_LT_AMP;
	v->a[73048] = anon_sym_GT_AMP;
	v->a[73049] = anon_sym_GT_PIPE;
	v->a[73050] = anon_sym_LT_GT;
	v->a[73051] = anon_sym_LT_LT_DASH;
	v->a[73052] = 6;
	v->a[73053] = actions(3);
	v->a[73054] = 1;
	v->a[73055] = sym_comment;
	v->a[73056] = actions(2881);
	v->a[73057] = 1;
	v->a[73058] = sym_string_content;
	v->a[73059] = actions(2885);
	small_parse_table_3653(v);
}

void	small_parse_table_3653(t_small_parse_table_array *v)
{
	v->a[73060] = 1;
	v->a[73061] = sym_variable_name;
	v->a[73062] = actions(2936);
	v->a[73063] = 1;
	v->a[73064] = anon_sym_DQUOTE;
	v->a[73065] = actions(2883);
	v->a[73066] = 2;
	v->a[73067] = aux_sym__simple_variable_name_token1;
	v->a[73068] = aux_sym__multiline_variable_name_token1;
	v->a[73069] = actions(2877);
	v->a[73070] = 9;
	v->a[73071] = anon_sym_BANG;
	v->a[73072] = anon_sym_DASH;
	v->a[73073] = anon_sym_STAR;
	v->a[73074] = anon_sym_QMARK;
	v->a[73075] = anon_sym_DOLLAR;
	v->a[73076] = anon_sym_POUND;
	v->a[73077] = anon_sym_AT;
	v->a[73078] = anon_sym_0;
	v->a[73079] = anon_sym__;
	small_parse_table_3654(v);
}

void	small_parse_table_3654(t_small_parse_table_array *v)
{
	v->a[73080] = 6;
	v->a[73081] = actions(3);
	v->a[73082] = 1;
	v->a[73083] = sym_comment;
	v->a[73084] = actions(2881);
	v->a[73085] = 1;
	v->a[73086] = sym_string_content;
	v->a[73087] = actions(2885);
	v->a[73088] = 1;
	v->a[73089] = sym_variable_name;
	v->a[73090] = actions(2938);
	v->a[73091] = 1;
	v->a[73092] = anon_sym_DQUOTE;
	v->a[73093] = actions(2883);
	v->a[73094] = 2;
	v->a[73095] = aux_sym__simple_variable_name_token1;
	v->a[73096] = aux_sym__multiline_variable_name_token1;
	v->a[73097] = actions(2877);
	v->a[73098] = 9;
	v->a[73099] = anon_sym_BANG;
	small_parse_table_3655(v);
}

/* EOF small_parse_table_730.c */
