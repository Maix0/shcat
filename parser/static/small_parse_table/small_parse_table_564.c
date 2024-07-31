/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_564.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2820(t_small_parse_table_array *v)
{
	v->a[56400] = sym_expansion;
	v->a[56401] = sym_command_substitution;
	v->a[56402] = 5;
	v->a[56403] = actions(3);
	v->a[56404] = 1;
	v->a[56405] = sym_comment;
	v->a[56406] = actions(1916);
	v->a[56407] = 1;
	v->a[56408] = aux_sym_heredoc_redirect_token1;
	v->a[56409] = actions(2280);
	v->a[56410] = 1;
	v->a[56411] = anon_sym_PIPE;
	v->a[56412] = state(1117);
	v->a[56413] = 1;
	v->a[56414] = aux_sym_pipeline_repeat1;
	v->a[56415] = actions(1914);
	v->a[56416] = 14;
	v->a[56417] = anon_sym_SEMI_SEMI;
	v->a[56418] = anon_sym_AMP_AMP;
	v->a[56419] = anon_sym_PIPE_PIPE;
	small_parse_table_2821(v);
}

void	small_parse_table_2821(t_small_parse_table_array *v)
{
	v->a[56420] = anon_sym_LT;
	v->a[56421] = anon_sym_GT;
	v->a[56422] = anon_sym_GT_GT;
	v->a[56423] = anon_sym_LT_AMP;
	v->a[56424] = anon_sym_GT_AMP;
	v->a[56425] = anon_sym_GT_PIPE;
	v->a[56426] = anon_sym_LT_GT;
	v->a[56427] = anon_sym_LT_LT;
	v->a[56428] = anon_sym_LT_LT_DASH;
	v->a[56429] = anon_sym_BQUOTE;
	v->a[56430] = anon_sym_SEMI;
	v->a[56431] = 5;
	v->a[56432] = actions(3);
	v->a[56433] = 1;
	v->a[56434] = sym_comment;
	v->a[56435] = actions(1916);
	v->a[56436] = 1;
	v->a[56437] = aux_sym_heredoc_redirect_token1;
	v->a[56438] = actions(2282);
	v->a[56439] = 1;
	small_parse_table_2822(v);
}

void	small_parse_table_2822(t_small_parse_table_array *v)
{
	v->a[56440] = anon_sym_PIPE;
	v->a[56441] = state(1155);
	v->a[56442] = 1;
	v->a[56443] = aux_sym_pipeline_repeat1;
	v->a[56444] = actions(1914);
	v->a[56445] = 13;
	v->a[56446] = anon_sym_SEMI_SEMI;
	v->a[56447] = anon_sym_AMP_AMP;
	v->a[56448] = anon_sym_PIPE_PIPE;
	v->a[56449] = anon_sym_LT;
	v->a[56450] = anon_sym_GT;
	v->a[56451] = anon_sym_GT_GT;
	v->a[56452] = anon_sym_LT_AMP;
	v->a[56453] = anon_sym_GT_AMP;
	v->a[56454] = anon_sym_GT_PIPE;
	v->a[56455] = anon_sym_LT_GT;
	v->a[56456] = anon_sym_LT_LT;
	v->a[56457] = anon_sym_LT_LT_DASH;
	v->a[56458] = anon_sym_SEMI;
	v->a[56459] = 3;
	small_parse_table_2823(v);
}

void	small_parse_table_2823(t_small_parse_table_array *v)
{
	v->a[56460] = actions(3);
	v->a[56461] = 1;
	v->a[56462] = sym_comment;
	v->a[56463] = actions(1815);
	v->a[56464] = 1;
	v->a[56465] = aux_sym_heredoc_redirect_token1;
	v->a[56466] = actions(1817);
	v->a[56467] = 15;
	v->a[56468] = anon_sym_esac;
	v->a[56469] = anon_sym_PIPE;
	v->a[56470] = anon_sym_SEMI_SEMI;
	v->a[56471] = anon_sym_AMP_AMP;
	v->a[56472] = anon_sym_PIPE_PIPE;
	v->a[56473] = anon_sym_LT;
	v->a[56474] = anon_sym_GT;
	v->a[56475] = anon_sym_GT_GT;
	v->a[56476] = anon_sym_LT_AMP;
	v->a[56477] = anon_sym_GT_AMP;
	v->a[56478] = anon_sym_GT_PIPE;
	v->a[56479] = anon_sym_LT_GT;
	small_parse_table_2824(v);
}

void	small_parse_table_2824(t_small_parse_table_array *v)
{
	v->a[56480] = anon_sym_LT_LT;
	v->a[56481] = anon_sym_LT_LT_DASH;
	v->a[56482] = anon_sym_SEMI;
	v->a[56483] = 5;
	v->a[56484] = actions(407);
	v->a[56485] = 1;
	v->a[56486] = sym_comment;
	v->a[56487] = state(1130);
	v->a[56488] = 1;
	v->a[56489] = aux_sym_concatenation_repeat1;
	v->a[56490] = actions(2284);
	v->a[56491] = 2;
	v->a[56492] = sym__concat;
	v->a[56493] = aux_sym_concatenation_token1;
	v->a[56494] = actions(1003);
	v->a[56495] = 4;
	v->a[56496] = anon_sym_PIPE;
	v->a[56497] = anon_sym_LT;
	v->a[56498] = anon_sym_GT;
	v->a[56499] = anon_sym_LT_LT;
	small_parse_table_2825(v);
}

/* EOF small_parse_table_564.c */
