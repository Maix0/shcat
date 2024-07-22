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
	v->a[55700] = anon_sym_LT_AMP;
	v->a[55701] = anon_sym_GT_AMP;
	v->a[55702] = anon_sym_GT_PIPE;
	v->a[55703] = anon_sym_LT_GT;
	v->a[55704] = anon_sym_LT_LT;
	v->a[55705] = anon_sym_LT_LT_DASH;
	v->a[55706] = anon_sym_SEMI;
	v->a[55707] = 11;
	v->a[55708] = actions(3);
	v->a[55709] = 1;
	v->a[55710] = sym_comment;
	v->a[55711] = actions(782);
	v->a[55712] = 1;
	v->a[55713] = anon_sym_PIPE;
	v->a[55714] = actions(886);
	v->a[55715] = 1;
	v->a[55716] = anon_sym_SEMI;
	v->a[55717] = actions(1876);
	v->a[55718] = 1;
	v->a[55719] = aux_sym_heredoc_redirect_token1;
	small_parse_table_2786(v);
}

void	small_parse_table_2786(t_small_parse_table_array *v)
{
	v->a[55720] = actions(1878);
	v->a[55721] = 1;
	v->a[55722] = sym_file_descriptor;
	v->a[55723] = state(583);
	v->a[55724] = 1;
	v->a[55725] = sym_terminator;
	v->a[55726] = actions(797);
	v->a[55727] = 2;
	v->a[55728] = anon_sym_esac;
	v->a[55729] = anon_sym_SEMI_SEMI;
	v->a[55730] = actions(882);
	v->a[55731] = 2;
	v->a[55732] = anon_sym_AMP_AMP;
	v->a[55733] = anon_sym_PIPE_PIPE;
	v->a[55734] = actions(884);
	v->a[55735] = 2;
	v->a[55736] = anon_sym_LT_LT;
	v->a[55737] = anon_sym_LT_LT_DASH;
	v->a[55738] = state(1099);
	v->a[55739] = 3;
	small_parse_table_2787(v);
}

void	small_parse_table_2787(t_small_parse_table_array *v)
{
	v->a[55740] = sym_file_redirect;
	v->a[55741] = sym_heredoc_redirect;
	v->a[55742] = aux_sym_redirected_statement_repeat1;
	v->a[55743] = actions(1874);
	v->a[55744] = 7;
	v->a[55745] = anon_sym_LT;
	v->a[55746] = anon_sym_GT;
	v->a[55747] = anon_sym_GT_GT;
	v->a[55748] = anon_sym_LT_AMP;
	v->a[55749] = anon_sym_GT_AMP;
	v->a[55750] = anon_sym_GT_PIPE;
	v->a[55751] = anon_sym_LT_GT;
	v->a[55752] = 11;
	v->a[55753] = actions(3);
	v->a[55754] = 1;
	v->a[55755] = sym_comment;
	v->a[55756] = actions(782);
	v->a[55757] = 1;
	v->a[55758] = anon_sym_PIPE;
	v->a[55759] = actions(950);
	small_parse_table_2788(v);
}

void	small_parse_table_2788(t_small_parse_table_array *v)
{
	v->a[55760] = 1;
	v->a[55761] = ts_builtin_sym_end;
	v->a[55762] = actions(1882);
	v->a[55763] = 1;
	v->a[55764] = aux_sym_heredoc_redirect_token1;
	v->a[55765] = actions(1884);
	v->a[55766] = 1;
	v->a[55767] = sym_file_descriptor;
	v->a[55768] = state(726);
	v->a[55769] = 1;
	v->a[55770] = sym_terminator;
	v->a[55771] = actions(790);
	v->a[55772] = 2;
	v->a[55773] = anon_sym_LT_LT;
	v->a[55774] = anon_sym_LT_LT_DASH;
	v->a[55775] = actions(808);
	v->a[55776] = 2;
	v->a[55777] = anon_sym_SEMI_SEMI;
	v->a[55778] = anon_sym_SEMI;
	v->a[55779] = actions(810);
	small_parse_table_2789(v);
}

void	small_parse_table_2789(t_small_parse_table_array *v)
{
	v->a[55780] = 2;
	v->a[55781] = anon_sym_AMP_AMP;
	v->a[55782] = anon_sym_PIPE_PIPE;
	v->a[55783] = state(1046);
	v->a[55784] = 3;
	v->a[55785] = sym_file_redirect;
	v->a[55786] = sym_heredoc_redirect;
	v->a[55787] = aux_sym_redirected_statement_repeat1;
	v->a[55788] = actions(1880);
	v->a[55789] = 7;
	v->a[55790] = anon_sym_LT;
	v->a[55791] = anon_sym_GT;
	v->a[55792] = anon_sym_GT_GT;
	v->a[55793] = anon_sym_LT_AMP;
	v->a[55794] = anon_sym_GT_AMP;
	v->a[55795] = anon_sym_GT_PIPE;
	v->a[55796] = anon_sym_LT_GT;
	v->a[55797] = 11;
	v->a[55798] = actions(3);
	v->a[55799] = 1;
	small_parse_table_2790(v);
}

/* EOF small_parse_table_557.c */
