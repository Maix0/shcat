/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_714.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3570(t_small_parse_table_array *v)
{
	v->a[71400] = actions(807);
	v->a[71401] = 1;
	v->a[71402] = anon_sym_PIPE;
	v->a[71403] = actions(951);
	v->a[71404] = 1;
	v->a[71405] = ts_builtin_sym_end;
	v->a[71406] = actions(2075);
	v->a[71407] = 1;
	v->a[71408] = sym_file_descriptor;
	v->a[71409] = actions(2496);
	v->a[71410] = 1;
	v->a[71411] = anon_sym_SEMI_SEMI;
	v->a[71412] = actions(2498);
	v->a[71413] = 1;
	v->a[71414] = aux_sym_heredoc_redirect_token1;
	v->a[71415] = actions(2500);
	v->a[71416] = 1;
	v->a[71417] = anon_sym_AMP;
	v->a[71418] = actions(2502);
	v->a[71419] = 1;
	small_parse_table_3571(v);
}

void	small_parse_table_3571(t_small_parse_table_array *v)
{
	v->a[71420] = anon_sym_SEMI;
	v->a[71421] = actions(861);
	v->a[71422] = 2;
	v->a[71423] = anon_sym_LT_LT;
	v->a[71424] = anon_sym_LT_LT_DASH;
	v->a[71425] = actions(934);
	v->a[71426] = 2;
	v->a[71427] = anon_sym_AMP_AMP;
	v->a[71428] = anon_sym_PIPE_PIPE;
	v->a[71429] = actions(2067);
	v->a[71430] = 2;
	v->a[71431] = anon_sym_LT_AMP_DASH;
	v->a[71432] = anon_sym_GT_AMP_DASH;
	v->a[71433] = state(1289);
	v->a[71434] = 3;
	v->a[71435] = sym_file_redirect;
	v->a[71436] = sym_heredoc_redirect;
	v->a[71437] = aux_sym_redirected_statement_repeat1;
	v->a[71438] = actions(2065);
	v->a[71439] = 8;
	small_parse_table_3572(v);
}

void	small_parse_table_3572(t_small_parse_table_array *v)
{
	v->a[71440] = anon_sym_LT;
	v->a[71441] = anon_sym_GT;
	v->a[71442] = anon_sym_GT_GT;
	v->a[71443] = anon_sym_AMP_GT;
	v->a[71444] = anon_sym_AMP_GT_GT;
	v->a[71445] = anon_sym_LT_AMP;
	v->a[71446] = anon_sym_GT_AMP;
	v->a[71447] = anon_sym_GT_PIPE;
	v->a[71448] = 13;
	v->a[71449] = actions(3);
	v->a[71450] = 1;
	v->a[71451] = sym_comment;
	v->a[71452] = actions(807);
	v->a[71453] = 1;
	v->a[71454] = anon_sym_PIPE;
	v->a[71455] = actions(951);
	v->a[71456] = 1;
	v->a[71457] = ts_builtin_sym_end;
	v->a[71458] = actions(2075);
	v->a[71459] = 1;
	small_parse_table_3573(v);
}

void	small_parse_table_3573(t_small_parse_table_array *v)
{
	v->a[71460] = sym_file_descriptor;
	v->a[71461] = actions(2504);
	v->a[71462] = 1;
	v->a[71463] = anon_sym_SEMI_SEMI;
	v->a[71464] = actions(2506);
	v->a[71465] = 1;
	v->a[71466] = aux_sym_heredoc_redirect_token1;
	v->a[71467] = actions(2508);
	v->a[71468] = 1;
	v->a[71469] = anon_sym_AMP;
	v->a[71470] = actions(2510);
	v->a[71471] = 1;
	v->a[71472] = anon_sym_SEMI;
	v->a[71473] = actions(861);
	v->a[71474] = 2;
	v->a[71475] = anon_sym_LT_LT;
	v->a[71476] = anon_sym_LT_LT_DASH;
	v->a[71477] = actions(934);
	v->a[71478] = 2;
	v->a[71479] = anon_sym_AMP_AMP;
	small_parse_table_3574(v);
}

void	small_parse_table_3574(t_small_parse_table_array *v)
{
	v->a[71480] = anon_sym_PIPE_PIPE;
	v->a[71481] = actions(2067);
	v->a[71482] = 2;
	v->a[71483] = anon_sym_LT_AMP_DASH;
	v->a[71484] = anon_sym_GT_AMP_DASH;
	v->a[71485] = state(1289);
	v->a[71486] = 3;
	v->a[71487] = sym_file_redirect;
	v->a[71488] = sym_heredoc_redirect;
	v->a[71489] = aux_sym_redirected_statement_repeat1;
	v->a[71490] = actions(2065);
	v->a[71491] = 8;
	v->a[71492] = anon_sym_LT;
	v->a[71493] = anon_sym_GT;
	v->a[71494] = anon_sym_GT_GT;
	v->a[71495] = anon_sym_AMP_GT;
	v->a[71496] = anon_sym_AMP_GT_GT;
	v->a[71497] = anon_sym_LT_AMP;
	v->a[71498] = anon_sym_GT_AMP;
	v->a[71499] = anon_sym_GT_PIPE;
	small_parse_table_3575(v);
}

/* EOF small_parse_table_714.c */
