/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2917.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_14585(t_small_parse_table_array *v)
{
	v->a[291700] = anon_sym_GT_GT;
	v->a[291701] = anon_sym_AMP_GT;
	v->a[291702] = anon_sym_AMP_GT_GT;
	v->a[291703] = anon_sym_LT_AMP;
	v->a[291704] = anon_sym_GT_AMP;
	v->a[291705] = anon_sym_GT_PIPE;
	v->a[291706] = anon_sym_LT_AMP_DASH;
	v->a[291707] = anon_sym_GT_AMP_DASH;
	v->a[291708] = anon_sym_LT_LT_LT;
	v->a[291709] = 8;
	v->a[291710] = actions(3);
	v->a[291711] = 1;
	v->a[291712] = sym_comment;
	v->a[291713] = actions(11315);
	v->a[291714] = 1;
	v->a[291715] = aux_sym_heredoc_redirect_token1;
	v->a[291716] = actions(13011);
	v->a[291717] = 1;
	v->a[291718] = anon_sym_LT_LT_LT;
	v->a[291719] = actions(13014);
	small_parse_table_14586(v);
}

void	small_parse_table_14586(t_small_parse_table_array *v)
{
	v->a[291720] = 1;
	v->a[291721] = sym_file_descriptor;
	v->a[291722] = actions(11307);
	v->a[291723] = 2;
	v->a[291724] = anon_sym_PIPE_PIPE;
	v->a[291725] = anon_sym_AMP_AMP;
	v->a[291726] = actions(13008);
	v->a[291727] = 2;
	v->a[291728] = anon_sym_LT_AMP_DASH;
	v->a[291729] = anon_sym_GT_AMP_DASH;
	v->a[291730] = state(5609);
	v->a[291731] = 3;
	v->a[291732] = sym_file_redirect;
	v->a[291733] = sym_herestring_redirect;
	v->a[291734] = aux_sym_redirected_statement_repeat2;
	v->a[291735] = actions(13005);
	v->a[291736] = 8;
	v->a[291737] = anon_sym_LT;
	v->a[291738] = anon_sym_GT;
	v->a[291739] = anon_sym_GT_GT;
	small_parse_table_14587(v);
}

void	small_parse_table_14587(t_small_parse_table_array *v)
{
	v->a[291740] = anon_sym_AMP_GT;
	v->a[291741] = anon_sym_AMP_GT_GT;
	v->a[291742] = anon_sym_LT_AMP;
	v->a[291743] = anon_sym_GT_AMP;
	v->a[291744] = anon_sym_GT_PIPE;
	v->a[291745] = 3;
	v->a[291746] = actions(71);
	v->a[291747] = 1;
	v->a[291748] = sym_comment;
	v->a[291749] = actions(5770);
	v->a[291750] = 7;
	v->a[291751] = anon_sym_PIPE;
	v->a[291752] = anon_sym_LT;
	v->a[291753] = anon_sym_GT;
	v->a[291754] = anon_sym_LT_LT;
	v->a[291755] = anon_sym_AMP_GT;
	v->a[291756] = anon_sym_LT_AMP;
	v->a[291757] = anon_sym_GT_AMP;
	v->a[291758] = actions(5772);
	v->a[291759] = 11;
	small_parse_table_14588(v);
}

void	small_parse_table_14588(t_small_parse_table_array *v)
{
	v->a[291760] = sym_file_descriptor;
	v->a[291761] = sym_variable_name;
	v->a[291762] = anon_sym_PIPE_PIPE;
	v->a[291763] = anon_sym_AMP_AMP;
	v->a[291764] = anon_sym_GT_GT;
	v->a[291765] = anon_sym_PIPE_AMP;
	v->a[291766] = anon_sym_AMP_GT_GT;
	v->a[291767] = anon_sym_GT_PIPE;
	v->a[291768] = anon_sym_LT_AMP_DASH;
	v->a[291769] = anon_sym_GT_AMP_DASH;
	v->a[291770] = anon_sym_LT_LT_DASH;
	v->a[291771] = 6;
	v->a[291772] = actions(71);
	v->a[291773] = 1;
	v->a[291774] = sym_comment;
	v->a[291775] = actions(13017);
	v->a[291776] = 1;
	v->a[291777] = anon_sym_PIPE;
	v->a[291778] = actions(13020);
	v->a[291779] = 1;
	small_parse_table_14589(v);
}

void	small_parse_table_14589(t_small_parse_table_array *v)
{
	v->a[291780] = anon_sym_PIPE_AMP;
	v->a[291781] = state(5611);
	v->a[291782] = 1;
	v->a[291783] = aux_sym_pipeline_repeat1;
	v->a[291784] = actions(11743);
	v->a[291785] = 6;
	v->a[291786] = anon_sym_LT;
	v->a[291787] = anon_sym_GT;
	v->a[291788] = anon_sym_LT_LT;
	v->a[291789] = anon_sym_AMP_GT;
	v->a[291790] = anon_sym_LT_AMP;
	v->a[291791] = anon_sym_GT_AMP;
	v->a[291792] = actions(11748);
	v->a[291793] = 9;
	v->a[291794] = sym_file_descriptor;
	v->a[291795] = anon_sym_PIPE_PIPE;
	v->a[291796] = anon_sym_AMP_AMP;
	v->a[291797] = anon_sym_GT_GT;
	v->a[291798] = anon_sym_AMP_GT_GT;
	v->a[291799] = anon_sym_GT_PIPE;
	small_parse_table_14590(v);
}

/* EOF small_parse_table_2917.c */
