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
	v->a[2800] = entry(1, false);
	v->a[2801] = shift(899);
	v->a[2802] = entry(1, false);
	v->a[2803] = shift(1905);
	v->a[2804] = entry(1, false);
	v->a[2805] = shift(1768);
	v->a[2806] = entry(1, false);
	v->a[2807] = shift(62);
	v->a[2808] = entry(1, false);
	v->a[2809] = shift(51);
	v->a[2810] = entry(1, true);
	v->a[2811] = shift(1479);
	v->a[2812] = entry(1, false);
	v->a[2813] = shift(645);
	v->a[2814] = entry(1, false);
	v->a[2815] = shift(176);
	v->a[2816] = entry(1, true);
	v->a[2817] = shift(645);
	v->a[2818] = entry(1, false);
	v->a[2819] = shift(504);
	parse_actions_entries_141(v);
}

void	parse_actions_entries_141(t_parse_actions_entries_array *v)
{
	v->a[2820] = entry(1, false);
	v->a[2821] = shift(874);
	v->a[2822] = entry(1, false);
	v->a[2823] = shift(963);
	v->a[2824] = entry(1, true);
	v->a[2825] = shift(963);
	v->a[2826] = entry(1, false);
	v->a[2827] = shift(1001);
	v->a[2828] = entry(1, false);
	v->a[2829] = shift(1079);
	v->a[2830] = entry(1, false);
	v->a[2831] = shift(1804);
	v->a[2832] = entry(1, false);
	v->a[2833] = shift(1183);
	v->a[2834] = entry(1, true);
	v->a[2835] = shift(1183);
	v->a[2836] = entry(1, false);
	v->a[2837] = shift(499);
	v->a[2838] = entry(1, true);
	v->a[2839] = shift(499);
	parse_actions_entries_142(v);
}

void	parse_actions_entries_142(t_parse_actions_entries_array *v)
{
	v->a[2840] = entry(1, true);
	v->a[2841] = shift(1455);
	v->a[2842] = entry(1, false);
	v->a[2843] = shift(407);
	v->a[2844] = entry(1, false);
	v->a[2845] = shift(167);
	v->a[2846] = entry(1, true);
	v->a[2847] = shift(407);
	v->a[2848] = entry(1, false);
	v->a[2849] = shift(598);
	v->a[2850] = entry(1, false);
	v->a[2851] = shift(835);
	v->a[2852] = entry(1, false);
	v->a[2853] = shift(1869);
	v->a[2854] = entry(1, false);
	v->a[2855] = shift(1848);
	v->a[2856] = entry(1, false);
	v->a[2857] = shift(1801);
	v->a[2858] = entry(1, false);
	v->a[2859] = shift(90);
	parse_actions_entries_143(v);
}

void	parse_actions_entries_143(t_parse_actions_entries_array *v)
{
	v->a[2860] = entry(1, false);
	v->a[2861] = shift(89);
	v->a[2862] = entry(1, true);
	v->a[2863] = shift(598);
	v->a[2864] = entry(1, false);
	v->a[2865] = shift(399);
	v->a[2866] = entry(1, false);
	v->a[2867] = shift(709);
	v->a[2868] = entry(1, true);
	v->a[2869] = shift(709);
	v->a[2870] = entry(1, false);
	v->a[2871] = shift(1131);
	v->a[2872] = entry(1, false);
	v->a[2873] = shift(1279);
	v->a[2874] = entry(1, false);
	v->a[2875] = shift(512);
	v->a[2876] = entry(1, true);
	v->a[2877] = shift(1279);
	v->a[2878] = entry(2, false);
	v->a[2879] = reduce(aux_sym__heredoc_command, 2, 0, 31);
	parse_actions_entries_144(v);
}

void	parse_actions_entries_144(t_parse_actions_entries_array *v)
{
	v->a[2880] = shift_repeat(1774);
	v->a[2881] = entry(1, false);
	v->a[2882] = reduce(aux_sym__heredoc_command, 2, 0, 31);
	v->a[2883] = entry(2, false);
	v->a[2884] = reduce(aux_sym__heredoc_command, 2, 0, 31);
	v->a[2885] = shift_repeat(846);
	v->a[2886] = entry(2, false);
	v->a[2887] = reduce(aux_sym__heredoc_command, 2, 0, 31);
	v->a[2888] = shift_repeat(1811);
	v->a[2889] = entry(2, false);
	v->a[2890] = reduce(aux_sym__heredoc_command, 2, 0, 31);
	v->a[2891] = shift_repeat(1812);
	v->a[2892] = entry(2, false);
	v->a[2893] = reduce(aux_sym__heredoc_command, 2, 0, 31);
	v->a[2894] = shift_repeat(1799);
	v->a[2895] = entry(2, false);
	v->a[2896] = reduce(aux_sym__heredoc_command, 2, 0, 31);
	v->a[2897] = shift_repeat(110);
	v->a[2898] = entry(2, false);
	v->a[2899] = reduce(aux_sym__heredoc_command, 2, 0, 31);
	parse_actions_entries_145(v);
}

/* EOF parse_actions_entries_28.c */
