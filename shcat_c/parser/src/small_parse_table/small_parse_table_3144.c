/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_3144.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_15720(t_small_parse_table_array *v)
{
	v->a[314400] = aux_sym_heredoc_redirect_token1;
	v->a[314401] = state(6463);
	v->a[314402] = 1;
	v->a[314403] = aux_sym__for_body_repeat1;
	v->a[314404] = actions(14803);
	v->a[314405] = 2;
	v->a[314406] = anon_sym_SEMI;
	v->a[314407] = anon_sym_AMP;
	v->a[314408] = 6;
	v->a[314409] = actions(71);
	v->a[314410] = 1;
	v->a[314411] = sym_comment;
	v->a[314412] = actions(14710);
	v->a[314413] = 1;
	v->a[314414] = sym__heredoc_body_beginning;
	v->a[314415] = actions(14722);
	v->a[314416] = 1;
	v->a[314417] = sym_simple_heredoc_body;
	v->a[314418] = state(4886);
	v->a[314419] = 1;
	small_parse_table_15721(v);
}

void	small_parse_table_15721(t_small_parse_table_array *v)
{
	v->a[314420] = sym__heredoc_body;
	v->a[314421] = state(4887);
	v->a[314422] = 1;
	v->a[314423] = sym__simple_heredoc_body;
	v->a[314424] = state(6845);
	v->a[314425] = 1;
	v->a[314426] = sym_heredoc_body;
	v->a[314427] = 4;
	v->a[314428] = actions(71);
	v->a[314429] = 1;
	v->a[314430] = sym_comment;
	v->a[314431] = actions(14810);
	v->a[314432] = 1;
	v->a[314433] = anon_sym_RBRACE3;
	v->a[314434] = state(6474);
	v->a[314435] = 1;
	v->a[314436] = aux_sym__expansion_body_repeat1;
	v->a[314437] = actions(8050);
	v->a[314438] = 3;
	v->a[314439] = sym__external_expansion_sym_hash;
	small_parse_table_15722(v);
}

void	small_parse_table_15722(t_small_parse_table_array *v)
{
	v->a[314440] = sym__external_expansion_sym_bang;
	v->a[314441] = sym__external_expansion_sym_equal;
	v->a[314442] = 5;
	v->a[314443] = actions(71);
	v->a[314444] = 1;
	v->a[314445] = sym_comment;
	v->a[314446] = actions(14710);
	v->a[314447] = 1;
	v->a[314448] = sym__heredoc_body_beginning;
	v->a[314449] = actions(14712);
	v->a[314450] = 1;
	v->a[314451] = sym_simple_heredoc_body;
	v->a[314452] = state(7466);
	v->a[314453] = 1;
	v->a[314454] = sym_heredoc_body;
	v->a[314455] = state(5658);
	v->a[314456] = 2;
	v->a[314457] = sym__heredoc_body;
	v->a[314458] = sym__simple_heredoc_body;
	v->a[314459] = 5;
	small_parse_table_15723(v);
}

void	small_parse_table_15723(t_small_parse_table_array *v)
{
	v->a[314460] = actions(71);
	v->a[314461] = 1;
	v->a[314462] = sym_comment;
	v->a[314463] = actions(14710);
	v->a[314464] = 1;
	v->a[314465] = sym__heredoc_body_beginning;
	v->a[314466] = actions(14757);
	v->a[314467] = 1;
	v->a[314468] = sym_simple_heredoc_body;
	v->a[314469] = state(7011);
	v->a[314470] = 1;
	v->a[314471] = sym_heredoc_body;
	v->a[314472] = state(5595);
	v->a[314473] = 2;
	v->a[314474] = sym__heredoc_body;
	v->a[314475] = sym__simple_heredoc_body;
	v->a[314476] = 6;
	v->a[314477] = actions(71);
	v->a[314478] = 1;
	v->a[314479] = sym_comment;
	small_parse_table_15724(v);
}

void	small_parse_table_15724(t_small_parse_table_array *v)
{
	v->a[314480] = actions(14710);
	v->a[314481] = 1;
	v->a[314482] = sym__heredoc_body_beginning;
	v->a[314483] = actions(14757);
	v->a[314484] = 1;
	v->a[314485] = sym_simple_heredoc_body;
	v->a[314486] = state(5596);
	v->a[314487] = 1;
	v->a[314488] = sym__heredoc_body;
	v->a[314489] = state(5597);
	v->a[314490] = 1;
	v->a[314491] = sym__simple_heredoc_body;
	v->a[314492] = state(7011);
	v->a[314493] = 1;
	v->a[314494] = sym_heredoc_body;
	v->a[314495] = 4;
	v->a[314496] = actions(3);
	v->a[314497] = 1;
	v->a[314498] = sym_comment;
	v->a[314499] = actions(14362);
	small_parse_table_15725(v);
}

/* EOF small_parse_table_3144.c */
