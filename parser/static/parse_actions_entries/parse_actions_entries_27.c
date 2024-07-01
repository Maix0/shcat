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
	v->a[2700] = shift(2072);
	v->a[2701] = entry(1, false);
	v->a[2702] = shift(1635);
	v->a[2703] = entry(1, true);
	v->a[2704] = shift(2072);
	v->a[2705] = entry(1, false);
	v->a[2706] = shift(563);
	v->a[2707] = entry(1, false);
	v->a[2708] = shift(1029);
	v->a[2709] = entry(1, false);
	v->a[2710] = shift(483);
	v->a[2711] = entry(1, true);
	v->a[2712] = shift(1029);
	v->a[2713] = entry(1, false);
	v->a[2714] = shift(880);
	v->a[2715] = entry(1, false);
	v->a[2716] = shift(885);
	v->a[2717] = entry(1, false);
	v->a[2718] = shift(1902);
	v->a[2719] = entry(1, false);
	parse_actions_entries_136(v);
}

void	parse_actions_entries_136(t_parse_actions_entries_array *v)
{
	v->a[2720] = shift(1878);
	v->a[2721] = entry(1, false);
	v->a[2722] = shift(1781);
	v->a[2723] = entry(1, false);
	v->a[2724] = shift(99);
	v->a[2725] = entry(1, false);
	v->a[2726] = shift(98);
	v->a[2727] = entry(1, false);
	v->a[2728] = shift(997);
	v->a[2729] = entry(1, true);
	v->a[2730] = shift(997);
	v->a[2731] = entry(1, true);
	v->a[2732] = shift(1943);
	v->a[2733] = entry(1, false);
	v->a[2734] = shift(1214);
	v->a[2735] = entry(1, false);
	v->a[2736] = shift(734);
	v->a[2737] = entry(1, true);
	v->a[2738] = shift(1214);
	v->a[2739] = entry(1, false);
	parse_actions_entries_137(v);
}

void	parse_actions_entries_137(t_parse_actions_entries_array *v)
{
	v->a[2740] = shift(780);
	v->a[2741] = entry(1, false);
	v->a[2742] = shift(1843);
	v->a[2743] = entry(1, false);
	v->a[2744] = shift(720);
	v->a[2745] = entry(1, true);
	v->a[2746] = shift(720);
	v->a[2747] = entry(2, false);
	v->a[2748] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2749] = shift_repeat(1588);
	v->a[2750] = entry(2, false);
	v->a[2751] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2752] = shift_repeat(622);
	v->a[2753] = entry(2, true);
	v->a[2754] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2755] = shift_repeat(1943);
	v->a[2756] = entry(1, false);
	v->a[2757] = shift(1980);
	v->a[2758] = entry(1, false);
	v->a[2759] = shift(808);
	parse_actions_entries_138(v);
}

void	parse_actions_entries_138(t_parse_actions_entries_array *v)
{
	v->a[2760] = entry(1, false);
	v->a[2761] = shift(1518);
	v->a[2762] = entry(1, false);
	v->a[2763] = shift(1829);
	v->a[2764] = entry(1, false);
	v->a[2765] = shift(1797);
	v->a[2766] = entry(1, false);
	v->a[2767] = shift(103);
	v->a[2768] = entry(1, false);
	v->a[2769] = shift(116);
	v->a[2770] = entry(1, true);
	v->a[2771] = shift(1980);
	v->a[2772] = entry(1, false);
	v->a[2773] = shift(503);
	v->a[2774] = entry(1, true);
	v->a[2775] = shift(503);
	v->a[2776] = entry(1, false);
	v->a[2777] = shift(2056);
	v->a[2778] = entry(1, false);
	v->a[2779] = shift(830);
	parse_actions_entries_139(v);
}

void	parse_actions_entries_139(t_parse_actions_entries_array *v)
{
	v->a[2780] = entry(1, false);
	v->a[2781] = shift(1656);
	v->a[2782] = entry(1, true);
	v->a[2783] = shift(1656);
	v->a[2784] = entry(1, false);
	v->a[2785] = shift(1998);
	v->a[2786] = entry(1, false);
	v->a[2787] = shift(1580);
	v->a[2788] = entry(1, true);
	v->a[2789] = shift(1580);
	v->a[2790] = entry(1, false);
	v->a[2791] = shift(439);
	v->a[2792] = entry(1, false);
	v->a[2793] = shift(758);
	v->a[2794] = entry(1, true);
	v->a[2795] = shift(758);
	v->a[2796] = entry(1, false);
	v->a[2797] = shift(1479);
	v->a[2798] = entry(1, false);
	v->a[2799] = shift(836);
	parse_actions_entries_140(v);
}

/* EOF parse_actions_entries_27.c */
