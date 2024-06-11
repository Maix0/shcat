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
	v->a[2400] = entry(1, false);
	v->a[2401] = shift(994);
	v->a[2402] = entry(1, false);
	v->a[2403] = shift(914);
	v->a[2404] = entry(1, true);
	v->a[2405] = shift(973);
	v->a[2406] = entry(1, false);
	v->a[2407] = shift(977);
	v->a[2408] = entry(1, false);
	v->a[2409] = shift(978);
	v->a[2410] = entry(1, false);
	v->a[2411] = shift(918);
	v->a[2412] = entry(1, true);
	v->a[2413] = shift(917);
	v->a[2414] = entry(1, false);
	v->a[2415] = shift(916);
	v->a[2416] = entry(1, false);
	v->a[2417] = shift(915);
	v->a[2418] = entry(1, false);
	v->a[2419] = shift(922);
	parse_actions_entries_121(v);
}

void	parse_actions_entries_121(t_parse_actions_entries_array *v)
{
	v->a[2420] = entry(1, true);
	v->a[2421] = shift(912);
	v->a[2422] = entry(1, false);
	v->a[2423] = shift(920);
	v->a[2424] = entry(1, false);
	v->a[2425] = shift(919);
	v->a[2426] = entry(1, false);
	v->a[2427] = shift(926);
	v->a[2428] = entry(1, true);
	v->a[2429] = shift(925);
	v->a[2430] = entry(1, false);
	v->a[2431] = shift(924);
	v->a[2432] = entry(1, false);
	v->a[2433] = shift(923);
	v->a[2434] = entry(1, false);
	v->a[2435] = shift(930);
	v->a[2436] = entry(1, true);
	v->a[2437] = shift(929);
	v->a[2438] = entry(1, false);
	v->a[2439] = shift(928);
	parse_actions_entries_122(v);
}

void	parse_actions_entries_122(t_parse_actions_entries_array *v)
{
	v->a[2440] = entry(1, false);
	v->a[2441] = shift(927);
	v->a[2442] = entry(1, false);
	v->a[2443] = shift(830);
	v->a[2444] = entry(1, true);
	v->a[2445] = shift(829);
	v->a[2446] = entry(1, false);
	v->a[2447] = shift(827);
	v->a[2448] = entry(1, false);
	v->a[2449] = shift(824);
	v->a[2450] = entry(1, false);
	v->a[2451] = shift(871);
	v->a[2452] = entry(1, true);
	v->a[2453] = shift(870);
	v->a[2454] = entry(1, false);
	v->a[2455] = shift(869);
	v->a[2456] = entry(1, false);
	v->a[2457] = shift(868);
	v->a[2458] = entry(2, false);
	v->a[2459] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	parse_actions_entries_123(v);
}

void	parse_actions_entries_123(t_parse_actions_entries_array *v)
{
	v->a[2460] = shift_repeat(1654);
	v->a[2461] = entry(2, true);
	v->a[2462] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[2463] = shift_repeat(1654);
	v->a[2464] = entry(1, false);
	v->a[2465] = shift(875);
	v->a[2466] = entry(1, true);
	v->a[2467] = shift(874);
	v->a[2468] = entry(1, false);
	v->a[2469] = shift(873);
	v->a[2470] = entry(1, false);
	v->a[2471] = shift(872);
	v->a[2472] = entry(1, false);
	v->a[2473] = shift(879);
	v->a[2474] = entry(1, true);
	v->a[2475] = shift(878);
	v->a[2476] = entry(1, false);
	v->a[2477] = shift(877);
	v->a[2478] = entry(1, false);
	v->a[2479] = shift(876);
	parse_actions_entries_124(v);
}

void	parse_actions_entries_124(t_parse_actions_entries_array *v)
{
	v->a[2480] = entry(1, false);
	v->a[2481] = shift(884);
	v->a[2482] = entry(1, true);
	v->a[2483] = shift(882);
	v->a[2484] = entry(1, false);
	v->a[2485] = shift(881);
	v->a[2486] = entry(1, false);
	v->a[2487] = shift(880);
	v->a[2488] = entry(1, false);
	v->a[2489] = shift(889);
	v->a[2490] = entry(1, true);
	v->a[2491] = shift(888);
	v->a[2492] = entry(1, false);
	v->a[2493] = shift(886);
	v->a[2494] = entry(1, false);
	v->a[2495] = shift(885);
	v->a[2496] = entry(1, false);
	v->a[2497] = shift(894);
	v->a[2498] = entry(1, true);
	v->a[2499] = shift(893);
	parse_actions_entries_125(v);
}

/* EOF parse_actions_entries_24.c */
