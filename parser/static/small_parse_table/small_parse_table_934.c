/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_934.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4670(t_small_parse_table_array *v)
{
	v->a[93400] = actions(4394);
	v->a[93401] = 3;
	v->a[93402] = anon_sym_SEMI_SEMI;
	v->a[93403] = anon_sym_AMP;
	v->a[93404] = anon_sym_SEMI;
	v->a[93405] = 5;
	v->a[93406] = actions(1404);
	v->a[93407] = 1;
	v->a[93408] = sym_comment;
	v->a[93409] = actions(4206);
	v->a[93410] = 1;
	v->a[93411] = sym_simple_heredoc_body;
	v->a[93412] = actions(4208);
	v->a[93413] = 1;
	v->a[93414] = sym__heredoc_body_beginning;
	v->a[93415] = state(2151);
	v->a[93416] = 1;
	v->a[93417] = sym_heredoc_body;
	v->a[93418] = state(1108);
	v->a[93419] = 2;
	small_parse_table_4671(v);
}

void	small_parse_table_4671(t_small_parse_table_array *v)
{
	v->a[93420] = sym__heredoc_body;
	v->a[93421] = sym__simple_heredoc_body;
	v->a[93422] = 6;
	v->a[93423] = actions(1404);
	v->a[93424] = 1;
	v->a[93425] = sym_comment;
	v->a[93426] = actions(4206);
	v->a[93427] = 1;
	v->a[93428] = sym_simple_heredoc_body;
	v->a[93429] = actions(4208);
	v->a[93430] = 1;
	v->a[93431] = sym__heredoc_body_beginning;
	v->a[93432] = state(1110);
	v->a[93433] = 1;
	v->a[93434] = sym__simple_heredoc_body;
	v->a[93435] = state(1111);
	v->a[93436] = 1;
	v->a[93437] = sym__heredoc_body;
	v->a[93438] = state(2151);
	v->a[93439] = 1;
	small_parse_table_4672(v);
}

void	small_parse_table_4672(t_small_parse_table_array *v)
{
	v->a[93440] = sym_heredoc_body;
	v->a[93441] = 4;
	v->a[93442] = actions(3);
	v->a[93443] = 1;
	v->a[93444] = sym_comment;
	v->a[93445] = actions(4113);
	v->a[93446] = 1;
	v->a[93447] = anon_sym_in;
	v->a[93448] = actions(4117);
	v->a[93449] = 1;
	v->a[93450] = aux_sym_heredoc_redirect_token1;
	v->a[93451] = actions(4115);
	v->a[93452] = 3;
	v->a[93453] = anon_sym_SEMI_SEMI;
	v->a[93454] = anon_sym_AMP;
	v->a[93455] = anon_sym_SEMI;
	v->a[93456] = 5;
	v->a[93457] = actions(1404);
	v->a[93458] = 1;
	v->a[93459] = sym_comment;
	small_parse_table_4673(v);
}

void	small_parse_table_4673(t_small_parse_table_array *v)
{
	v->a[93460] = actions(4398);
	v->a[93461] = 1;
	v->a[93462] = anon_sym_DOLLAR_LBRACE;
	v->a[93463] = actions(4400);
	v->a[93464] = 1;
	v->a[93465] = anon_sym_DOLLAR_LPAREN;
	v->a[93466] = actions(4402);
	v->a[93467] = 1;
	v->a[93468] = anon_sym_BQUOTE;
	v->a[93469] = state(836);
	v->a[93470] = 2;
	v->a[93471] = sym_expansion;
	v->a[93472] = sym_command_substitution;
	v->a[93473] = 4;
	v->a[93474] = actions(3);
	v->a[93475] = 1;
	v->a[93476] = sym_comment;
	v->a[93477] = actions(4156);
	v->a[93478] = 1;
	v->a[93479] = anon_sym_in;
	small_parse_table_4674(v);
}

void	small_parse_table_4674(t_small_parse_table_array *v)
{
	v->a[93480] = actions(4160);
	v->a[93481] = 1;
	v->a[93482] = aux_sym_heredoc_redirect_token1;
	v->a[93483] = actions(4158);
	v->a[93484] = 3;
	v->a[93485] = anon_sym_SEMI_SEMI;
	v->a[93486] = anon_sym_AMP;
	v->a[93487] = anon_sym_SEMI;
	v->a[93488] = 2;
	v->a[93489] = actions(1404);
	v->a[93490] = 1;
	v->a[93491] = sym_comment;
	v->a[93492] = actions(1241);
	v->a[93493] = 5;
	v->a[93494] = sym__concat;
	v->a[93495] = anon_sym_PIPE;
	v->a[93496] = anon_sym_RPAREN;
	v->a[93497] = anon_sym_RBRACE;
	v->a[93498] = aux_sym_concatenation_token1;
	v->a[93499] = 6;
	small_parse_table_4675(v);
}

/* EOF small_parse_table_934.c */
