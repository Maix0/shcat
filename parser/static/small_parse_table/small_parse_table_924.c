/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_924.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4620(t_small_parse_table_array *v)
{
	v->a[92400] = 5;
	v->a[92401] = actions(1404);
	v->a[92402] = 1;
	v->a[92403] = sym_comment;
	v->a[92404] = actions(4259);
	v->a[92405] = 1;
	v->a[92406] = anon_sym_DOLLAR_LBRACE;
	v->a[92407] = actions(4261);
	v->a[92408] = 1;
	v->a[92409] = anon_sym_DOLLAR_LPAREN;
	v->a[92410] = actions(4263);
	v->a[92411] = 1;
	v->a[92412] = anon_sym_BQUOTE;
	v->a[92413] = state(521);
	v->a[92414] = 2;
	v->a[92415] = sym_expansion;
	v->a[92416] = sym_command_substitution;
	v->a[92417] = 5;
	v->a[92418] = actions(1404);
	v->a[92419] = 1;
	small_parse_table_4621(v);
}

void	small_parse_table_4621(t_small_parse_table_array *v)
{
	v->a[92420] = sym_comment;
	v->a[92421] = actions(4208);
	v->a[92422] = 1;
	v->a[92423] = sym__heredoc_body_beginning;
	v->a[92424] = actions(4265);
	v->a[92425] = 1;
	v->a[92426] = sym_simple_heredoc_body;
	v->a[92427] = state(2240);
	v->a[92428] = 1;
	v->a[92429] = sym_heredoc_body;
	v->a[92430] = state(1256);
	v->a[92431] = 2;
	v->a[92432] = sym__heredoc_body;
	v->a[92433] = sym__simple_heredoc_body;
	v->a[92434] = 6;
	v->a[92435] = actions(1404);
	v->a[92436] = 1;
	v->a[92437] = sym_comment;
	v->a[92438] = actions(4208);
	v->a[92439] = 1;
	small_parse_table_4622(v);
}

void	small_parse_table_4622(t_small_parse_table_array *v)
{
	v->a[92440] = sym__heredoc_body_beginning;
	v->a[92441] = actions(4265);
	v->a[92442] = 1;
	v->a[92443] = sym_simple_heredoc_body;
	v->a[92444] = state(1272);
	v->a[92445] = 1;
	v->a[92446] = sym__heredoc_body;
	v->a[92447] = state(1285);
	v->a[92448] = 1;
	v->a[92449] = sym__simple_heredoc_body;
	v->a[92450] = state(2240);
	v->a[92451] = 1;
	v->a[92452] = sym_heredoc_body;
	v->a[92453] = 5;
	v->a[92454] = actions(1404);
	v->a[92455] = 1;
	v->a[92456] = sym_comment;
	v->a[92457] = actions(4208);
	v->a[92458] = 1;
	v->a[92459] = sym__heredoc_body_beginning;
	small_parse_table_4623(v);
}

void	small_parse_table_4623(t_small_parse_table_array *v)
{
	v->a[92460] = actions(4216);
	v->a[92461] = 1;
	v->a[92462] = sym_simple_heredoc_body;
	v->a[92463] = state(2119);
	v->a[92464] = 1;
	v->a[92465] = sym_heredoc_body;
	v->a[92466] = state(1566);
	v->a[92467] = 2;
	v->a[92468] = sym__heredoc_body;
	v->a[92469] = sym__simple_heredoc_body;
	v->a[92470] = 6;
	v->a[92471] = actions(1404);
	v->a[92472] = 1;
	v->a[92473] = sym_comment;
	v->a[92474] = actions(4208);
	v->a[92475] = 1;
	v->a[92476] = sym__heredoc_body_beginning;
	v->a[92477] = actions(4265);
	v->a[92478] = 1;
	v->a[92479] = sym_simple_heredoc_body;
	small_parse_table_4624(v);
}

void	small_parse_table_4624(t_small_parse_table_array *v)
{
	v->a[92480] = state(1290);
	v->a[92481] = 1;
	v->a[92482] = sym__simple_heredoc_body;
	v->a[92483] = state(1291);
	v->a[92484] = 1;
	v->a[92485] = sym__heredoc_body;
	v->a[92486] = state(2240);
	v->a[92487] = 1;
	v->a[92488] = sym_heredoc_body;
	v->a[92489] = 5;
	v->a[92490] = actions(1404);
	v->a[92491] = 1;
	v->a[92492] = sym_comment;
	v->a[92493] = actions(4208);
	v->a[92494] = 1;
	v->a[92495] = sym__heredoc_body_beginning;
	v->a[92496] = actions(4265);
	v->a[92497] = 1;
	v->a[92498] = sym_simple_heredoc_body;
	v->a[92499] = state(2240);
	small_parse_table_4625(v);
}

/* EOF small_parse_table_924.c */
