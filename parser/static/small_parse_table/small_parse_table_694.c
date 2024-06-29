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
	v->a[69400] = aux_sym_redirected_statement_repeat2;
	v->a[69401] = actions(1999);
	v->a[69402] = 8;
	v->a[69403] = anon_sym_LT;
	v->a[69404] = anon_sym_GT;
	v->a[69405] = anon_sym_GT_GT;
	v->a[69406] = anon_sym_AMP_GT;
	v->a[69407] = anon_sym_AMP_GT_GT;
	v->a[69408] = anon_sym_LT_AMP;
	v->a[69409] = anon_sym_GT_AMP;
	v->a[69410] = anon_sym_GT_PIPE;
	v->a[69411] = actions(2227);
	v->a[69412] = 9;
	v->a[69413] = anon_sym_esac;
	v->a[69414] = anon_sym_PIPE;
	v->a[69415] = anon_sym_SEMI_SEMI;
	v->a[69416] = anon_sym_AMP_AMP;
	v->a[69417] = anon_sym_PIPE_PIPE;
	v->a[69418] = anon_sym_LT_LT;
	v->a[69419] = anon_sym_LT_LT_DASH;
	small_parse_table_3471(v);
}

void	small_parse_table_3471(t_small_parse_table_array *v)
{
	v->a[69420] = anon_sym_AMP;
	v->a[69421] = anon_sym_SEMI;
	v->a[69422] = 11;
	v->a[69423] = actions(3);
	v->a[69424] = 1;
	v->a[69425] = sym_comment;
	v->a[69426] = actions(809);
	v->a[69427] = 1;
	v->a[69428] = anon_sym_SEMI_SEMI;
	v->a[69429] = actions(2031);
	v->a[69430] = 1;
	v->a[69431] = aux_sym_heredoc_redirect_token1;
	v->a[69432] = actions(2066);
	v->a[69433] = 1;
	v->a[69434] = sym_file_descriptor;
	v->a[69435] = state(728);
	v->a[69436] = 1;
	v->a[69437] = sym_terminator;
	v->a[69438] = actions(800);
	v->a[69439] = 2;
	small_parse_table_3472(v);
}

void	small_parse_table_3472(t_small_parse_table_array *v)
{
	v->a[69440] = anon_sym_AMP;
	v->a[69441] = anon_sym_SEMI;
	v->a[69442] = actions(804);
	v->a[69443] = 2;
	v->a[69444] = anon_sym_LT_LT;
	v->a[69445] = anon_sym_LT_LT_DASH;
	v->a[69446] = actions(893);
	v->a[69447] = 2;
	v->a[69448] = anon_sym_AMP_AMP;
	v->a[69449] = anon_sym_PIPE_PIPE;
	v->a[69450] = actions(2064);
	v->a[69451] = 2;
	v->a[69452] = anon_sym_LT_AMP_DASH;
	v->a[69453] = anon_sym_GT_AMP_DASH;
	v->a[69454] = state(1256);
	v->a[69455] = 3;
	v->a[69456] = sym_file_redirect;
	v->a[69457] = sym_heredoc_redirect;
	v->a[69458] = aux_sym_redirected_statement_repeat1;
	v->a[69459] = actions(2062);
	small_parse_table_3473(v);
}

void	small_parse_table_3473(t_small_parse_table_array *v)
{
	v->a[69460] = 8;
	v->a[69461] = anon_sym_LT;
	v->a[69462] = anon_sym_GT;
	v->a[69463] = anon_sym_GT_GT;
	v->a[69464] = anon_sym_AMP_GT;
	v->a[69465] = anon_sym_AMP_GT_GT;
	v->a[69466] = anon_sym_LT_AMP;
	v->a[69467] = anon_sym_GT_AMP;
	v->a[69468] = anon_sym_GT_PIPE;
	v->a[69469] = 3;
	v->a[69470] = actions(3);
	v->a[69471] = 1;
	v->a[69472] = sym_comment;
	v->a[69473] = actions(2285);
	v->a[69474] = 3;
	v->a[69475] = sym_file_descriptor;
	v->a[69476] = ts_builtin_sym_end;
	v->a[69477] = aux_sym_heredoc_redirect_token1;
	v->a[69478] = actions(2287);
	v->a[69479] = 20;
	small_parse_table_3474(v);
}

void	small_parse_table_3474(t_small_parse_table_array *v)
{
	v->a[69480] = anon_sym_PIPE;
	v->a[69481] = anon_sym_RPAREN;
	v->a[69482] = anon_sym_SEMI_SEMI;
	v->a[69483] = anon_sym_AMP_AMP;
	v->a[69484] = anon_sym_PIPE_PIPE;
	v->a[69485] = anon_sym_LT;
	v->a[69486] = anon_sym_GT;
	v->a[69487] = anon_sym_GT_GT;
	v->a[69488] = anon_sym_AMP_GT;
	v->a[69489] = anon_sym_AMP_GT_GT;
	v->a[69490] = anon_sym_LT_AMP;
	v->a[69491] = anon_sym_GT_AMP;
	v->a[69492] = anon_sym_GT_PIPE;
	v->a[69493] = anon_sym_LT_AMP_DASH;
	v->a[69494] = anon_sym_GT_AMP_DASH;
	v->a[69495] = anon_sym_LT_LT;
	v->a[69496] = anon_sym_LT_LT_DASH;
	v->a[69497] = anon_sym_AMP;
	v->a[69498] = anon_sym_BQUOTE;
	v->a[69499] = anon_sym_SEMI;
	small_parse_table_3475(v);
}

/* EOF small_parse_table_694.c */
