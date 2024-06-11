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
	v->a[76700] = actions(1157);
	v->a[76701] = 20;
	v->a[76702] = anon_sym_esac;
	v->a[76703] = anon_sym_PIPE;
	v->a[76704] = anon_sym_SEMI_SEMI;
	v->a[76705] = anon_sym_AMP_AMP;
	v->a[76706] = anon_sym_PIPE_PIPE;
	v->a[76707] = anon_sym_LT;
	v->a[76708] = anon_sym_GT;
	v->a[76709] = anon_sym_GT_GT;
	v->a[76710] = anon_sym_AMP_GT;
	v->a[76711] = anon_sym_AMP_GT_GT;
	v->a[76712] = anon_sym_LT_AMP;
	v->a[76713] = anon_sym_GT_AMP;
	v->a[76714] = anon_sym_GT_PIPE;
	v->a[76715] = anon_sym_LT_AMP_DASH;
	v->a[76716] = anon_sym_GT_AMP_DASH;
	v->a[76717] = anon_sym_LT_LT;
	v->a[76718] = anon_sym_LT_LT_DASH;
	v->a[76719] = anon_sym_AMP;
	small_parse_table_3836(v);
}

void	small_parse_table_3836(t_small_parse_table_array *v)
{
	v->a[76720] = aux_sym_concatenation_token1;
	v->a[76721] = anon_sym_SEMI;
	v->a[76722] = 3;
	v->a[76723] = actions(3);
	v->a[76724] = 1;
	v->a[76725] = sym_comment;
	v->a[76726] = actions(1100);
	v->a[76727] = 3;
	v->a[76728] = sym_file_descriptor;
	v->a[76729] = sym__concat;
	v->a[76730] = aux_sym_heredoc_redirect_token1;
	v->a[76731] = actions(1102);
	v->a[76732] = 20;
	v->a[76733] = anon_sym_esac;
	v->a[76734] = anon_sym_PIPE;
	v->a[76735] = anon_sym_SEMI_SEMI;
	v->a[76736] = anon_sym_AMP_AMP;
	v->a[76737] = anon_sym_PIPE_PIPE;
	v->a[76738] = anon_sym_LT;
	v->a[76739] = anon_sym_GT;
	small_parse_table_3837(v);
}

void	small_parse_table_3837(t_small_parse_table_array *v)
{
	v->a[76740] = anon_sym_GT_GT;
	v->a[76741] = anon_sym_AMP_GT;
	v->a[76742] = anon_sym_AMP_GT_GT;
	v->a[76743] = anon_sym_LT_AMP;
	v->a[76744] = anon_sym_GT_AMP;
	v->a[76745] = anon_sym_GT_PIPE;
	v->a[76746] = anon_sym_LT_AMP_DASH;
	v->a[76747] = anon_sym_GT_AMP_DASH;
	v->a[76748] = anon_sym_LT_LT;
	v->a[76749] = anon_sym_LT_LT_DASH;
	v->a[76750] = anon_sym_AMP;
	v->a[76751] = aux_sym_concatenation_token1;
	v->a[76752] = anon_sym_SEMI;
	v->a[76753] = 10;
	v->a[76754] = actions(3);
	v->a[76755] = 1;
	v->a[76756] = sym_comment;
	v->a[76757] = actions(807);
	v->a[76758] = 1;
	v->a[76759] = anon_sym_PIPE;
	small_parse_table_3838(v);
}

void	small_parse_table_3838(t_small_parse_table_array *v)
{
	v->a[76760] = actions(2602);
	v->a[76761] = 1;
	v->a[76762] = sym_file_descriptor;
	v->a[76763] = actions(2841);
	v->a[76764] = 1;
	v->a[76765] = aux_sym_heredoc_redirect_token1;
	v->a[76766] = actions(861);
	v->a[76767] = 2;
	v->a[76768] = anon_sym_LT_LT;
	v->a[76769] = anon_sym_LT_LT_DASH;
	v->a[76770] = actions(965);
	v->a[76771] = 2;
	v->a[76772] = anon_sym_AMP_AMP;
	v->a[76773] = anon_sym_PIPE_PIPE;
	v->a[76774] = actions(2598);
	v->a[76775] = 2;
	v->a[76776] = anon_sym_LT_AMP_DASH;
	v->a[76777] = anon_sym_GT_AMP_DASH;
	v->a[76778] = actions(1039);
	v->a[76779] = 3;
	small_parse_table_3839(v);
}

void	small_parse_table_3839(t_small_parse_table_array *v)
{
	v->a[76780] = anon_sym_SEMI_SEMI;
	v->a[76781] = anon_sym_AMP;
	v->a[76782] = anon_sym_SEMI;
	v->a[76783] = state(1322);
	v->a[76784] = 3;
	v->a[76785] = sym_file_redirect;
	v->a[76786] = sym_heredoc_redirect;
	v->a[76787] = aux_sym_redirected_statement_repeat1;
	v->a[76788] = actions(2596);
	v->a[76789] = 8;
	v->a[76790] = anon_sym_LT;
	v->a[76791] = anon_sym_GT;
	v->a[76792] = anon_sym_GT_GT;
	v->a[76793] = anon_sym_AMP_GT;
	v->a[76794] = anon_sym_AMP_GT_GT;
	v->a[76795] = anon_sym_LT_AMP;
	v->a[76796] = anon_sym_GT_AMP;
	v->a[76797] = anon_sym_GT_PIPE;
	v->a[76798] = 3;
	v->a[76799] = actions(3);
	small_parse_table_3840(v);
}

/* EOF small_parse_table_767.c */
