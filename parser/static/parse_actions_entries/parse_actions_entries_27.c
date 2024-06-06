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
	v->a[2701] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[2702] = shift_repeat(2380);
	v->a[2703] = entry(2, true);
	v->a[2704] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[2705] = shift_repeat(2380);
	v->a[2706] = entry(1, false);
	v->a[2707] = shift(250);
	v->a[2708] = entry(1, false);
	v->a[2709] = shift(3962);
	v->a[2710] = entry(1, true);
	v->a[2711] = shift(344);
	v->a[2712] = entry(1, false);
	v->a[2713] = shift(344);
	v->a[2714] = entry(2, true);
	v->a[2715] = reduce(aux_sym_command_repeat1, 1, 0, 0);
	v->a[2716] = shift(3677);
	v->a[2717] = entry(1, false);
	v->a[2718] = reduce(sym_variable_assignment, 3, 0, 20);
	v->a[2719] = entry(1, true);
	parse_actions_entries_136(v);
}

void	parse_actions_entries_136(t_parse_actions_entries_array *v)
{
	v->a[2720] = reduce(sym_variable_assignment, 3, 0, 20);
	v->a[2721] = entry(1, true);
	v->a[2722] = shift(2355);
	v->a[2723] = entry(1, true);
	v->a[2724] = shift(2347);
	v->a[2725] = entry(2, false);
	v->a[2726] = reduce(aux_sym_command_repeat2, 2, 0, 30);
	v->a[2727] = shift_repeat(1356);
	v->a[2728] = entry(2, false);
	v->a[2729] = reduce(aux_sym_command_repeat2, 2, 0, 30);
	v->a[2730] = shift_repeat(1354);
	v->a[2731] = entry(2, true);
	v->a[2732] = reduce(aux_sym_command_repeat2, 2, 0, 30);
	v->a[2733] = shift_repeat(1356);
	v->a[2734] = entry(2, false);
	v->a[2735] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[2736] = shift_repeat(1343);
	v->a[2737] = entry(2, false);
	v->a[2738] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[2739] = shift_repeat(1346);
	parse_actions_entries_137(v);
}

void	parse_actions_entries_137(t_parse_actions_entries_array *v)
{
	v->a[2740] = entry(2, true);
	v->a[2741] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[2742] = shift_repeat(1343);
	v->a[2743] = entry(1, true);
	v->a[2744] = shift(382);
	v->a[2745] = entry(1, false);
	v->a[2746] = shift(382);
	v->a[2747] = entry(1, false);
	v->a[2748] = shift(505);
	v->a[2749] = entry(1, false);
	v->a[2750] = reduce(sym_command_name, 1, 0, 0);
	v->a[2751] = entry(2, false);
	v->a[2752] = reduce(sym_command_name, 1, 0, 0);
	v->a[2753] = shift(3815);
	v->a[2754] = entry(1, true);
	v->a[2755] = reduce(sym_command_name, 1, 0, 0);
	v->a[2756] = entry(1, false);
	v->a[2757] = reduce(aux_sym_declaration_command_repeat1, 1, 0, 0);
	v->a[2758] = entry(1, true);
	v->a[2759] = reduce(aux_sym_declaration_command_repeat1, 1, 0, 0);
	parse_actions_entries_138(v);
}

void	parse_actions_entries_138(t_parse_actions_entries_array *v)
{
	v->a[2760] = entry(2, false);
	v->a[2761] = reduce(aux_sym_unset_command_repeat1, 2, 0, 0);
	v->a[2762] = shift_repeat(1351);
	v->a[2763] = entry(2, false);
	v->a[2764] = reduce(aux_sym_unset_command_repeat1, 2, 0, 0);
	v->a[2765] = shift_repeat(1366);
	v->a[2766] = entry(2, false);
	v->a[2767] = reduce(aux_sym_unset_command_repeat1, 2, 0, 0);
	v->a[2768] = shift_repeat(505);
	v->a[2769] = entry(2, true);
	v->a[2770] = reduce(aux_sym_unset_command_repeat1, 2, 0, 0);
	v->a[2771] = shift_repeat(1351);
	v->a[2772] = entry(1, false);
	v->a[2773] = reduce(sym_command_substitution, 3, 0, 0);
	v->a[2774] = entry(1, true);
	v->a[2775] = reduce(sym_command_substitution, 3, 0, 0);
	v->a[2776] = entry(1, false);
	v->a[2777] = reduce(sym_command_substitution, 3, 0, 29);
	v->a[2778] = entry(1, true);
	v->a[2779] = reduce(sym_command_substitution, 3, 0, 29);
	parse_actions_entries_139(v);
}

void	parse_actions_entries_139(t_parse_actions_entries_array *v)
{
	v->a[2780] = entry(2, false);
	v->a[2781] = reduce(aux_sym_command_repeat2, 2, 0, 30);
	v->a[2782] = shift_repeat(1452);
	v->a[2783] = entry(2, true);
	v->a[2784] = reduce(aux_sym_command_repeat2, 2, 0, 30);
	v->a[2785] = shift_repeat(1847);
	v->a[2786] = entry(2, false);
	v->a[2787] = reduce(aux_sym_command_repeat2, 2, 0, 30);
	v->a[2788] = shift_repeat(3166);
	v->a[2789] = entry(2, true);
	v->a[2790] = reduce(aux_sym_command_repeat2, 2, 0, 30);
	v->a[2791] = shift_repeat(1404);
	v->a[2792] = entry(2, true);
	v->a[2793] = reduce(aux_sym_command_repeat2, 2, 0, 30);
	v->a[2794] = shift_repeat(3122);
	v->a[2795] = entry(2, true);
	v->a[2796] = reduce(aux_sym_command_repeat2, 2, 0, 30);
	v->a[2797] = shift_repeat(1452);
	v->a[2798] = entry(2, false);
	v->a[2799] = reduce(aux_sym_command_repeat2, 2, 0, 30);
	parse_actions_entries_140(v);
}

/* EOF parse_actions_entries_27.c */
