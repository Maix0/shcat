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
	v->a[56400] = 14;
	v->a[56401] = anon_sym_PIPE;
	v->a[56402] = anon_sym_SEMI_SEMI;
	v->a[56403] = anon_sym_AMP_AMP;
	v->a[56404] = anon_sym_PIPE_PIPE;
	v->a[56405] = anon_sym_LT;
	v->a[56406] = anon_sym_GT;
	v->a[56407] = anon_sym_GT_GT;
	v->a[56408] = anon_sym_LT_AMP;
	v->a[56409] = anon_sym_GT_AMP;
	v->a[56410] = anon_sym_GT_PIPE;
	v->a[56411] = anon_sym_LT_GT;
	v->a[56412] = anon_sym_LT_LT;
	v->a[56413] = anon_sym_LT_LT_DASH;
	v->a[56414] = anon_sym_SEMI;
	v->a[56415] = 11;
	v->a[56416] = actions(3);
	v->a[56417] = 1;
	v->a[56418] = sym_comment;
	v->a[56419] = actions(782);
	small_parse_table_2821(v);
}

void	small_parse_table_2821(t_small_parse_table_array *v)
{
	v->a[56420] = 1;
	v->a[56421] = anon_sym_PIPE;
	v->a[56422] = actions(784);
	v->a[56423] = 1;
	v->a[56424] = anon_sym_RPAREN;
	v->a[56425] = actions(1888);
	v->a[56426] = 1;
	v->a[56427] = aux_sym_heredoc_redirect_token1;
	v->a[56428] = actions(1933);
	v->a[56429] = 1;
	v->a[56430] = sym_file_descriptor;
	v->a[56431] = state(571);
	v->a[56432] = 1;
	v->a[56433] = sym_terminator;
	v->a[56434] = actions(786);
	v->a[56435] = 2;
	v->a[56436] = anon_sym_SEMI_SEMI;
	v->a[56437] = anon_sym_SEMI;
	v->a[56438] = actions(788);
	v->a[56439] = 2;
	small_parse_table_2822(v);
}

void	small_parse_table_2822(t_small_parse_table_array *v)
{
	v->a[56440] = anon_sym_AMP_AMP;
	v->a[56441] = anon_sym_PIPE_PIPE;
	v->a[56442] = actions(790);
	v->a[56443] = 2;
	v->a[56444] = anon_sym_LT_LT;
	v->a[56445] = anon_sym_LT_LT_DASH;
	v->a[56446] = state(1034);
	v->a[56447] = 3;
	v->a[56448] = sym_file_redirect;
	v->a[56449] = sym_heredoc_redirect;
	v->a[56450] = aux_sym_redirected_statement_repeat1;
	v->a[56451] = actions(1931);
	v->a[56452] = 7;
	v->a[56453] = anon_sym_LT;
	v->a[56454] = anon_sym_GT;
	v->a[56455] = anon_sym_GT_GT;
	v->a[56456] = anon_sym_LT_AMP;
	v->a[56457] = anon_sym_GT_AMP;
	v->a[56458] = anon_sym_GT_PIPE;
	v->a[56459] = anon_sym_LT_GT;
	small_parse_table_2823(v);
}

void	small_parse_table_2823(t_small_parse_table_array *v)
{
	v->a[56460] = 11;
	v->a[56461] = actions(3);
	v->a[56462] = 1;
	v->a[56463] = sym_comment;
	v->a[56464] = actions(782);
	v->a[56465] = 1;
	v->a[56466] = anon_sym_PIPE;
	v->a[56467] = actions(784);
	v->a[56468] = 1;
	v->a[56469] = anon_sym_RPAREN;
	v->a[56470] = actions(1888);
	v->a[56471] = 1;
	v->a[56472] = aux_sym_heredoc_redirect_token1;
	v->a[56473] = actions(1933);
	v->a[56474] = 1;
	v->a[56475] = sym_file_descriptor;
	v->a[56476] = state(569);
	v->a[56477] = 1;
	v->a[56478] = sym_terminator;
	v->a[56479] = actions(786);
	small_parse_table_2824(v);
}

void	small_parse_table_2824(t_small_parse_table_array *v)
{
	v->a[56480] = 2;
	v->a[56481] = anon_sym_SEMI_SEMI;
	v->a[56482] = anon_sym_SEMI;
	v->a[56483] = actions(788);
	v->a[56484] = 2;
	v->a[56485] = anon_sym_AMP_AMP;
	v->a[56486] = anon_sym_PIPE_PIPE;
	v->a[56487] = actions(790);
	v->a[56488] = 2;
	v->a[56489] = anon_sym_LT_LT;
	v->a[56490] = anon_sym_LT_LT_DASH;
	v->a[56491] = state(1034);
	v->a[56492] = 3;
	v->a[56493] = sym_file_redirect;
	v->a[56494] = sym_heredoc_redirect;
	v->a[56495] = aux_sym_redirected_statement_repeat1;
	v->a[56496] = actions(1931);
	v->a[56497] = 7;
	v->a[56498] = anon_sym_LT;
	v->a[56499] = anon_sym_GT;
	small_parse_table_2825(v);
}

/* EOF small_parse_table_564.c */
