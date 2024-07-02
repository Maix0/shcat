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
	v->a[2601] = shift(1421);
	v->a[2602] = entry(1, true);
	v->a[2603] = reduce(sym__heredoc_pipeline, 2, 0, 0);
	v->a[2604] = entry(1, true);
	v->a[2605] = shift(1734);
	v->a[2606] = entry(1, false);
	v->a[2607] = shift(1833);
	v->a[2608] = entry(1, false);
	v->a[2609] = shift(1425);
	v->a[2610] = entry(1, false);
	v->a[2611] = shift(883);
	v->a[2612] = entry(1, true);
	v->a[2613] = shift(1425);
	v->a[2614] = entry(1, false);
	v->a[2615] = shift(374);
	v->a[2616] = entry(1, false);
	v->a[2617] = shift(737);
	v->a[2618] = entry(1, false);
	v->a[2619] = shift(1695);
	parse_actions_entries_131(v);
}

void	parse_actions_entries_131(t_parse_actions_entries_array *v)
{
	v->a[2620] = entry(1, false);
	v->a[2621] = shift(1687);
	v->a[2622] = entry(1, false);
	v->a[2623] = shift(1596);
	v->a[2624] = entry(1, false);
	v->a[2625] = shift(113);
	v->a[2626] = entry(1, false);
	v->a[2627] = shift(110);
	v->a[2628] = entry(1, false);
	v->a[2629] = shift(663);
	v->a[2630] = entry(1, true);
	v->a[2631] = shift(663);
	v->a[2632] = entry(1, false);
	v->a[2633] = shift(1096);
	v->a[2634] = entry(1, false);
	v->a[2635] = shift(237);
	v->a[2636] = entry(1, false);
	v->a[2637] = shift(161);
	v->a[2638] = entry(1, false);
	v->a[2639] = shift(603);
	parse_actions_entries_132(v);
}

void	parse_actions_entries_132(t_parse_actions_entries_array *v)
{
	v->a[2640] = entry(1, true);
	v->a[2641] = shift(1317);
	v->a[2642] = entry(1, false);
	v->a[2643] = shift(173);
	v->a[2644] = entry(1, false);
	v->a[2645] = shift(1637);
	v->a[2646] = entry(1, false);
	v->a[2647] = shift(1805);
	v->a[2648] = entry(1, false);
	v->a[2649] = shift(1011);
	v->a[2650] = entry(1, false);
	v->a[2651] = shift(1216);
	v->a[2652] = entry(1, true);
	v->a[2653] = shift(1216);
	v->a[2654] = entry(2, false);
	v->a[2655] = reduce(aux_sym__heredoc_command, 2, 0, 32);
	v->a[2656] = shift_repeat(1589);
	v->a[2657] = entry(1, false);
	v->a[2658] = reduce(aux_sym__heredoc_command, 2, 0, 32);
	v->a[2659] = entry(2, false);
	parse_actions_entries_133(v);
}

void	parse_actions_entries_133(t_parse_actions_entries_array *v)
{
	v->a[2660] = reduce(aux_sym__heredoc_command, 2, 0, 32);
	v->a[2661] = shift_repeat(739);
	v->a[2662] = entry(2, false);
	v->a[2663] = reduce(aux_sym__heredoc_command, 2, 0, 32);
	v->a[2664] = shift_repeat(1643);
	v->a[2665] = entry(2, false);
	v->a[2666] = reduce(aux_sym__heredoc_command, 2, 0, 32);
	v->a[2667] = shift_repeat(1644);
	v->a[2668] = entry(2, false);
	v->a[2669] = reduce(aux_sym__heredoc_command, 2, 0, 32);
	v->a[2670] = shift_repeat(1611);
	v->a[2671] = entry(2, false);
	v->a[2672] = reduce(aux_sym__heredoc_command, 2, 0, 32);
	v->a[2673] = shift_repeat(85);
	v->a[2674] = entry(2, false);
	v->a[2675] = reduce(aux_sym__heredoc_command, 2, 0, 32);
	v->a[2676] = shift_repeat(89);
	v->a[2677] = entry(1, true);
	v->a[2678] = reduce(sym__heredoc_expression, 2, 0, 54);
	v->a[2679] = entry(2, false);
	parse_actions_entries_134(v);
}

void	parse_actions_entries_134(t_parse_actions_entries_array *v)
{
	v->a[2680] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[2681] = shift_repeat(1421);
	v->a[2682] = entry(2, true);
	v->a[2683] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[2684] = shift_repeat(1734);
	v->a[2685] = entry(1, false);
	v->a[2686] = shift(841);
	v->a[2687] = entry(1, false);
	v->a[2688] = shift(184);
	v->a[2689] = entry(1, true);
	v->a[2690] = shift(841);
	v->a[2691] = entry(1, false);
	v->a[2692] = shift(466);
	v->a[2693] = entry(1, true);
	v->a[2694] = shift(466);
	v->a[2695] = entry(1, false);
	v->a[2696] = shift(903);
	v->a[2697] = entry(1, false);
	v->a[2698] = shift(301);
	v->a[2699] = entry(1, true);
	parse_actions_entries_135(v);
}

/* EOF parse_actions_entries_26.c */
