/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_actions_entries_24.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_actions_entries.h"

void	parse_actions_entries_120(t_parse_actions_entries_array *v)
{
	v->a[2400] = entry(1, true);
	v->a[2401] = reduce(sym_case_item, 6, 0, 73);
	v->a[2402] = entry(1, true);
	v->a[2403] = shift(652);
	v->a[2404] = entry(1, false);
	v->a[2405] = shift(1056);
	v->a[2406] = entry(1, false);
	v->a[2407] = shift(647);
	v->a[2408] = entry(1, false);
	v->a[2409] = shift(1057);
	v->a[2410] = entry(1, false);
	v->a[2411] = shift(1449);
	v->a[2412] = entry(1, false);
	v->a[2413] = shift(1051);
	v->a[2414] = entry(1, false);
	v->a[2415] = shift(1292);
	v->a[2416] = entry(1, false);
	v->a[2417] = shift(1081);
	v->a[2418] = entry(1, false);
	v->a[2419] = shift(681);
	return (parse_actions_entries_121(v));
}

void	parse_actions_entries_121(t_parse_actions_entries_array *v)
{
	v->a[2420] = entry(1, false);
	v->a[2421] = shift(1047);
	v->a[2422] = entry(1, false);
	v->a[2423] = shift(923);
	v->a[2424] = entry(1, true);
	v->a[2425] = shift(654);
	v->a[2426] = entry(1, false);
	v->a[2427] = reduce(sym_case_item, 6, 0, 74);
	v->a[2428] = entry(1, false);
	v->a[2429] = reduce(sym__case_item_last, 6, 0, 74);
	v->a[2430] = entry(1, true);
	v->a[2431] = reduce(sym_case_item, 6, 0, 74);
	v->a[2432] = entry(1, true);
	v->a[2433] = shift(333);
	v->a[2434] = entry(1, true);
	v->a[2435] = shift(1290);
	v->a[2436] = entry(1, false);
	v->a[2437] = shift(1045);
	v->a[2438] = entry(1, false);
	v->a[2439] = shift(928);
	return (parse_actions_entries_122(v));
}

void	parse_actions_entries_122(t_parse_actions_entries_array *v)
{
	v->a[2440] = entry(1, false);
	v->a[2441] = shift(976);
	v->a[2442] = entry(1, false);
	v->a[2443] = shift(492);
	v->a[2444] = entry(1, false);
	v->a[2445] = shift(1049);
	v->a[2446] = entry(1, false);
	v->a[2447] = shift(329);
	v->a[2448] = entry(1, true);
	v->a[2449] = shift(932);
	v->a[2450] = entry(1, false);
	v->a[2451] = shift(1044);
	v->a[2452] = entry(1, false);
	v->a[2453] = shift(617);
	v->a[2454] = entry(2, false);
	v->a[2455] = reduce(aux_sym_pipeline_repeat1, 2, 0, 0);
	v->a[2456] = shift_repeat(120);
	v->a[2457] = entry(1, false);
	v->a[2458] = shift(1052);
	v->a[2459] = entry(1, false);
	return (parse_actions_entries_123(v));
}

void	parse_actions_entries_123(t_parse_actions_entries_array *v)
{
	v->a[2460] = shift(335);
	v->a[2461] = entry(1, true);
	v->a[2462] = shift(1297);
	v->a[2463] = entry(1, true);
	v->a[2464] = shift(434);
	v->a[2465] = entry(1, false);
	v->a[2466] = shift(1042);
	v->a[2467] = entry(1, false);
	v->a[2468] = shift(627);
	v->a[2469] = entry(1, false);
	v->a[2470] = reduce(sym_case_item, 5, 0, 66);
	v->a[2471] = entry(1, false);
	v->a[2472] = reduce(sym__case_item_last, 5, 0, 66);
	v->a[2473] = entry(1, true);
	v->a[2474] = reduce(sym_case_item, 5, 0, 66);
	v->a[2475] = entry(1, false);
	v->a[2476] = reduce(sym_case_item, 5, 0, 67);
	v->a[2477] = entry(1, false);
	v->a[2478] = reduce(sym__case_item_last, 5, 0, 67);
	v->a[2479] = entry(1, true);
	return (parse_actions_entries_124(v));
}

void	parse_actions_entries_124(t_parse_actions_entries_array *v)
{
	v->a[2480] = reduce(sym_case_item, 5, 0, 67);
	v->a[2481] = entry(1, false);
	v->a[2482] = shift(1036);
	v->a[2483] = entry(1, false);
	v->a[2484] = shift(1524);
	v->a[2485] = entry(1, false);
	v->a[2486] = shift(1041);
	v->a[2487] = entry(1, false);
	v->a[2488] = shift(483);
	v->a[2489] = entry(1, true);
	v->a[2490] = shift(1528);
	v->a[2491] = entry(1, false);
	v->a[2492] = shift(1034);
	v->a[2493] = entry(1, false);
	v->a[2494] = shift(1529);
	v->a[2495] = entry(1, false);
	v->a[2496] = shift(1016);
	v->a[2497] = entry(1, false);
	v->a[2498] = shift(834);
	v->a[2499] = entry(1, false);
	return (parse_actions_entries_125(v));
}

/* EOF parse_actions_entries_24.c */
