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
	v->a[400] = shift(477);
	v->a[401] = entry(1, false);
	v->a[402] = shift(540);
	v->a[403] = entry(1, false);
	v->a[404] = shift(541);
	v->a[405] = entry(1, true);
	v->a[406] = shift(541);
	v->a[407] = entry(1, false);
	v->a[408] = shift(604);
	v->a[409] = entry(1, false);
	v->a[410] = shift(601);
	v->a[411] = entry(1, true);
	v->a[412] = shift(601);
	v->a[413] = entry(1, false);
	v->a[414] = shift(517);
	v->a[415] = entry(1, false);
	v->a[416] = shift(523);
	v->a[417] = entry(1, true);
	v->a[418] = shift(523);
	v->a[419] = entry(1, false);
	parse_actions_entries_21(v);
}

void	parse_actions_entries_21(t_parse_actions_entries_array *v)
{
	v->a[420] = shift(543);
	v->a[421] = entry(1, false);
	v->a[422] = shift(545);
	v->a[423] = entry(1, true);
	v->a[424] = shift(545);
	v->a[425] = entry(1, false);
	v->a[426] = shift(654);
	v->a[427] = entry(1, false);
	v->a[428] = shift(651);
	v->a[429] = entry(1, true);
	v->a[430] = shift(651);
	v->a[431] = entry(1, false);
	v->a[432] = shift(626);
	v->a[433] = entry(1, false);
	v->a[434] = shift(625);
	v->a[435] = entry(1, true);
	v->a[436] = shift(625);
	v->a[437] = entry(1, false);
	v->a[438] = shift(578);
	v->a[439] = entry(1, false);
	parse_actions_entries_22(v);
}

void	parse_actions_entries_22(t_parse_actions_entries_array *v)
{
	v->a[440] = shift(486);
	v->a[441] = entry(1, true);
	v->a[442] = shift(486);
	v->a[443] = entry(1, false);
	v->a[444] = shift(638);
	v->a[445] = entry(1, false);
	v->a[446] = shift(639);
	v->a[447] = entry(1, true);
	v->a[448] = shift(639);
	v->a[449] = entry(1, false);
	v->a[450] = shift(509);
	v->a[451] = entry(1, false);
	v->a[452] = shift(511);
	v->a[453] = entry(1, true);
	v->a[454] = shift(511);
	v->a[455] = entry(1, false);
	v->a[456] = shift(448);
	v->a[457] = entry(1, false);
	v->a[458] = reduce(sym_command, 1, 0, 4);
	v->a[459] = entry(1, false);
	parse_actions_entries_23(v);
}

void	parse_actions_entries_23(t_parse_actions_entries_array *v)
{
	v->a[460] = shift(837);
	v->a[461] = entry(1, false);
	v->a[462] = shift(1827);
	v->a[463] = entry(1, false);
	v->a[464] = shift(1823);
	v->a[465] = entry(1, false);
	v->a[466] = shift(1767);
	v->a[467] = entry(1, false);
	v->a[468] = shift(66);
	v->a[469] = entry(1, false);
	v->a[470] = shift(68);
	v->a[471] = entry(1, true);
	v->a[472] = reduce(sym_command, 1, 0, 4);
	v->a[473] = entry(1, true);
	v->a[474] = shift(717);
	v->a[475] = entry(1, false);
	v->a[476] = shift(476);
	v->a[477] = entry(1, false);
	v->a[478] = shift(853);
	v->a[479] = entry(1, false);
	parse_actions_entries_24(v);
}

void	parse_actions_entries_24(t_parse_actions_entries_array *v)
{
	v->a[480] = shift(1857);
	v->a[481] = entry(1, false);
	v->a[482] = shift(1851);
	v->a[483] = entry(1, false);
	v->a[484] = shift(1802);
	v->a[485] = entry(1, false);
	v->a[486] = shift(60);
	v->a[487] = entry(1, false);
	v->a[488] = shift(63);
	v->a[489] = entry(1, true);
	v->a[490] = shift(726);
	v->a[491] = entry(1, false);
	v->a[492] = reduce(sym_command, 2, 0, 17);
	v->a[493] = entry(1, true);
	v->a[494] = reduce(sym_command, 2, 0, 17);
	v->a[495] = entry(1, false);
	v->a[496] = shift(438);
	v->a[497] = entry(1, false);
	v->a[498] = shift(879);
	v->a[499] = entry(1, false);
	parse_actions_entries_25(v);
}

/* EOF parse_actions_entries_4.c */
