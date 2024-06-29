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
	v->a[62700] = anon_sym_AMP;
	v->a[62701] = anon_sym_SEMI;
	v->a[62702] = actions(2001);
	v->a[62703] = 2;
	v->a[62704] = anon_sym_LT_AMP_DASH;
	v->a[62705] = anon_sym_GT_AMP_DASH;
	v->a[62706] = state(1123);
	v->a[62707] = 3;
	v->a[62708] = sym_file_redirect;
	v->a[62709] = sym_heredoc_redirect;
	v->a[62710] = aux_sym_redirected_statement_repeat1;
	v->a[62711] = actions(1999);
	v->a[62712] = 8;
	v->a[62713] = anon_sym_LT;
	v->a[62714] = anon_sym_GT;
	v->a[62715] = anon_sym_GT_GT;
	v->a[62716] = anon_sym_AMP_GT;
	v->a[62717] = anon_sym_AMP_GT_GT;
	v->a[62718] = anon_sym_LT_AMP;
	v->a[62719] = anon_sym_GT_AMP;
	small_parse_table_3136(v);
}

void	small_parse_table_3136(t_small_parse_table_array *v)
{
	v->a[62720] = anon_sym_GT_PIPE;
	v->a[62721] = 12;
	v->a[62722] = actions(3);
	v->a[62723] = 1;
	v->a[62724] = sym_comment;
	v->a[62725] = actions(766);
	v->a[62726] = 1;
	v->a[62727] = anon_sym_PIPE;
	v->a[62728] = actions(2003);
	v->a[62729] = 1;
	v->a[62730] = aux_sym_heredoc_redirect_token1;
	v->a[62731] = actions(2005);
	v->a[62732] = 1;
	v->a[62733] = sym_file_descriptor;
	v->a[62734] = state(759);
	v->a[62735] = 1;
	v->a[62736] = sym_terminator;
	v->a[62737] = actions(764);
	v->a[62738] = 2;
	v->a[62739] = anon_sym_esac;
	small_parse_table_3137(v);
}

void	small_parse_table_3137(t_small_parse_table_array *v)
{
	v->a[62740] = anon_sym_SEMI_SEMI;
	v->a[62741] = actions(768);
	v->a[62742] = 2;
	v->a[62743] = anon_sym_AMP_AMP;
	v->a[62744] = anon_sym_PIPE_PIPE;
	v->a[62745] = actions(770);
	v->a[62746] = 2;
	v->a[62747] = anon_sym_LT_LT;
	v->a[62748] = anon_sym_LT_LT_DASH;
	v->a[62749] = actions(772);
	v->a[62750] = 2;
	v->a[62751] = anon_sym_AMP;
	v->a[62752] = anon_sym_SEMI;
	v->a[62753] = actions(2001);
	v->a[62754] = 2;
	v->a[62755] = anon_sym_LT_AMP_DASH;
	v->a[62756] = anon_sym_GT_AMP_DASH;
	v->a[62757] = state(1123);
	v->a[62758] = 3;
	v->a[62759] = sym_file_redirect;
	small_parse_table_3138(v);
}

void	small_parse_table_3138(t_small_parse_table_array *v)
{
	v->a[62760] = sym_heredoc_redirect;
	v->a[62761] = aux_sym_redirected_statement_repeat1;
	v->a[62762] = actions(1999);
	v->a[62763] = 8;
	v->a[62764] = anon_sym_LT;
	v->a[62765] = anon_sym_GT;
	v->a[62766] = anon_sym_GT_GT;
	v->a[62767] = anon_sym_AMP_GT;
	v->a[62768] = anon_sym_AMP_GT_GT;
	v->a[62769] = anon_sym_LT_AMP;
	v->a[62770] = anon_sym_GT_AMP;
	v->a[62771] = anon_sym_GT_PIPE;
	v->a[62772] = 12;
	v->a[62773] = actions(3);
	v->a[62774] = 1;
	v->a[62775] = sym_comment;
	v->a[62776] = actions(764);
	v->a[62777] = 1;
	v->a[62778] = anon_sym_RPAREN;
	v->a[62779] = actions(766);
	small_parse_table_3139(v);
}

void	small_parse_table_3139(t_small_parse_table_array *v)
{
	v->a[62780] = 1;
	v->a[62781] = anon_sym_PIPE;
	v->a[62782] = actions(2031);
	v->a[62783] = 1;
	v->a[62784] = aux_sym_heredoc_redirect_token1;
	v->a[62785] = actions(2043);
	v->a[62786] = 1;
	v->a[62787] = sym_file_descriptor;
	v->a[62788] = state(711);
	v->a[62789] = 1;
	v->a[62790] = sym_terminator;
	v->a[62791] = actions(802);
	v->a[62792] = 2;
	v->a[62793] = anon_sym_AMP_AMP;
	v->a[62794] = anon_sym_PIPE_PIPE;
	v->a[62795] = actions(804);
	v->a[62796] = 2;
	v->a[62797] = anon_sym_LT_LT;
	v->a[62798] = anon_sym_LT_LT_DASH;
	v->a[62799] = actions(2041);
	small_parse_table_3140(v);
}

/* EOF small_parse_table_627.c */
