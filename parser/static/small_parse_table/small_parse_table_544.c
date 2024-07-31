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
	v->a[54400] = 1;
	v->a[54401] = anon_sym_DOLLAR_LPAREN;
	v->a[54402] = actions(2127);
	v->a[54403] = 1;
	v->a[54404] = anon_sym_BQUOTE;
	v->a[54405] = actions(2129);
	v->a[54406] = 1;
	v->a[54407] = sym__bare_dollar;
	v->a[54408] = actions(2115);
	v->a[54409] = 5;
	v->a[54410] = aux_sym_concatenation_token1;
	v->a[54411] = sym_raw_string;
	v->a[54412] = sym_number;
	v->a[54413] = sym__comment_word;
	v->a[54414] = sym_word;
	v->a[54415] = state(677);
	v->a[54416] = 5;
	v->a[54417] = sym_arithmetic_expansion;
	v->a[54418] = sym_string;
	v->a[54419] = sym_simple_expansion;
	small_parse_table_2721(v);
}

void	small_parse_table_2721(t_small_parse_table_array *v)
{
	v->a[54420] = sym_expansion;
	v->a[54421] = sym_command_substitution;
	v->a[54422] = 10;
	v->a[54423] = actions(3);
	v->a[54424] = 1;
	v->a[54425] = sym_comment;
	v->a[54426] = actions(2097);
	v->a[54427] = 1;
	v->a[54428] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[54429] = actions(2101);
	v->a[54430] = 1;
	v->a[54431] = anon_sym_DQUOTE;
	v->a[54432] = actions(2103);
	v->a[54433] = 1;
	v->a[54434] = anon_sym_DOLLAR_LBRACE;
	v->a[54435] = actions(2105);
	v->a[54436] = 1;
	v->a[54437] = anon_sym_DOLLAR_LPAREN;
	v->a[54438] = actions(2107);
	v->a[54439] = 1;
	small_parse_table_2722(v);
}

void	small_parse_table_2722(t_small_parse_table_array *v)
{
	v->a[54440] = anon_sym_BQUOTE;
	v->a[54441] = actions(2133);
	v->a[54442] = 1;
	v->a[54443] = anon_sym_DOLLAR;
	v->a[54444] = actions(2135);
	v->a[54445] = 1;
	v->a[54446] = sym__bare_dollar;
	v->a[54447] = actions(2131);
	v->a[54448] = 5;
	v->a[54449] = aux_sym_concatenation_token1;
	v->a[54450] = sym_raw_string;
	v->a[54451] = sym_number;
	v->a[54452] = sym__comment_word;
	v->a[54453] = sym_word;
	v->a[54454] = state(1232);
	v->a[54455] = 5;
	v->a[54456] = sym_arithmetic_expansion;
	v->a[54457] = sym_string;
	v->a[54458] = sym_simple_expansion;
	v->a[54459] = sym_expansion;
	small_parse_table_2723(v);
}

void	small_parse_table_2723(t_small_parse_table_array *v)
{
	v->a[54460] = sym_command_substitution;
	v->a[54461] = 5;
	v->a[54462] = actions(3);
	v->a[54463] = 1;
	v->a[54464] = sym_comment;
	v->a[54465] = actions(1712);
	v->a[54466] = 1;
	v->a[54467] = aux_sym_heredoc_redirect_token1;
	v->a[54468] = actions(2137);
	v->a[54469] = 1;
	v->a[54470] = anon_sym_PIPE;
	v->a[54471] = state(1076);
	v->a[54472] = 1;
	v->a[54473] = aux_sym_pipeline_repeat1;
	v->a[54474] = actions(1717);
	v->a[54475] = 14;
	v->a[54476] = anon_sym_esac;
	v->a[54477] = anon_sym_SEMI_SEMI;
	v->a[54478] = anon_sym_AMP_AMP;
	v->a[54479] = anon_sym_PIPE_PIPE;
	small_parse_table_2724(v);
}

void	small_parse_table_2724(t_small_parse_table_array *v)
{
	v->a[54480] = anon_sym_LT;
	v->a[54481] = anon_sym_GT;
	v->a[54482] = anon_sym_GT_GT;
	v->a[54483] = anon_sym_LT_AMP;
	v->a[54484] = anon_sym_GT_AMP;
	v->a[54485] = anon_sym_GT_PIPE;
	v->a[54486] = anon_sym_LT_GT;
	v->a[54487] = anon_sym_LT_LT;
	v->a[54488] = anon_sym_LT_LT_DASH;
	v->a[54489] = anon_sym_SEMI;
	v->a[54490] = 10;
	v->a[54491] = actions(3);
	v->a[54492] = 1;
	v->a[54493] = sym_comment;
	v->a[54494] = actions(1341);
	v->a[54495] = 1;
	v->a[54496] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[54497] = actions(1345);
	v->a[54498] = 1;
	v->a[54499] = anon_sym_DQUOTE;
	small_parse_table_2725(v);
}

/* EOF small_parse_table_544.c */
