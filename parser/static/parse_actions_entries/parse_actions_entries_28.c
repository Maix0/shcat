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
	v->a[2800] = shift(1889);
	v->a[2801] = entry(1, false);
	v->a[2802] = shift(1737);
	v->a[2803] = entry(1, false);
	v->a[2804] = shift(1255);
	v->a[2805] = entry(1, true);
	v->a[2806] = shift(1255);
	v->a[2807] = entry(1, true);
	v->a[2808] = shift(142);
	v->a[2809] = entry(1, true);
	v->a[2810] = shift(1416);
	v->a[2811] = entry(1, true);
	v->a[2812] = shift(2079);
	v->a[2813] = entry(1, true);
	v->a[2814] = shift(1222);
	v->a[2815] = entry(1, true);
	v->a[2816] = reduce(sym__expansion_body, 2, 0, 27);
	v->a[2817] = entry(1, true);
	v->a[2818] = reduce(sym__expansion_body, 2, 0, 28);
	v->a[2819] = entry(2, false);
	parse_actions_entries_141(v);
}

void	parse_actions_entries_141(t_parse_actions_entries_array *v)
{
	v->a[2820] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[2821] = shift_repeat(1255);
	v->a[2822] = entry(2, true);
	v->a[2823] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[2824] = shift_repeat(1255);
	v->a[2825] = entry(1, true);
	v->a[2826] = shift(1754);
	v->a[2827] = entry(1, true);
	v->a[2828] = shift(136);
	v->a[2829] = entry(1, true);
	v->a[2830] = shift(1364);
	v->a[2831] = entry(1, true);
	v->a[2832] = shift(2052);
	v->a[2833] = entry(1, true);
	v->a[2834] = shift(134);
	v->a[2835] = entry(1, true);
	v->a[2836] = shift(1373);
	v->a[2837] = entry(1, false);
	v->a[2838] = shift(1744);
	v->a[2839] = entry(1, false);
	parse_actions_entries_142(v);
}

void	parse_actions_entries_142(t_parse_actions_entries_array *v)
{
	v->a[2840] = shift(1745);
	v->a[2841] = entry(1, true);
	v->a[2842] = shift(143);
	v->a[2843] = entry(1, true);
	v->a[2844] = shift(1384);
	v->a[2845] = entry(2, false);
	v->a[2846] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2847] = shift_repeat(1422);
	v->a[2848] = entry(2, true);
	v->a[2849] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2850] = shift_repeat(1422);
	v->a[2851] = entry(2, true);
	v->a[2852] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2853] = shift_repeat(1754);
	v->a[2854] = entry(1, false);
	v->a[2855] = shift(1789);
	v->a[2856] = entry(1, false);
	v->a[2857] = shift(1786);
	v->a[2858] = entry(1, true);
	v->a[2859] = shift(1786);
	parse_actions_entries_143(v);
}

void	parse_actions_entries_143(t_parse_actions_entries_array *v)
{
	v->a[2860] = entry(2, false);
	v->a[2861] = reduce(aux_sym_pipeline_repeat1, 2, 0, 0);
	v->a[2862] = shift_repeat(147);
	v->a[2863] = entry(1, true);
	v->a[2864] = shift(148);
	v->a[2865] = entry(1, true);
	v->a[2866] = shift(1375);
	v->a[2867] = entry(1, true);
	v->a[2868] = shift(141);
	v->a[2869] = entry(1, true);
	v->a[2870] = shift(140);
	v->a[2871] = entry(1, true);
	v->a[2872] = shift(1366);
	v->a[2873] = entry(1, false);
	v->a[2874] = shift(147);
	v->a[2875] = entry(1, true);
	v->a[2876] = reduce(sym__expansion_body, 1, 0, 3);
	v->a[2877] = entry(1, false);
	v->a[2878] = shift(135);
	v->a[2879] = entry(1, true);
	parse_actions_entries_144(v);
}

void	parse_actions_entries_144(t_parse_actions_entries_array *v)
{
	v->a[2880] = shift(1812);
	v->a[2881] = entry(1, true);
	v->a[2882] = shift(1814);
	v->a[2883] = entry(2, false);
	v->a[2884] = reduce(aux_sym_pipeline_repeat1, 2, 0, 0);
	v->a[2885] = shift_repeat(135);
	v->a[2886] = entry(1, true);
	v->a[2887] = shift(1808);
	v->a[2888] = entry(1, false);
	v->a[2889] = shift(1883);
	v->a[2890] = entry(1, true);
	v->a[2891] = shift(1883);
	v->a[2892] = entry(1, true);
	v->a[2893] = shift(1875);
	v->a[2894] = entry(1, true);
	v->a[2895] = shift(1849);
	v->a[2896] = entry(1, true);
	v->a[2897] = shift(1822);
	v->a[2898] = entry(1, true);
	v->a[2899] = shift(1835);
	parse_actions_entries_145(v);
}

/* EOF parse_actions_entries_28.c */
