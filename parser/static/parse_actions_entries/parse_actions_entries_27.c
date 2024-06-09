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
	v->a[2700] = entry(2, false);
	v->a[2701] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2702] = shift_repeat(273);
	v->a[2703] = entry(2, true);
	v->a[2704] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2705] = shift_repeat(1839);
	v->a[2706] = entry(2, false);
	v->a[2707] = reduce(aux_sym_case_statement_repeat1, 2, 0, 32);
	v->a[2708] = shift_repeat(1908);
	v->a[2709] = entry(2, false);
	v->a[2710] = reduce(aux_sym_case_statement_repeat1, 2, 0, 32);
	v->a[2711] = shift_repeat(1324);
	v->a[2712] = entry(2, false);
	v->a[2713] = reduce(aux_sym_case_statement_repeat1, 2, 0, 32);
	v->a[2714] = shift_repeat(849);
	v->a[2715] = entry(2, false);
	v->a[2716] = reduce(aux_sym_case_statement_repeat1, 2, 0, 32);
	v->a[2717] = shift_repeat(1748);
	v->a[2718] = entry(2, false);
	v->a[2719] = reduce(aux_sym_case_statement_repeat1, 2, 0, 32);
	parse_actions_entries_136(v);
}

void	parse_actions_entries_136(t_parse_actions_entries_array *v)
{
	v->a[2720] = shift_repeat(1749);
	v->a[2721] = entry(2, false);
	v->a[2722] = reduce(aux_sym_case_statement_repeat1, 2, 0, 32);
	v->a[2723] = shift_repeat(1995);
	v->a[2724] = entry(2, false);
	v->a[2725] = reduce(aux_sym_case_statement_repeat1, 2, 0, 32);
	v->a[2726] = shift_repeat(1919);
	v->a[2727] = entry(2, false);
	v->a[2728] = reduce(aux_sym_case_statement_repeat1, 2, 0, 32);
	v->a[2729] = shift_repeat(1670);
	v->a[2730] = entry(2, false);
	v->a[2731] = reduce(aux_sym_case_statement_repeat1, 2, 0, 32);
	v->a[2732] = shift_repeat(94);
	v->a[2733] = entry(2, false);
	v->a[2734] = reduce(aux_sym_case_statement_repeat1, 2, 0, 32);
	v->a[2735] = shift_repeat(99);
	v->a[2736] = entry(2, true);
	v->a[2737] = reduce(aux_sym_case_statement_repeat1, 2, 0, 32);
	v->a[2738] = shift_repeat(1851);
	v->a[2739] = entry(2, false);
	parse_actions_entries_137(v);
}

void	parse_actions_entries_137(t_parse_actions_entries_array *v)
{
	v->a[2740] = reduce(aux_sym_pipeline_repeat1, 2, 0, 0);
	v->a[2741] = shift_repeat(157);
	v->a[2742] = entry(1, false);
	v->a[2743] = shift(157);
	v->a[2744] = entry(1, true);
	v->a[2745] = shift(1403);
	v->a[2746] = entry(1, true);
	v->a[2747] = shift(1425);
	v->a[2748] = entry(1, true);
	v->a[2749] = shift(1367);
	v->a[2750] = entry(1, true);
	v->a[2751] = shift(1410);
	v->a[2752] = entry(2, true);
	v->a[2753] = reduce(aux_sym_variable_assignments_repeat1, 2, 0, 0);
	v->a[2754] = shift_repeat(2234);
	v->a[2755] = entry(1, false);
	v->a[2756] = shift(1408);
	v->a[2757] = entry(1, false);
	v->a[2758] = shift(548);
	v->a[2759] = entry(1, true);
	parse_actions_entries_138(v);
}

void	parse_actions_entries_138(t_parse_actions_entries_array *v)
{
	v->a[2760] = reduce(sym__heredoc_pipeline, 2, 0, 0);
	v->a[2761] = entry(1, true);
	v->a[2762] = shift(1825);
	v->a[2763] = entry(1, true);
	v->a[2764] = shift(2234);
	v->a[2765] = entry(1, true);
	v->a[2766] = reduce(sym__heredoc_expression, 2, 0, 33);
	v->a[2767] = entry(2, false);
	v->a[2768] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[2769] = shift_repeat(1408);
	v->a[2770] = entry(2, false);
	v->a[2771] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[2772] = shift_repeat(548);
	v->a[2773] = entry(2, true);
	v->a[2774] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[2775] = shift_repeat(1825);
	v->a[2776] = entry(2, true);
	v->a[2777] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[2778] = shift_repeat(1425);
	v->a[2779] = entry(1, false);
	parse_actions_entries_139(v);
}

void	parse_actions_entries_139(t_parse_actions_entries_array *v)
{
	v->a[2780] = shift(1308);
	v->a[2781] = entry(1, false);
	v->a[2782] = shift(843);
	v->a[2783] = entry(1, false);
	v->a[2784] = shift(1717);
	v->a[2785] = entry(1, false);
	v->a[2786] = shift(1801);
	v->a[2787] = entry(1, false);
	v->a[2788] = shift(1362);
	v->a[2789] = entry(1, false);
	v->a[2790] = shift(1932);
	v->a[2791] = entry(1, false);
	v->a[2792] = shift(1693);
	v->a[2793] = entry(1, false);
	v->a[2794] = shift(45);
	v->a[2795] = entry(1, false);
	v->a[2796] = shift(46);
	v->a[2797] = entry(1, false);
	v->a[2798] = shift(1500);
	v->a[2799] = entry(1, true);
	parse_actions_entries_140(v);
}

/* EOF parse_actions_entries_27.c */
