/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_824.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4120(t_small_parse_table_array *v)
{
	v->a[82400] = anon_sym_GT_AMP_DASH;
	v->a[82401] = anon_sym_LT_LT_DASH;
	v->a[82402] = aux_sym_concatenation_token1;
	v->a[82403] = 10;
	v->a[82404] = actions(1094);
	v->a[82405] = 1;
	v->a[82406] = sym_comment;
	v->a[82407] = actions(2137);
	v->a[82408] = 1;
	v->a[82409] = anon_sym_PIPE;
	v->a[82410] = actions(3050);
	v->a[82411] = 1;
	v->a[82412] = anon_sym_LT_LT;
	v->a[82413] = actions(3053);
	v->a[82414] = 1;
	v->a[82415] = anon_sym_LT_LT_DASH;
	v->a[82416] = actions(3056);
	v->a[82417] = 1;
	v->a[82418] = sym_file_descriptor;
	v->a[82419] = actions(2135);
	small_parse_table_4121(v);
}

void	small_parse_table_4121(t_small_parse_table_array *v)
{
	v->a[82420] = 2;
	v->a[82421] = anon_sym_AMP_AMP;
	v->a[82422] = anon_sym_PIPE_PIPE;
	v->a[82423] = actions(3047);
	v->a[82424] = 2;
	v->a[82425] = anon_sym_LT_AMP_DASH;
	v->a[82426] = anon_sym_GT_AMP_DASH;
	v->a[82427] = actions(3044);
	v->a[82428] = 3;
	v->a[82429] = anon_sym_GT_GT;
	v->a[82430] = anon_sym_AMP_GT_GT;
	v->a[82431] = anon_sym_GT_PIPE;
	v->a[82432] = state(1573);
	v->a[82433] = 3;
	v->a[82434] = sym_file_redirect;
	v->a[82435] = sym_heredoc_redirect;
	v->a[82436] = aux_sym_redirected_statement_repeat1;
	v->a[82437] = actions(3041);
	v->a[82438] = 5;
	v->a[82439] = anon_sym_LT;
	small_parse_table_4122(v);
}

void	small_parse_table_4122(t_small_parse_table_array *v)
{
	v->a[82440] = anon_sym_GT;
	v->a[82441] = anon_sym_AMP_GT;
	v->a[82442] = anon_sym_LT_AMP;
	v->a[82443] = anon_sym_GT_AMP;
	v->a[82444] = 6;
	v->a[82445] = actions(1094);
	v->a[82446] = 1;
	v->a[82447] = sym_comment;
	v->a[82448] = actions(3013);
	v->a[82449] = 1;
	v->a[82450] = aux_sym_concatenation_token1;
	v->a[82451] = actions(3059);
	v->a[82452] = 1;
	v->a[82453] = sym__concat;
	v->a[82454] = state(1567);
	v->a[82455] = 1;
	v->a[82456] = aux_sym_concatenation_repeat1;
	v->a[82457] = actions(974);
	v->a[82458] = 7;
	v->a[82459] = anon_sym_PIPE;
	small_parse_table_4123(v);
}

void	small_parse_table_4123(t_small_parse_table_array *v)
{
	v->a[82460] = anon_sym_LT;
	v->a[82461] = anon_sym_GT;
	v->a[82462] = anon_sym_AMP_GT;
	v->a[82463] = anon_sym_LT_AMP;
	v->a[82464] = anon_sym_GT_AMP;
	v->a[82465] = anon_sym_LT_LT;
	v->a[82466] = actions(972);
	v->a[82467] = 9;
	v->a[82468] = sym_file_descriptor;
	v->a[82469] = anon_sym_AMP_AMP;
	v->a[82470] = anon_sym_PIPE_PIPE;
	v->a[82471] = anon_sym_GT_GT;
	v->a[82472] = anon_sym_AMP_GT_GT;
	v->a[82473] = anon_sym_GT_PIPE;
	v->a[82474] = anon_sym_LT_AMP_DASH;
	v->a[82475] = anon_sym_GT_AMP_DASH;
	v->a[82476] = anon_sym_LT_LT_DASH;
	v->a[82477] = 3;
	v->a[82478] = actions(1094);
	v->a[82479] = 1;
	small_parse_table_4124(v);
}

void	small_parse_table_4124(t_small_parse_table_array *v)
{
	v->a[82480] = sym_comment;
	v->a[82481] = actions(1179);
	v->a[82482] = 7;
	v->a[82483] = anon_sym_PIPE;
	v->a[82484] = anon_sym_LT;
	v->a[82485] = anon_sym_GT;
	v->a[82486] = anon_sym_AMP_GT;
	v->a[82487] = anon_sym_LT_AMP;
	v->a[82488] = anon_sym_GT_AMP;
	v->a[82489] = anon_sym_LT_LT;
	v->a[82490] = actions(1177);
	v->a[82491] = 12;
	v->a[82492] = sym_file_descriptor;
	v->a[82493] = sym__concat;
	v->a[82494] = sym_variable_name;
	v->a[82495] = anon_sym_AMP_AMP;
	v->a[82496] = anon_sym_PIPE_PIPE;
	v->a[82497] = anon_sym_GT_GT;
	v->a[82498] = anon_sym_AMP_GT_GT;
	v->a[82499] = anon_sym_GT_PIPE;
	small_parse_table_4125(v);
}

/* EOF small_parse_table_824.c */
