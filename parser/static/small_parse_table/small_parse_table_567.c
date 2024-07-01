/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_567.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2835(t_small_parse_table_array *v)
{
	v->a[56700] = anon_sym_LT_AMP;
	v->a[56701] = anon_sym_GT_AMP;
	v->a[56702] = anon_sym_GT_PIPE;
	v->a[56703] = anon_sym_LT_GT;
	v->a[56704] = 11;
	v->a[56705] = actions(3);
	v->a[56706] = 1;
	v->a[56707] = sym_comment;
	v->a[56708] = actions(736);
	v->a[56709] = 1;
	v->a[56710] = anon_sym_PIPE;
	v->a[56711] = actions(842);
	v->a[56712] = 1;
	v->a[56713] = anon_sym_RPAREN;
	v->a[56714] = actions(1865);
	v->a[56715] = 1;
	v->a[56716] = aux_sym_heredoc_redirect_token1;
	v->a[56717] = actions(1881);
	v->a[56718] = 1;
	v->a[56719] = sym_file_descriptor;
	small_parse_table_2836(v);
}

void	small_parse_table_2836(t_small_parse_table_array *v)
{
	v->a[56720] = state(664);
	v->a[56721] = 1;
	v->a[56722] = sym_terminator;
	v->a[56723] = actions(742);
	v->a[56724] = 2;
	v->a[56725] = anon_sym_AMP_AMP;
	v->a[56726] = anon_sym_PIPE_PIPE;
	v->a[56727] = actions(744);
	v->a[56728] = 2;
	v->a[56729] = anon_sym_LT_LT;
	v->a[56730] = anon_sym_LT_LT_DASH;
	v->a[56731] = actions(740);
	v->a[56732] = 3;
	v->a[56733] = anon_sym_SEMI_SEMI;
	v->a[56734] = anon_sym_AMP;
	v->a[56735] = anon_sym_SEMI;
	v->a[56736] = state(1080);
	v->a[56737] = 3;
	v->a[56738] = sym_file_redirect;
	v->a[56739] = sym_heredoc_redirect;
	small_parse_table_2837(v);
}

void	small_parse_table_2837(t_small_parse_table_array *v)
{
	v->a[56740] = aux_sym_redirected_statement_repeat1;
	v->a[56741] = actions(1879);
	v->a[56742] = 7;
	v->a[56743] = anon_sym_LT;
	v->a[56744] = anon_sym_GT;
	v->a[56745] = anon_sym_GT_GT;
	v->a[56746] = anon_sym_LT_AMP;
	v->a[56747] = anon_sym_GT_AMP;
	v->a[56748] = anon_sym_GT_PIPE;
	v->a[56749] = anon_sym_LT_GT;
	v->a[56750] = 11;
	v->a[56751] = actions(3);
	v->a[56752] = 1;
	v->a[56753] = sym_comment;
	v->a[56754] = actions(736);
	v->a[56755] = 1;
	v->a[56756] = anon_sym_PIPE;
	v->a[56757] = actions(842);
	v->a[56758] = 1;
	v->a[56759] = anon_sym_RPAREN;
	small_parse_table_2838(v);
}

void	small_parse_table_2838(t_small_parse_table_array *v)
{
	v->a[56760] = actions(1865);
	v->a[56761] = 1;
	v->a[56762] = aux_sym_heredoc_redirect_token1;
	v->a[56763] = actions(1881);
	v->a[56764] = 1;
	v->a[56765] = sym_file_descriptor;
	v->a[56766] = state(619);
	v->a[56767] = 1;
	v->a[56768] = sym_terminator;
	v->a[56769] = actions(742);
	v->a[56770] = 2;
	v->a[56771] = anon_sym_AMP_AMP;
	v->a[56772] = anon_sym_PIPE_PIPE;
	v->a[56773] = actions(744);
	v->a[56774] = 2;
	v->a[56775] = anon_sym_LT_LT;
	v->a[56776] = anon_sym_LT_LT_DASH;
	v->a[56777] = actions(740);
	v->a[56778] = 3;
	v->a[56779] = anon_sym_SEMI_SEMI;
	small_parse_table_2839(v);
}

void	small_parse_table_2839(t_small_parse_table_array *v)
{
	v->a[56780] = anon_sym_AMP;
	v->a[56781] = anon_sym_SEMI;
	v->a[56782] = state(1080);
	v->a[56783] = 3;
	v->a[56784] = sym_file_redirect;
	v->a[56785] = sym_heredoc_redirect;
	v->a[56786] = aux_sym_redirected_statement_repeat1;
	v->a[56787] = actions(1879);
	v->a[56788] = 7;
	v->a[56789] = anon_sym_LT;
	v->a[56790] = anon_sym_GT;
	v->a[56791] = anon_sym_GT_GT;
	v->a[56792] = anon_sym_LT_AMP;
	v->a[56793] = anon_sym_GT_AMP;
	v->a[56794] = anon_sym_GT_PIPE;
	v->a[56795] = anon_sym_LT_GT;
	v->a[56796] = 11;
	v->a[56797] = actions(3);
	v->a[56798] = 1;
	v->a[56799] = sym_comment;
	small_parse_table_2840(v);
}

/* EOF small_parse_table_567.c */
