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
	v->a[2400] = shift(1298);
	v->a[2401] = entry(1, false);
	v->a[2402] = shift(1260);
	v->a[2403] = entry(1, false);
	v->a[2404] = shift(438);
	v->a[2405] = entry(1, true);
	v->a[2406] = shift(3955);
	v->a[2407] = entry(1, true);
	v->a[2408] = shift(1298);
	v->a[2409] = entry(1, false);
	v->a[2410] = shift(2067);
	v->a[2411] = entry(1, false);
	v->a[2412] = shift(2015);
	v->a[2413] = entry(1, true);
	v->a[2414] = shift(2067);
	v->a[2415] = entry(1, false);
	v->a[2416] = shift(2068);
	v->a[2417] = entry(1, true);
	v->a[2418] = shift(2068);
	v->a[2419] = entry(1, false);
	parse_actions_entries_121(v);
}

void	parse_actions_entries_121(t_parse_actions_entries_array *v)
{
	v->a[2420] = shift(439);
	v->a[2421] = entry(2, false);
	v->a[2422] = reduce(aux_sym_declaration_command_repeat1, 2, 0, 0);
	v->a[2423] = shift_repeat(1298);
	v->a[2424] = entry(2, false);
	v->a[2425] = reduce(aux_sym_declaration_command_repeat1, 2, 0, 0);
	v->a[2426] = shift_repeat(1260);
	v->a[2427] = entry(2, false);
	v->a[2428] = reduce(aux_sym_declaration_command_repeat1, 2, 0, 0);
	v->a[2429] = shift_repeat(439);
	v->a[2430] = entry(2, true);
	v->a[2431] = reduce(aux_sym_declaration_command_repeat1, 2, 0, 0);
	v->a[2432] = shift_repeat(3955);
	v->a[2433] = entry(2, true);
	v->a[2434] = reduce(aux_sym_declaration_command_repeat1, 2, 0, 0);
	v->a[2435] = shift_repeat(1298);
	v->a[2436] = entry(1, false);
	v->a[2437] = shift(2125);
	v->a[2438] = entry(1, true);
	v->a[2439] = shift(2125);
	parse_actions_entries_122(v);
}

void	parse_actions_entries_122(t_parse_actions_entries_array *v)
{
	v->a[2440] = entry(1, false);
	v->a[2441] = shift(2313);
	v->a[2442] = entry(1, false);
	v->a[2443] = shift(2149);
	v->a[2444] = entry(1, true);
	v->a[2445] = shift(2313);
	v->a[2446] = entry(1, false);
	v->a[2447] = shift(2716);
	v->a[2448] = entry(1, false);
	v->a[2449] = shift(247);
	v->a[2450] = entry(1, false);
	v->a[2451] = shift(248);
	v->a[2452] = entry(1, false);
	v->a[2453] = shift(2186);
	v->a[2454] = entry(1, false);
	v->a[2455] = shift(1272);
	v->a[2456] = entry(1, true);
	v->a[2457] = shift(3399);
	v->a[2458] = entry(1, false);
	v->a[2459] = shift(1798);
	parse_actions_entries_123(v);
}

void	parse_actions_entries_123(t_parse_actions_entries_array *v)
{
	v->a[2460] = entry(1, false);
	v->a[2461] = shift(3153);
	v->a[2462] = entry(1, false);
	v->a[2463] = shift(2715);
	v->a[2464] = entry(1, false);
	v->a[2465] = shift(3031);
	v->a[2466] = entry(1, false);
	v->a[2467] = shift(2636);
	v->a[2468] = entry(1, false);
	v->a[2469] = shift(3353);
	v->a[2470] = entry(1, false);
	v->a[2471] = shift(3016);
	v->a[2472] = entry(1, false);
	v->a[2473] = shift(217);
	v->a[2474] = entry(1, false);
	v->a[2475] = shift(158);
	v->a[2476] = entry(1, false);
	v->a[2477] = shift(145);
	v->a[2478] = entry(1, true);
	v->a[2479] = shift(3198);
	parse_actions_entries_124(v);
}

void	parse_actions_entries_124(t_parse_actions_entries_array *v)
{
	v->a[2480] = entry(1, true);
	v->a[2481] = shift(2716);
	v->a[2482] = entry(1, true);
	v->a[2483] = shift(4057);
	v->a[2484] = entry(1, false);
	v->a[2485] = shift(1452);
	v->a[2486] = entry(1, true);
	v->a[2487] = shift(1847);
	v->a[2488] = entry(1, false);
	v->a[2489] = shift(3166);
	v->a[2490] = entry(1, true);
	v->a[2491] = shift(1404);
	v->a[2492] = entry(1, true);
	v->a[2493] = shift(3122);
	v->a[2494] = entry(1, true);
	v->a[2495] = shift(1452);
	v->a[2496] = entry(1, false);
	v->a[2497] = shift(1531);
	v->a[2498] = entry(1, false);
	v->a[2499] = shift(3282);
	parse_actions_entries_125(v);
}

/* EOF parse_actions_entries_24.c */
