/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_actions_entries_4.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_actions_entries.h"

void	parse_actions_entries_20(t_parse_actions_entries_array *v)
{
	v->a[400] = shift(2813);
	v->a[401] = entry(1, false);
	v->a[402] = shift(2811);
	v->a[403] = entry(1, false);
	v->a[404] = shift(2847);
	v->a[405] = entry(1, false);
	v->a[406] = shift(2806);
	v->a[407] = entry(1, false);
	v->a[408] = shift(2810);
	v->a[409] = entry(1, false);
	v->a[410] = shift(2808);
	v->a[411] = entry(1, false);
	v->a[412] = shift(2816);
	v->a[413] = entry(1, false);
	v->a[414] = shift(2826);
	v->a[415] = entry(1, false);
	v->a[416] = reduce(sym_elif_clause, 3, 0, 0);
	v->a[417] = entry(1, false);
	v->a[418] = reduce(sym_elif_clause, 4, 0, 0);
	v->a[419] = entry(1, false);
	parse_actions_entries_21(v);
}

void	parse_actions_entries_21(t_parse_actions_entries_array *v)
{
	v->a[420] = shift(694);
	v->a[421] = entry(1, true);
	v->a[422] = shift(3343);
	v->a[423] = entry(1, false);
	v->a[424] = shift(3900);
	v->a[425] = entry(1, false);
	v->a[426] = shift(558);
	v->a[427] = entry(1, false);
	v->a[428] = shift(276);
	v->a[429] = entry(1, false);
	v->a[430] = shift(349);
	v->a[431] = entry(1, false);
	v->a[432] = shift(2172);
	v->a[433] = entry(1, true);
	v->a[434] = shift(2172);
	v->a[435] = entry(1, true);
	v->a[436] = shift(413);
	v->a[437] = entry(1, false);
	v->a[438] = shift(698);
	v->a[439] = entry(1, true);
	parse_actions_entries_22(v);
}

void	parse_actions_entries_22(t_parse_actions_entries_array *v)
{
	v->a[440] = shift(702);
	v->a[441] = entry(1, true);
	v->a[442] = shift(3202);
	v->a[443] = entry(1, true);
	v->a[444] = shift(3839);
	v->a[445] = entry(1, false);
	v->a[446] = shift(173);
	v->a[447] = entry(1, true);
	v->a[448] = shift(3297);
	v->a[449] = entry(1, false);
	v->a[450] = shift(139);
	v->a[451] = entry(1, false);
	v->a[452] = shift(104);
	v->a[453] = entry(1, true);
	v->a[454] = shift(3339);
	v->a[455] = entry(1, true);
	v->a[456] = shift(3330);
	v->a[457] = entry(1, true);
	v->a[458] = shift(3296);
	v->a[459] = entry(1, true);
	parse_actions_entries_23(v);
}

void	parse_actions_entries_23(t_parse_actions_entries_array *v)
{
	v->a[460] = shift(3275);
	v->a[461] = entry(1, false);
	v->a[462] = shift(187);
	v->a[463] = entry(1, true);
	v->a[464] = shift(3286);
	v->a[465] = entry(1, true);
	v->a[466] = shift(3331);
	v->a[467] = entry(1, false);
	v->a[468] = shift(773);
	v->a[469] = entry(1, false);
	v->a[470] = shift(3959);
	v->a[471] = entry(1, false);
	v->a[472] = shift(608);
	v->a[473] = entry(1, false);
	v->a[474] = shift(343);
	v->a[475] = entry(1, false);
	v->a[476] = shift(405);
	v->a[477] = entry(1, false);
	v->a[478] = shift(8);
	v->a[479] = entry(1, true);
	parse_actions_entries_24(v);
}

void	parse_actions_entries_24(t_parse_actions_entries_array *v)
{
	v->a[480] = shift(2460);
	v->a[481] = entry(1, true);
	v->a[482] = shift(2418);
	v->a[483] = entry(1, false);
	v->a[484] = shift(2);
	v->a[485] = entry(1, true);
	v->a[486] = shift(2207);
	v->a[487] = entry(1, false);
	v->a[488] = shift(2223);
	v->a[489] = entry(1, false);
	v->a[490] = shift(6);
	v->a[491] = entry(1, false);
	v->a[492] = shift(2218);
	v->a[493] = entry(1, true);
	v->a[494] = shift(2198);
	v->a[495] = entry(1, false);
	v->a[496] = shift(2341);
	v->a[497] = entry(1, true);
	v->a[498] = shift(2173);
	v->a[499] = entry(1, false);
	parse_actions_entries_25(v);
}

/* EOF parse_actions_entries_4.c */
