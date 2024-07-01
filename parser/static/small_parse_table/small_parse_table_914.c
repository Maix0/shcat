/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_914.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4570(t_small_parse_table_array *v)
{
	v->a[91400] = 6;
	v->a[91401] = actions(870);
	v->a[91402] = 1;
	v->a[91403] = sym_comment;
	v->a[91404] = actions(4018);
	v->a[91405] = 1;
	v->a[91406] = sym__heredoc_body_beginning;
	v->a[91407] = actions(4022);
	v->a[91408] = 1;
	v->a[91409] = sym_simple_heredoc_body;
	v->a[91410] = state(1283);
	v->a[91411] = 1;
	v->a[91412] = sym__simple_heredoc_body;
	v->a[91413] = state(1284);
	v->a[91414] = 1;
	v->a[91415] = sym__heredoc_body;
	v->a[91416] = state(2258);
	v->a[91417] = 1;
	v->a[91418] = sym_heredoc_body;
	v->a[91419] = 5;
	small_parse_table_4571(v);
}

void	small_parse_table_4571(t_small_parse_table_array *v)
{
	v->a[91420] = actions(870);
	v->a[91421] = 1;
	v->a[91422] = sym_comment;
	v->a[91423] = actions(4018);
	v->a[91424] = 1;
	v->a[91425] = sym__heredoc_body_beginning;
	v->a[91426] = actions(4022);
	v->a[91427] = 1;
	v->a[91428] = sym_simple_heredoc_body;
	v->a[91429] = state(2258);
	v->a[91430] = 1;
	v->a[91431] = sym_heredoc_body;
	v->a[91432] = state(1266);
	v->a[91433] = 2;
	v->a[91434] = sym__heredoc_body;
	v->a[91435] = sym__simple_heredoc_body;
	v->a[91436] = 5;
	v->a[91437] = actions(870);
	v->a[91438] = 1;
	v->a[91439] = sym_comment;
	small_parse_table_4572(v);
}

void	small_parse_table_4572(t_small_parse_table_array *v)
{
	v->a[91440] = actions(4016);
	v->a[91441] = 1;
	v->a[91442] = sym_simple_heredoc_body;
	v->a[91443] = actions(4018);
	v->a[91444] = 1;
	v->a[91445] = sym__heredoc_body_beginning;
	v->a[91446] = state(2220);
	v->a[91447] = 1;
	v->a[91448] = sym_heredoc_body;
	v->a[91449] = state(1352);
	v->a[91450] = 2;
	v->a[91451] = sym__heredoc_body;
	v->a[91452] = sym__simple_heredoc_body;
	v->a[91453] = 2;
	v->a[91454] = actions(870);
	v->a[91455] = 1;
	v->a[91456] = sym_comment;
	v->a[91457] = actions(982);
	v->a[91458] = 5;
	v->a[91459] = sym__concat;
	small_parse_table_4573(v);
}

void	small_parse_table_4573(t_small_parse_table_array *v)
{
	v->a[91460] = anon_sym_PIPE;
	v->a[91461] = anon_sym_RPAREN;
	v->a[91462] = anon_sym_RBRACE;
	v->a[91463] = aux_sym_concatenation_token1;
	v->a[91464] = 2;
	v->a[91465] = actions(870);
	v->a[91466] = 1;
	v->a[91467] = sym_comment;
	v->a[91468] = actions(970);
	v->a[91469] = 5;
	v->a[91470] = sym__concat;
	v->a[91471] = anon_sym_PIPE;
	v->a[91472] = anon_sym_RPAREN;
	v->a[91473] = anon_sym_RBRACE;
	v->a[91474] = aux_sym_concatenation_token1;
	v->a[91475] = 6;
	v->a[91476] = actions(870);
	v->a[91477] = 1;
	v->a[91478] = sym_comment;
	v->a[91479] = actions(4018);
	small_parse_table_4574(v);
}

void	small_parse_table_4574(t_small_parse_table_array *v)
{
	v->a[91480] = 1;
	v->a[91481] = sym__heredoc_body_beginning;
	v->a[91482] = actions(4020);
	v->a[91483] = 1;
	v->a[91484] = sym_simple_heredoc_body;
	v->a[91485] = state(1716);
	v->a[91486] = 1;
	v->a[91487] = sym__heredoc_body;
	v->a[91488] = state(1717);
	v->a[91489] = 1;
	v->a[91490] = sym__simple_heredoc_body;
	v->a[91491] = state(2221);
	v->a[91492] = 1;
	v->a[91493] = sym_heredoc_body;
	v->a[91494] = 5;
	v->a[91495] = actions(870);
	v->a[91496] = 1;
	v->a[91497] = sym_comment;
	v->a[91498] = actions(4018);
	v->a[91499] = 1;
	small_parse_table_4575(v);
}

/* EOF small_parse_table_914.c */
