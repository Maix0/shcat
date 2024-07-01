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
	v->a[2801] = shift(1454);
	v->a[2802] = entry(1, true);
	v->a[2803] = shift(136);
	v->a[2804] = entry(1, true);
	v->a[2805] = shift(1400);
	v->a[2806] = entry(1, true);
	v->a[2807] = reduce(sym__expansion_body, 1, 0, 7);
	v->a[2808] = entry(1, true);
	v->a[2809] = shift(138);
	v->a[2810] = entry(1, true);
	v->a[2811] = shift(1412);
	v->a[2812] = entry(1, true);
	v->a[2813] = shift(2060);
	v->a[2814] = entry(2, false);
	v->a[2815] = reduce(aux_sym_pipeline_repeat1, 2, 0, 0);
	v->a[2816] = shift_repeat(144);
	v->a[2817] = entry(1, false);
	v->a[2818] = shift(1730);
	v->a[2819] = entry(1, false);
	parse_actions_entries_141(v);
}

void	parse_actions_entries_141(t_parse_actions_entries_array *v)
{
	v->a[2820] = shift(144);
	v->a[2821] = entry(2, false);
	v->a[2822] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2823] = shift_repeat(1389);
	v->a[2824] = entry(2, true);
	v->a[2825] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2826] = shift_repeat(1389);
	v->a[2827] = entry(2, true);
	v->a[2828] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2829] = shift_repeat(1777);
	v->a[2830] = entry(1, true);
	v->a[2831] = shift(1777);
	v->a[2832] = entry(1, true);
	v->a[2833] = shift(146);
	v->a[2834] = entry(1, true);
	v->a[2835] = shift(1376);
	v->a[2836] = entry(1, true);
	v->a[2837] = shift(141);
	v->a[2838] = entry(1, true);
	v->a[2839] = shift(1366);
	parse_actions_entries_142(v);
}

void	parse_actions_entries_142(t_parse_actions_entries_array *v)
{
	v->a[2840] = entry(1, false);
	v->a[2841] = shift(1864);
	v->a[2842] = entry(1, false);
	v->a[2843] = reduce(sym_expansion_expression, 1, 0, 24);
	v->a[2844] = entry(1, true);
	v->a[2845] = shift(1872);
	v->a[2846] = entry(1, true);
	v->a[2847] = shift(1864);
	v->a[2848] = entry(1, false);
	v->a[2849] = shift(1743);
	v->a[2850] = entry(1, false);
	v->a[2851] = shift(1012);
	v->a[2852] = entry(1, false);
	v->a[2853] = shift(1734);
	v->a[2854] = entry(1, false);
	v->a[2855] = shift(1733);
	v->a[2856] = entry(1, true);
	v->a[2857] = shift(1733);
	v->a[2858] = entry(1, false);
	v->a[2859] = shift(1768);
	parse_actions_entries_143(v);
}

void	parse_actions_entries_143(t_parse_actions_entries_array *v)
{
	v->a[2860] = entry(1, false);
	v->a[2861] = shift(408);
	v->a[2862] = entry(1, false);
	v->a[2863] = shift(391);
	v->a[2864] = entry(1, false);
	v->a[2865] = shift(1885);
	v->a[2866] = entry(1, false);
	v->a[2867] = shift(402);
	v->a[2868] = entry(1, false);
	v->a[2869] = shift(1188);
	v->a[2870] = entry(1, false);
	v->a[2871] = shift(478);
	v->a[2872] = entry(1, false);
	v->a[2873] = shift(1442);
	v->a[2874] = entry(1, true);
	v->a[2875] = shift(1828);
	v->a[2876] = entry(1, false);
	v->a[2877] = shift(1787);
	v->a[2878] = entry(1, false);
	v->a[2879] = shift(591);
	parse_actions_entries_144(v);
}

void	parse_actions_entries_144(t_parse_actions_entries_array *v)
{
	v->a[2880] = entry(1, true);
	v->a[2881] = shift(1810);
	v->a[2882] = entry(1, false);
	v->a[2883] = shift(574);
	v->a[2884] = entry(1, false);
	v->a[2885] = shift(614);
	v->a[2886] = entry(1, false);
	v->a[2887] = shift(1157);
	v->a[2888] = entry(1, false);
	v->a[2889] = shift(461);
	v->a[2890] = entry(1, false);
	v->a[2891] = shift(868);
	v->a[2892] = entry(1, true);
	v->a[2893] = shift(1827);
	v->a[2894] = entry(1, false);
	v->a[2895] = shift(907);
	v->a[2896] = entry(1, false);
	v->a[2897] = shift(882);
	v->a[2898] = entry(1, false);
	v->a[2899] = shift(278);
	parse_actions_entries_145(v);
}

/* EOF parse_actions_entries_28.c */
