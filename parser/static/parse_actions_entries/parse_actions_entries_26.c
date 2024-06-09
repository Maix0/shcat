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
	v->a[2600] = reduce(sym_case_statement, 7, 0, 47);
	v->a[2601] = entry(2, false);
	v->a[2602] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2603] = shift_repeat(1461);
	v->a[2604] = entry(2, false);
	v->a[2605] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2606] = shift_repeat(241);
	v->a[2607] = entry(2, true);
	v->a[2608] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2609] = shift_repeat(1850);
	v->a[2610] = entry(1, true);
	v->a[2611] = reduce(sym_if_statement, 4, 0, 25);
	v->a[2612] = entry(1, false);
	v->a[2613] = reduce(sym_if_statement, 4, 0, 25);
	v->a[2614] = entry(2, true);
	v->a[2615] = reduce(aux_sym_variable_assignments_repeat1, 2, 0, 0);
	v->a[2616] = shift_repeat(2174);
	v->a[2617] = entry(1, true);
	v->a[2618] = shift(758);
	v->a[2619] = entry(2, false);
	parse_actions_entries_131(v);
}

void	parse_actions_entries_131(t_parse_actions_entries_array *v)
{
	v->a[2620] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[2621] = shift_repeat(1419);
	v->a[2622] = entry(2, false);
	v->a[2623] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[2624] = shift_repeat(273);
	v->a[2625] = entry(2, true);
	v->a[2626] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[2627] = shift_repeat(1732);
	v->a[2628] = entry(1, true);
	v->a[2629] = reduce(sym_command, 2, 0, 2);
	v->a[2630] = entry(1, false);
	v->a[2631] = reduce(sym_command, 2, 0, 2);
	v->a[2632] = entry(1, true);
	v->a[2633] = reduce(sym_heredoc_redirect, 4, 0, 1);
	v->a[2634] = entry(1, false);
	v->a[2635] = reduce(sym_heredoc_redirect, 4, 0, 1);
	v->a[2636] = entry(1, true);
	v->a[2637] = shift(1839);
	v->a[2638] = entry(2, false);
	v->a[2639] = reduce(aux_sym_pipeline_repeat1, 2, 0, 0);
	parse_actions_entries_132(v);
}

void	parse_actions_entries_132(t_parse_actions_entries_array *v)
{
	v->a[2640] = shift_repeat(149);
	v->a[2641] = entry(1, false);
	v->a[2642] = shift(1503);
	v->a[2643] = entry(1, false);
	v->a[2644] = shift(2044);
	v->a[2645] = entry(2, false);
	v->a[2646] = reduce(aux_sym_pipeline_repeat1, 2, 0, 0);
	v->a[2647] = shift_repeat(143);
	v->a[2648] = entry(1, false);
	v->a[2649] = shift(2039);
	v->a[2650] = entry(2, false);
	v->a[2651] = reduce(aux_sym_pipeline_repeat1, 2, 0, 0);
	v->a[2652] = shift_repeat(145);
	v->a[2653] = entry(1, false);
	v->a[2654] = shift(2047);
	v->a[2655] = entry(1, false);
	v->a[2656] = reduce(sym_pipeline, 2, 0, 0);
	v->a[2657] = entry(1, false);
	v->a[2658] = shift(145);
	v->a[2659] = entry(1, true);
	parse_actions_entries_133(v);
}

void	parse_actions_entries_133(t_parse_actions_entries_array *v)
{
	v->a[2660] = reduce(sym_pipeline, 2, 0, 0);
	v->a[2661] = entry(1, false);
	v->a[2662] = shift(155);
	v->a[2663] = entry(1, false);
	v->a[2664] = shift(143);
	v->a[2665] = entry(1, false);
	v->a[2666] = shift(149);
	v->a[2667] = entry(2, false);
	v->a[2668] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[2669] = shift_repeat(1503);
	v->a[2670] = entry(2, false);
	v->a[2671] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[2672] = shift_repeat(826);
	v->a[2673] = entry(2, false);
	v->a[2674] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[2675] = shift_repeat(1734);
	v->a[2676] = entry(2, false);
	v->a[2677] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[2678] = shift_repeat(1735);
	v->a[2679] = entry(2, false);
	parse_actions_entries_134(v);
}

void	parse_actions_entries_134(t_parse_actions_entries_array *v)
{
	v->a[2680] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[2681] = shift_repeat(1578);
	v->a[2682] = entry(2, false);
	v->a[2683] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[2684] = shift_repeat(1915);
	v->a[2685] = entry(2, false);
	v->a[2686] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[2687] = shift_repeat(1698);
	v->a[2688] = entry(2, false);
	v->a[2689] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[2690] = shift_repeat(77);
	v->a[2691] = entry(2, false);
	v->a[2692] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[2693] = shift_repeat(39);
	v->a[2694] = entry(2, false);
	v->a[2695] = reduce(aux_sym_pipeline_repeat1, 2, 0, 0);
	v->a[2696] = shift_repeat(155);
	v->a[2697] = entry(2, false);
	v->a[2698] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2699] = shift_repeat(1419);
	parse_actions_entries_135(v);
}

/* EOF parse_actions_entries_26.c */
