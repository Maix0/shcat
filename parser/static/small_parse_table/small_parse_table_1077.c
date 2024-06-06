/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1077.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5385(t_small_parse_table_array *v)
{
	v->a[107700] = anon_sym_PIPE;
	v->a[107701] = anon_sym_SEMI_SEMI;
	v->a[107702] = anon_sym_SEMI_AMP;
	v->a[107703] = anon_sym_SEMI_SEMI_AMP;
	v->a[107704] = anon_sym_PIPE_AMP;
	v->a[107705] = anon_sym_AMP_AMP;
	v->a[107706] = anon_sym_PIPE_PIPE;
	v->a[107707] = anon_sym_LT;
	v->a[107708] = anon_sym_GT;
	v->a[107709] = anon_sym_GT_GT;
	v->a[107710] = anon_sym_AMP_GT;
	v->a[107711] = anon_sym_AMP_GT_GT;
	v->a[107712] = anon_sym_LT_AMP;
	v->a[107713] = anon_sym_GT_AMP;
	v->a[107714] = anon_sym_GT_PIPE;
	v->a[107715] = anon_sym_LT_AMP_DASH;
	v->a[107716] = anon_sym_GT_AMP_DASH;
	v->a[107717] = anon_sym_LT_LT;
	v->a[107718] = anon_sym_LT_LT_DASH;
	v->a[107719] = anon_sym_AMP;
	small_parse_table_5386(v);
}

void	small_parse_table_5386(t_small_parse_table_array *v)
{
	v->a[107720] = anon_sym_SEMI;
	v->a[107721] = 5;
	v->a[107722] = actions(3);
	v->a[107723] = 1;
	v->a[107724] = sym_comment;
	v->a[107725] = state(2261);
	v->a[107726] = 1;
	v->a[107727] = aux_sym_pipeline_repeat1;
	v->a[107728] = actions(5367);
	v->a[107729] = 2;
	v->a[107730] = sym_file_descriptor;
	v->a[107731] = aux_sym_heredoc_redirect_token1;
	v->a[107732] = actions(6241);
	v->a[107733] = 2;
	v->a[107734] = anon_sym_PIPE;
	v->a[107735] = anon_sym_PIPE_AMP;
	v->a[107736] = actions(5362);
	v->a[107737] = 19;
	v->a[107738] = anon_sym_SEMI_SEMI;
	v->a[107739] = anon_sym_SEMI_AMP;
	small_parse_table_5387(v);
}

void	small_parse_table_5387(t_small_parse_table_array *v)
{
	v->a[107740] = anon_sym_SEMI_SEMI_AMP;
	v->a[107741] = anon_sym_AMP_AMP;
	v->a[107742] = anon_sym_PIPE_PIPE;
	v->a[107743] = anon_sym_LT;
	v->a[107744] = anon_sym_GT;
	v->a[107745] = anon_sym_GT_GT;
	v->a[107746] = anon_sym_AMP_GT;
	v->a[107747] = anon_sym_AMP_GT_GT;
	v->a[107748] = anon_sym_LT_AMP;
	v->a[107749] = anon_sym_GT_AMP;
	v->a[107750] = anon_sym_GT_PIPE;
	v->a[107751] = anon_sym_LT_AMP_DASH;
	v->a[107752] = anon_sym_GT_AMP_DASH;
	v->a[107753] = anon_sym_LT_LT;
	v->a[107754] = anon_sym_LT_LT_DASH;
	v->a[107755] = anon_sym_AMP;
	v->a[107756] = anon_sym_SEMI;
	v->a[107757] = 3;
	v->a[107758] = actions(3);
	v->a[107759] = 1;
	small_parse_table_5388(v);
}

void	small_parse_table_5388(t_small_parse_table_array *v)
{
	v->a[107760] = sym_comment;
	v->a[107761] = actions(6205);
	v->a[107762] = 2;
	v->a[107763] = sym_file_descriptor;
	v->a[107764] = aux_sym_heredoc_redirect_token1;
	v->a[107765] = actions(6207);
	v->a[107766] = 22;
	v->a[107767] = anon_sym_esac;
	v->a[107768] = anon_sym_PIPE;
	v->a[107769] = anon_sym_SEMI_SEMI;
	v->a[107770] = anon_sym_SEMI_AMP;
	v->a[107771] = anon_sym_SEMI_SEMI_AMP;
	v->a[107772] = anon_sym_PIPE_AMP;
	v->a[107773] = anon_sym_AMP_AMP;
	v->a[107774] = anon_sym_PIPE_PIPE;
	v->a[107775] = anon_sym_LT;
	v->a[107776] = anon_sym_GT;
	v->a[107777] = anon_sym_GT_GT;
	v->a[107778] = anon_sym_AMP_GT;
	v->a[107779] = anon_sym_AMP_GT_GT;
	small_parse_table_5389(v);
}

void	small_parse_table_5389(t_small_parse_table_array *v)
{
	v->a[107780] = anon_sym_LT_AMP;
	v->a[107781] = anon_sym_GT_AMP;
	v->a[107782] = anon_sym_GT_PIPE;
	v->a[107783] = anon_sym_LT_AMP_DASH;
	v->a[107784] = anon_sym_GT_AMP_DASH;
	v->a[107785] = anon_sym_LT_LT;
	v->a[107786] = anon_sym_LT_LT_DASH;
	v->a[107787] = anon_sym_AMP;
	v->a[107788] = anon_sym_SEMI;
	v->a[107789] = 3;
	v->a[107790] = actions(3);
	v->a[107791] = 1;
	v->a[107792] = sym_comment;
	v->a[107793] = actions(6239);
	v->a[107794] = 3;
	v->a[107795] = sym_file_descriptor;
	v->a[107796] = ts_builtin_sym_end;
	v->a[107797] = aux_sym_heredoc_redirect_token1;
	v->a[107798] = actions(6237);
	v->a[107799] = 21;
	small_parse_table_5390(v);
}

/* EOF small_parse_table_1077.c */
