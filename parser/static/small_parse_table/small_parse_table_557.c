/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_557.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2785(t_small_parse_table_array *v)
{
	v->a[55700] = anon_sym_PIPE_PIPE;
	v->a[55701] = anon_sym_LT;
	v->a[55702] = anon_sym_GT;
	v->a[55703] = anon_sym_GT_GT;
	v->a[55704] = anon_sym_LT_AMP;
	v->a[55705] = anon_sym_GT_AMP;
	v->a[55706] = anon_sym_GT_PIPE;
	v->a[55707] = anon_sym_LT_GT;
	v->a[55708] = anon_sym_LT_LT;
	v->a[55709] = anon_sym_LT_LT_DASH;
	v->a[55710] = anon_sym_AMP;
	v->a[55711] = anon_sym_SEMI;
	v->a[55712] = 11;
	v->a[55713] = actions(3);
	v->a[55714] = 1;
	v->a[55715] = sym_comment;
	v->a[55716] = actions(736);
	v->a[55717] = 1;
	v->a[55718] = anon_sym_PIPE;
	v->a[55719] = actions(842);
	small_parse_table_2786(v);
}

void	small_parse_table_2786(t_small_parse_table_array *v)
{
	v->a[55720] = 1;
	v->a[55721] = anon_sym_BQUOTE;
	v->a[55722] = actions(1865);
	v->a[55723] = 1;
	v->a[55724] = aux_sym_heredoc_redirect_token1;
	v->a[55725] = actions(1867);
	v->a[55726] = 1;
	v->a[55727] = sym_file_descriptor;
	v->a[55728] = state(776);
	v->a[55729] = 1;
	v->a[55730] = sym_terminator;
	v->a[55731] = actions(744);
	v->a[55732] = 2;
	v->a[55733] = anon_sym_LT_LT;
	v->a[55734] = anon_sym_LT_LT_DASH;
	v->a[55735] = actions(990);
	v->a[55736] = 2;
	v->a[55737] = anon_sym_AMP_AMP;
	v->a[55738] = anon_sym_PIPE_PIPE;
	v->a[55739] = actions(740);
	small_parse_table_2787(v);
}

void	small_parse_table_2787(t_small_parse_table_array *v)
{
	v->a[55740] = 3;
	v->a[55741] = anon_sym_SEMI_SEMI;
	v->a[55742] = anon_sym_AMP;
	v->a[55743] = anon_sym_SEMI;
	v->a[55744] = state(1059);
	v->a[55745] = 3;
	v->a[55746] = sym_file_redirect;
	v->a[55747] = sym_heredoc_redirect;
	v->a[55748] = aux_sym_redirected_statement_repeat1;
	v->a[55749] = actions(1863);
	v->a[55750] = 7;
	v->a[55751] = anon_sym_LT;
	v->a[55752] = anon_sym_GT;
	v->a[55753] = anon_sym_GT_GT;
	v->a[55754] = anon_sym_LT_AMP;
	v->a[55755] = anon_sym_GT_AMP;
	v->a[55756] = anon_sym_GT_PIPE;
	v->a[55757] = anon_sym_LT_GT;
	v->a[55758] = 11;
	v->a[55759] = actions(3);
	small_parse_table_2788(v);
}

void	small_parse_table_2788(t_small_parse_table_array *v)
{
	v->a[55760] = 1;
	v->a[55761] = sym_comment;
	v->a[55762] = actions(736);
	v->a[55763] = 1;
	v->a[55764] = anon_sym_PIPE;
	v->a[55765] = actions(842);
	v->a[55766] = 1;
	v->a[55767] = anon_sym_BQUOTE;
	v->a[55768] = actions(1865);
	v->a[55769] = 1;
	v->a[55770] = aux_sym_heredoc_redirect_token1;
	v->a[55771] = actions(1867);
	v->a[55772] = 1;
	v->a[55773] = sym_file_descriptor;
	v->a[55774] = state(775);
	v->a[55775] = 1;
	v->a[55776] = sym_terminator;
	v->a[55777] = actions(744);
	v->a[55778] = 2;
	v->a[55779] = anon_sym_LT_LT;
	small_parse_table_2789(v);
}

void	small_parse_table_2789(t_small_parse_table_array *v)
{
	v->a[55780] = anon_sym_LT_LT_DASH;
	v->a[55781] = actions(990);
	v->a[55782] = 2;
	v->a[55783] = anon_sym_AMP_AMP;
	v->a[55784] = anon_sym_PIPE_PIPE;
	v->a[55785] = actions(740);
	v->a[55786] = 3;
	v->a[55787] = anon_sym_SEMI_SEMI;
	v->a[55788] = anon_sym_AMP;
	v->a[55789] = anon_sym_SEMI;
	v->a[55790] = state(1059);
	v->a[55791] = 3;
	v->a[55792] = sym_file_redirect;
	v->a[55793] = sym_heredoc_redirect;
	v->a[55794] = aux_sym_redirected_statement_repeat1;
	v->a[55795] = actions(1863);
	v->a[55796] = 7;
	v->a[55797] = anon_sym_LT;
	v->a[55798] = anon_sym_GT;
	v->a[55799] = anon_sym_GT_GT;
	small_parse_table_2790(v);
}

/* EOF small_parse_table_557.c */
