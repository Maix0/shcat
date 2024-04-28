/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2906.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_14530(t_small_parse_table_array *v)
{
	v->a[290600] = sym_comment;
	v->a[290601] = actions(5994);
	v->a[290602] = 1;
	v->a[290603] = anon_sym_LT_LT;
	v->a[290604] = actions(5996);
	v->a[290605] = 1;
	v->a[290606] = anon_sym_LT_LT_DASH;
	v->a[290607] = actions(12686);
	v->a[290608] = 1;
	v->a[290609] = sym_file_descriptor;
	v->a[290610] = actions(5992);
	v->a[290611] = 2;
	v->a[290612] = anon_sym_PIPE_PIPE;
	v->a[290613] = anon_sym_AMP_AMP;
	v->a[290614] = actions(12502);
	v->a[290615] = 2;
	v->a[290616] = anon_sym_LT_AMP_DASH;
	v->a[290617] = anon_sym_GT_AMP_DASH;
	v->a[290618] = actions(12500);
	v->a[290619] = 3;
	small_parse_table_14531(v);
}

void	small_parse_table_14531(t_small_parse_table_array *v)
{
	v->a[290620] = anon_sym_GT_GT;
	v->a[290621] = anon_sym_AMP_GT_GT;
	v->a[290622] = anon_sym_GT_PIPE;
	v->a[290623] = state(5350);
	v->a[290624] = 3;
	v->a[290625] = sym_file_redirect;
	v->a[290626] = sym_heredoc_redirect;
	v->a[290627] = aux_sym_redirected_statement_repeat1;
	v->a[290628] = actions(12498);
	v->a[290629] = 5;
	v->a[290630] = anon_sym_LT;
	v->a[290631] = anon_sym_GT;
	v->a[290632] = anon_sym_AMP_GT;
	v->a[290633] = anon_sym_LT_AMP;
	v->a[290634] = anon_sym_GT_AMP;
	v->a[290635] = 3;
	v->a[290636] = actions(71);
	v->a[290637] = 1;
	v->a[290638] = sym_comment;
	v->a[290639] = actions(12001);
	small_parse_table_14532(v);
}

void	small_parse_table_14532(t_small_parse_table_array *v)
{
	v->a[290640] = 7;
	v->a[290641] = anon_sym_PIPE;
	v->a[290642] = anon_sym_LT;
	v->a[290643] = anon_sym_GT;
	v->a[290644] = anon_sym_LT_LT;
	v->a[290645] = anon_sym_AMP_GT;
	v->a[290646] = anon_sym_LT_AMP;
	v->a[290647] = anon_sym_GT_AMP;
	v->a[290648] = actions(12003);
	v->a[290649] = 11;
	v->a[290650] = sym_file_descriptor;
	v->a[290651] = anon_sym_PIPE_PIPE;
	v->a[290652] = anon_sym_AMP_AMP;
	v->a[290653] = anon_sym_GT_GT;
	v->a[290654] = anon_sym_PIPE_AMP;
	v->a[290655] = anon_sym_AMP_GT_GT;
	v->a[290656] = anon_sym_GT_PIPE;
	v->a[290657] = anon_sym_LT_AMP_DASH;
	v->a[290658] = anon_sym_GT_AMP_DASH;
	v->a[290659] = anon_sym_LT_LT_DASH;
	small_parse_table_14533(v);
}

void	small_parse_table_14533(t_small_parse_table_array *v)
{
	v->a[290660] = anon_sym_LT_LT_LT;
	v->a[290661] = 3;
	v->a[290662] = actions(71);
	v->a[290663] = 1;
	v->a[290664] = sym_comment;
	v->a[290665] = actions(12145);
	v->a[290666] = 7;
	v->a[290667] = anon_sym_PIPE;
	v->a[290668] = anon_sym_LT;
	v->a[290669] = anon_sym_GT;
	v->a[290670] = anon_sym_LT_LT;
	v->a[290671] = anon_sym_AMP_GT;
	v->a[290672] = anon_sym_LT_AMP;
	v->a[290673] = anon_sym_GT_AMP;
	v->a[290674] = actions(12147);
	v->a[290675] = 11;
	v->a[290676] = sym_file_descriptor;
	v->a[290677] = anon_sym_PIPE_PIPE;
	v->a[290678] = anon_sym_AMP_AMP;
	v->a[290679] = anon_sym_GT_GT;
	small_parse_table_14534(v);
}

void	small_parse_table_14534(t_small_parse_table_array *v)
{
	v->a[290680] = anon_sym_PIPE_AMP;
	v->a[290681] = anon_sym_RBRACK;
	v->a[290682] = anon_sym_AMP_GT_GT;
	v->a[290683] = anon_sym_GT_PIPE;
	v->a[290684] = anon_sym_LT_AMP_DASH;
	v->a[290685] = anon_sym_GT_AMP_DASH;
	v->a[290686] = anon_sym_LT_LT_DASH;
	v->a[290687] = 3;
	v->a[290688] = actions(71);
	v->a[290689] = 1;
	v->a[290690] = sym_comment;
	v->a[290691] = actions(12141);
	v->a[290692] = 7;
	v->a[290693] = anon_sym_PIPE;
	v->a[290694] = anon_sym_LT;
	v->a[290695] = anon_sym_GT;
	v->a[290696] = anon_sym_LT_LT;
	v->a[290697] = anon_sym_AMP_GT;
	v->a[290698] = anon_sym_LT_AMP;
	v->a[290699] = anon_sym_GT_AMP;
	small_parse_table_14535(v);
}

/* EOF small_parse_table_2906.c */
