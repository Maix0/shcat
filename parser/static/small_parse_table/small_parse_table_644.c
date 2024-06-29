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
	v->a[64400] = actions(770);
	v->a[64401] = 2;
	v->a[64402] = anon_sym_LT_LT;
	v->a[64403] = anon_sym_LT_LT_DASH;
	v->a[64404] = actions(772);
	v->a[64405] = 2;
	v->a[64406] = anon_sym_AMP;
	v->a[64407] = anon_sym_SEMI;
	v->a[64408] = actions(809);
	v->a[64409] = 2;
	v->a[64410] = anon_sym_esac;
	v->a[64411] = anon_sym_SEMI_SEMI;
	v->a[64412] = actions(2001);
	v->a[64413] = 2;
	v->a[64414] = anon_sym_LT_AMP_DASH;
	v->a[64415] = anon_sym_GT_AMP_DASH;
	v->a[64416] = state(1123);
	v->a[64417] = 3;
	v->a[64418] = sym_file_redirect;
	v->a[64419] = sym_heredoc_redirect;
	small_parse_table_3221(v);
}

void	small_parse_table_3221(t_small_parse_table_array *v)
{
	v->a[64420] = aux_sym_redirected_statement_repeat1;
	v->a[64421] = actions(1999);
	v->a[64422] = 8;
	v->a[64423] = anon_sym_LT;
	v->a[64424] = anon_sym_GT;
	v->a[64425] = anon_sym_GT_GT;
	v->a[64426] = anon_sym_AMP_GT;
	v->a[64427] = anon_sym_AMP_GT_GT;
	v->a[64428] = anon_sym_LT_AMP;
	v->a[64429] = anon_sym_GT_AMP;
	v->a[64430] = anon_sym_GT_PIPE;
	v->a[64431] = 12;
	v->a[64432] = actions(3);
	v->a[64433] = 1;
	v->a[64434] = sym_comment;
	v->a[64435] = actions(766);
	v->a[64436] = 1;
	v->a[64437] = anon_sym_PIPE;
	v->a[64438] = actions(840);
	v->a[64439] = 1;
	small_parse_table_3222(v);
}

void	small_parse_table_3222(t_small_parse_table_array *v)
{
	v->a[64440] = ts_builtin_sym_end;
	v->a[64441] = actions(2017);
	v->a[64442] = 1;
	v->a[64443] = aux_sym_heredoc_redirect_token1;
	v->a[64444] = actions(2019);
	v->a[64445] = 1;
	v->a[64446] = sym_file_descriptor;
	v->a[64447] = state(797);
	v->a[64448] = 1;
	v->a[64449] = sym_terminator;
	v->a[64450] = actions(804);
	v->a[64451] = 2;
	v->a[64452] = anon_sym_LT_LT;
	v->a[64453] = anon_sym_LT_LT_DASH;
	v->a[64454] = actions(835);
	v->a[64455] = 2;
	v->a[64456] = anon_sym_AMP_AMP;
	v->a[64457] = anon_sym_PIPE_PIPE;
	v->a[64458] = actions(2015);
	v->a[64459] = 2;
	small_parse_table_3223(v);
}

void	small_parse_table_3223(t_small_parse_table_array *v)
{
	v->a[64460] = anon_sym_LT_AMP_DASH;
	v->a[64461] = anon_sym_GT_AMP_DASH;
	v->a[64462] = actions(833);
	v->a[64463] = 3;
	v->a[64464] = anon_sym_SEMI_SEMI;
	v->a[64465] = anon_sym_AMP;
	v->a[64466] = anon_sym_SEMI;
	v->a[64467] = state(1133);
	v->a[64468] = 3;
	v->a[64469] = sym_file_redirect;
	v->a[64470] = sym_heredoc_redirect;
	v->a[64471] = aux_sym_redirected_statement_repeat1;
	v->a[64472] = actions(2013);
	v->a[64473] = 8;
	v->a[64474] = anon_sym_LT;
	v->a[64475] = anon_sym_GT;
	v->a[64476] = anon_sym_GT_GT;
	v->a[64477] = anon_sym_AMP_GT;
	v->a[64478] = anon_sym_AMP_GT_GT;
	v->a[64479] = anon_sym_LT_AMP;
	small_parse_table_3224(v);
}

void	small_parse_table_3224(t_small_parse_table_array *v)
{
	v->a[64480] = anon_sym_GT_AMP;
	v->a[64481] = anon_sym_GT_PIPE;
	v->a[64482] = 12;
	v->a[64483] = actions(3);
	v->a[64484] = 1;
	v->a[64485] = sym_comment;
	v->a[64486] = actions(766);
	v->a[64487] = 1;
	v->a[64488] = anon_sym_PIPE;
	v->a[64489] = actions(840);
	v->a[64490] = 1;
	v->a[64491] = ts_builtin_sym_end;
	v->a[64492] = actions(2017);
	v->a[64493] = 1;
	v->a[64494] = aux_sym_heredoc_redirect_token1;
	v->a[64495] = actions(2019);
	v->a[64496] = 1;
	v->a[64497] = sym_file_descriptor;
	v->a[64498] = state(792);
	v->a[64499] = 1;
	small_parse_table_3225(v);
}

/* EOF small_parse_table_644.c */
