/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2707.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_13535(t_small_parse_table_array *v)
{
	v->a[270700] = anon_sym_SEMI_AMP;
	v->a[270701] = anon_sym_SEMI_SEMI_AMP;
	v->a[270702] = anon_sym_PIPE_AMP;
	v->a[270703] = anon_sym_AMP_GT;
	v->a[270704] = anon_sym_AMP_GT_GT;
	v->a[270705] = anon_sym_LT_AMP;
	v->a[270706] = anon_sym_GT_AMP;
	v->a[270707] = anon_sym_GT_PIPE;
	v->a[270708] = anon_sym_LT_AMP_DASH;
	v->a[270709] = anon_sym_GT_AMP_DASH;
	v->a[270710] = anon_sym_LT_LT_DASH;
	v->a[270711] = 6;
	v->a[270712] = actions(3);
	v->a[270713] = 1;
	v->a[270714] = sym_comment;
	v->a[270715] = actions(11651);
	v->a[270716] = 1;
	v->a[270717] = aux_sym_concatenation_token1;
	v->a[270718] = actions(11653);
	v->a[270719] = 1;
	small_parse_table_13536(v);
}

void	small_parse_table_13536(t_small_parse_table_array *v)
{
	v->a[270720] = sym__concat;
	v->a[270721] = state(5033);
	v->a[270722] = 1;
	v->a[270723] = aux_sym_concatenation_repeat1;
	v->a[270724] = actions(4372);
	v->a[270725] = 2;
	v->a[270726] = sym_file_descriptor;
	v->a[270727] = aux_sym_heredoc_redirect_token1;
	v->a[270728] = actions(4370);
	v->a[270729] = 19;
	v->a[270730] = anon_sym_SEMI;
	v->a[270731] = anon_sym_PIPE_PIPE;
	v->a[270732] = anon_sym_AMP_AMP;
	v->a[270733] = anon_sym_PIPE;
	v->a[270734] = anon_sym_AMP;
	v->a[270735] = anon_sym_LT;
	v->a[270736] = anon_sym_GT;
	v->a[270737] = anon_sym_LT_LT;
	v->a[270738] = anon_sym_GT_GT;
	v->a[270739] = anon_sym_SEMI_SEMI;
	small_parse_table_13537(v);
}

void	small_parse_table_13537(t_small_parse_table_array *v)
{
	v->a[270740] = anon_sym_PIPE_AMP;
	v->a[270741] = anon_sym_AMP_GT;
	v->a[270742] = anon_sym_AMP_GT_GT;
	v->a[270743] = anon_sym_LT_AMP;
	v->a[270744] = anon_sym_GT_AMP;
	v->a[270745] = anon_sym_GT_PIPE;
	v->a[270746] = anon_sym_LT_AMP_DASH;
	v->a[270747] = anon_sym_GT_AMP_DASH;
	v->a[270748] = anon_sym_LT_LT_DASH;
	v->a[270749] = 10;
	v->a[270750] = actions(3);
	v->a[270751] = 1;
	v->a[270752] = sym_comment;
	v->a[270753] = actions(5101);
	v->a[270754] = 1;
	v->a[270755] = aux_sym_heredoc_redirect_token1;
	v->a[270756] = actions(12221);
	v->a[270757] = 1;
	v->a[270758] = sym_file_descriptor;
	v->a[270759] = actions(4253);
	small_parse_table_13538(v);
}

void	small_parse_table_13538(t_small_parse_table_array *v)
{
	v->a[270760] = 2;
	v->a[270761] = anon_sym_PIPE;
	v->a[270762] = anon_sym_PIPE_AMP;
	v->a[270763] = actions(4692);
	v->a[270764] = 2;
	v->a[270765] = anon_sym_LT_LT;
	v->a[270766] = anon_sym_LT_LT_DASH;
	v->a[270767] = actions(5099);
	v->a[270768] = 2;
	v->a[270769] = anon_sym_PIPE_PIPE;
	v->a[270770] = anon_sym_AMP_AMP;
	v->a[270771] = actions(11556);
	v->a[270772] = 2;
	v->a[270773] = anon_sym_LT_AMP_DASH;
	v->a[270774] = anon_sym_GT_AMP_DASH;
	v->a[270775] = actions(5097);
	v->a[270776] = 3;
	v->a[270777] = anon_sym_SEMI;
	v->a[270778] = anon_sym_AMP;
	v->a[270779] = anon_sym_SEMI_SEMI;
	small_parse_table_13539(v);
}

void	small_parse_table_13539(t_small_parse_table_array *v)
{
	v->a[270780] = state(4986);
	v->a[270781] = 3;
	v->a[270782] = sym_file_redirect;
	v->a[270783] = sym_heredoc_redirect;
	v->a[270784] = aux_sym_redirected_statement_repeat1;
	v->a[270785] = actions(11554);
	v->a[270786] = 8;
	v->a[270787] = anon_sym_LT;
	v->a[270788] = anon_sym_GT;
	v->a[270789] = anon_sym_GT_GT;
	v->a[270790] = anon_sym_AMP_GT;
	v->a[270791] = anon_sym_AMP_GT_GT;
	v->a[270792] = anon_sym_LT_AMP;
	v->a[270793] = anon_sym_GT_AMP;
	v->a[270794] = anon_sym_GT_PIPE;
	v->a[270795] = 3;
	v->a[270796] = actions(3);
	v->a[270797] = 1;
	v->a[270798] = sym_comment;
	v->a[270799] = actions(11956);
	small_parse_table_13540(v);
}

/* EOF small_parse_table_2707.c */
