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
	v->a[2400] = shift(702);
	v->a[2401] = entry(1, false);
	v->a[2402] = shift(1703);
	v->a[2403] = entry(1, false);
	v->a[2404] = shift(1606);
	v->a[2405] = entry(1, false);
	v->a[2406] = shift(1605);
	v->a[2407] = entry(1, false);
	v->a[2408] = shift(80);
	v->a[2409] = entry(1, false);
	v->a[2410] = shift(82);
	v->a[2411] = entry(1, true);
	v->a[2412] = shift(856);
	v->a[2413] = entry(1, true);
	v->a[2414] = shift(1280);
	v->a[2415] = entry(1, true);
	v->a[2416] = shift(1260);
	v->a[2417] = entry(1, false);
	v->a[2418] = shift(398);
	v->a[2419] = entry(1, true);
	parse_actions_entries_121(v);
}

void	parse_actions_entries_121(t_parse_actions_entries_array *v)
{
	v->a[2420] = shift(398);
	v->a[2421] = entry(1, false);
	v->a[2422] = shift(139);
	v->a[2423] = entry(1, false);
	v->a[2424] = shift(1809);
	v->a[2425] = entry(1, false);
	v->a[2426] = shift(1375);
	v->a[2427] = entry(1, true);
	v->a[2428] = reduce(sym__heredoc_pipeline, 2, 0, 0);
	v->a[2429] = entry(1, true);
	v->a[2430] = shift(1732);
	v->a[2431] = entry(1, false);
	v->a[2432] = shift(927);
	v->a[2433] = entry(1, true);
	v->a[2434] = shift(927);
	v->a[2435] = entry(1, false);
	v->a[2436] = shift(624);
	v->a[2437] = entry(1, false);
	v->a[2438] = shift(169);
	v->a[2439] = entry(1, true);
	parse_actions_entries_122(v);
}

void	parse_actions_entries_122(t_parse_actions_entries_array *v)
{
	v->a[2440] = shift(624);
	v->a[2441] = entry(2, true);
	v->a[2442] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[2443] = shift_repeat(1280);
	v->a[2444] = entry(1, true);
	v->a[2445] = reduce(sym__heredoc_expression, 2, 0, 54);
	v->a[2446] = entry(1, false);
	v->a[2447] = shift(818);
	v->a[2448] = entry(1, true);
	v->a[2449] = shift(818);
	v->a[2450] = entry(1, false);
	v->a[2451] = shift(457);
	v->a[2452] = entry(1, false);
	v->a[2453] = shift(934);
	v->a[2454] = entry(1, true);
	v->a[2455] = shift(934);
	v->a[2456] = entry(1, false);
	v->a[2457] = shift(1865);
	v->a[2458] = entry(1, true);
	v->a[2459] = shift(1865);
	parse_actions_entries_123(v);
}

void	parse_actions_entries_123(t_parse_actions_entries_array *v)
{
	v->a[2460] = entry(2, true);
	v->a[2461] = reduce(aux_sym__variable_assignments_repeat1, 2, 0, 0);
	v->a[2462] = shift_repeat(2122);
	v->a[2463] = entry(2, false);
	v->a[2464] = reduce(aux_sym__heredoc_command, 2, 0, 32);
	v->a[2465] = shift_repeat(1516);
	v->a[2466] = entry(1, false);
	v->a[2467] = reduce(aux_sym__heredoc_command, 2, 0, 32);
	v->a[2468] = entry(2, false);
	v->a[2469] = reduce(aux_sym__heredoc_command, 2, 0, 32);
	v->a[2470] = shift_repeat(666);
	v->a[2471] = entry(2, false);
	v->a[2472] = reduce(aux_sym__heredoc_command, 2, 0, 32);
	v->a[2473] = shift_repeat(1697);
	v->a[2474] = entry(2, false);
	v->a[2475] = reduce(aux_sym__heredoc_command, 2, 0, 32);
	v->a[2476] = shift_repeat(1631);
	v->a[2477] = entry(2, false);
	v->a[2478] = reduce(aux_sym__heredoc_command, 2, 0, 32);
	v->a[2479] = shift_repeat(1638);
	parse_actions_entries_124(v);
}

void	parse_actions_entries_124(t_parse_actions_entries_array *v)
{
	v->a[2480] = entry(2, false);
	v->a[2481] = reduce(aux_sym__heredoc_command, 2, 0, 32);
	v->a[2482] = shift_repeat(69);
	v->a[2483] = entry(2, false);
	v->a[2484] = reduce(aux_sym__heredoc_command, 2, 0, 32);
	v->a[2485] = shift_repeat(76);
	v->a[2486] = entry(1, false);
	v->a[2487] = shift(611);
	v->a[2488] = entry(1, true);
	v->a[2489] = shift(611);
	v->a[2490] = entry(1, false);
	v->a[2491] = shift(1017);
	v->a[2492] = entry(1, false);
	v->a[2493] = shift(419);
	v->a[2494] = entry(1, false);
	v->a[2495] = shift(163);
	v->a[2496] = entry(1, true);
	v->a[2497] = shift(419);
	v->a[2498] = entry(1, false);
	v->a[2499] = shift(619);
	parse_actions_entries_125(v);
}

/* EOF parse_actions_entries_24.c */
