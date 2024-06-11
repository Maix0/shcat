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
	v->a[2801] = shift(816);
	v->a[2802] = entry(1, true);
	v->a[2803] = shift(812);
	v->a[2804] = entry(1, false);
	v->a[2805] = shift(811);
	v->a[2806] = entry(1, false);
	v->a[2807] = shift(807);
	v->a[2808] = entry(1, true);
	v->a[2809] = reduce(sym_subshell, 3, 0, 22);
	v->a[2810] = entry(1, false);
	v->a[2811] = reduce(sym_subshell, 3, 0, 22);
	v->a[2812] = entry(1, true);
	v->a[2813] = reduce(sym_compound_statement, 3, 0, 22);
	v->a[2814] = entry(1, false);
	v->a[2815] = reduce(sym_compound_statement, 3, 0, 22);
	v->a[2816] = entry(1, false);
	v->a[2817] = shift(964);
	v->a[2818] = entry(1, true);
	v->a[2819] = shift(965);
	parse_actions_entries_141(v);
}

void	parse_actions_entries_141(t_parse_actions_entries_array *v)
{
	v->a[2820] = entry(1, false);
	v->a[2821] = shift(966);
	v->a[2822] = entry(1, false);
	v->a[2823] = shift(968);
	v->a[2824] = entry(1, true);
	v->a[2825] = shift(1694);
	v->a[2826] = entry(1, true);
	v->a[2827] = shift(694);
	v->a[2828] = entry(1, false);
	v->a[2829] = shift(686);
	v->a[2830] = entry(1, false);
	v->a[2831] = shift(683);
	v->a[2832] = entry(2, false);
	v->a[2833] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2834] = shift_repeat(1740);
	v->a[2835] = entry(2, false);
	v->a[2836] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2837] = shift_repeat(250);
	v->a[2838] = entry(2, true);
	v->a[2839] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	parse_actions_entries_142(v);
}

void	parse_actions_entries_142(t_parse_actions_entries_array *v)
{
	v->a[2840] = shift_repeat(2081);
	v->a[2841] = entry(1, true);
	v->a[2842] = shift(645);
	v->a[2843] = entry(1, true);
	v->a[2844] = reduce(sym_case_statement, 4, 0, 36);
	v->a[2845] = entry(1, false);
	v->a[2846] = reduce(sym_case_statement, 4, 0, 36);
	v->a[2847] = entry(1, true);
	v->a[2848] = shift(2396);
	v->a[2849] = entry(1, true);
	v->a[2850] = reduce(sym_if_statement, 4, 0, 35);
	v->a[2851] = entry(1, false);
	v->a[2852] = reduce(sym_if_statement, 4, 0, 35);
	v->a[2853] = entry(2, true);
	v->a[2854] = reduce(aux_sym_variable_assignments_repeat1, 2, 0, 0);
	v->a[2855] = shift_repeat(2396);
	v->a[2856] = entry(1, true);
	v->a[2857] = reduce(sym_do_group, 2, 0, 0);
	v->a[2858] = entry(1, false);
	v->a[2859] = reduce(sym_do_group, 2, 0, 0);
	parse_actions_entries_143(v);
}

void	parse_actions_entries_143(t_parse_actions_entries_array *v)
{
	v->a[2860] = entry(1, true);
	v->a[2861] = reduce(sym_heredoc_redirect, 5, 0, 6);
	v->a[2862] = entry(1, false);
	v->a[2863] = reduce(sym_heredoc_redirect, 5, 0, 6);
	v->a[2864] = entry(1, true);
	v->a[2865] = shift(961);
	v->a[2866] = entry(1, true);
	v->a[2867] = shift(2090);
	v->a[2868] = entry(1, true);
	v->a[2869] = reduce(sym_for_statement, 4, 0, 34);
	v->a[2870] = entry(1, false);
	v->a[2871] = reduce(sym_for_statement, 4, 0, 34);
	v->a[2872] = entry(1, true);
	v->a[2873] = reduce(sym_command, 3, 0, 17);
	v->a[2874] = entry(1, false);
	v->a[2875] = reduce(sym_command, 3, 0, 17);
	v->a[2876] = entry(1, false);
	v->a[2877] = shift(142);
	v->a[2878] = entry(1, false);
	v->a[2879] = reduce(sym_pipeline, 2, 0, 0);
	parse_actions_entries_144(v);
}

void	parse_actions_entries_144(t_parse_actions_entries_array *v)
{
	v->a[2880] = entry(1, true);
	v->a[2881] = reduce(sym_pipeline, 2, 0, 0);
	v->a[2882] = entry(2, false);
	v->a[2883] = reduce(aux_sym_pipeline_repeat1, 2, 0, 0);
	v->a[2884] = shift_repeat(154);
	v->a[2885] = entry(1, false);
	v->a[2886] = shift(1485);
	v->a[2887] = entry(2, false);
	v->a[2888] = reduce(aux_sym_pipeline_repeat1, 2, 0, 0);
	v->a[2889] = shift_repeat(153);
	v->a[2890] = entry(1, false);
	v->a[2891] = shift(1306);
	v->a[2892] = entry(2, false);
	v->a[2893] = reduce(aux_sym_pipeline_repeat1, 2, 0, 0);
	v->a[2894] = shift_repeat(142);
	v->a[2895] = entry(1, false);
	v->a[2896] = shift(146);
	v->a[2897] = entry(1, false);
	v->a[2898] = shift(153);
	v->a[2899] = entry(1, false);
	parse_actions_entries_145(v);
}

/* EOF parse_actions_entries_28.c */
