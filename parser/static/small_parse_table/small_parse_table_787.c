/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_787.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3935(t_small_parse_table_array *v)
{
	v->a[78700] = anon_sym_LT;
	v->a[78701] = anon_sym_GT;
	v->a[78702] = anon_sym_GT_GT;
	v->a[78703] = anon_sym_AMP_GT;
	v->a[78704] = anon_sym_AMP_GT_GT;
	v->a[78705] = anon_sym_LT_AMP;
	v->a[78706] = anon_sym_GT_AMP;
	v->a[78707] = anon_sym_GT_PIPE;
	v->a[78708] = 5;
	v->a[78709] = actions(3);
	v->a[78710] = 1;
	v->a[78711] = sym_comment;
	v->a[78712] = actions(2915);
	v->a[78713] = 1;
	v->a[78714] = anon_sym_PIPE;
	v->a[78715] = state(1440);
	v->a[78716] = 1;
	v->a[78717] = aux_sym_pipeline_repeat1;
	v->a[78718] = actions(2880);
	v->a[78719] = 3;
	small_parse_table_3936(v);
}

void	small_parse_table_3936(t_small_parse_table_array *v)
{
	v->a[78720] = sym_file_descriptor;
	v->a[78721] = ts_builtin_sym_end;
	v->a[78722] = aux_sym_heredoc_redirect_token1;
	v->a[78723] = actions(2878);
	v->a[78724] = 17;
	v->a[78725] = anon_sym_SEMI_SEMI;
	v->a[78726] = anon_sym_AMP_AMP;
	v->a[78727] = anon_sym_PIPE_PIPE;
	v->a[78728] = anon_sym_LT;
	v->a[78729] = anon_sym_GT;
	v->a[78730] = anon_sym_GT_GT;
	v->a[78731] = anon_sym_AMP_GT;
	v->a[78732] = anon_sym_AMP_GT_GT;
	v->a[78733] = anon_sym_LT_AMP;
	v->a[78734] = anon_sym_GT_AMP;
	v->a[78735] = anon_sym_GT_PIPE;
	v->a[78736] = anon_sym_LT_AMP_DASH;
	v->a[78737] = anon_sym_GT_AMP_DASH;
	v->a[78738] = anon_sym_LT_LT;
	v->a[78739] = anon_sym_LT_LT_DASH;
	small_parse_table_3937(v);
}

void	small_parse_table_3937(t_small_parse_table_array *v)
{
	v->a[78740] = anon_sym_AMP;
	v->a[78741] = anon_sym_SEMI;
	v->a[78742] = 9;
	v->a[78743] = actions(3);
	v->a[78744] = 1;
	v->a[78745] = sym_comment;
	v->a[78746] = actions(2602);
	v->a[78747] = 1;
	v->a[78748] = sym_file_descriptor;
	v->a[78749] = actions(2665);
	v->a[78750] = 1;
	v->a[78751] = aux_sym_heredoc_redirect_token1;
	v->a[78752] = actions(861);
	v->a[78753] = 2;
	v->a[78754] = anon_sym_LT_LT;
	v->a[78755] = anon_sym_LT_LT_DASH;
	v->a[78756] = actions(965);
	v->a[78757] = 2;
	v->a[78758] = anon_sym_AMP_AMP;
	v->a[78759] = anon_sym_PIPE_PIPE;
	small_parse_table_3938(v);
}

void	small_parse_table_3938(t_small_parse_table_array *v)
{
	v->a[78760] = actions(2598);
	v->a[78761] = 2;
	v->a[78762] = anon_sym_LT_AMP_DASH;
	v->a[78763] = anon_sym_GT_AMP_DASH;
	v->a[78764] = actions(995);
	v->a[78765] = 3;
	v->a[78766] = anon_sym_SEMI_SEMI;
	v->a[78767] = anon_sym_AMP;
	v->a[78768] = anon_sym_SEMI;
	v->a[78769] = state(1322);
	v->a[78770] = 3;
	v->a[78771] = sym_file_redirect;
	v->a[78772] = sym_heredoc_redirect;
	v->a[78773] = aux_sym_redirected_statement_repeat1;
	v->a[78774] = actions(2596);
	v->a[78775] = 8;
	v->a[78776] = anon_sym_LT;
	v->a[78777] = anon_sym_GT;
	v->a[78778] = anon_sym_GT_GT;
	v->a[78779] = anon_sym_AMP_GT;
	small_parse_table_3939(v);
}

void	small_parse_table_3939(t_small_parse_table_array *v)
{
	v->a[78780] = anon_sym_AMP_GT_GT;
	v->a[78781] = anon_sym_LT_AMP;
	v->a[78782] = anon_sym_GT_AMP;
	v->a[78783] = anon_sym_GT_PIPE;
	v->a[78784] = 3;
	v->a[78785] = actions(3);
	v->a[78786] = 1;
	v->a[78787] = sym_comment;
	v->a[78788] = actions(2695);
	v->a[78789] = 2;
	v->a[78790] = sym_file_descriptor;
	v->a[78791] = aux_sym_heredoc_redirect_token1;
	v->a[78792] = actions(2697);
	v->a[78793] = 19;
	v->a[78794] = anon_sym_esac;
	v->a[78795] = anon_sym_PIPE;
	v->a[78796] = anon_sym_SEMI_SEMI;
	v->a[78797] = anon_sym_AMP_AMP;
	v->a[78798] = anon_sym_PIPE_PIPE;
	v->a[78799] = anon_sym_LT;
	small_parse_table_3940(v);
}

/* EOF small_parse_table_787.c */
