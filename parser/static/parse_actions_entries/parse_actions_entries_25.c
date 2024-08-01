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
	v->a[2500] = shift(1031);
	v->a[2501] = entry(1, false);
	v->a[2502] = shift(811);
	v->a[2503] = entry(1, true);
	v->a[2504] = shift(365);
	v->a[2505] = entry(1, true);
	v->a[2506] = shift(800);
	v->a[2507] = entry(1, false);
	v->a[2508] = shift(1030);
	v->a[2509] = entry(1, false);
	v->a[2510] = shift(793);
	v->a[2511] = entry(2, false);
	v->a[2512] = reduce(aux_sym_pipeline_repeat1, 2, 0, 0);
	v->a[2513] = shift_repeat(122);
	v->a[2514] = entry(1, false);
	v->a[2515] = shift(120);
	v->a[2516] = entry(1, false);
	v->a[2517] = shift(1026);
	v->a[2518] = entry(1, false);
	v->a[2519] = shift(1469);
	parse_actions_entries_126(v);
}

void	parse_actions_entries_126(t_parse_actions_entries_array *v)
{
	v->a[2520] = entry(1, false);
	v->a[2521] = reduce(sym_case_item, 5, 0, 68);
	v->a[2522] = entry(1, false);
	v->a[2523] = reduce(sym__case_item_last, 5, 0, 68);
	v->a[2524] = entry(1, true);
	v->a[2525] = reduce(sym_case_item, 5, 0, 68);
	v->a[2526] = entry(1, true);
	v->a[2527] = shift(1490);
	v->a[2528] = entry(1, false);
	v->a[2529] = shift(1014);
	v->a[2530] = entry(1, false);
	v->a[2531] = shift(1471);
	v->a[2532] = entry(1, false);
	v->a[2533] = shift(134);
	v->a[2534] = entry(1, false);
	v->a[2535] = shift(1003);
	v->a[2536] = entry(1, false);
	v->a[2537] = shift(817);
	v->a[2538] = entry(1, false);
	v->a[2539] = shift(122);
	parse_actions_entries_127(v);
}

void	parse_actions_entries_127(t_parse_actions_entries_array *v)
{
	v->a[2540] = entry(2, false);
	v->a[2541] = reduce(aux_sym_pipeline_repeat1, 2, 0, 0);
	v->a[2542] = shift_repeat(126);
	v->a[2543] = entry(1, false);
	v->a[2544] = shift(981);
	v->a[2545] = entry(1, false);
	v->a[2546] = shift(414);
	v->a[2547] = entry(1, true);
	v->a[2548] = shift(354);
	v->a[2549] = entry(1, false);
	v->a[2550] = shift(1074);
	v->a[2551] = entry(1, false);
	v->a[2552] = shift(363);
	v->a[2553] = entry(1, false);
	v->a[2554] = shift(975);
	v->a[2555] = entry(1, false);
	v->a[2556] = shift(410);
	v->a[2557] = entry(1, true);
	v->a[2558] = shift(1350);
	v->a[2559] = entry(1, false);
	parse_actions_entries_128(v);
}

void	parse_actions_entries_128(t_parse_actions_entries_array *v)
{
	v->a[2560] = shift(1021);
	v->a[2561] = entry(1, false);
	v->a[2562] = shift(451);
	v->a[2563] = entry(1, true);
	v->a[2564] = shift(716);
	v->a[2565] = entry(2, false);
	v->a[2566] = reduce(aux_sym_string_repeat1, 2, 0, 0);
	v->a[2567] = shift_repeat(664);
	v->a[2568] = entry(2, false);
	v->a[2569] = reduce(aux_sym_string_repeat1, 2, 0, 0);
	v->a[2570] = shift_repeat(1169);
	v->a[2571] = entry(1, false);
	v->a[2572] = reduce(aux_sym_string_repeat1, 2, 0, 0);
	v->a[2573] = entry(2, false);
	v->a[2574] = reduce(aux_sym_string_repeat1, 2, 0, 0);
	v->a[2575] = shift_repeat(1394);
	v->a[2576] = entry(2, false);
	v->a[2577] = reduce(aux_sym_string_repeat1, 2, 0, 0);
	v->a[2578] = shift_repeat(1094);
	v->a[2579] = entry(2, false);
	parse_actions_entries_129(v);
}

void	parse_actions_entries_129(t_parse_actions_entries_array *v)
{
	v->a[2580] = reduce(aux_sym_string_repeat1, 2, 0, 0);
	v->a[2581] = shift_repeat(76);
	v->a[2582] = entry(2, false);
	v->a[2583] = reduce(aux_sym_string_repeat1, 2, 0, 0);
	v->a[2584] = shift_repeat(75);
	v->a[2585] = entry(1, false);
	v->a[2586] = shift(1013);
	v->a[2587] = entry(1, false);
	v->a[2588] = shift(1481);
	v->a[2589] = entry(2, false);
	v->a[2590] = reduce(aux_sym_pipeline_repeat1, 2, 0, 0);
	v->a[2591] = shift_repeat(134);
	v->a[2592] = entry(1, false);
	v->a[2593] = reduce(sym_case_item, 7, 0, 76);
	v->a[2594] = entry(1, false);
	v->a[2595] = reduce(sym__case_item_last, 7, 0, 76);
	v->a[2596] = entry(1, true);
	v->a[2597] = reduce(sym_case_item, 7, 0, 76);
	v->a[2598] = entry(1, false);
	v->a[2599] = shift(994);
	parse_actions_entries_130(v);
}

/* EOF parse_actions_entries_25.c */
