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
	v->a[71400] = anon_sym_GT_GT;
	v->a[71401] = anon_sym_LT_AMP;
	v->a[71402] = anon_sym_GT_AMP;
	v->a[71403] = anon_sym_GT_PIPE;
	v->a[71404] = anon_sym_LT_AMP_DASH;
	v->a[71405] = anon_sym_GT_AMP_DASH;
	v->a[71406] = anon_sym_LT_LT;
	v->a[71407] = anon_sym_LT_LT_DASH;
	v->a[71408] = anon_sym_AMP;
	v->a[71409] = anon_sym_BQUOTE;
	v->a[71410] = anon_sym_SEMI;
	v->a[71411] = 5;
	v->a[71412] = actions(3);
	v->a[71413] = 1;
	v->a[71414] = sym_comment;
	v->a[71415] = actions(2521);
	v->a[71416] = 1;
	v->a[71417] = anon_sym_PIPE;
	v->a[71418] = state(1331);
	v->a[71419] = 1;
	small_parse_table_3571(v);
}

void	small_parse_table_3571(t_small_parse_table_array *v)
{
	v->a[71420] = aux_sym_pipeline_repeat1;
	v->a[71421] = actions(2090);
	v->a[71422] = 3;
	v->a[71423] = sym_file_descriptor;
	v->a[71424] = ts_builtin_sym_end;
	v->a[71425] = aux_sym_heredoc_redirect_token1;
	v->a[71426] = actions(2095);
	v->a[71427] = 15;
	v->a[71428] = anon_sym_SEMI_SEMI;
	v->a[71429] = anon_sym_AMP_AMP;
	v->a[71430] = anon_sym_PIPE_PIPE;
	v->a[71431] = anon_sym_LT;
	v->a[71432] = anon_sym_GT;
	v->a[71433] = anon_sym_GT_GT;
	v->a[71434] = anon_sym_LT_AMP;
	v->a[71435] = anon_sym_GT_AMP;
	v->a[71436] = anon_sym_GT_PIPE;
	v->a[71437] = anon_sym_LT_AMP_DASH;
	v->a[71438] = anon_sym_GT_AMP_DASH;
	v->a[71439] = anon_sym_LT_LT;
	small_parse_table_3572(v);
}

void	small_parse_table_3572(t_small_parse_table_array *v)
{
	v->a[71440] = anon_sym_LT_LT_DASH;
	v->a[71441] = anon_sym_AMP;
	v->a[71442] = anon_sym_SEMI;
	v->a[71443] = 5;
	v->a[71444] = actions(3);
	v->a[71445] = 1;
	v->a[71446] = sym_comment;
	v->a[71447] = actions(2524);
	v->a[71448] = 1;
	v->a[71449] = anon_sym_PIPE;
	v->a[71450] = state(1332);
	v->a[71451] = 1;
	v->a[71452] = aux_sym_pipeline_repeat1;
	v->a[71453] = actions(2090);
	v->a[71454] = 2;
	v->a[71455] = sym_file_descriptor;
	v->a[71456] = aux_sym_heredoc_redirect_token1;
	v->a[71457] = actions(2095);
	v->a[71458] = 16;
	v->a[71459] = anon_sym_esac;
	small_parse_table_3573(v);
}

void	small_parse_table_3573(t_small_parse_table_array *v)
{
	v->a[71460] = anon_sym_SEMI_SEMI;
	v->a[71461] = anon_sym_AMP_AMP;
	v->a[71462] = anon_sym_PIPE_PIPE;
	v->a[71463] = anon_sym_LT;
	v->a[71464] = anon_sym_GT;
	v->a[71465] = anon_sym_GT_GT;
	v->a[71466] = anon_sym_LT_AMP;
	v->a[71467] = anon_sym_GT_AMP;
	v->a[71468] = anon_sym_GT_PIPE;
	v->a[71469] = anon_sym_LT_AMP_DASH;
	v->a[71470] = anon_sym_GT_AMP_DASH;
	v->a[71471] = anon_sym_LT_LT;
	v->a[71472] = anon_sym_LT_LT_DASH;
	v->a[71473] = anon_sym_AMP;
	v->a[71474] = anon_sym_SEMI;
	v->a[71475] = 7;
	v->a[71476] = actions(3);
	v->a[71477] = 1;
	v->a[71478] = sym_comment;
	v->a[71479] = actions(2222);
	small_parse_table_3574(v);
}

void	small_parse_table_3574(t_small_parse_table_array *v)
{
	v->a[71480] = 1;
	v->a[71481] = aux_sym_heredoc_redirect_token1;
	v->a[71482] = actions(2448);
	v->a[71483] = 1;
	v->a[71484] = sym_file_descriptor;
	v->a[71485] = actions(2063);
	v->a[71486] = 2;
	v->a[71487] = anon_sym_LT_AMP_DASH;
	v->a[71488] = anon_sym_GT_AMP_DASH;
	v->a[71489] = state(1322);
	v->a[71490] = 2;
	v->a[71491] = sym_file_redirect;
	v->a[71492] = aux_sym_redirected_statement_repeat2;
	v->a[71493] = actions(2061);
	v->a[71494] = 6;
	v->a[71495] = anon_sym_LT;
	v->a[71496] = anon_sym_GT;
	v->a[71497] = anon_sym_GT_GT;
	v->a[71498] = anon_sym_LT_AMP;
	v->a[71499] = anon_sym_GT_AMP;
	small_parse_table_3575(v);
}

/* EOF small_parse_table_714.c */
