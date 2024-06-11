/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_764.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3820(t_small_parse_table_array *v)
{
	v->a[76400] = actions(807);
	v->a[76401] = 1;
	v->a[76402] = anon_sym_PIPE;
	v->a[76403] = actions(840);
	v->a[76404] = 1;
	v->a[76405] = anon_sym_SEMI_SEMI;
	v->a[76406] = actions(2302);
	v->a[76407] = 1;
	v->a[76408] = aux_sym_heredoc_redirect_token1;
	v->a[76409] = actions(2304);
	v->a[76410] = 1;
	v->a[76411] = anon_sym_AMP;
	v->a[76412] = actions(2306);
	v->a[76413] = 1;
	v->a[76414] = anon_sym_SEMI;
	v->a[76415] = actions(2602);
	v->a[76416] = 1;
	v->a[76417] = sym_file_descriptor;
	v->a[76418] = actions(861);
	v->a[76419] = 2;
	small_parse_table_3821(v);
}

void	small_parse_table_3821(t_small_parse_table_array *v)
{
	v->a[76420] = anon_sym_LT_LT;
	v->a[76421] = anon_sym_LT_LT_DASH;
	v->a[76422] = actions(965);
	v->a[76423] = 2;
	v->a[76424] = anon_sym_AMP_AMP;
	v->a[76425] = anon_sym_PIPE_PIPE;
	v->a[76426] = actions(2598);
	v->a[76427] = 2;
	v->a[76428] = anon_sym_LT_AMP_DASH;
	v->a[76429] = anon_sym_GT_AMP_DASH;
	v->a[76430] = state(1322);
	v->a[76431] = 3;
	v->a[76432] = sym_file_redirect;
	v->a[76433] = sym_heredoc_redirect;
	v->a[76434] = aux_sym_redirected_statement_repeat1;
	v->a[76435] = actions(2596);
	v->a[76436] = 8;
	v->a[76437] = anon_sym_LT;
	v->a[76438] = anon_sym_GT;
	v->a[76439] = anon_sym_GT_GT;
	small_parse_table_3822(v);
}

void	small_parse_table_3822(t_small_parse_table_array *v)
{
	v->a[76440] = anon_sym_AMP_GT;
	v->a[76441] = anon_sym_AMP_GT_GT;
	v->a[76442] = anon_sym_LT_AMP;
	v->a[76443] = anon_sym_GT_AMP;
	v->a[76444] = anon_sym_GT_PIPE;
	v->a[76445] = 12;
	v->a[76446] = actions(3);
	v->a[76447] = 1;
	v->a[76448] = sym_comment;
	v->a[76449] = actions(807);
	v->a[76450] = 1;
	v->a[76451] = anon_sym_PIPE;
	v->a[76452] = actions(840);
	v->a[76453] = 1;
	v->a[76454] = anon_sym_SEMI_SEMI;
	v->a[76455] = actions(2188);
	v->a[76456] = 1;
	v->a[76457] = aux_sym_heredoc_redirect_token1;
	v->a[76458] = actions(2190);
	v->a[76459] = 1;
	small_parse_table_3823(v);
}

void	small_parse_table_3823(t_small_parse_table_array *v)
{
	v->a[76460] = anon_sym_AMP;
	v->a[76461] = actions(2192);
	v->a[76462] = 1;
	v->a[76463] = anon_sym_SEMI;
	v->a[76464] = actions(2602);
	v->a[76465] = 1;
	v->a[76466] = sym_file_descriptor;
	v->a[76467] = actions(861);
	v->a[76468] = 2;
	v->a[76469] = anon_sym_LT_LT;
	v->a[76470] = anon_sym_LT_LT_DASH;
	v->a[76471] = actions(965);
	v->a[76472] = 2;
	v->a[76473] = anon_sym_AMP_AMP;
	v->a[76474] = anon_sym_PIPE_PIPE;
	v->a[76475] = actions(2598);
	v->a[76476] = 2;
	v->a[76477] = anon_sym_LT_AMP_DASH;
	v->a[76478] = anon_sym_GT_AMP_DASH;
	v->a[76479] = state(1322);
	small_parse_table_3824(v);
}

void	small_parse_table_3824(t_small_parse_table_array *v)
{
	v->a[76480] = 3;
	v->a[76481] = sym_file_redirect;
	v->a[76482] = sym_heredoc_redirect;
	v->a[76483] = aux_sym_redirected_statement_repeat1;
	v->a[76484] = actions(2596);
	v->a[76485] = 8;
	v->a[76486] = anon_sym_LT;
	v->a[76487] = anon_sym_GT;
	v->a[76488] = anon_sym_GT_GT;
	v->a[76489] = anon_sym_AMP_GT;
	v->a[76490] = anon_sym_AMP_GT_GT;
	v->a[76491] = anon_sym_LT_AMP;
	v->a[76492] = anon_sym_GT_AMP;
	v->a[76493] = anon_sym_GT_PIPE;
	v->a[76494] = 11;
	v->a[76495] = actions(3);
	v->a[76496] = 1;
	v->a[76497] = sym_comment;
	v->a[76498] = actions(2184);
	v->a[76499] = 1;
	small_parse_table_3825(v);
}

/* EOF small_parse_table_764.c */
