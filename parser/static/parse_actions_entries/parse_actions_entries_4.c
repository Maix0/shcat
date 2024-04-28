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
	v->a[400] = shift(4610);
	v->a[401] = entry(1, false);
	v->a[402] = shift(5564);
	v->a[403] = entry(1, false);
	v->a[404] = shift(813);
	v->a[405] = entry(1, false);
	v->a[406] = shift(6729);
	v->a[407] = entry(1, false);
	v->a[408] = shift(7389);
	v->a[409] = entry(1, true);
	v->a[410] = shift(671);
	v->a[411] = entry(1, false);
	v->a[412] = shift(3622);
	v->a[413] = entry(1, true);
	v->a[414] = shift(3622);
	v->a[415] = entry(1, false);
	v->a[416] = shift(155);
	v->a[417] = entry(1, false);
	v->a[418] = shift(430);
	v->a[419] = entry(1, false);
	parse_actions_entries_21(v);
}

void	parse_actions_entries_21(t_parse_actions_entries_array *v)
{
	v->a[420] = shift(422);
	v->a[421] = entry(1, false);
	v->a[422] = shift(4122);
	v->a[423] = entry(1, false);
	v->a[424] = reduce(sym_last_case_item, 4, 0, 112);
	v->a[425] = entry(1, false);
	v->a[426] = shift(5247);
	v->a[427] = entry(1, true);
	v->a[428] = shift(5280);
	v->a[429] = entry(1, true);
	v->a[430] = shift(5295);
	v->a[431] = entry(1, false);
	v->a[432] = shift(6970);
	v->a[433] = entry(1, true);
	v->a[434] = shift(81);
	v->a[435] = entry(1, false);
	v->a[436] = shift(656);
	v->a[437] = entry(1, false);
	v->a[438] = shift(9);
	v->a[439] = entry(1, true);
	parse_actions_entries_22(v);
}

void	parse_actions_entries_22(t_parse_actions_entries_array *v)
{
	v->a[440] = shift(1830);
	v->a[441] = entry(1, false);
	v->a[442] = shift(548);
	v->a[443] = entry(1, false);
	v->a[444] = shift(590);
	v->a[445] = entry(1, true);
	v->a[446] = shift(604);
	v->a[447] = entry(1, true);
	v->a[448] = shift(3775);
	v->a[449] = entry(1, true);
	v->a[450] = shift(3857);
	v->a[451] = entry(1, true);
	v->a[452] = shift(3855);
	v->a[453] = entry(1, false);
	v->a[454] = shift(6024);
	v->a[455] = entry(1, false);
	v->a[456] = shift(824);
	v->a[457] = entry(1, true);
	v->a[458] = shift(5840);
	v->a[459] = entry(1, true);
	parse_actions_entries_23(v);
}

void	parse_actions_entries_23(t_parse_actions_entries_array *v)
{
	v->a[460] = shift(815);
	v->a[461] = entry(1, false);
	v->a[462] = shift(884);
	v->a[463] = entry(1, false);
	v->a[464] = shift(6269);
	v->a[465] = entry(1, true);
	v->a[466] = shift(4740);
	v->a[467] = entry(1, false);
	v->a[468] = shift(388);
	v->a[469] = entry(1, true);
	v->a[470] = shift(387);
	v->a[471] = entry(1, true);
	v->a[472] = shift(386);
	v->a[473] = entry(1, true);
	v->a[474] = shift(195);
	v->a[475] = entry(1, true);
	v->a[476] = shift(6156);
	v->a[477] = entry(1, true);
	v->a[478] = shift(6547);
	v->a[479] = entry(1, true);
	parse_actions_entries_24(v);
}

void	parse_actions_entries_24(t_parse_actions_entries_array *v)
{
	v->a[480] = shift(819);
	v->a[481] = entry(1, true);
	v->a[482] = shift(7646);
	v->a[483] = entry(1, false);
	v->a[484] = reduce(sym_last_case_item, 3, 0, 46);
	v->a[485] = entry(1, false);
	v->a[486] = shift(5162);
	v->a[487] = entry(1, true);
	v->a[488] = shift(5321);
	v->a[489] = entry(1, false);
	v->a[490] = reduce(sym_last_case_item, 3, 0, 83);
	v->a[491] = entry(1, false);
	v->a[492] = shift(5143);
	v->a[493] = entry(1, true);
	v->a[494] = shift(5314);
	v->a[495] = entry(1, true);
	v->a[496] = shift(5313);
	v->a[497] = entry(1, false);
	v->a[498] = shift(5144);
	v->a[499] = entry(1, true);
	parse_actions_entries_25(v);
}

/* EOF parse_actions_entries_4.c */
