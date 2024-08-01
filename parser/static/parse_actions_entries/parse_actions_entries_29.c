/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_actions_entries_29.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_actions_entries.h"

void	parse_actions_entries_145(t_parse_actions_entries_array *v)
{
	v->a[2900] = shift(1380);
	v->a[2901] = entry(1, false);
	v->a[2902] = shift(232);
	v->a[2903] = entry(1, false);
	v->a[2904] = shift(127);
	v->a[2905] = entry(1, false);
	v->a[2906] = reduce(sym__expansion_regex, 1, 0, 19);
	v->a[2907] = entry(1, true);
	v->a[2908] = shift(1429);
	v->a[2909] = entry(1, false);
	v->a[2910] = shift(217);
	v->a[2911] = entry(2, false);
	v->a[2912] = reduce(aux_sym_pipeline_repeat1, 2, 0, 0);
	v->a[2913] = shift_repeat(127);
	v->a[2914] = entry(1, false);
	v->a[2915] = reduce(aux_sym_string_repeat1, 1, 0, 0);
	v->a[2916] = entry(1, true);
	v->a[2917] = shift(1440);
	v->a[2918] = entry(2, false);
	v->a[2919] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	parse_actions_entries_146(v);
}

void	parse_actions_entries_146(t_parse_actions_entries_array *v)
{
	v->a[2920] = shift_repeat(744);
	v->a[2921] = entry(2, true);
	v->a[2922] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[2923] = shift_repeat(744);
	v->a[2924] = entry(1, false);
	v->a[2925] = reduce(aux_sym_string_repeat1, 3, 0, 0);
	v->a[2926] = entry(1, true);
	v->a[2927] = shift(711);
	v->a[2928] = entry(1, true);
	v->a[2929] = shift(1068);
	v->a[2930] = entry(1, true);
	v->a[2931] = shift(107);
	v->a[2932] = entry(1, true);
	v->a[2933] = shift(44);
	v->a[2934] = entry(1, false);
	v->a[2935] = reduce(aux_sym__expansion_regex_repeat1, 1, 0, 39);
	v->a[2936] = entry(1, true);
	v->a[2937] = reduce(aux_sym__expansion_regex_repeat1, 1, 0, 39);
	v->a[2938] = entry(1, true);
	v->a[2939] = shift(1413);
	parse_actions_entries_147(v);
}

void	parse_actions_entries_147(t_parse_actions_entries_array *v)
{
	v->a[2940] = entry(1, true);
	v->a[2941] = shift(1244);
	v->a[2942] = entry(1, true);
	v->a[2943] = shift(750);
	v->a[2944] = entry(1, true);
	v->a[2945] = shift(25);
	v->a[2946] = entry(1, true);
	v->a[2947] = shift(730);
	v->a[2948] = entry(1, true);
	v->a[2949] = shift(33);
	v->a[2950] = entry(1, true);
	v->a[2951] = shift(17);
	v->a[2952] = entry(1, true);
	v->a[2953] = shift(1024);
	v->a[2954] = entry(1, true);
	v->a[2955] = shift(1405);
	v->a[2956] = entry(1, true);
	v->a[2957] = shift(32);
	v->a[2958] = entry(1, true);
	v->a[2959] = shift(1251);
	parse_actions_entries_148(v);
}

void	parse_actions_entries_148(t_parse_actions_entries_array *v)
{
	v->a[2960] = entry(1, true);
	v->a[2961] = shift(1659);
	v->a[2962] = entry(1, true);
	v->a[2963] = shift(1283);
	v->a[2964] = entry(1, true);
	v->a[2965] = shift(1661);
	v->a[2966] = entry(2, true);
	v->a[2967] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[2968] = shift_repeat(730);
	v->a[2969] = entry(1, true);
	v->a[2970] = shift(760);
	v->a[2971] = entry(1, false);
	v->a[2972] = shift(794);
	v->a[2973] = entry(1, false);
	v->a[2974] = shift(791);
	v->a[2975] = entry(1, true);
	v->a[2976] = shift(1755);
	v->a[2977] = entry(1, true);
	v->a[2978] = reduce(aux_sym_if_statement_repeat1, 2, 0, 0);
	v->a[2979] = entry(2, true);
	parse_actions_entries_149(v);
}

void	parse_actions_entries_149(t_parse_actions_entries_array *v)
{
	v->a[2980] = reduce(aux_sym_if_statement_repeat1, 2, 0, 0);
	v->a[2981] = shift_repeat(107);
	v->a[2982] = entry(1, true);
	v->a[2983] = reduce(aux_sym__case_item_last_repeat1, 2, 0, 34);
	v->a[2984] = entry(1, false);
	v->a[2985] = shift(803);
	v->a[2986] = entry(1, true);
	v->a[2987] = reduce(sym__concatenation_in_expansion, 2, 0, 50);
	v->a[2988] = entry(1, true);
	v->a[2989] = shift(912);
	v->a[2990] = entry(1, true);
	v->a[2991] = reduce(sym__expansion_expression, 2, 0, 40);
	v->a[2992] = entry(1, true);
	v->a[2993] = reduce(aux_sym__concatenation_in_expansion_repeat1, 2, 0, 0);
	v->a[2994] = entry(2, true);
	v->a[2995] = reduce(aux_sym__concatenation_in_expansion_repeat1, 2, 0, 0);
	v->a[2996] = shift_repeat(912);
	v->a[2997] = entry(1, true);
	v->a[2998] = reduce(sym__concatenation_in_expansion, 2, 0, 0);
	v->a[2999] = entry(1, true);
	parse_actions_entries_150(v);
}

/* EOF parse_actions_entries_29.c */
