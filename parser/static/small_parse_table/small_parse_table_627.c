/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_627.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3135(t_small_parse_table_array *v)
{
	v->a[62700] = actions(2050);
	v->a[62701] = 9;
	v->a[62702] = anon_sym_esac;
	v->a[62703] = anon_sym_PIPE;
	v->a[62704] = anon_sym_SEMI_SEMI;
	v->a[62705] = anon_sym_AMP_AMP;
	v->a[62706] = anon_sym_PIPE_PIPE;
	v->a[62707] = anon_sym_LT_LT;
	v->a[62708] = anon_sym_LT_LT_DASH;
	v->a[62709] = anon_sym_AMP;
	v->a[62710] = anon_sym_SEMI;
	v->a[62711] = 6;
	v->a[62712] = actions(3);
	v->a[62713] = 1;
	v->a[62714] = sym_comment;
	v->a[62715] = actions(2137);
	v->a[62716] = 1;
	v->a[62717] = aux_sym_heredoc_redirect_token1;
	v->a[62718] = actions(2191);
	v->a[62719] = 1;
	small_parse_table_3136(v);
}

void	small_parse_table_3136(t_small_parse_table_array *v)
{
	v->a[62720] = sym_file_descriptor;
	v->a[62721] = state(1160);
	v->a[62722] = 2;
	v->a[62723] = sym_file_redirect;
	v->a[62724] = aux_sym_redirected_statement_repeat2;
	v->a[62725] = actions(1855);
	v->a[62726] = 7;
	v->a[62727] = anon_sym_LT;
	v->a[62728] = anon_sym_GT;
	v->a[62729] = anon_sym_GT_GT;
	v->a[62730] = anon_sym_LT_AMP;
	v->a[62731] = anon_sym_GT_AMP;
	v->a[62732] = anon_sym_GT_PIPE;
	v->a[62733] = anon_sym_LT_GT;
	v->a[62734] = actions(2139);
	v->a[62735] = 9;
	v->a[62736] = anon_sym_PIPE;
	v->a[62737] = anon_sym_RPAREN;
	v->a[62738] = anon_sym_SEMI_SEMI;
	v->a[62739] = anon_sym_AMP_AMP;
	small_parse_table_3137(v);
}

void	small_parse_table_3137(t_small_parse_table_array *v)
{
	v->a[62740] = anon_sym_PIPE_PIPE;
	v->a[62741] = anon_sym_LT_LT;
	v->a[62742] = anon_sym_LT_LT_DASH;
	v->a[62743] = anon_sym_AMP;
	v->a[62744] = anon_sym_SEMI;
	v->a[62745] = 3;
	v->a[62746] = actions(3);
	v->a[62747] = 1;
	v->a[62748] = sym_comment;
	v->a[62749] = actions(2208);
	v->a[62750] = 3;
	v->a[62751] = sym_file_descriptor;
	v->a[62752] = ts_builtin_sym_end;
	v->a[62753] = aux_sym_heredoc_redirect_token1;
	v->a[62754] = actions(2210);
	v->a[62755] = 17;
	v->a[62756] = anon_sym_PIPE;
	v->a[62757] = anon_sym_RPAREN;
	v->a[62758] = anon_sym_SEMI_SEMI;
	v->a[62759] = anon_sym_AMP_AMP;
	small_parse_table_3138(v);
}

void	small_parse_table_3138(t_small_parse_table_array *v)
{
	v->a[62760] = anon_sym_PIPE_PIPE;
	v->a[62761] = anon_sym_LT;
	v->a[62762] = anon_sym_GT;
	v->a[62763] = anon_sym_GT_GT;
	v->a[62764] = anon_sym_LT_AMP;
	v->a[62765] = anon_sym_GT_AMP;
	v->a[62766] = anon_sym_GT_PIPE;
	v->a[62767] = anon_sym_LT_GT;
	v->a[62768] = anon_sym_LT_LT;
	v->a[62769] = anon_sym_LT_LT_DASH;
	v->a[62770] = anon_sym_AMP;
	v->a[62771] = anon_sym_BQUOTE;
	v->a[62772] = anon_sym_SEMI;
	v->a[62773] = 9;
	v->a[62774] = actions(3);
	v->a[62775] = 1;
	v->a[62776] = sym_comment;
	v->a[62777] = actions(1857);
	v->a[62778] = 1;
	v->a[62779] = aux_sym_heredoc_redirect_token1;
	small_parse_table_3139(v);
}

void	small_parse_table_3139(t_small_parse_table_array *v)
{
	v->a[62780] = actions(1946);
	v->a[62781] = 1;
	v->a[62782] = sym_file_descriptor;
	v->a[62783] = state(834);
	v->a[62784] = 1;
	v->a[62785] = sym_terminator;
	v->a[62786] = actions(700);
	v->a[62787] = 2;
	v->a[62788] = anon_sym_LT_LT;
	v->a[62789] = anon_sym_LT_LT_DASH;
	v->a[62790] = actions(914);
	v->a[62791] = 2;
	v->a[62792] = anon_sym_AMP_AMP;
	v->a[62793] = anon_sym_PIPE_PIPE;
	v->a[62794] = actions(696);
	v->a[62795] = 3;
	v->a[62796] = anon_sym_SEMI_SEMI;
	v->a[62797] = anon_sym_AMP;
	v->a[62798] = anon_sym_SEMI;
	v->a[62799] = state(1134);
	small_parse_table_3140(v);
}

/* EOF small_parse_table_627.c */
