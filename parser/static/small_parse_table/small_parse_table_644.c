/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_644.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3220(t_small_parse_table_array *v)
{
	v->a[64400] = sym_terminator;
	v->a[64401] = actions(750);
	v->a[64402] = 2;
	v->a[64403] = anon_sym_AMP;
	v->a[64404] = anon_sym_SEMI;
	v->a[64405] = actions(754);
	v->a[64406] = 2;
	v->a[64407] = anon_sym_LT_LT;
	v->a[64408] = anon_sym_LT_LT_DASH;
	v->a[64409] = actions(924);
	v->a[64410] = 2;
	v->a[64411] = anon_sym_AMP_AMP;
	v->a[64412] = anon_sym_PIPE_PIPE;
	v->a[64413] = actions(2063);
	v->a[64414] = 2;
	v->a[64415] = anon_sym_LT_AMP_DASH;
	v->a[64416] = anon_sym_GT_AMP_DASH;
	v->a[64417] = state(1268);
	v->a[64418] = 3;
	v->a[64419] = sym_file_redirect;
	small_parse_table_3221(v);
}

void	small_parse_table_3221(t_small_parse_table_array *v)
{
	v->a[64420] = sym_heredoc_redirect;
	v->a[64421] = aux_sym_redirected_statement_repeat1;
	v->a[64422] = actions(2061);
	v->a[64423] = 6;
	v->a[64424] = anon_sym_LT;
	v->a[64425] = anon_sym_GT;
	v->a[64426] = anon_sym_GT_GT;
	v->a[64427] = anon_sym_LT_AMP;
	v->a[64428] = anon_sym_GT_AMP;
	v->a[64429] = anon_sym_GT_PIPE;
	v->a[64430] = 12;
	v->a[64431] = actions(3);
	v->a[64432] = 1;
	v->a[64433] = sym_comment;
	v->a[64434] = actions(682);
	v->a[64435] = 1;
	v->a[64436] = anon_sym_PIPE;
	v->a[64437] = actions(695);
	v->a[64438] = 1;
	v->a[64439] = anon_sym_SEMI_SEMI;
	small_parse_table_3222(v);
}

void	small_parse_table_3222(t_small_parse_table_array *v)
{
	v->a[64440] = actions(2009);
	v->a[64441] = 1;
	v->a[64442] = aux_sym_heredoc_redirect_token1;
	v->a[64443] = actions(2065);
	v->a[64444] = 1;
	v->a[64445] = sym_file_descriptor;
	v->a[64446] = state(742);
	v->a[64447] = 1;
	v->a[64448] = sym_terminator;
	v->a[64449] = actions(750);
	v->a[64450] = 2;
	v->a[64451] = anon_sym_AMP;
	v->a[64452] = anon_sym_SEMI;
	v->a[64453] = actions(754);
	v->a[64454] = 2;
	v->a[64455] = anon_sym_LT_LT;
	v->a[64456] = anon_sym_LT_LT_DASH;
	v->a[64457] = actions(924);
	v->a[64458] = 2;
	v->a[64459] = anon_sym_AMP_AMP;
	small_parse_table_3223(v);
}

void	small_parse_table_3223(t_small_parse_table_array *v)
{
	v->a[64460] = anon_sym_PIPE_PIPE;
	v->a[64461] = actions(2063);
	v->a[64462] = 2;
	v->a[64463] = anon_sym_LT_AMP_DASH;
	v->a[64464] = anon_sym_GT_AMP_DASH;
	v->a[64465] = state(1268);
	v->a[64466] = 3;
	v->a[64467] = sym_file_redirect;
	v->a[64468] = sym_heredoc_redirect;
	v->a[64469] = aux_sym_redirected_statement_repeat1;
	v->a[64470] = actions(2061);
	v->a[64471] = 6;
	v->a[64472] = anon_sym_LT;
	v->a[64473] = anon_sym_GT;
	v->a[64474] = anon_sym_GT_GT;
	v->a[64475] = anon_sym_LT_AMP;
	v->a[64476] = anon_sym_GT_AMP;
	v->a[64477] = anon_sym_GT_PIPE;
	v->a[64478] = 12;
	v->a[64479] = actions(3);
	small_parse_table_3224(v);
}

void	small_parse_table_3224(t_small_parse_table_array *v)
{
	v->a[64480] = 1;
	v->a[64481] = sym_comment;
	v->a[64482] = actions(682);
	v->a[64483] = 1;
	v->a[64484] = anon_sym_PIPE;
	v->a[64485] = actions(695);
	v->a[64486] = 1;
	v->a[64487] = anon_sym_SEMI_SEMI;
	v->a[64488] = actions(2009);
	v->a[64489] = 1;
	v->a[64490] = aux_sym_heredoc_redirect_token1;
	v->a[64491] = actions(2065);
	v->a[64492] = 1;
	v->a[64493] = sym_file_descriptor;
	v->a[64494] = state(744);
	v->a[64495] = 1;
	v->a[64496] = sym_terminator;
	v->a[64497] = actions(750);
	v->a[64498] = 2;
	v->a[64499] = anon_sym_AMP;
	small_parse_table_3225(v);
}

/* EOF small_parse_table_644.c */
