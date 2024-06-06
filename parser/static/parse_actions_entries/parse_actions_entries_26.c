/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_actions_entries_26.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_actions_entries.h"

void	parse_actions_entries_130(t_parse_actions_entries_array *v)
{
	v->a[2600] = reduce(aux_sym_declaration_command_repeat1, 2, 0, 0);
	v->a[2601] = shift_repeat(1438);
	v->a[2602] = entry(2, false);
	v->a[2603] = reduce(aux_sym_declaration_command_repeat1, 2, 0, 0);
	v->a[2604] = shift_repeat(3351);
	v->a[2605] = entry(2, true);
	v->a[2606] = reduce(aux_sym_declaration_command_repeat1, 2, 0, 0);
	v->a[2607] = shift_repeat(3087);
	v->a[2608] = entry(2, false);
	v->a[2609] = reduce(aux_sym_declaration_command_repeat1, 2, 0, 0);
	v->a[2610] = shift_repeat(182);
	v->a[2611] = entry(2, true);
	v->a[2612] = reduce(aux_sym_declaration_command_repeat1, 2, 0, 0);
	v->a[2613] = shift_repeat(180);
	v->a[2614] = entry(2, true);
	v->a[2615] = reduce(aux_sym_declaration_command_repeat1, 2, 0, 0);
	v->a[2616] = shift_repeat(176);
	v->a[2617] = entry(2, false);
	v->a[2618] = reduce(aux_sym_declaration_command_repeat1, 2, 0, 0);
	v->a[2619] = shift_repeat(452);
	parse_actions_entries_131(v);
}

void	parse_actions_entries_131(t_parse_actions_entries_array *v)
{
	v->a[2620] = entry(2, true);
	v->a[2621] = reduce(aux_sym_declaration_command_repeat1, 2, 0, 0);
	v->a[2622] = shift_repeat(3641);
	v->a[2623] = entry(2, true);
	v->a[2624] = reduce(aux_sym_declaration_command_repeat1, 2, 0, 0);
	v->a[2625] = shift_repeat(4065);
	v->a[2626] = entry(1, true);
	v->a[2627] = shift(3356);
	v->a[2628] = entry(1, false);
	v->a[2629] = shift(448);
	v->a[2630] = entry(1, false);
	v->a[2631] = reduce(sym_list, 3, 0, 0);
	v->a[2632] = entry(1, true);
	v->a[2633] = reduce(sym_list, 3, 0, 0);
	v->a[2634] = entry(1, true);
	v->a[2635] = shift(3363);
	v->a[2636] = entry(1, true);
	v->a[2637] = shift(3381);
	v->a[2638] = entry(1, true);
	v->a[2639] = reduce(sym__statement_not_pipeline, 1, 0, 0);
	parse_actions_entries_132(v);
}

void	parse_actions_entries_132(t_parse_actions_entries_array *v)
{
	v->a[2640] = entry(1, true);
	v->a[2641] = shift(3387);
	v->a[2642] = entry(1, true);
	v->a[2643] = shift(388);
	v->a[2644] = entry(1, false);
	v->a[2645] = shift(388);
	v->a[2646] = entry(1, true);
	v->a[2647] = shift(3378);
	v->a[2648] = entry(1, false);
	v->a[2649] = shift(2136);
	v->a[2650] = entry(1, true);
	v->a[2651] = shift(2136);
	v->a[2652] = entry(1, false);
	v->a[2653] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[2654] = entry(1, true);
	v->a[2655] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[2656] = entry(2, false);
	v->a[2657] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[2658] = shift_repeat(2571);
	v->a[2659] = entry(2, true);
	parse_actions_entries_133(v);
}

void	parse_actions_entries_133(t_parse_actions_entries_array *v)
{
	v->a[2660] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[2661] = shift_repeat(2571);
	v->a[2662] = entry(1, false);
	v->a[2663] = reduce(aux_sym__literal_repeat1, 1, 0, 0);
	v->a[2664] = entry(1, true);
	v->a[2665] = reduce(aux_sym__literal_repeat1, 1, 0, 0);
	v->a[2666] = entry(1, false);
	v->a[2667] = shift(2571);
	v->a[2668] = entry(1, true);
	v->a[2669] = shift(2571);
	v->a[2670] = entry(1, false);
	v->a[2671] = shift(1351);
	v->a[2672] = entry(1, false);
	v->a[2673] = shift(1366);
	v->a[2674] = entry(1, false);
	v->a[2675] = shift(495);
	v->a[2676] = entry(1, true);
	v->a[2677] = shift(1351);
	v->a[2678] = entry(1, false);
	v->a[2679] = shift(1578);
	parse_actions_entries_134(v);
}

void	parse_actions_entries_134(t_parse_actions_entries_array *v)
{
	v->a[2680] = entry(1, false);
	v->a[2681] = shift(1577);
	v->a[2682] = entry(1, true);
	v->a[2683] = shift(1577);
	v->a[2684] = entry(1, false);
	v->a[2685] = shift(2380);
	v->a[2686] = entry(1, true);
	v->a[2687] = shift(2380);
	v->a[2688] = entry(1, false);
	v->a[2689] = reduce(sym_concatenation, 2, 0, 0);
	v->a[2690] = entry(1, true);
	v->a[2691] = reduce(sym_concatenation, 2, 0, 0);
	v->a[2692] = entry(1, true);
	v->a[2693] = shift(2474);
	v->a[2694] = entry(1, false);
	v->a[2695] = reduce(sym_concatenation, 2, 0, 3);
	v->a[2696] = entry(1, true);
	v->a[2697] = reduce(sym_concatenation, 2, 0, 3);
	v->a[2698] = entry(1, true);
	v->a[2699] = shift(2519);
	parse_actions_entries_135(v);
}

/* EOF parse_actions_entries_26.c */
