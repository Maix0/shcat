/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_840.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4200(t_small_parse_table_array *v)
{
	v->a[84000] = actions(870);
	v->a[84001] = 1;
	v->a[84002] = sym_comment;
	v->a[84003] = actions(2379);
	v->a[84004] = 6;
	v->a[84005] = anon_sym_PIPE;
	v->a[84006] = anon_sym_LT;
	v->a[84007] = anon_sym_GT;
	v->a[84008] = anon_sym_LT_AMP;
	v->a[84009] = anon_sym_GT_AMP;
	v->a[84010] = anon_sym_LT_LT;
	v->a[84011] = actions(2377);
	v->a[84012] = 8;
	v->a[84013] = sym_file_descriptor;
	v->a[84014] = anon_sym_AMP_AMP;
	v->a[84015] = anon_sym_PIPE_PIPE;
	v->a[84016] = anon_sym_GT_GT;
	v->a[84017] = anon_sym_GT_PIPE;
	v->a[84018] = anon_sym_LT_AMP_DASH;
	v->a[84019] = anon_sym_GT_AMP_DASH;
	small_parse_table_4201(v);
}

void	small_parse_table_4201(t_small_parse_table_array *v)
{
	v->a[84020] = anon_sym_LT_LT_DASH;
	v->a[84021] = 6;
	v->a[84022] = actions(3);
	v->a[84023] = 1;
	v->a[84024] = sym_comment;
	v->a[84025] = actions(3191);
	v->a[84026] = 1;
	v->a[84027] = sym_string_content;
	v->a[84028] = actions(3195);
	v->a[84029] = 1;
	v->a[84030] = sym_variable_name;
	v->a[84031] = actions(3290);
	v->a[84032] = 1;
	v->a[84033] = anon_sym_DQUOTE;
	v->a[84034] = actions(3193);
	v->a[84035] = 2;
	v->a[84036] = aux_sym__simple_variable_name_token1;
	v->a[84037] = aux_sym__multiline_variable_name_token1;
	v->a[84038] = actions(3187);
	v->a[84039] = 9;
	small_parse_table_4202(v);
}

void	small_parse_table_4202(t_small_parse_table_array *v)
{
	v->a[84040] = anon_sym_BANG;
	v->a[84041] = anon_sym_DASH;
	v->a[84042] = anon_sym_STAR;
	v->a[84043] = anon_sym_QMARK;
	v->a[84044] = anon_sym_DOLLAR;
	v->a[84045] = anon_sym_POUND;
	v->a[84046] = anon_sym_AT;
	v->a[84047] = anon_sym_0;
	v->a[84048] = anon_sym__;
	v->a[84049] = 3;
	v->a[84050] = actions(870);
	v->a[84051] = 1;
	v->a[84052] = sym_comment;
	v->a[84053] = actions(2375);
	v->a[84054] = 6;
	v->a[84055] = anon_sym_PIPE;
	v->a[84056] = anon_sym_LT;
	v->a[84057] = anon_sym_GT;
	v->a[84058] = anon_sym_LT_AMP;
	v->a[84059] = anon_sym_GT_AMP;
	small_parse_table_4203(v);
}

void	small_parse_table_4203(t_small_parse_table_array *v)
{
	v->a[84060] = anon_sym_LT_LT;
	v->a[84061] = actions(2373);
	v->a[84062] = 8;
	v->a[84063] = sym_file_descriptor;
	v->a[84064] = anon_sym_AMP_AMP;
	v->a[84065] = anon_sym_PIPE_PIPE;
	v->a[84066] = anon_sym_GT_GT;
	v->a[84067] = anon_sym_GT_PIPE;
	v->a[84068] = anon_sym_LT_AMP_DASH;
	v->a[84069] = anon_sym_GT_AMP_DASH;
	v->a[84070] = anon_sym_LT_LT_DASH;
	v->a[84071] = 3;
	v->a[84072] = actions(870);
	v->a[84073] = 1;
	v->a[84074] = sym_comment;
	v->a[84075] = actions(2375);
	v->a[84076] = 6;
	v->a[84077] = anon_sym_PIPE;
	v->a[84078] = anon_sym_LT;
	v->a[84079] = anon_sym_GT;
	small_parse_table_4204(v);
}

void	small_parse_table_4204(t_small_parse_table_array *v)
{
	v->a[84080] = anon_sym_LT_AMP;
	v->a[84081] = anon_sym_GT_AMP;
	v->a[84082] = anon_sym_LT_LT;
	v->a[84083] = actions(2373);
	v->a[84084] = 8;
	v->a[84085] = sym_file_descriptor;
	v->a[84086] = anon_sym_AMP_AMP;
	v->a[84087] = anon_sym_PIPE_PIPE;
	v->a[84088] = anon_sym_GT_GT;
	v->a[84089] = anon_sym_GT_PIPE;
	v->a[84090] = anon_sym_LT_AMP_DASH;
	v->a[84091] = anon_sym_GT_AMP_DASH;
	v->a[84092] = anon_sym_LT_LT_DASH;
	v->a[84093] = 3;
	v->a[84094] = actions(870);
	v->a[84095] = 1;
	v->a[84096] = sym_comment;
	v->a[84097] = actions(2311);
	v->a[84098] = 6;
	v->a[84099] = anon_sym_PIPE;
	small_parse_table_4205(v);
}

/* EOF small_parse_table_840.c */
