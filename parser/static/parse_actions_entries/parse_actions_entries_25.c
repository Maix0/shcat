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
	v->a[2501] = shift(892);
	v->a[2502] = entry(1, false);
	v->a[2503] = shift(891);
	v->a[2504] = entry(1, false);
	v->a[2505] = shift(898);
	v->a[2506] = entry(1, true);
	v->a[2507] = shift(836);
	v->a[2508] = entry(1, false);
	v->a[2509] = shift(896);
	v->a[2510] = entry(1, false);
	v->a[2511] = shift(840);
	v->a[2512] = entry(1, false);
	v->a[2513] = shift(834);
	v->a[2514] = entry(1, true);
	v->a[2515] = shift(833);
	v->a[2516] = entry(1, false);
	v->a[2517] = shift(832);
	v->a[2518] = entry(1, false);
	v->a[2519] = shift(831);
	parse_actions_entries_126(v);
}

void	parse_actions_entries_126(t_parse_actions_entries_array *v)
{
	v->a[2520] = entry(1, false);
	v->a[2521] = shift(1839);
	v->a[2522] = entry(1, false);
	v->a[2523] = shift(1840);
	v->a[2524] = entry(1, true);
	v->a[2525] = shift(1840);
	v->a[2526] = entry(2, false);
	v->a[2527] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[2528] = shift_repeat(1740);
	v->a[2529] = entry(2, false);
	v->a[2530] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[2531] = shift_repeat(250);
	v->a[2532] = entry(2, false);
	v->a[2533] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[2534] = shift_repeat(2400);
	v->a[2535] = entry(2, true);
	v->a[2536] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[2537] = shift_repeat(1979);
	v->a[2538] = entry(2, true);
	v->a[2539] = reduce(aux_sym__variable_assignments_repeat1, 2, 0, 0);
	parse_actions_entries_127(v);
}

void	parse_actions_entries_127(t_parse_actions_entries_array *v)
{
	v->a[2540] = shift_repeat(2294);
	v->a[2541] = entry(1, false);
	v->a[2542] = shift(691);
	v->a[2543] = entry(1, true);
	v->a[2544] = shift(719);
	v->a[2545] = entry(1, false);
	v->a[2546] = shift(723);
	v->a[2547] = entry(1, false);
	v->a[2548] = shift(835);
	v->a[2549] = entry(1, true);
	v->a[2550] = shift(1721);
	v->a[2551] = entry(1, false);
	v->a[2552] = shift(902);
	v->a[2553] = entry(1, true);
	v->a[2554] = shift(901);
	v->a[2555] = entry(1, false);
	v->a[2556] = shift(900);
	v->a[2557] = entry(1, false);
	v->a[2558] = shift(899);
	v->a[2559] = entry(1, true);
	parse_actions_entries_128(v);
}

void	parse_actions_entries_128(t_parse_actions_entries_array *v)
{
	v->a[2560] = shift(2286);
	v->a[2561] = entry(1, false);
	v->a[2562] = shift(687);
	v->a[2563] = entry(1, true);
	v->a[2564] = shift(688);
	v->a[2565] = entry(1, false);
	v->a[2566] = shift(689);
	v->a[2567] = entry(1, false);
	v->a[2568] = shift(690);
	v->a[2569] = entry(1, false);
	v->a[2570] = shift(677);
	v->a[2571] = entry(1, true);
	v->a[2572] = shift(679);
	v->a[2573] = entry(1, false);
	v->a[2574] = shift(684);
	v->a[2575] = entry(1, false);
	v->a[2576] = shift(685);
	v->a[2577] = entry(1, false);
	v->a[2578] = shift(673);
	v->a[2579] = entry(1, true);
	parse_actions_entries_129(v);
}

void	parse_actions_entries_129(t_parse_actions_entries_array *v)
{
	v->a[2580] = shift(674);
	v->a[2581] = entry(1, false);
	v->a[2582] = shift(675);
	v->a[2583] = entry(1, false);
	v->a[2584] = shift(676);
	v->a[2585] = entry(1, true);
	v->a[2586] = shift(797);
	v->a[2587] = entry(2, false);
	v->a[2588] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[2589] = shift_repeat(1781);
	v->a[2590] = entry(2, false);
	v->a[2591] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[2592] = shift_repeat(244);
	v->a[2593] = entry(2, true);
	v->a[2594] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[2595] = shift_repeat(2034);
	v->a[2596] = entry(1, false);
	v->a[2597] = shift(1809);
	v->a[2598] = entry(1, false);
	v->a[2599] = shift(273);
	parse_actions_entries_130(v);
}

/* EOF parse_actions_entries_25.c */
