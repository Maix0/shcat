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
	v->a[54400] = actions(1202);
	v->a[54401] = 15;
	v->a[54402] = anon_sym_esac;
	v->a[54403] = anon_sym_PIPE;
	v->a[54404] = anon_sym_SEMI_SEMI;
	v->a[54405] = anon_sym_AMP_AMP;
	v->a[54406] = anon_sym_PIPE_PIPE;
	v->a[54407] = anon_sym_LT;
	v->a[54408] = anon_sym_GT;
	v->a[54409] = anon_sym_GT_GT;
	v->a[54410] = anon_sym_LT_AMP;
	v->a[54411] = anon_sym_GT_AMP;
	v->a[54412] = anon_sym_GT_PIPE;
	v->a[54413] = anon_sym_LT_GT;
	v->a[54414] = anon_sym_LT_LT;
	v->a[54415] = anon_sym_LT_LT_DASH;
	v->a[54416] = anon_sym_SEMI;
	v->a[54417] = 11;
	v->a[54418] = actions(3);
	v->a[54419] = 1;
	small_parse_table_2721(v);
}

void	small_parse_table_2721(t_small_parse_table_array *v)
{
	v->a[54420] = sym_comment;
	v->a[54421] = actions(782);
	v->a[54422] = 1;
	v->a[54423] = anon_sym_PIPE;
	v->a[54424] = actions(784);
	v->a[54425] = 1;
	v->a[54426] = anon_sym_BQUOTE;
	v->a[54427] = actions(1888);
	v->a[54428] = 1;
	v->a[54429] = aux_sym_heredoc_redirect_token1;
	v->a[54430] = actions(1890);
	v->a[54431] = 1;
	v->a[54432] = sym_file_descriptor;
	v->a[54433] = state(835);
	v->a[54434] = 1;
	v->a[54435] = sym_terminator;
	v->a[54436] = actions(786);
	v->a[54437] = 2;
	v->a[54438] = anon_sym_SEMI_SEMI;
	v->a[54439] = anon_sym_SEMI;
	small_parse_table_2722(v);
}

void	small_parse_table_2722(t_small_parse_table_array *v)
{
	v->a[54440] = actions(790);
	v->a[54441] = 2;
	v->a[54442] = anon_sym_LT_LT;
	v->a[54443] = anon_sym_LT_LT_DASH;
	v->a[54444] = actions(1059);
	v->a[54445] = 2;
	v->a[54446] = anon_sym_AMP_AMP;
	v->a[54447] = anon_sym_PIPE_PIPE;
	v->a[54448] = state(1062);
	v->a[54449] = 3;
	v->a[54450] = sym_file_redirect;
	v->a[54451] = sym_heredoc_redirect;
	v->a[54452] = aux_sym_redirected_statement_repeat1;
	v->a[54453] = actions(1886);
	v->a[54454] = 7;
	v->a[54455] = anon_sym_LT;
	v->a[54456] = anon_sym_GT;
	v->a[54457] = anon_sym_GT_GT;
	v->a[54458] = anon_sym_LT_AMP;
	v->a[54459] = anon_sym_GT_AMP;
	small_parse_table_2723(v);
}

void	small_parse_table_2723(t_small_parse_table_array *v)
{
	v->a[54460] = anon_sym_GT_PIPE;
	v->a[54461] = anon_sym_LT_GT;
	v->a[54462] = 11;
	v->a[54463] = actions(3);
	v->a[54464] = 1;
	v->a[54465] = sym_comment;
	v->a[54466] = actions(782);
	v->a[54467] = 1;
	v->a[54468] = anon_sym_PIPE;
	v->a[54469] = actions(784);
	v->a[54470] = 1;
	v->a[54471] = anon_sym_BQUOTE;
	v->a[54472] = actions(1888);
	v->a[54473] = 1;
	v->a[54474] = aux_sym_heredoc_redirect_token1;
	v->a[54475] = actions(1890);
	v->a[54476] = 1;
	v->a[54477] = sym_file_descriptor;
	v->a[54478] = state(836);
	v->a[54479] = 1;
	small_parse_table_2724(v);
}

void	small_parse_table_2724(t_small_parse_table_array *v)
{
	v->a[54480] = sym_terminator;
	v->a[54481] = actions(786);
	v->a[54482] = 2;
	v->a[54483] = anon_sym_SEMI_SEMI;
	v->a[54484] = anon_sym_SEMI;
	v->a[54485] = actions(790);
	v->a[54486] = 2;
	v->a[54487] = anon_sym_LT_LT;
	v->a[54488] = anon_sym_LT_LT_DASH;
	v->a[54489] = actions(1059);
	v->a[54490] = 2;
	v->a[54491] = anon_sym_AMP_AMP;
	v->a[54492] = anon_sym_PIPE_PIPE;
	v->a[54493] = state(1062);
	v->a[54494] = 3;
	v->a[54495] = sym_file_redirect;
	v->a[54496] = sym_heredoc_redirect;
	v->a[54497] = aux_sym_redirected_statement_repeat1;
	v->a[54498] = actions(1886);
	v->a[54499] = 7;
	small_parse_table_2725(v);
}

/* EOF small_parse_table_544.c */
