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
	v->a[2500] = entry(1, true);
	v->a[2501] = shift(3123);
	v->a[2502] = entry(1, false);
	v->a[2503] = shift(122);
	v->a[2504] = entry(1, true);
	v->a[2505] = shift(120);
	v->a[2506] = entry(1, true);
	v->a[2507] = shift(111);
	v->a[2508] = entry(1, true);
	v->a[2509] = shift(1676);
	v->a[2510] = entry(1, true);
	v->a[2511] = shift(4068);
	v->a[2512] = entry(1, false);
	v->a[2513] = reduce(aux_sym_command_repeat1, 1, 0, 0);
	v->a[2514] = entry(1, false);
	v->a[2515] = reduce(sym__statements, 1, 0, 0);
	v->a[2516] = entry(1, false);
	v->a[2517] = reduce(sym__statement_not_pipeline, 1, 0, 0);
	v->a[2518] = entry(1, false);
	v->a[2519] = shift(246);
	parse_actions_entries_126(v);
}

void	parse_actions_entries_126(t_parse_actions_entries_array *v)
{
	v->a[2520] = entry(1, false);
	v->a[2521] = shift(3903);
	v->a[2522] = entry(1, true);
	v->a[2523] = shift(372);
	v->a[2524] = entry(1, false);
	v->a[2525] = shift(372);
	v->a[2526] = entry(1, true);
	v->a[2527] = reduce(aux_sym_command_repeat1, 1, 0, 0);
	v->a[2528] = entry(2, true);
	v->a[2529] = reduce(aux_sym_command_repeat1, 1, 0, 0);
	v->a[2530] = shift(3659);
	v->a[2531] = entry(1, true);
	v->a[2532] = shift(3368);
	v->a[2533] = entry(1, false);
	v->a[2534] = shift(1417);
	v->a[2535] = entry(1, false);
	v->a[2536] = shift(1414);
	v->a[2537] = entry(1, true);
	v->a[2538] = shift(1414);
	v->a[2539] = entry(1, false);
	parse_actions_entries_127(v);
}

void	parse_actions_entries_127(t_parse_actions_entries_array *v)
{
	v->a[2540] = shift(1350);
	v->a[2541] = entry(1, true);
	v->a[2542] = shift(1844);
	v->a[2543] = entry(1, false);
	v->a[2544] = shift(3138);
	v->a[2545] = entry(1, true);
	v->a[2546] = shift(1369);
	v->a[2547] = entry(1, true);
	v->a[2548] = shift(3085);
	v->a[2549] = entry(1, true);
	v->a[2550] = shift(1350);
	v->a[2551] = entry(1, false);
	v->a[2552] = shift(1438);
	v->a[2553] = entry(1, false);
	v->a[2554] = shift(3351);
	v->a[2555] = entry(1, true);
	v->a[2556] = shift(3087);
	v->a[2557] = entry(1, false);
	v->a[2558] = shift(182);
	v->a[2559] = entry(1, true);
	parse_actions_entries_128(v);
}

void	parse_actions_entries_128(t_parse_actions_entries_array *v)
{
	v->a[2560] = shift(180);
	v->a[2561] = entry(1, true);
	v->a[2562] = shift(176);
	v->a[2563] = entry(1, false);
	v->a[2564] = shift(452);
	v->a[2565] = entry(1, true);
	v->a[2566] = shift(3641);
	v->a[2567] = entry(1, true);
	v->a[2568] = shift(4065);
	v->a[2569] = entry(1, true);
	v->a[2570] = shift(3362);
	v->a[2571] = entry(1, false);
	v->a[2572] = shift(2049);
	v->a[2573] = entry(1, false);
	v->a[2574] = shift(1998);
	v->a[2575] = entry(1, true);
	v->a[2576] = shift(2049);
	v->a[2577] = entry(1, false);
	v->a[2578] = shift(2316);
	v->a[2579] = entry(1, true);
	parse_actions_entries_129(v);
}

void	parse_actions_entries_129(t_parse_actions_entries_array *v)
{
	v->a[2580] = shift(2316);
	v->a[2581] = entry(2, false);
	v->a[2582] = reduce(aux_sym_declaration_command_repeat1, 2, 0, 0);
	v->a[2583] = shift_repeat(1350);
	v->a[2584] = entry(2, true);
	v->a[2585] = reduce(aux_sym_declaration_command_repeat1, 2, 0, 0);
	v->a[2586] = shift_repeat(1844);
	v->a[2587] = entry(2, false);
	v->a[2588] = reduce(aux_sym_declaration_command_repeat1, 2, 0, 0);
	v->a[2589] = shift_repeat(3138);
	v->a[2590] = entry(2, true);
	v->a[2591] = reduce(aux_sym_declaration_command_repeat1, 2, 0, 0);
	v->a[2592] = shift_repeat(1369);
	v->a[2593] = entry(2, true);
	v->a[2594] = reduce(aux_sym_declaration_command_repeat1, 2, 0, 0);
	v->a[2595] = shift_repeat(3085);
	v->a[2596] = entry(2, true);
	v->a[2597] = reduce(aux_sym_declaration_command_repeat1, 2, 0, 0);
	v->a[2598] = shift_repeat(1350);
	v->a[2599] = entry(2, false);
	parse_actions_entries_130(v);
}

/* EOF parse_actions_entries_25.c */
