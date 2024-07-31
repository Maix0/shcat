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
	v->a[2500] = shift(424);
	v->a[2501] = entry(1, false);
	v->a[2502] = shift(411);
	v->a[2503] = entry(1, false);
	v->a[2504] = shift(158);
	v->a[2505] = entry(1, true);
	v->a[2506] = shift(1540);
	v->a[2507] = entry(1, false);
	v->a[2508] = shift(459);
	v->a[2509] = entry(1, false);
	v->a[2510] = shift(161);
	v->a[2511] = entry(1, false);
	v->a[2512] = shift(681);
	v->a[2513] = entry(1, false);
	v->a[2514] = shift(684);
	v->a[2515] = entry(1, false);
	v->a[2516] = shift(451);
	v->a[2517] = entry(1, false);
	v->a[2518] = reduce(aux_sym__heredoc_command, 1, 0, 10);
	v->a[2519] = entry(1, false);
	parse_actions_entries_126(v);
}

void	parse_actions_entries_126(t_parse_actions_entries_array *v)
{
	v->a[2520] = shift(692);
	v->a[2521] = entry(1, false);
	v->a[2522] = shift(693);
	v->a[2523] = entry(1, false);
	v->a[2524] = shift(545);
	v->a[2525] = entry(1, false);
	v->a[2526] = shift(399);
	v->a[2527] = entry(1, false);
	v->a[2528] = shift(380);
	v->a[2529] = entry(1, false);
	v->a[2530] = shift(415);
	v->a[2531] = entry(2, false);
	v->a[2532] = reduce(aux_sym_pipeline_repeat1, 2, 0, 0);
	v->a[2533] = shift_repeat(131);
	v->a[2534] = entry(1, false);
	v->a[2535] = shift(547);
	v->a[2536] = entry(1, false);
	v->a[2537] = shift(1230);
	v->a[2538] = entry(1, true);
	v->a[2539] = shift(1533);
	parse_actions_entries_127(v);
}

void	parse_actions_entries_127(t_parse_actions_entries_array *v)
{
	v->a[2540] = entry(1, false);
	v->a[2541] = shift(1212);
	v->a[2542] = entry(1, false);
	v->a[2543] = shift(953);
	v->a[2544] = entry(1, false);
	v->a[2545] = shift(958);
	v->a[2546] = entry(1, true);
	v->a[2547] = shift(1534);
	v->a[2548] = entry(1, false);
	v->a[2549] = shift(786);
	v->a[2550] = entry(1, false);
	v->a[2551] = shift(1255);
	v->a[2552] = entry(1, false);
	v->a[2553] = shift(901);
	v->a[2554] = entry(1, false);
	v->a[2555] = shift(1477);
	v->a[2556] = entry(1, false);
	v->a[2557] = shift(1346);
	v->a[2558] = entry(1, false);
	v->a[2559] = shift(63);
	parse_actions_entries_128(v);
}

void	parse_actions_entries_128(t_parse_actions_entries_array *v)
{
	v->a[2560] = entry(1, false);
	v->a[2561] = shift(69);
	v->a[2562] = entry(1, true);
	v->a[2563] = shift(799);
	v->a[2564] = entry(1, true);
	v->a[2565] = shift(1202);
	v->a[2566] = entry(1, true);
	v->a[2567] = shift(688);
	v->a[2568] = entry(1, false);
	v->a[2569] = shift(1204);
	v->a[2570] = entry(1, false);
	v->a[2571] = shift(1202);
	v->a[2572] = entry(1, true);
	v->a[2573] = shift(1204);
	v->a[2574] = entry(1, false);
	v->a[2575] = reduce(sym_case_item, 6, 0, 74);
	v->a[2576] = entry(1, false);
	v->a[2577] = reduce(sym__case_item_last, 6, 0, 74);
	v->a[2578] = entry(1, true);
	v->a[2579] = reduce(sym_case_item, 6, 0, 74);
	parse_actions_entries_129(v);
}

void	parse_actions_entries_129(t_parse_actions_entries_array *v)
{
	v->a[2580] = entry(1, false);
	v->a[2581] = reduce(sym_case_item, 6, 0, 75);
	v->a[2582] = entry(1, false);
	v->a[2583] = reduce(sym__case_item_last, 6, 0, 75);
	v->a[2584] = entry(1, true);
	v->a[2585] = reduce(sym_case_item, 6, 0, 75);
	v->a[2586] = entry(1, false);
	v->a[2587] = reduce(sym_case_item, 7, 0, 77);
	v->a[2588] = entry(1, false);
	v->a[2589] = reduce(sym__case_item_last, 7, 0, 77);
	v->a[2590] = entry(1, true);
	v->a[2591] = reduce(sym_case_item, 7, 0, 77);
	v->a[2592] = entry(2, false);
	v->a[2593] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2594] = shift_repeat(1136);
	v->a[2595] = entry(1, false);
	v->a[2596] = shift(1292);
	v->a[2597] = entry(1, false);
	v->a[2598] = shift(397);
	v->a[2599] = entry(1, true);
	parse_actions_entries_130(v);
}

/* EOF parse_actions_entries_25.c */
