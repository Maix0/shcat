/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_actions_entries_25.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_actions_entries.h"

void	parse_actions_entries_125(t_parse_actions_entries_array *v)
{
	v->a[2500] = entry(1, false);
	v->a[2501] = shift(76);
	v->a[2502] = entry(1, false);
	v->a[2503] = shift(72);
	v->a[2504] = entry(1, true);
	v->a[2505] = shift(1759);
	v->a[2506] = entry(1, false);
	v->a[2507] = shift(428);
	v->a[2508] = entry(1, false);
	v->a[2509] = shift(157);
	v->a[2510] = entry(1, true);
	v->a[2511] = shift(428);
	v->a[2512] = entry(1, true);
	v->a[2513] = shift(2122);
	v->a[2514] = entry(1, false);
	v->a[2515] = shift(989);
	v->a[2516] = entry(1, false);
	v->a[2517] = shift(1025);
	v->a[2518] = entry(1, true);
	v->a[2519] = shift(1025);
	parse_actions_entries_126(v);
}

void	parse_actions_entries_126(t_parse_actions_entries_array *v)
{
	v->a[2520] = entry(1, false);
	v->a[2521] = shift(1002);
	v->a[2522] = entry(2, true);
	v->a[2523] = reduce(aux_sym__variable_assignments_repeat1, 2, 0, 0);
	v->a[2524] = shift_repeat(2122);
	v->a[2525] = entry(1, false);
	v->a[2526] = shift(196);
	v->a[2527] = entry(1, false);
	v->a[2528] = shift(470);
	v->a[2529] = entry(1, false);
	v->a[2530] = shift(407);
	v->a[2531] = entry(1, false);
	v->a[2532] = shift(158);
	v->a[2533] = entry(1, true);
	v->a[2534] = shift(407);
	v->a[2535] = entry(1, false);
	v->a[2536] = shift(159);
	v->a[2537] = entry(1, false);
	v->a[2538] = shift(1867);
	v->a[2539] = entry(1, false);
	parse_actions_entries_127(v);
}

void	parse_actions_entries_127(t_parse_actions_entries_array *v)
{
	v->a[2540] = shift(1520);
	v->a[2541] = entry(1, true);
	v->a[2542] = shift(1867);
	v->a[2543] = entry(1, false);
	v->a[2544] = shift(1832);
	v->a[2545] = entry(1, false);
	v->a[2546] = shift(164);
	v->a[2547] = entry(1, false);
	v->a[2548] = shift(167);
	v->a[2549] = entry(1, false);
	v->a[2550] = shift(1439);
	v->a[2551] = entry(1, true);
	v->a[2552] = shift(1439);
	v->a[2553] = entry(1, false);
	v->a[2554] = shift(1703);
	v->a[2555] = entry(1, false);
	v->a[2556] = shift(554);
	v->a[2557] = entry(1, false);
	v->a[2558] = shift(163);
	v->a[2559] = entry(1, true);
	parse_actions_entries_128(v);
}

void	parse_actions_entries_128(t_parse_actions_entries_array *v)
{
	v->a[2560] = shift(554);
	v->a[2561] = entry(1, false);
	v->a[2562] = shift(178);
	v->a[2563] = entry(1, false);
	v->a[2564] = shift(1683);
	v->a[2565] = entry(1, true);
	v->a[2566] = shift(1360);
	v->a[2567] = entry(1, false);
	v->a[2568] = shift(928);
	v->a[2569] = entry(1, false);
	v->a[2570] = shift(444);
	v->a[2571] = entry(1, true);
	v->a[2572] = shift(928);
	v->a[2573] = entry(1, false);
	v->a[2574] = shift(162);
	v->a[2575] = entry(1, false);
	v->a[2576] = shift(1827);
	v->a[2577] = entry(1, false);
	v->a[2578] = shift(970);
	v->a[2579] = entry(2, true);
	parse_actions_entries_129(v);
}

void	parse_actions_entries_129(t_parse_actions_entries_array *v)
{
	v->a[2580] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[2581] = shift_repeat(1360);
	v->a[2582] = entry(1, false);
	v->a[2583] = shift(577);
	v->a[2584] = entry(1, false);
	v->a[2585] = shift(168);
	v->a[2586] = entry(1, true);
	v->a[2587] = shift(577);
	v->a[2588] = entry(1, false);
	v->a[2589] = shift(589);
	v->a[2590] = entry(1, false);
	v->a[2591] = shift(169);
	v->a[2592] = entry(1, true);
	v->a[2593] = shift(589);
	v->a[2594] = entry(1, false);
	v->a[2595] = shift(712);
	v->a[2596] = entry(1, false);
	v->a[2597] = shift(664);
	v->a[2598] = entry(1, true);
	v->a[2599] = shift(664);
	parse_actions_entries_130(v);
}

/* EOF parse_actions_entries_25.c */
