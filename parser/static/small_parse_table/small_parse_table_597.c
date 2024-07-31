/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_597.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2985(t_small_parse_table_array *v)
{
	v->a[59700] = sym_comment;
	v->a[59701] = actions(1776);
	v->a[59702] = 2;
	v->a[59703] = anon_sym_PIPE;
	v->a[59704] = anon_sym_LT_LT;
	v->a[59705] = actions(2411);
	v->a[59706] = 2;
	v->a[59707] = anon_sym_LT;
	v->a[59708] = anon_sym_GT;
	v->a[59709] = state(1243);
	v->a[59710] = 2;
	v->a[59711] = sym_file_redirect;
	v->a[59712] = aux_sym_redirected_statement_repeat2;
	v->a[59713] = actions(1781);
	v->a[59714] = 3;
	v->a[59715] = anon_sym_AMP_AMP;
	v->a[59716] = anon_sym_PIPE_PIPE;
	v->a[59717] = anon_sym_LT_LT_DASH;
	v->a[59718] = actions(2414);
	v->a[59719] = 5;
	small_parse_table_2986(v);
}

void	small_parse_table_2986(t_small_parse_table_array *v)
{
	v->a[59720] = anon_sym_GT_GT;
	v->a[59721] = anon_sym_LT_AMP;
	v->a[59722] = anon_sym_GT_AMP;
	v->a[59723] = anon_sym_GT_PIPE;
	v->a[59724] = anon_sym_LT_GT;
	v->a[59725] = 7;
	v->a[59726] = actions(407);
	v->a[59727] = 1;
	v->a[59728] = sym_comment;
	v->a[59729] = actions(850);
	v->a[59730] = 1;
	v->a[59731] = anon_sym_LT_LT;
	v->a[59732] = actions(2390);
	v->a[59733] = 1;
	v->a[59734] = anon_sym_LT_LT_DASH;
	v->a[59735] = actions(1603);
	v->a[59736] = 2;
	v->a[59737] = anon_sym_LT;
	v->a[59738] = anon_sym_GT;
	v->a[59739] = actions(2417);
	small_parse_table_2987(v);
}

void	small_parse_table_2987(t_small_parse_table_array *v)
{
	v->a[59740] = 2;
	v->a[59741] = anon_sym_AMP_AMP;
	v->a[59742] = anon_sym_PIPE_PIPE;
	v->a[59743] = state(924);
	v->a[59744] = 3;
	v->a[59745] = sym_file_redirect;
	v->a[59746] = sym_heredoc_redirect;
	v->a[59747] = aux_sym_redirected_statement_repeat1;
	v->a[59748] = actions(2419);
	v->a[59749] = 5;
	v->a[59750] = anon_sym_GT_GT;
	v->a[59751] = anon_sym_LT_AMP;
	v->a[59752] = anon_sym_GT_AMP;
	v->a[59753] = anon_sym_GT_PIPE;
	v->a[59754] = anon_sym_LT_GT;
	v->a[59755] = 5;
	v->a[59756] = actions(3);
	v->a[59757] = 1;
	v->a[59758] = sym_comment;
	v->a[59759] = actions(1916);
	small_parse_table_2988(v);
}

void	small_parse_table_2988(t_small_parse_table_array *v)
{
	v->a[59760] = 1;
	v->a[59761] = aux_sym_heredoc_redirect_token1;
	v->a[59762] = actions(2421);
	v->a[59763] = 1;
	v->a[59764] = anon_sym_PIPE;
	v->a[59765] = state(1238);
	v->a[59766] = 1;
	v->a[59767] = aux_sym_pipeline_repeat1;
	v->a[59768] = actions(1914);
	v->a[59769] = 11;
	v->a[59770] = anon_sym_AMP_AMP;
	v->a[59771] = anon_sym_PIPE_PIPE;
	v->a[59772] = anon_sym_LT;
	v->a[59773] = anon_sym_GT;
	v->a[59774] = anon_sym_GT_GT;
	v->a[59775] = anon_sym_LT_AMP;
	v->a[59776] = anon_sym_GT_AMP;
	v->a[59777] = anon_sym_GT_PIPE;
	v->a[59778] = anon_sym_LT_GT;
	v->a[59779] = anon_sym_LT_LT;
	small_parse_table_2989(v);
}

void	small_parse_table_2989(t_small_parse_table_array *v)
{
	v->a[59780] = anon_sym_LT_LT_DASH;
	v->a[59781] = 7;
	v->a[59782] = actions(407);
	v->a[59783] = 1;
	v->a[59784] = sym_comment;
	v->a[59785] = actions(850);
	v->a[59786] = 1;
	v->a[59787] = anon_sym_LT_LT;
	v->a[59788] = actions(2390);
	v->a[59789] = 1;
	v->a[59790] = anon_sym_LT_LT_DASH;
	v->a[59791] = actions(2307);
	v->a[59792] = 2;
	v->a[59793] = anon_sym_LT;
	v->a[59794] = anon_sym_GT;
	v->a[59795] = actions(2423);
	v->a[59796] = 2;
	v->a[59797] = anon_sym_AMP_AMP;
	v->a[59798] = anon_sym_PIPE_PIPE;
	v->a[59799] = state(1185);
	small_parse_table_2990(v);
}

/* EOF small_parse_table_597.c */
