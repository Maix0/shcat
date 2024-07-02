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
	v->a[2700] = shift(903);
	v->a[2701] = entry(1, false);
	v->a[2702] = shift(406);
	v->a[2703] = entry(1, false);
	v->a[2704] = shift(1829);
	v->a[2705] = entry(1, false);
	v->a[2706] = shift(673);
	v->a[2707] = entry(1, false);
	v->a[2708] = shift(1065);
	v->a[2709] = entry(1, false);
	v->a[2710] = shift(887);
	v->a[2711] = entry(1, false);
	v->a[2712] = shift(511);
	v->a[2713] = entry(1, false);
	v->a[2714] = shift(779);
	v->a[2715] = entry(1, false);
	v->a[2716] = shift(1664);
	v->a[2717] = entry(1, false);
	v->a[2718] = shift(477);
	v->a[2719] = entry(1, true);
	parse_actions_entries_136(v);
}

void	parse_actions_entries_136(t_parse_actions_entries_array *v)
{
	v->a[2720] = shift(477);
	v->a[2721] = entry(1, false);
	v->a[2722] = shift(160);
	v->a[2723] = entry(1, false);
	v->a[2724] = shift(170);
	v->a[2725] = entry(1, false);
	v->a[2726] = shift(496);
	v->a[2727] = entry(1, false);
	v->a[2728] = shift(379);
	v->a[2729] = entry(1, false);
	v->a[2730] = shift(657);
	v->a[2731] = entry(1, true);
	v->a[2732] = shift(657);
	v->a[2733] = entry(1, false);
	v->a[2734] = shift(538);
	v->a[2735] = entry(1, false);
	v->a[2736] = shift(1836);
	v->a[2737] = entry(1, false);
	v->a[2738] = shift(1214);
	v->a[2739] = entry(1, false);
	parse_actions_entries_137(v);
}

void	parse_actions_entries_137(t_parse_actions_entries_array *v)
{
	v->a[2740] = shift(810);
	v->a[2741] = entry(1, false);
	v->a[2742] = shift(918);
	v->a[2743] = entry(1, true);
	v->a[2744] = shift(918);
	v->a[2745] = entry(1, false);
	v->a[2746] = shift(802);
	v->a[2747] = entry(1, false);
	v->a[2748] = shift(394);
	v->a[2749] = entry(1, false);
	v->a[2750] = shift(435);
	v->a[2751] = entry(1, false);
	v->a[2752] = reduce(sym__expansion_expression, 1, 0, 24);
	v->a[2753] = entry(1, false);
	v->a[2754] = shift(1864);
	v->a[2755] = entry(1, true);
	v->a[2756] = shift(1885);
	v->a[2757] = entry(1, true);
	v->a[2758] = shift(1882);
	v->a[2759] = entry(1, true);
	parse_actions_entries_138(v);
}

void	parse_actions_entries_138(t_parse_actions_entries_array *v)
{
	v->a[2760] = shift(1883);
	v->a[2761] = entry(1, false);
	v->a[2762] = shift(481);
	v->a[2763] = entry(1, false);
	v->a[2764] = shift(441);
	v->a[2765] = entry(1, false);
	v->a[2766] = shift(714);
	v->a[2767] = entry(1, true);
	v->a[2768] = shift(1758);
	v->a[2769] = entry(2, false);
	v->a[2770] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2771] = shift_repeat(1421);
	v->a[2772] = entry(2, true);
	v->a[2773] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2774] = shift_repeat(1758);
	v->a[2775] = entry(2, true);
	v->a[2776] = reduce(aux_sym__variable_assignments_repeat1, 2, 0, 0);
	v->a[2777] = shift_repeat(1987);
	v->a[2778] = entry(2, false);
	v->a[2779] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	parse_actions_entries_139(v);
}

void	parse_actions_entries_139(t_parse_actions_entries_array *v)
{
	v->a[2780] = shift_repeat(1387);
	v->a[2781] = entry(2, true);
	v->a[2782] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[2783] = shift_repeat(1387);
	v->a[2784] = entry(2, false);
	v->a[2785] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[2786] = shift_repeat(2039);
	v->a[2787] = entry(2, true);
	v->a[2788] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[2789] = shift_repeat(2039);
	v->a[2790] = entry(2, true);
	v->a[2791] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[2792] = shift_repeat(1735);
	v->a[2793] = entry(1, true);
	v->a[2794] = shift(1987);
	v->a[2795] = entry(1, false);
	v->a[2796] = shift(1300);
	v->a[2797] = entry(1, true);
	v->a[2798] = shift(1300);
	v->a[2799] = entry(1, false);
	parse_actions_entries_140(v);
}

/* EOF parse_actions_entries_27.c */
