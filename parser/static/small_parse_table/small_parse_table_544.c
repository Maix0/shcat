/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_544.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2720(t_small_parse_table_array *v)
{
	v->a[54400] = anon_sym_BQUOTE;
	v->a[54401] = actions(1857);
	v->a[54402] = 1;
	v->a[54403] = aux_sym_heredoc_redirect_token1;
	v->a[54404] = actions(1871);
	v->a[54405] = 1;
	v->a[54406] = sym_file_descriptor;
	v->a[54407] = state(811);
	v->a[54408] = 1;
	v->a[54409] = sym_terminator;
	v->a[54410] = actions(700);
	v->a[54411] = 2;
	v->a[54412] = anon_sym_LT_LT;
	v->a[54413] = anon_sym_LT_LT_DASH;
	v->a[54414] = actions(936);
	v->a[54415] = 2;
	v->a[54416] = anon_sym_AMP_AMP;
	v->a[54417] = anon_sym_PIPE_PIPE;
	v->a[54418] = actions(696);
	v->a[54419] = 3;
	small_parse_table_2721(v);
}

void	small_parse_table_2721(t_small_parse_table_array *v)
{
	v->a[54420] = anon_sym_SEMI_SEMI;
	v->a[54421] = anon_sym_AMP;
	v->a[54422] = anon_sym_SEMI;
	v->a[54423] = state(1034);
	v->a[54424] = 3;
	v->a[54425] = sym_file_redirect;
	v->a[54426] = sym_heredoc_redirect;
	v->a[54427] = aux_sym_redirected_statement_repeat1;
	v->a[54428] = actions(1869);
	v->a[54429] = 7;
	v->a[54430] = anon_sym_LT;
	v->a[54431] = anon_sym_GT;
	v->a[54432] = anon_sym_GT_GT;
	v->a[54433] = anon_sym_LT_AMP;
	v->a[54434] = anon_sym_GT_AMP;
	v->a[54435] = anon_sym_GT_PIPE;
	v->a[54436] = anon_sym_LT_GT;
	v->a[54437] = 11;
	v->a[54438] = actions(3);
	v->a[54439] = 1;
	small_parse_table_2722(v);
}

void	small_parse_table_2722(t_small_parse_table_array *v)
{
	v->a[54440] = sym_comment;
	v->a[54441] = actions(692);
	v->a[54442] = 1;
	v->a[54443] = anon_sym_PIPE;
	v->a[54444] = actions(724);
	v->a[54445] = 1;
	v->a[54446] = anon_sym_BQUOTE;
	v->a[54447] = actions(1857);
	v->a[54448] = 1;
	v->a[54449] = aux_sym_heredoc_redirect_token1;
	v->a[54450] = actions(1871);
	v->a[54451] = 1;
	v->a[54452] = sym_file_descriptor;
	v->a[54453] = state(809);
	v->a[54454] = 1;
	v->a[54455] = sym_terminator;
	v->a[54456] = actions(700);
	v->a[54457] = 2;
	v->a[54458] = anon_sym_LT_LT;
	v->a[54459] = anon_sym_LT_LT_DASH;
	small_parse_table_2723(v);
}

void	small_parse_table_2723(t_small_parse_table_array *v)
{
	v->a[54460] = actions(936);
	v->a[54461] = 2;
	v->a[54462] = anon_sym_AMP_AMP;
	v->a[54463] = anon_sym_PIPE_PIPE;
	v->a[54464] = actions(696);
	v->a[54465] = 3;
	v->a[54466] = anon_sym_SEMI_SEMI;
	v->a[54467] = anon_sym_AMP;
	v->a[54468] = anon_sym_SEMI;
	v->a[54469] = state(1034);
	v->a[54470] = 3;
	v->a[54471] = sym_file_redirect;
	v->a[54472] = sym_heredoc_redirect;
	v->a[54473] = aux_sym_redirected_statement_repeat1;
	v->a[54474] = actions(1869);
	v->a[54475] = 7;
	v->a[54476] = anon_sym_LT;
	v->a[54477] = anon_sym_GT;
	v->a[54478] = anon_sym_GT_GT;
	v->a[54479] = anon_sym_LT_AMP;
	small_parse_table_2724(v);
}

void	small_parse_table_2724(t_small_parse_table_array *v)
{
	v->a[54480] = anon_sym_GT_AMP;
	v->a[54481] = anon_sym_GT_PIPE;
	v->a[54482] = anon_sym_LT_GT;
	v->a[54483] = 11;
	v->a[54484] = actions(3);
	v->a[54485] = 1;
	v->a[54486] = sym_comment;
	v->a[54487] = actions(692);
	v->a[54488] = 1;
	v->a[54489] = anon_sym_PIPE;
	v->a[54490] = actions(724);
	v->a[54491] = 1;
	v->a[54492] = anon_sym_BQUOTE;
	v->a[54493] = actions(1857);
	v->a[54494] = 1;
	v->a[54495] = aux_sym_heredoc_redirect_token1;
	v->a[54496] = actions(1871);
	v->a[54497] = 1;
	v->a[54498] = sym_file_descriptor;
	v->a[54499] = state(807);
	small_parse_table_2725(v);
}

/* EOF small_parse_table_544.c */
