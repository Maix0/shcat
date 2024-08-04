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
	v->a[2600] = entry(1, false);
	v->a[2601] = shift(1374);
	v->a[2602] = entry(1, false);
	v->a[2603] = shift(1088);
	v->a[2604] = entry(1, false);
	v->a[2605] = shift(1294);
	v->a[2606] = entry(1, false);
	v->a[2607] = shift(988);
	v->a[2608] = entry(1, false);
	v->a[2609] = shift(1479);
	v->a[2610] = entry(1, false);
	v->a[2611] = shift(1053);
	v->a[2612] = entry(1, false);
	v->a[2613] = shift(1453);
	v->a[2614] = entry(1, true);
	v->a[2615] = shift(1444);
	v->a[2616] = entry(1, true);
	v->a[2617] = shift(833);
	v->a[2618] = entry(1, false);
	v->a[2619] = shift(987);
	return (parse_actions_entries_131(v));
}

void	parse_actions_entries_131(t_parse_actions_entries_array *v)
{
	v->a[2620] = entry(1, false);
	v->a[2621] = shift(1355);
	v->a[2622] = entry(1, false);
	v->a[2623] = shift(1447);
	v->a[2624] = entry(1, false);
	v->a[2625] = shift(1445);
	v->a[2626] = entry(1, true);
	v->a[2627] = shift(1445);
	v->a[2628] = entry(1, false);
	v->a[2629] = shift(121);
	v->a[2630] = entry(2, false);
	v->a[2631] = reduce(aux_sym_pipeline_repeat1, 2, 0, 0);
	v->a[2632] = shift_repeat(121);
	v->a[2633] = entry(1, false);
	v->a[2634] = shift(786);
	v->a[2635] = entry(1, true);
	v->a[2636] = reduce(sym__heredoc_expression, 2, 0, 51);
	v->a[2637] = entry(1, true);
	v->a[2638] = reduce(sym__heredoc_pipeline, 2, 0, 0);
	v->a[2639] = entry(2, true);
	return (parse_actions_entries_132(v));
}

void	parse_actions_entries_132(t_parse_actions_entries_array *v)
{
	v->a[2640] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[2641] = shift_repeat(740);
	v->a[2642] = entry(1, true);
	v->a[2643] = shift(740);
	v->a[2644] = entry(1, true);
	v->a[2645] = shift(763);
	v->a[2646] = entry(2, false);
	v->a[2647] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[2648] = shift_repeat(786);
	v->a[2649] = entry(1, false);
	v->a[2650] = reduce(aux_sym_case_statement_repeat1, 1, 0, 35);
	v->a[2651] = entry(1, true);
	v->a[2652] = reduce(aux_sym_case_statement_repeat1, 1, 0, 35);
	v->a[2653] = entry(1, false);
	v->a[2654] = shift(1358);
	v->a[2655] = entry(1, false);
	v->a[2656] = shift(1363);
	v->a[2657] = entry(1, true);
	v->a[2658] = shift(1363);
	v->a[2659] = entry(2, true);
	return (parse_actions_entries_133(v));
}

void	parse_actions_entries_133(t_parse_actions_entries_array *v)
{
	v->a[2660] = reduce(aux_sym__variable_assignments_repeat1, 2, 0, 0);
	v->a[2661] = shift_repeat(1744);
	v->a[2662] = entry(1, false);
	v->a[2663] = shift(1302);
	v->a[2664] = entry(1, false);
	v->a[2665] = shift(1304);
	v->a[2666] = entry(1, true);
	v->a[2667] = shift(1304);
	v->a[2668] = entry(1, true);
	v->a[2669] = shift(1744);
	v->a[2670] = entry(1, true);
	v->a[2671] = reduce(sym_arithmetic_parenthesized_expression, 3, 0, 0);
	v->a[2672] = entry(1, false);
	v->a[2673] = reduce(sym_arithmetic_parenthesized_expression, 3, 0, 0);
	v->a[2674] = entry(2, false);
	v->a[2675] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[2676] = shift_repeat(802);
	v->a[2677] = entry(2, true);
	v->a[2678] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[2679] = shift_repeat(802);
	return (parse_actions_entries_134(v));
}

void	parse_actions_entries_134(t_parse_actions_entries_array *v)
{
	v->a[2680] = entry(2, true);
	v->a[2681] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[2682] = shift_repeat(1677);
	v->a[2683] = entry(2, true);
	v->a[2684] = reduce(aux_sym__variable_assignments_repeat1, 2, 0, 0);
	v->a[2685] = shift_repeat(1626);
	v->a[2686] = entry(1, false);
	v->a[2687] = shift(1202);
	v->a[2688] = entry(1, true);
	v->a[2689] = shift(1099);
	v->a[2690] = entry(1, true);
	v->a[2691] = shift(79);
	v->a[2692] = entry(1, true);
	v->a[2693] = shift(80);
	v->a[2694] = entry(1, true);
	v->a[2695] = shift(1317);
	v->a[2696] = entry(1, true);
	v->a[2697] = reduce(sym_heredoc_body, 1, 0, 0);
	v->a[2698] = entry(1, true);
	v->a[2699] = shift(1626);
	return (parse_actions_entries_135(v));
}

/* EOF parse_actions_entries_26.c */
