/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_694.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3470(t_small_parse_table_array *v)
{
	v->a[69400] = sym_heredoc_redirect;
	v->a[69401] = aux_sym_redirected_statement_repeat1;
	v->a[69402] = actions(2061);
	v->a[69403] = 6;
	v->a[69404] = anon_sym_LT;
	v->a[69405] = anon_sym_GT;
	v->a[69406] = anon_sym_GT_GT;
	v->a[69407] = anon_sym_LT_AMP;
	v->a[69408] = anon_sym_GT_AMP;
	v->a[69409] = anon_sym_GT_PIPE;
	v->a[69410] = 8;
	v->a[69411] = actions(3);
	v->a[69412] = 1;
	v->a[69413] = sym_comment;
	v->a[69414] = actions(2065);
	v->a[69415] = 1;
	v->a[69416] = sym_file_descriptor;
	v->a[69417] = actions(2116);
	v->a[69418] = 1;
	v->a[69419] = aux_sym_heredoc_redirect_token1;
	small_parse_table_3471(v);
}

void	small_parse_table_3471(t_small_parse_table_array *v)
{
	v->a[69420] = actions(754);
	v->a[69421] = 2;
	v->a[69422] = anon_sym_LT_LT;
	v->a[69423] = anon_sym_LT_LT_DASH;
	v->a[69424] = actions(2063);
	v->a[69425] = 2;
	v->a[69426] = anon_sym_LT_AMP_DASH;
	v->a[69427] = anon_sym_GT_AMP_DASH;
	v->a[69428] = state(1312);
	v->a[69429] = 3;
	v->a[69430] = sym_file_redirect;
	v->a[69431] = sym_heredoc_redirect;
	v->a[69432] = aux_sym_redirected_statement_repeat1;
	v->a[69433] = actions(2061);
	v->a[69434] = 6;
	v->a[69435] = anon_sym_LT;
	v->a[69436] = anon_sym_GT;
	v->a[69437] = anon_sym_GT_GT;
	v->a[69438] = anon_sym_LT_AMP;
	v->a[69439] = anon_sym_GT_AMP;
	small_parse_table_3472(v);
}

void	small_parse_table_3472(t_small_parse_table_array *v)
{
	v->a[69440] = anon_sym_GT_PIPE;
	v->a[69441] = actions(2114);
	v->a[69442] = 6;
	v->a[69443] = anon_sym_PIPE;
	v->a[69444] = anon_sym_SEMI_SEMI;
	v->a[69445] = anon_sym_AMP_AMP;
	v->a[69446] = anon_sym_PIPE_PIPE;
	v->a[69447] = anon_sym_AMP;
	v->a[69448] = anon_sym_SEMI;
	v->a[69449] = 7;
	v->a[69450] = actions(3);
	v->a[69451] = 1;
	v->a[69452] = sym_comment;
	v->a[69453] = actions(2216);
	v->a[69454] = 1;
	v->a[69455] = aux_sym_heredoc_redirect_token1;
	v->a[69456] = actions(2321);
	v->a[69457] = 1;
	v->a[69458] = sym_file_descriptor;
	v->a[69459] = actions(2007);
	small_parse_table_3473(v);
}

void	small_parse_table_3473(t_small_parse_table_array *v)
{
	v->a[69460] = 2;
	v->a[69461] = anon_sym_LT_AMP_DASH;
	v->a[69462] = anon_sym_GT_AMP_DASH;
	v->a[69463] = state(1278);
	v->a[69464] = 2;
	v->a[69465] = sym_file_redirect;
	v->a[69466] = aux_sym_redirected_statement_repeat2;
	v->a[69467] = actions(2005);
	v->a[69468] = 6;
	v->a[69469] = anon_sym_LT;
	v->a[69470] = anon_sym_GT;
	v->a[69471] = anon_sym_GT_GT;
	v->a[69472] = anon_sym_LT_AMP;
	v->a[69473] = anon_sym_GT_AMP;
	v->a[69474] = anon_sym_GT_PIPE;
	v->a[69475] = actions(2218);
	v->a[69476] = 9;
	v->a[69477] = anon_sym_PIPE;
	v->a[69478] = anon_sym_RPAREN;
	v->a[69479] = anon_sym_SEMI_SEMI;
	small_parse_table_3474(v);
}

void	small_parse_table_3474(t_small_parse_table_array *v)
{
	v->a[69480] = anon_sym_AMP_AMP;
	v->a[69481] = anon_sym_PIPE_PIPE;
	v->a[69482] = anon_sym_LT_LT;
	v->a[69483] = anon_sym_LT_LT_DASH;
	v->a[69484] = anon_sym_AMP;
	v->a[69485] = anon_sym_SEMI;
	v->a[69486] = 3;
	v->a[69487] = actions(3);
	v->a[69488] = 1;
	v->a[69489] = sym_comment;
	v->a[69490] = actions(1264);
	v->a[69491] = 3;
	v->a[69492] = sym_file_descriptor;
	v->a[69493] = sym__concat;
	v->a[69494] = aux_sym_heredoc_redirect_token1;
	v->a[69495] = actions(1266);
	v->a[69496] = 18;
	v->a[69497] = anon_sym_esac;
	v->a[69498] = anon_sym_PIPE;
	v->a[69499] = anon_sym_SEMI_SEMI;
	small_parse_table_3475(v);
}

/* EOF small_parse_table_694.c */
