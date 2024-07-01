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
	v->a[2500] = entry(2, false);
	v->a[2501] = reduce(aux_sym_case_statement_repeat1, 2, 0, 48);
	v->a[2502] = shift_repeat(1830);
	v->a[2503] = entry(2, false);
	v->a[2504] = reduce(aux_sym_case_statement_repeat1, 2, 0, 48);
	v->a[2505] = shift_repeat(1831);
	v->a[2506] = entry(2, false);
	v->a[2507] = reduce(aux_sym_case_statement_repeat1, 2, 0, 48);
	v->a[2508] = shift_repeat(1792);
	v->a[2509] = entry(2, false);
	v->a[2510] = reduce(aux_sym_case_statement_repeat1, 2, 0, 48);
	v->a[2511] = shift_repeat(114);
	v->a[2512] = entry(2, false);
	v->a[2513] = reduce(aux_sym_case_statement_repeat1, 2, 0, 48);
	v->a[2514] = shift_repeat(118);
	v->a[2515] = entry(2, true);
	v->a[2516] = reduce(aux_sym_case_statement_repeat1, 2, 0, 48);
	v->a[2517] = shift_repeat(1940);
	v->a[2518] = entry(2, false);
	v->a[2519] = reduce(aux_sym_pipeline_repeat1, 2, 0, 0);
	parse_actions_entries_126(v);
}

void	parse_actions_entries_126(t_parse_actions_entries_array *v)
{
	v->a[2520] = shift_repeat(150);
	v->a[2521] = entry(2, false);
	v->a[2522] = reduce(aux_sym_pipeline_repeat1, 2, 0, 0);
	v->a[2523] = shift_repeat(154);
	v->a[2524] = entry(2, false);
	v->a[2525] = reduce(aux_sym_pipeline_repeat1, 2, 0, 0);
	v->a[2526] = shift_repeat(146);
	v->a[2527] = entry(1, false);
	v->a[2528] = shift(150);
	v->a[2529] = entry(1, false);
	v->a[2530] = shift(146);
	v->a[2531] = entry(1, false);
	v->a[2532] = shift(142);
	v->a[2533] = entry(2, false);
	v->a[2534] = reduce(aux_sym_pipeline_repeat1, 2, 0, 0);
	v->a[2535] = shift_repeat(142);
	v->a[2536] = entry(1, true);
	v->a[2537] = shift(1460);
	v->a[2538] = entry(1, true);
	v->a[2539] = shift(1531);
	parse_actions_entries_127(v);
}

void	parse_actions_entries_127(t_parse_actions_entries_array *v)
{
	v->a[2540] = entry(1, false);
	v->a[2541] = shift(1588);
	v->a[2542] = entry(1, false);
	v->a[2543] = shift(622);
	v->a[2544] = entry(1, true);
	v->a[2545] = reduce(sym__heredoc_pipeline, 2, 0, 0);
	v->a[2546] = entry(1, true);
	v->a[2547] = shift(1929);
	v->a[2548] = entry(2, false);
	v->a[2549] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[2550] = shift_repeat(1588);
	v->a[2551] = entry(2, false);
	v->a[2552] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[2553] = shift_repeat(622);
	v->a[2554] = entry(2, true);
	v->a[2555] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[2556] = shift_repeat(1929);
	v->a[2557] = entry(1, true);
	v->a[2558] = shift(1449);
	v->a[2559] = entry(1, true);
	parse_actions_entries_128(v);
}

void	parse_actions_entries_128(t_parse_actions_entries_array *v)
{
	v->a[2560] = reduce(sym__heredoc_expression, 2, 0, 49);
	v->a[2561] = entry(2, true);
	v->a[2562] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[2563] = shift_repeat(1531);
	v->a[2564] = entry(1, true);
	v->a[2565] = shift(1457);
	v->a[2566] = entry(1, true);
	v->a[2567] = shift(2311);
	v->a[2568] = entry(2, true);
	v->a[2569] = reduce(aux_sym__variable_assignments_repeat1, 2, 0, 0);
	v->a[2570] = shift_repeat(2311);
	v->a[2571] = entry(1, true);
	v->a[2572] = shift(2146);
	v->a[2573] = entry(1, false);
	v->a[2574] = shift(1040);
	v->a[2575] = entry(1, false);
	v->a[2576] = shift(502);
	v->a[2577] = entry(1, true);
	v->a[2578] = shift(1040);
	v->a[2579] = entry(1, false);
	parse_actions_entries_129(v);
}

void	parse_actions_entries_129(t_parse_actions_entries_array *v)
{
	v->a[2580] = shift(531);
	v->a[2581] = entry(1, false);
	v->a[2582] = shift(199);
	v->a[2583] = entry(1, true);
	v->a[2584] = shift(531);
	v->a[2585] = entry(1, false);
	v->a[2586] = shift(556);
	v->a[2587] = entry(1, false);
	v->a[2588] = shift(848);
	v->a[2589] = entry(1, false);
	v->a[2590] = shift(237);
	v->a[2591] = entry(1, false);
	v->a[2592] = shift(1839);
	v->a[2593] = entry(1, false);
	v->a[2594] = shift(1800);
	v->a[2595] = entry(1, false);
	v->a[2596] = shift(64);
	v->a[2597] = entry(1, false);
	v->a[2598] = shift(65);
	v->a[2599] = entry(1, true);
	parse_actions_entries_130(v);
}

/* EOF parse_actions_entries_25.c */
