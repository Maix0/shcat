/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_actions_entries_27.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_actions_entries.h"

void	parse_actions_entries_135(t_parse_actions_entries_array *v)
{
	v->a[2700] = shift(1550);
	v->a[2701] = entry(1, false);
	v->a[2702] = shift(157);
	v->a[2703] = entry(1, false);
	v->a[2704] = shift(1834);
	v->a[2705] = entry(1, false);
	v->a[2706] = shift(1847);
	v->a[2707] = entry(1, false);
	v->a[2708] = shift(334);
	v->a[2709] = entry(1, false);
	v->a[2710] = shift(176);
	v->a[2711] = entry(1, false);
	v->a[2712] = shift(513);
	v->a[2713] = entry(1, false);
	v->a[2714] = shift(165);
	v->a[2715] = entry(1, false);
	v->a[2716] = shift(635);
	v->a[2717] = entry(1, false);
	v->a[2718] = shift(158);
	v->a[2719] = entry(1, false);
	parse_actions_entries_136(v);
}

void	parse_actions_entries_136(t_parse_actions_entries_array *v)
{
	v->a[2720] = shift(172);
	v->a[2721] = entry(1, false);
	v->a[2722] = shift(186);
	v->a[2723] = entry(1, false);
	v->a[2724] = shift(1792);
	v->a[2725] = entry(1, false);
	v->a[2726] = shift(159);
	v->a[2727] = entry(1, false);
	v->a[2728] = shift(180);
	v->a[2729] = entry(1, true);
	v->a[2730] = shift(2122);
	v->a[2731] = entry(1, false);
	v->a[2732] = shift(161);
	v->a[2733] = entry(2, false);
	v->a[2734] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[2735] = shift_repeat(1375);
	v->a[2736] = entry(2, true);
	v->a[2737] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[2738] = shift_repeat(1732);
	v->a[2739] = entry(1, true);
	parse_actions_entries_137(v);
}

void	parse_actions_entries_137(t_parse_actions_entries_array *v)
{
	v->a[2740] = shift(1981);
	v->a[2741] = entry(1, false);
	v->a[2742] = shift(1422);
	v->a[2743] = entry(1, true);
	v->a[2744] = shift(1422);
	v->a[2745] = entry(1, false);
	v->a[2746] = shift(2039);
	v->a[2747] = entry(1, true);
	v->a[2748] = shift(2039);
	v->a[2749] = entry(1, true);
	v->a[2750] = shift(1728);
	v->a[2751] = entry(1, false);
	v->a[2752] = shift(685);
	v->a[2753] = entry(1, false);
	v->a[2754] = shift(387);
	v->a[2755] = entry(2, true);
	v->a[2756] = reduce(aux_sym__variable_assignments_repeat1, 2, 0, 0);
	v->a[2757] = shift_repeat(1981);
	v->a[2758] = entry(1, true);
	v->a[2759] = shift(1752);
	parse_actions_entries_138(v);
}

void	parse_actions_entries_138(t_parse_actions_entries_array *v)
{
	v->a[2760] = entry(2, false);
	v->a[2761] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[2762] = shift_repeat(1422);
	v->a[2763] = entry(2, true);
	v->a[2764] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[2765] = shift_repeat(1422);
	v->a[2766] = entry(2, false);
	v->a[2767] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[2768] = shift_repeat(2039);
	v->a[2769] = entry(2, true);
	v->a[2770] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[2771] = shift_repeat(2039);
	v->a[2772] = entry(2, true);
	v->a[2773] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[2774] = shift_repeat(1728);
	v->a[2775] = entry(1, false);
	v->a[2776] = shift(396);
	v->a[2777] = entry(2, false);
	v->a[2778] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2779] = shift_repeat(1375);
	parse_actions_entries_139(v);
}

void	parse_actions_entries_139(t_parse_actions_entries_array *v)
{
	v->a[2780] = entry(2, true);
	v->a[2781] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2782] = shift_repeat(1752);
	v->a[2783] = entry(1, false);
	v->a[2784] = shift(806);
	v->a[2785] = entry(1, false);
	v->a[2786] = shift(959);
	v->a[2787] = entry(1, false);
	v->a[2788] = shift(429);
	v->a[2789] = entry(1, false);
	v->a[2790] = shift(486);
	v->a[2791] = entry(1, false);
	v->a[2792] = reduce(sym__expansion_expression, 1, 0, 24);
	v->a[2793] = entry(1, false);
	v->a[2794] = shift(1869);
	v->a[2795] = entry(1, true);
	v->a[2796] = shift(1892);
	v->a[2797] = entry(1, true);
	v->a[2798] = shift(1887);
	v->a[2799] = entry(1, true);
	parse_actions_entries_140(v);
}

/* EOF parse_actions_entries_27.c */
