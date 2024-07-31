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
	v->a[2400] = shift(130);
	v->a[2401] = entry(1, true);
	v->a[2402] = shift(128);
	v->a[2403] = entry(1, true);
	v->a[2404] = shift(1186);
	v->a[2405] = entry(1, true);
	v->a[2406] = shift(1758);
	v->a[2407] = entry(1, true);
	v->a[2408] = shift(132);
	v->a[2409] = entry(1, true);
	v->a[2410] = shift(1132);
	v->a[2411] = entry(2, false);
	v->a[2412] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2413] = shift_repeat(1179);
	v->a[2414] = entry(2, true);
	v->a[2415] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2416] = shift_repeat(1179);
	v->a[2417] = entry(1, true);
	v->a[2418] = shift(126);
	v->a[2419] = entry(1, true);
	parse_actions_entries_121(v);
}

void	parse_actions_entries_121(t_parse_actions_entries_array *v)
{
	v->a[2420] = shift(1133);
	v->a[2421] = entry(1, false);
	v->a[2422] = shift(122);
	v->a[2423] = entry(1, true);
	v->a[2424] = shift(125);
	v->a[2425] = entry(1, true);
	v->a[2426] = shift(1175);
	v->a[2427] = entry(1, false);
	v->a[2428] = shift(1481);
	v->a[2429] = entry(1, false);
	v->a[2430] = shift(454);
	v->a[2431] = entry(1, false);
	v->a[2432] = shift(1475);
	v->a[2433] = entry(1, false);
	v->a[2434] = shift(1483);
	v->a[2435] = entry(1, true);
	v->a[2436] = shift(1483);
	v->a[2437] = entry(1, false);
	v->a[2438] = shift(913);
	v->a[2439] = entry(1, false);
	parse_actions_entries_122(v);
}

void	parse_actions_entries_122(t_parse_actions_entries_array *v)
{
	v->a[2440] = shift(205);
	v->a[2441] = entry(1, false);
	v->a[2442] = shift(215);
	v->a[2443] = entry(1, false);
	v->a[2444] = shift(498);
	v->a[2445] = entry(1, false);
	v->a[2446] = shift(1500);
	v->a[2447] = entry(1, false);
	v->a[2448] = shift(413);
	v->a[2449] = entry(1, false);
	v->a[2450] = shift(895);
	v->a[2451] = entry(1, true);
	v->a[2452] = shift(1082);
	v->a[2453] = entry(1, false);
	v->a[2454] = shift(493);
	v->a[2455] = entry(1, false);
	v->a[2456] = shift(708);
	v->a[2457] = entry(1, false);
	v->a[2458] = shift(707);
	v->a[2459] = entry(1, false);
	parse_actions_entries_123(v);
}

void	parse_actions_entries_123(t_parse_actions_entries_array *v)
{
	v->a[2460] = shift(1557);
	v->a[2461] = entry(1, false);
	v->a[2462] = shift(1560);
	v->a[2463] = entry(1, true);
	v->a[2464] = shift(1560);
	v->a[2465] = entry(1, false);
	v->a[2466] = shift(464);
	v->a[2467] = entry(1, false);
	v->a[2468] = shift(393);
	v->a[2469] = entry(1, false);
	v->a[2470] = shift(476);
	v->a[2471] = entry(1, false);
	v->a[2472] = shift(1552);
	v->a[2473] = entry(1, false);
	v->a[2474] = shift(1501);
	v->a[2475] = entry(1, false);
	v->a[2476] = shift(1562);
	v->a[2477] = entry(1, false);
	v->a[2478] = shift(1505);
	v->a[2479] = entry(1, false);
	parse_actions_entries_124(v);
}

void	parse_actions_entries_124(t_parse_actions_entries_array *v)
{
	v->a[2480] = shift(1497);
	v->a[2481] = entry(1, false);
	v->a[2482] = shift(131);
	v->a[2483] = entry(1, false);
	v->a[2484] = shift(792);
	v->a[2485] = entry(1, false);
	v->a[2486] = shift(448);
	v->a[2487] = entry(1, false);
	v->a[2488] = shift(790);
	v->a[2489] = entry(1, false);
	v->a[2490] = shift(1578);
	v->a[2491] = entry(1, false);
	v->a[2492] = shift(1583);
	v->a[2493] = entry(1, false);
	v->a[2494] = shift(368);
	v->a[2495] = entry(1, false);
	v->a[2496] = shift(666);
	v->a[2497] = entry(1, false);
	v->a[2498] = shift(687);
	v->a[2499] = entry(1, false);
	parse_actions_entries_125(v);
}

/* EOF parse_actions_entries_24.c */
