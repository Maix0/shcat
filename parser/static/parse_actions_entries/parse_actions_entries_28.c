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
	v->a[2800] = entry(1, true);
	v->a[2801] = shift(52);
	v->a[2802] = entry(1, true);
	v->a[2803] = shift(59);
	v->a[2804] = entry(1, true);
	v->a[2805] = shift(325);
	v->a[2806] = entry(1, true);
	v->a[2807] = shift(608);
	v->a[2808] = entry(1, true);
	v->a[2809] = shift(1285);
	v->a[2810] = entry(1, true);
	v->a[2811] = shift(406);
	v->a[2812] = entry(1, true);
	v->a[2813] = shift(629);
	v->a[2814] = entry(1, true);
	v->a[2815] = shift(674);
	v->a[2816] = entry(1, false);
	v->a[2817] = shift(135);
	v->a[2818] = entry(1, true);
	v->a[2819] = shift(327);
	parse_actions_entries_141(v);
}

void	parse_actions_entries_141(t_parse_actions_entries_array *v)
{
	v->a[2820] = entry(1, true);
	v->a[2821] = shift(131);
	v->a[2822] = entry(1, true);
	v->a[2823] = shift(801);
	v->a[2824] = entry(1, true);
	v->a[2825] = shift(1710);
	v->a[2826] = entry(1, true);
	v->a[2827] = shift(132);
	v->a[2828] = entry(1, true);
	v->a[2829] = shift(786);
	v->a[2830] = entry(2, false);
	v->a[2831] = reduce(aux_sym_pipeline_repeat1, 2, 0, 0);
	v->a[2832] = shift_repeat(135);
	v->a[2833] = entry(1, true);
	v->a[2834] = shift(412);
	v->a[2835] = entry(1, true);
	v->a[2836] = shift(501);
	v->a[2837] = entry(1, true);
	v->a[2838] = shift(490);
	v->a[2839] = entry(1, true);
	parse_actions_entries_142(v);
}

void	parse_actions_entries_142(t_parse_actions_entries_array *v)
{
	v->a[2840] = shift(133);
	v->a[2841] = entry(1, true);
	v->a[2842] = shift(807);
	v->a[2843] = entry(1, true);
	v->a[2844] = shift(815);
	v->a[2845] = entry(1, true);
	v->a[2846] = shift(1483);
	v->a[2847] = entry(1, true);
	v->a[2848] = shift(425);
	v->a[2849] = entry(1, true);
	v->a[2850] = shift(128);
	v->a[2851] = entry(1, true);
	v->a[2852] = shift(810);
	v->a[2853] = entry(1, true);
	v->a[2854] = shift(622);
	v->a[2855] = entry(1, true);
	v->a[2856] = shift(907);
	v->a[2857] = entry(1, true);
	v->a[2858] = shift(1520);
	v->a[2859] = entry(1, true);
	parse_actions_entries_143(v);
}

void	parse_actions_entries_143(t_parse_actions_entries_array *v)
{
	v->a[2860] = shift(1446);
	v->a[2861] = entry(1, true);
	v->a[2862] = shift(1504);
	v->a[2863] = entry(1, true);
	v->a[2864] = shift(1485);
	v->a[2865] = entry(1, true);
	v->a[2866] = shift(777);
	v->a[2867] = entry(2, false);
	v->a[2868] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2869] = shift_repeat(806);
	v->a[2870] = entry(2, false);
	v->a[2871] = reduce(aux_sym__expansion_regex_repeat1, 2, 0, 0);
	v->a[2872] = shift_repeat(1455);
	v->a[2873] = entry(1, false);
	v->a[2874] = reduce(aux_sym__expansion_regex_repeat1, 2, 0, 0);
	v->a[2875] = entry(2, false);
	v->a[2876] = reduce(aux_sym__expansion_regex_repeat1, 2, 0, 0);
	v->a[2877] = shift_repeat(1159);
	v->a[2878] = entry(2, false);
	v->a[2879] = reduce(aux_sym__expansion_regex_repeat1, 2, 0, 0);
	parse_actions_entries_144(v);
}

void	parse_actions_entries_144(t_parse_actions_entries_array *v)
{
	v->a[2880] = shift_repeat(1380);
	v->a[2881] = entry(2, true);
	v->a[2882] = reduce(aux_sym__expansion_regex_repeat1, 2, 0, 0);
	v->a[2883] = shift_repeat(1455);
	v->a[2884] = entry(2, true);
	v->a[2885] = reduce(aux_sym__expansion_regex_repeat1, 2, 0, 0);
	v->a[2886] = shift_repeat(1380);
	v->a[2887] = entry(1, false);
	v->a[2888] = shift(213);
	v->a[2889] = entry(1, true);
	v->a[2890] = shift(1563);
	v->a[2891] = entry(1, false);
	v->a[2892] = shift(744);
	v->a[2893] = entry(1, true);
	v->a[2894] = shift(744);
	v->a[2895] = entry(1, false);
	v->a[2896] = reduce(sym__expansion_regex, 2, 0, 40);
	v->a[2897] = entry(1, false);
	v->a[2898] = shift(1380);
	v->a[2899] = entry(1, true);
	parse_actions_entries_145(v);
}

/* EOF parse_actions_entries_28.c */
