/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_767.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3835(t_small_parse_table_array *v)
{
	v->a[76700] = actions(2583);
	v->a[76701] = 5;
	v->a[76702] = anon_sym_LT;
	v->a[76703] = anon_sym_GT;
	v->a[76704] = anon_sym_AMP_GT;
	v->a[76705] = anon_sym_LT_AMP;
	v->a[76706] = anon_sym_GT_AMP;
	v->a[76707] = 3;
	v->a[76708] = actions(1074);
	v->a[76709] = 1;
	v->a[76710] = sym_comment;
	v->a[76711] = actions(1042);
	v->a[76712] = 7;
	v->a[76713] = anon_sym_PIPE;
	v->a[76714] = anon_sym_LT;
	v->a[76715] = anon_sym_GT;
	v->a[76716] = anon_sym_AMP_GT;
	v->a[76717] = anon_sym_LT_AMP;
	v->a[76718] = anon_sym_GT_AMP;
	v->a[76719] = anon_sym_LT_LT;
	small_parse_table_3836(v);
}

void	small_parse_table_3836(t_small_parse_table_array *v)
{
	v->a[76720] = actions(1044);
	v->a[76721] = 12;
	v->a[76722] = sym_file_descriptor;
	v->a[76723] = sym__concat;
	v->a[76724] = sym_variable_name;
	v->a[76725] = anon_sym_AMP_AMP;
	v->a[76726] = anon_sym_PIPE_PIPE;
	v->a[76727] = anon_sym_GT_GT;
	v->a[76728] = anon_sym_AMP_GT_GT;
	v->a[76729] = anon_sym_GT_PIPE;
	v->a[76730] = anon_sym_LT_AMP_DASH;
	v->a[76731] = anon_sym_GT_AMP_DASH;
	v->a[76732] = anon_sym_LT_LT_DASH;
	v->a[76733] = aux_sym_concatenation_token1;
	v->a[76734] = 8;
	v->a[76735] = actions(3);
	v->a[76736] = 1;
	v->a[76737] = sym_comment;
	v->a[76738] = actions(2496);
	v->a[76739] = 1;
	small_parse_table_3837(v);
}

void	small_parse_table_3837(t_small_parse_table_array *v)
{
	v->a[76740] = sym_file_descriptor;
	v->a[76741] = actions(2558);
	v->a[76742] = 1;
	v->a[76743] = aux_sym_heredoc_redirect_token1;
	v->a[76744] = actions(804);
	v->a[76745] = 2;
	v->a[76746] = anon_sym_LT_LT;
	v->a[76747] = anon_sym_LT_LT_DASH;
	v->a[76748] = actions(1470);
	v->a[76749] = 2;
	v->a[76750] = anon_sym_AMP_AMP;
	v->a[76751] = anon_sym_PIPE_PIPE;
	v->a[76752] = actions(2492);
	v->a[76753] = 2;
	v->a[76754] = anon_sym_LT_AMP_DASH;
	v->a[76755] = anon_sym_GT_AMP_DASH;
	v->a[76756] = state(1397);
	v->a[76757] = 3;
	v->a[76758] = sym_file_redirect;
	v->a[76759] = sym_heredoc_redirect;
	small_parse_table_3838(v);
}

void	small_parse_table_3838(t_small_parse_table_array *v)
{
	v->a[76760] = aux_sym_redirected_statement_repeat1;
	v->a[76761] = actions(2490);
	v->a[76762] = 8;
	v->a[76763] = anon_sym_LT;
	v->a[76764] = anon_sym_GT;
	v->a[76765] = anon_sym_GT_GT;
	v->a[76766] = anon_sym_AMP_GT;
	v->a[76767] = anon_sym_AMP_GT_GT;
	v->a[76768] = anon_sym_LT_AMP;
	v->a[76769] = anon_sym_GT_AMP;
	v->a[76770] = anon_sym_GT_PIPE;
	v->a[76771] = 5;
	v->a[76772] = actions(1074);
	v->a[76773] = 1;
	v->a[76774] = sym_comment;
	v->a[76775] = actions(2601);
	v->a[76776] = 1;
	v->a[76777] = sym_variable_name;
	v->a[76778] = state(1428);
	v->a[76779] = 2;
	small_parse_table_3839(v);
}

void	small_parse_table_3839(t_small_parse_table_array *v)
{
	v->a[76780] = sym_variable_assignment;
	v->a[76781] = aux_sym__variable_assignments_repeat1;
	v->a[76782] = actions(2133);
	v->a[76783] = 7;
	v->a[76784] = anon_sym_PIPE;
	v->a[76785] = anon_sym_LT;
	v->a[76786] = anon_sym_GT;
	v->a[76787] = anon_sym_AMP_GT;
	v->a[76788] = anon_sym_LT_AMP;
	v->a[76789] = anon_sym_GT_AMP;
	v->a[76790] = anon_sym_LT_LT;
	v->a[76791] = actions(2131);
	v->a[76792] = 9;
	v->a[76793] = sym_file_descriptor;
	v->a[76794] = anon_sym_AMP_AMP;
	v->a[76795] = anon_sym_PIPE_PIPE;
	v->a[76796] = anon_sym_GT_GT;
	v->a[76797] = anon_sym_AMP_GT_GT;
	v->a[76798] = anon_sym_GT_PIPE;
	v->a[76799] = anon_sym_LT_AMP_DASH;
	small_parse_table_3840(v);
}

/* EOF small_parse_table_767.c */
