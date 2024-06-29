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
	v->a[400] = shift(416);
	v->a[401] = entry(1, false);
	v->a[402] = shift(482);
	v->a[403] = entry(1, false);
	v->a[404] = shift(480);
	v->a[405] = entry(1, true);
	v->a[406] = shift(480);
	v->a[407] = entry(1, false);
	v->a[408] = shift(589);
	v->a[409] = entry(1, false);
	v->a[410] = shift(590);
	v->a[411] = entry(1, true);
	v->a[412] = shift(590);
	v->a[413] = entry(1, false);
	v->a[414] = shift(534);
	v->a[415] = entry(1, false);
	v->a[416] = shift(533);
	v->a[417] = entry(1, true);
	v->a[418] = shift(533);
	v->a[419] = entry(1, false);
	parse_actions_entries_21(v);
}

void	parse_actions_entries_21(t_parse_actions_entries_array *v)
{
	v->a[420] = shift(655);
	v->a[421] = entry(1, false);
	v->a[422] = shift(650);
	v->a[423] = entry(1, true);
	v->a[424] = shift(650);
	v->a[425] = entry(1, false);
	v->a[426] = shift(629);
	v->a[427] = entry(1, false);
	v->a[428] = shift(630);
	v->a[429] = entry(1, true);
	v->a[430] = shift(630);
	v->a[431] = entry(1, false);
	v->a[432] = shift(616);
	v->a[433] = entry(1, false);
	v->a[434] = shift(617);
	v->a[435] = entry(1, true);
	v->a[436] = shift(617);
	v->a[437] = entry(1, false);
	v->a[438] = shift(440);
	v->a[439] = entry(1, false);
	parse_actions_entries_22(v);
}

void	parse_actions_entries_22(t_parse_actions_entries_array *v)
{
	v->a[440] = shift(441);
	v->a[441] = entry(1, true);
	v->a[442] = shift(441);
	v->a[443] = entry(1, false);
	v->a[444] = shift(562);
	v->a[445] = entry(1, false);
	v->a[446] = shift(561);
	v->a[447] = entry(1, true);
	v->a[448] = shift(561);
	v->a[449] = entry(1, false);
	v->a[450] = shift(426);
	v->a[451] = entry(1, false);
	v->a[452] = shift(425);
	v->a[453] = entry(1, true);
	v->a[454] = shift(425);
	v->a[455] = entry(1, true);
	v->a[456] = reduce(sym_command, 2, 0, 17);
	v->a[457] = entry(1, false);
	v->a[458] = shift(333);
	v->a[459] = entry(1, false);
	parse_actions_entries_23(v);
}

void	parse_actions_entries_23(t_parse_actions_entries_array *v)
{
	v->a[460] = reduce(sym_command, 2, 0, 17);
	v->a[461] = entry(1, false);
	v->a[462] = shift(888);
	v->a[463] = entry(1, false);
	v->a[464] = shift(1834);
	v->a[465] = entry(1, false);
	v->a[466] = shift(1835);
	v->a[467] = entry(1, false);
	v->a[468] = shift(1802);
	v->a[469] = entry(1, false);
	v->a[470] = shift(61);
	v->a[471] = entry(1, false);
	v->a[472] = shift(60);
	v->a[473] = entry(1, true);
	v->a[474] = shift(715);
	v->a[475] = entry(1, false);
	v->a[476] = shift(334);
	v->a[477] = entry(1, false);
	v->a[478] = shift(918);
	v->a[479] = entry(1, false);
	parse_actions_entries_24(v);
}

void	parse_actions_entries_24(t_parse_actions_entries_array *v)
{
	v->a[480] = shift(1902);
	v->a[481] = entry(1, false);
	v->a[482] = shift(1903);
	v->a[483] = entry(1, false);
	v->a[484] = shift(1783);
	v->a[485] = entry(1, false);
	v->a[486] = shift(57);
	v->a[487] = entry(1, false);
	v->a[488] = shift(56);
	v->a[489] = entry(1, true);
	v->a[490] = shift(717);
	v->a[491] = entry(1, true);
	v->a[492] = reduce(sym_command, 1, 0, 4);
	v->a[493] = entry(1, false);
	v->a[494] = reduce(sym_command, 1, 0, 4);
	v->a[495] = entry(1, false);
	v->a[496] = shift(385);
	v->a[497] = entry(1, false);
	v->a[498] = shift(920);
	v->a[499] = entry(1, false);
	parse_actions_entries_25(v);
}

/* EOF parse_actions_entries_4.c */
