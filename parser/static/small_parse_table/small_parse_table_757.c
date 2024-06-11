/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_757.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3785(t_small_parse_table_array *v)
{
	v->a[75700] = 8;
	v->a[75701] = anon_sym_PIPE;
	v->a[75702] = anon_sym_SEMI_SEMI;
	v->a[75703] = anon_sym_AMP_AMP;
	v->a[75704] = anon_sym_PIPE_PIPE;
	v->a[75705] = anon_sym_LT_LT;
	v->a[75706] = anon_sym_LT_LT_DASH;
	v->a[75707] = anon_sym_AMP;
	v->a[75708] = anon_sym_SEMI;
	v->a[75709] = actions(2787);
	v->a[75710] = 8;
	v->a[75711] = anon_sym_LT;
	v->a[75712] = anon_sym_GT;
	v->a[75713] = anon_sym_GT_GT;
	v->a[75714] = anon_sym_AMP_GT;
	v->a[75715] = anon_sym_AMP_GT_GT;
	v->a[75716] = anon_sym_LT_AMP;
	v->a[75717] = anon_sym_GT_AMP;
	v->a[75718] = anon_sym_GT_PIPE;
	v->a[75719] = 12;
	small_parse_table_3786(v);
}

void	small_parse_table_3786(t_small_parse_table_array *v)
{
	v->a[75720] = actions(3);
	v->a[75721] = 1;
	v->a[75722] = sym_comment;
	v->a[75723] = actions(807);
	v->a[75724] = 1;
	v->a[75725] = anon_sym_PIPE;
	v->a[75726] = actions(840);
	v->a[75727] = 1;
	v->a[75728] = anon_sym_SEMI_SEMI;
	v->a[75729] = actions(2563);
	v->a[75730] = 1;
	v->a[75731] = aux_sym_heredoc_redirect_token1;
	v->a[75732] = actions(2565);
	v->a[75733] = 1;
	v->a[75734] = anon_sym_AMP;
	v->a[75735] = actions(2567);
	v->a[75736] = 1;
	v->a[75737] = anon_sym_SEMI;
	v->a[75738] = actions(2602);
	v->a[75739] = 1;
	small_parse_table_3787(v);
}

void	small_parse_table_3787(t_small_parse_table_array *v)
{
	v->a[75740] = sym_file_descriptor;
	v->a[75741] = actions(861);
	v->a[75742] = 2;
	v->a[75743] = anon_sym_LT_LT;
	v->a[75744] = anon_sym_LT_LT_DASH;
	v->a[75745] = actions(965);
	v->a[75746] = 2;
	v->a[75747] = anon_sym_AMP_AMP;
	v->a[75748] = anon_sym_PIPE_PIPE;
	v->a[75749] = actions(2598);
	v->a[75750] = 2;
	v->a[75751] = anon_sym_LT_AMP_DASH;
	v->a[75752] = anon_sym_GT_AMP_DASH;
	v->a[75753] = state(1322);
	v->a[75754] = 3;
	v->a[75755] = sym_file_redirect;
	v->a[75756] = sym_heredoc_redirect;
	v->a[75757] = aux_sym_redirected_statement_repeat1;
	v->a[75758] = actions(2596);
	v->a[75759] = 8;
	small_parse_table_3788(v);
}

void	small_parse_table_3788(t_small_parse_table_array *v)
{
	v->a[75760] = anon_sym_LT;
	v->a[75761] = anon_sym_GT;
	v->a[75762] = anon_sym_GT_GT;
	v->a[75763] = anon_sym_AMP_GT;
	v->a[75764] = anon_sym_AMP_GT_GT;
	v->a[75765] = anon_sym_LT_AMP;
	v->a[75766] = anon_sym_GT_AMP;
	v->a[75767] = anon_sym_GT_PIPE;
	v->a[75768] = 3;
	v->a[75769] = actions(3);
	v->a[75770] = 1;
	v->a[75771] = sym_comment;
	v->a[75772] = actions(2796);
	v->a[75773] = 3;
	v->a[75774] = sym_file_descriptor;
	v->a[75775] = ts_builtin_sym_end;
	v->a[75776] = aux_sym_heredoc_redirect_token1;
	v->a[75777] = actions(2798);
	v->a[75778] = 20;
	v->a[75779] = anon_sym_PIPE;
	small_parse_table_3789(v);
}

void	small_parse_table_3789(t_small_parse_table_array *v)
{
	v->a[75780] = anon_sym_RPAREN;
	v->a[75781] = anon_sym_SEMI_SEMI;
	v->a[75782] = anon_sym_AMP_AMP;
	v->a[75783] = anon_sym_PIPE_PIPE;
	v->a[75784] = anon_sym_LT;
	v->a[75785] = anon_sym_GT;
	v->a[75786] = anon_sym_GT_GT;
	v->a[75787] = anon_sym_AMP_GT;
	v->a[75788] = anon_sym_AMP_GT_GT;
	v->a[75789] = anon_sym_LT_AMP;
	v->a[75790] = anon_sym_GT_AMP;
	v->a[75791] = anon_sym_GT_PIPE;
	v->a[75792] = anon_sym_LT_AMP_DASH;
	v->a[75793] = anon_sym_GT_AMP_DASH;
	v->a[75794] = anon_sym_LT_LT;
	v->a[75795] = anon_sym_LT_LT_DASH;
	v->a[75796] = anon_sym_AMP;
	v->a[75797] = anon_sym_BQUOTE;
	v->a[75798] = anon_sym_SEMI;
	v->a[75799] = 12;
	small_parse_table_3790(v);
}

/* EOF small_parse_table_757.c */
