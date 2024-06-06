/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_actions_entries_28.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_actions_entries.h"

void	parse_actions_entries_140(t_parse_actions_entries_array *v)
{
	v->a[2800] = shift_repeat(1531);
	v->a[2801] = entry(2, false);
	v->a[2802] = reduce(aux_sym_command_repeat2, 2, 0, 30);
	v->a[2803] = shift_repeat(3282);
	v->a[2804] = entry(2, true);
	v->a[2805] = reduce(aux_sym_command_repeat2, 2, 0, 30);
	v->a[2806] = shift_repeat(3123);
	v->a[2807] = entry(2, false);
	v->a[2808] = reduce(aux_sym_command_repeat2, 2, 0, 30);
	v->a[2809] = shift_repeat(122);
	v->a[2810] = entry(2, true);
	v->a[2811] = reduce(aux_sym_command_repeat2, 2, 0, 30);
	v->a[2812] = shift_repeat(120);
	v->a[2813] = entry(2, true);
	v->a[2814] = reduce(aux_sym_command_repeat2, 2, 0, 30);
	v->a[2815] = shift_repeat(111);
	v->a[2816] = entry(2, true);
	v->a[2817] = reduce(aux_sym_command_repeat2, 2, 0, 30);
	v->a[2818] = shift_repeat(1676);
	v->a[2819] = entry(2, true);
	parse_actions_entries_141(v);
}

void	parse_actions_entries_141(t_parse_actions_entries_array *v)
{
	v->a[2820] = reduce(aux_sym_command_repeat2, 2, 0, 30);
	v->a[2821] = shift_repeat(4068);
	v->a[2822] = entry(1, false);
	v->a[2823] = shift(2538);
	v->a[2824] = entry(1, true);
	v->a[2825] = shift(2379);
	v->a[2826] = entry(1, false);
	v->a[2827] = reduce(sym_number, 1, 0, 0);
	v->a[2828] = entry(1, true);
	v->a[2829] = reduce(sym_number, 1, 0, 0);
	v->a[2830] = entry(1, true);
	v->a[2831] = shift(2538);
	v->a[2832] = entry(2, false);
	v->a[2833] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[2834] = shift_repeat(2340);
	v->a[2835] = entry(2, true);
	v->a[2836] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[2837] = shift_repeat(2340);
	v->a[2838] = entry(1, false);
	v->a[2839] = shift(1525);
	parse_actions_entries_142(v);
}

void	parse_actions_entries_142(t_parse_actions_entries_array *v)
{
	v->a[2840] = entry(1, false);
	v->a[2841] = shift(1529);
	v->a[2842] = entry(1, true);
	v->a[2843] = shift(1529);
	v->a[2844] = entry(2, false);
	v->a[2845] = reduce(aux_sym_unset_command_repeat1, 2, 0, 0);
	v->a[2846] = shift_repeat(1442);
	v->a[2847] = entry(2, true);
	v->a[2848] = reduce(aux_sym_unset_command_repeat1, 2, 0, 0);
	v->a[2849] = shift_repeat(1845);
	v->a[2850] = entry(2, false);
	v->a[2851] = reduce(aux_sym_unset_command_repeat1, 2, 0, 0);
	v->a[2852] = shift_repeat(3177);
	v->a[2853] = entry(2, true);
	v->a[2854] = reduce(aux_sym_unset_command_repeat1, 2, 0, 0);
	v->a[2855] = shift_repeat(1472);
	v->a[2856] = entry(2, true);
	v->a[2857] = reduce(aux_sym_unset_command_repeat1, 2, 0, 0);
	v->a[2858] = shift_repeat(3101);
	v->a[2859] = entry(2, true);
	parse_actions_entries_143(v);
}

void	parse_actions_entries_143(t_parse_actions_entries_array *v)
{
	v->a[2860] = reduce(aux_sym_unset_command_repeat1, 2, 0, 0);
	v->a[2861] = shift_repeat(1442);
	v->a[2862] = entry(2, false);
	v->a[2863] = reduce(aux_sym_unset_command_repeat1, 2, 0, 0);
	v->a[2864] = shift_repeat(1575);
	v->a[2865] = entry(2, false);
	v->a[2866] = reduce(aux_sym_unset_command_repeat1, 2, 0, 0);
	v->a[2867] = shift_repeat(3318);
	v->a[2868] = entry(2, true);
	v->a[2869] = reduce(aux_sym_unset_command_repeat1, 2, 0, 0);
	v->a[2870] = shift_repeat(3103);
	v->a[2871] = entry(2, false);
	v->a[2872] = reduce(aux_sym_unset_command_repeat1, 2, 0, 0);
	v->a[2873] = shift_repeat(168);
	v->a[2874] = entry(2, true);
	v->a[2875] = reduce(aux_sym_unset_command_repeat1, 2, 0, 0);
	v->a[2876] = shift_repeat(167);
	v->a[2877] = entry(2, true);
	v->a[2878] = reduce(aux_sym_unset_command_repeat1, 2, 0, 0);
	v->a[2879] = shift_repeat(164);
	parse_actions_entries_144(v);
}

void	parse_actions_entries_144(t_parse_actions_entries_array *v)
{
	v->a[2880] = entry(2, false);
	v->a[2881] = reduce(aux_sym_unset_command_repeat1, 2, 0, 0);
	v->a[2882] = shift_repeat(518);
	v->a[2883] = entry(2, true);
	v->a[2884] = reduce(aux_sym_unset_command_repeat1, 2, 0, 0);
	v->a[2885] = shift_repeat(4066);
	v->a[2886] = entry(1, false);
	v->a[2887] = reduce(sym_arithmetic_expansion, 4, 0, 0);
	v->a[2888] = entry(1, true);
	v->a[2889] = reduce(sym_arithmetic_expansion, 4, 0, 0);
	v->a[2890] = entry(1, false);
	v->a[2891] = shift(1264);
	v->a[2892] = entry(1, false);
	v->a[2893] = shift(2194);
	v->a[2894] = entry(1, true);
	v->a[2895] = shift(2194);
	v->a[2896] = entry(1, true);
	v->a[2897] = shift(1397);
	v->a[2898] = entry(1, true);
	v->a[2899] = shift(1304);
	parse_actions_entries_145(v);
}

/* EOF parse_actions_entries_28.c */
