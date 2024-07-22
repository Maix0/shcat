/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_804.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4020(t_small_parse_table_array *v)
{
	v->a[80400] = sym_simple_heredoc_body;
	v->a[80401] = state(1937);
	v->a[80402] = 1;
	v->a[80403] = sym_heredoc_body;
	v->a[80404] = state(1228);
	v->a[80405] = 2;
	v->a[80406] = sym__heredoc_body;
	v->a[80407] = sym__simple_heredoc_body;
	v->a[80408] = 6;
	v->a[80409] = actions(501);
	v->a[80410] = 1;
	v->a[80411] = sym_comment;
	v->a[80412] = actions(3630);
	v->a[80413] = 1;
	v->a[80414] = sym__heredoc_body_beginning;
	v->a[80415] = actions(3634);
	v->a[80416] = 1;
	v->a[80417] = sym_simple_heredoc_body;
	v->a[80418] = state(1563);
	v->a[80419] = 1;
	small_parse_table_4021(v);
}

void	small_parse_table_4021(t_small_parse_table_array *v)
{
	v->a[80420] = sym__heredoc_body;
	v->a[80421] = state(1568);
	v->a[80422] = 1;
	v->a[80423] = sym__simple_heredoc_body;
	v->a[80424] = state(2102);
	v->a[80425] = 1;
	v->a[80426] = sym_heredoc_body;
	v->a[80427] = 5;
	v->a[80428] = actions(501);
	v->a[80429] = 1;
	v->a[80430] = sym_comment;
	v->a[80431] = actions(3630);
	v->a[80432] = 1;
	v->a[80433] = sym__heredoc_body_beginning;
	v->a[80434] = actions(3645);
	v->a[80435] = 1;
	v->a[80436] = sym_simple_heredoc_body;
	v->a[80437] = state(1937);
	v->a[80438] = 1;
	v->a[80439] = sym_heredoc_body;
	small_parse_table_4022(v);
}

void	small_parse_table_4022(t_small_parse_table_array *v)
{
	v->a[80440] = state(1259);
	v->a[80441] = 2;
	v->a[80442] = sym__heredoc_body;
	v->a[80443] = sym__simple_heredoc_body;
	v->a[80444] = 4;
	v->a[80445] = actions(501);
	v->a[80446] = 1;
	v->a[80447] = sym_comment;
	v->a[80448] = state(1827);
	v->a[80449] = 1;
	v->a[80450] = aux_sym_concatenation_repeat1;
	v->a[80451] = actions(1110);
	v->a[80452] = 2;
	v->a[80453] = anon_sym_PIPE;
	v->a[80454] = anon_sym_RPAREN;
	v->a[80455] = actions(3647);
	v->a[80456] = 2;
	v->a[80457] = sym__concat;
	v->a[80458] = aux_sym_concatenation_token1;
	v->a[80459] = 5;
	small_parse_table_4023(v);
}

void	small_parse_table_4023(t_small_parse_table_array *v)
{
	v->a[80460] = actions(501);
	v->a[80461] = 1;
	v->a[80462] = sym_comment;
	v->a[80463] = actions(3628);
	v->a[80464] = 1;
	v->a[80465] = sym_simple_heredoc_body;
	v->a[80466] = actions(3630);
	v->a[80467] = 1;
	v->a[80468] = sym__heredoc_body_beginning;
	v->a[80469] = state(2113);
	v->a[80470] = 1;
	v->a[80471] = sym_heredoc_body;
	v->a[80472] = state(1133);
	v->a[80473] = 2;
	v->a[80474] = sym__heredoc_body;
	v->a[80475] = sym__simple_heredoc_body;
	v->a[80476] = 5;
	v->a[80477] = actions(501);
	v->a[80478] = 1;
	v->a[80479] = sym_comment;
	small_parse_table_4024(v);
}

void	small_parse_table_4024(t_small_parse_table_array *v)
{
	v->a[80480] = actions(3630);
	v->a[80481] = 1;
	v->a[80482] = sym__heredoc_body_beginning;
	v->a[80483] = actions(3645);
	v->a[80484] = 1;
	v->a[80485] = sym_simple_heredoc_body;
	v->a[80486] = state(1937);
	v->a[80487] = 1;
	v->a[80488] = sym_heredoc_body;
	v->a[80489] = state(1319);
	v->a[80490] = 2;
	v->a[80491] = sym__heredoc_body;
	v->a[80492] = sym__simple_heredoc_body;
	v->a[80493] = 5;
	v->a[80494] = actions(3);
	v->a[80495] = 1;
	v->a[80496] = sym_comment;
	v->a[80497] = actions(3511);
	v->a[80498] = 1;
	v->a[80499] = anon_sym_in;
	small_parse_table_4025(v);
}

/* EOF small_parse_table_804.c */
