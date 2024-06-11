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
	v->a[99400] = 1;
	v->a[99401] = aux_sym__case_item_last_repeat1;
	v->a[99402] = actions(4434);
	v->a[99403] = 2;
	v->a[99404] = sym__concat;
	v->a[99405] = aux_sym_concatenation_token1;
	v->a[99406] = 5;
	v->a[99407] = actions(1094);
	v->a[99408] = 1;
	v->a[99409] = sym_comment;
	v->a[99410] = actions(4462);
	v->a[99411] = 1;
	v->a[99412] = sym_simple_heredoc_body;
	v->a[99413] = actions(4464);
	v->a[99414] = 1;
	v->a[99415] = sym__heredoc_body_beginning;
	v->a[99416] = state(2439);
	v->a[99417] = 1;
	v->a[99418] = sym_heredoc_body;
	v->a[99419] = state(1513);
	small_parse_table_4971(v);
}

void	small_parse_table_4971(t_small_parse_table_array *v)
{
	v->a[99420] = 2;
	v->a[99421] = sym__heredoc_body;
	v->a[99422] = sym__simple_heredoc_body;
	v->a[99423] = 5;
	v->a[99424] = actions(1094);
	v->a[99425] = 1;
	v->a[99426] = sym_comment;
	v->a[99427] = actions(4464);
	v->a[99428] = 1;
	v->a[99429] = sym__heredoc_body_beginning;
	v->a[99430] = actions(4466);
	v->a[99431] = 1;
	v->a[99432] = sym_simple_heredoc_body;
	v->a[99433] = state(2281);
	v->a[99434] = 1;
	v->a[99435] = sym_heredoc_body;
	v->a[99436] = state(1817);
	v->a[99437] = 2;
	v->a[99438] = sym__heredoc_body;
	v->a[99439] = sym__simple_heredoc_body;
	small_parse_table_4972(v);
}

void	small_parse_table_4972(t_small_parse_table_array *v)
{
	v->a[99440] = 2;
	v->a[99441] = actions(1094);
	v->a[99442] = 1;
	v->a[99443] = sym_comment;
	v->a[99444] = actions(1141);
	v->a[99445] = 5;
	v->a[99446] = sym__concat;
	v->a[99447] = anon_sym_PIPE;
	v->a[99448] = anon_sym_RPAREN;
	v->a[99449] = anon_sym_RBRACE;
	v->a[99450] = aux_sym_concatenation_token1;
	v->a[99451] = 2;
	v->a[99452] = actions(1094);
	v->a[99453] = 1;
	v->a[99454] = sym_comment;
	v->a[99455] = actions(1076);
	v->a[99456] = 5;
	v->a[99457] = sym__concat;
	v->a[99458] = anon_sym_PIPE;
	v->a[99459] = anon_sym_RPAREN;
	small_parse_table_4973(v);
}

void	small_parse_table_4973(t_small_parse_table_array *v)
{
	v->a[99460] = anon_sym_RBRACE;
	v->a[99461] = aux_sym_concatenation_token1;
	v->a[99462] = 5;
	v->a[99463] = actions(1094);
	v->a[99464] = 1;
	v->a[99465] = sym_comment;
	v->a[99466] = actions(4464);
	v->a[99467] = 1;
	v->a[99468] = sym__heredoc_body_beginning;
	v->a[99469] = actions(4466);
	v->a[99470] = 1;
	v->a[99471] = sym_simple_heredoc_body;
	v->a[99472] = state(2281);
	v->a[99473] = 1;
	v->a[99474] = sym_heredoc_body;
	v->a[99475] = state(1805);
	v->a[99476] = 2;
	v->a[99477] = sym__heredoc_body;
	v->a[99478] = sym__simple_heredoc_body;
	v->a[99479] = 6;
	small_parse_table_4974(v);
}

void	small_parse_table_4974(t_small_parse_table_array *v)
{
	v->a[99480] = actions(1094);
	v->a[99481] = 1;
	v->a[99482] = sym_comment;
	v->a[99483] = actions(4464);
	v->a[99484] = 1;
	v->a[99485] = sym__heredoc_body_beginning;
	v->a[99486] = actions(4466);
	v->a[99487] = 1;
	v->a[99488] = sym_simple_heredoc_body;
	v->a[99489] = state(1769);
	v->a[99490] = 1;
	v->a[99491] = sym__heredoc_body;
	v->a[99492] = state(1770);
	v->a[99493] = 1;
	v->a[99494] = sym__simple_heredoc_body;
	v->a[99495] = state(2281);
	v->a[99496] = 1;
	v->a[99497] = sym_heredoc_body;
	v->a[99498] = 6;
	v->a[99499] = actions(1094);
	small_parse_table_4975(v);
}

/* EOF small_parse_table_994.c */
