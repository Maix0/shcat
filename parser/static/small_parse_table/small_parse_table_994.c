/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_994.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4970(t_small_parse_table_array *v)
{
	v->a[99400] = actions(5267);
	v->a[99401] = 1;
	v->a[99402] = aux_sym_concatenation_token1;
	v->a[99403] = actions(5269);
	v->a[99404] = 1;
	v->a[99405] = sym__concat;
	v->a[99406] = state(2075);
	v->a[99407] = 1;
	v->a[99408] = aux_sym_concatenation_repeat1;
	v->a[99409] = actions(1390);
	v->a[99410] = 2;
	v->a[99411] = sym_file_descriptor;
	v->a[99412] = aux_sym_heredoc_redirect_token1;
	v->a[99413] = actions(1388);
	v->a[99414] = 20;
	v->a[99415] = anon_sym_PIPE;
	v->a[99416] = anon_sym_RPAREN;
	v->a[99417] = anon_sym_SEMI_SEMI;
	v->a[99418] = anon_sym_PIPE_AMP;
	v->a[99419] = anon_sym_AMP_AMP;
	small_parse_table_4971(v);
}

void	small_parse_table_4971(t_small_parse_table_array *v)
{
	v->a[99420] = anon_sym_PIPE_PIPE;
	v->a[99421] = anon_sym_LT;
	v->a[99422] = anon_sym_GT;
	v->a[99423] = anon_sym_GT_GT;
	v->a[99424] = anon_sym_AMP_GT;
	v->a[99425] = anon_sym_AMP_GT_GT;
	v->a[99426] = anon_sym_LT_AMP;
	v->a[99427] = anon_sym_GT_AMP;
	v->a[99428] = anon_sym_GT_PIPE;
	v->a[99429] = anon_sym_LT_AMP_DASH;
	v->a[99430] = anon_sym_GT_AMP_DASH;
	v->a[99431] = anon_sym_LT_LT;
	v->a[99432] = anon_sym_LT_LT_DASH;
	v->a[99433] = anon_sym_AMP;
	v->a[99434] = anon_sym_SEMI;
	v->a[99435] = 5;
	v->a[99436] = actions(3);
	v->a[99437] = 1;
	v->a[99438] = sym_comment;
	v->a[99439] = state(2711);
	small_parse_table_4972(v);
}

void	small_parse_table_4972(t_small_parse_table_array *v)
{
	v->a[99440] = 1;
	v->a[99441] = aux_sym_pipeline_repeat1;
	v->a[99442] = actions(5531);
	v->a[99443] = 2;
	v->a[99444] = anon_sym_PIPE;
	v->a[99445] = anon_sym_PIPE_AMP;
	v->a[99446] = actions(5367);
	v->a[99447] = 3;
	v->a[99448] = sym_file_descriptor;
	v->a[99449] = ts_builtin_sym_end;
	v->a[99450] = aux_sym_heredoc_redirect_token1;
	v->a[99451] = actions(5362);
	v->a[99452] = 19;
	v->a[99453] = anon_sym_RPAREN;
	v->a[99454] = anon_sym_SEMI_SEMI;
	v->a[99455] = anon_sym_AMP_AMP;
	v->a[99456] = anon_sym_PIPE_PIPE;
	v->a[99457] = anon_sym_LT;
	v->a[99458] = anon_sym_GT;
	v->a[99459] = anon_sym_GT_GT;
	small_parse_table_4973(v);
}

void	small_parse_table_4973(t_small_parse_table_array *v)
{
	v->a[99460] = anon_sym_AMP_GT;
	v->a[99461] = anon_sym_AMP_GT_GT;
	v->a[99462] = anon_sym_LT_AMP;
	v->a[99463] = anon_sym_GT_AMP;
	v->a[99464] = anon_sym_GT_PIPE;
	v->a[99465] = anon_sym_LT_AMP_DASH;
	v->a[99466] = anon_sym_GT_AMP_DASH;
	v->a[99467] = anon_sym_LT_LT;
	v->a[99468] = anon_sym_LT_LT_DASH;
	v->a[99469] = anon_sym_AMP;
	v->a[99470] = anon_sym_BQUOTE;
	v->a[99471] = anon_sym_SEMI;
	v->a[99472] = 4;
	v->a[99473] = actions(3);
	v->a[99474] = 1;
	v->a[99475] = sym_comment;
	v->a[99476] = actions(2632);
	v->a[99477] = 2;
	v->a[99478] = sym_file_descriptor;
	v->a[99479] = aux_sym_heredoc_redirect_token1;
	small_parse_table_4974(v);
}

void	small_parse_table_4974(t_small_parse_table_array *v)
{
	v->a[99480] = state(2140);
	v->a[99481] = 3;
	v->a[99482] = sym_file_redirect;
	v->a[99483] = sym_heredoc_redirect;
	v->a[99484] = aux_sym_redirected_statement_repeat1;
	v->a[99485] = actions(2630);
	v->a[99486] = 20;
	v->a[99487] = anon_sym_PIPE;
	v->a[99488] = anon_sym_SEMI_SEMI;
	v->a[99489] = anon_sym_PIPE_AMP;
	v->a[99490] = anon_sym_AMP_AMP;
	v->a[99491] = anon_sym_PIPE_PIPE;
	v->a[99492] = anon_sym_LT;
	v->a[99493] = anon_sym_GT;
	v->a[99494] = anon_sym_GT_GT;
	v->a[99495] = anon_sym_AMP_GT;
	v->a[99496] = anon_sym_AMP_GT_GT;
	v->a[99497] = anon_sym_LT_AMP;
	v->a[99498] = anon_sym_GT_AMP;
	v->a[99499] = anon_sym_GT_PIPE;
	small_parse_table_4975(v);
}

/* EOF small_parse_table_994.c */
