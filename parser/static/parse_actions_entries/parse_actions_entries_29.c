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
	v->a[2900] = entry(1, true);
	v->a[2901] = shift(3208);
	v->a[2902] = entry(1, false);
	v->a[2903] = shift(643);
	v->a[2904] = entry(1, true);
	v->a[2905] = shift(743);
	v->a[2906] = entry(1, false);
	v->a[2907] = reduce(sym_arithmetic_expansion, 3, 0, 0);
	v->a[2908] = entry(1, true);
	v->a[2909] = reduce(sym_arithmetic_expansion, 3, 0, 0);
	v->a[2910] = entry(1, false);
	v->a[2911] = shift(586);
	v->a[2912] = entry(1, true);
	v->a[2913] = shift(576);
	v->a[2914] = entry(2, false);
	v->a[2915] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[2916] = shift_repeat(2554);
	v->a[2917] = entry(2, true);
	v->a[2918] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[2919] = shift_repeat(2554);
	parse_actions_entries_146(v);
}

void	parse_actions_entries_146(t_parse_actions_entries_array *v)
{
	v->a[2920] = entry(1, false);
	v->a[2921] = shift(1557);
	v->a[2922] = entry(1, false);
	v->a[2923] = shift(1553);
	v->a[2924] = entry(1, true);
	v->a[2925] = shift(1553);
	v->a[2926] = entry(2, false);
	v->a[2927] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[2928] = shift_repeat(1412);
	v->a[2929] = entry(2, false);
	v->a[2930] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[2931] = shift_repeat(1398);
	v->a[2932] = entry(2, true);
	v->a[2933] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[2934] = shift_repeat(1412);
	v->a[2935] = entry(1, false);
	v->a[2936] = shift(834);
	v->a[2937] = entry(1, true);
	v->a[2938] = shift(945);
	v->a[2939] = entry(1, true);
	parse_actions_entries_147(v);
}

void	parse_actions_entries_147(t_parse_actions_entries_array *v)
{
	v->a[2940] = reduce(sym__statements, 1, 0, 0);
	v->a[2941] = entry(1, false);
	v->a[2942] = shift(454);
	v->a[2943] = entry(1, false);
	v->a[2944] = shift(244);
	v->a[2945] = entry(1, false);
	v->a[2946] = shift(3966);
	v->a[2947] = entry(1, true);
	v->a[2948] = shift(454);
	v->a[2949] = entry(2, true);
	v->a[2950] = reduce(aux_sym_command_repeat1, 1, 0, 0);
	v->a[2951] = shift(3601);
	v->a[2952] = entry(1, false);
	v->a[2953] = shift(2520);
	v->a[2954] = entry(1, true);
	v->a[2955] = shift(2431);
	v->a[2956] = entry(1, false);
	v->a[2957] = shift(2554);
	v->a[2958] = entry(1, true);
	v->a[2959] = shift(2329);
	parse_actions_entries_148(v);
}

void	parse_actions_entries_148(t_parse_actions_entries_array *v)
{
	v->a[2960] = entry(1, false);
	v->a[2961] = shift(254);
	v->a[2962] = entry(2, true);
	v->a[2963] = reduce(aux_sym_command_repeat1, 1, 0, 0);
	v->a[2964] = shift(3954);
	v->a[2965] = entry(1, false);
	v->a[2966] = reduce(sym_number, 2, 0, 0);
	v->a[2967] = entry(1, true);
	v->a[2968] = reduce(sym_number, 2, 0, 0);
	v->a[2969] = entry(1, true);
	v->a[2970] = shift(2331);
	v->a[2971] = entry(1, false);
	v->a[2972] = shift(2352);
	v->a[2973] = entry(1, true);
	v->a[2974] = shift(2352);
	v->a[2975] = entry(1, true);
	v->a[2976] = shift(2549);
	v->a[2977] = entry(1, true);
	v->a[2978] = shift(2539);
	v->a[2979] = entry(2, false);
	parse_actions_entries_149(v);
}

void	parse_actions_entries_149(t_parse_actions_entries_array *v)
{
	v->a[2980] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[2981] = shift_repeat(1461);
	v->a[2982] = entry(2, true);
	v->a[2983] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[2984] = shift_repeat(1846);
	v->a[2985] = entry(2, false);
	v->a[2986] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[2987] = shift_repeat(3191);
	v->a[2988] = entry(2, true);
	v->a[2989] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[2990] = shift_repeat(1439);
	v->a[2991] = entry(2, true);
	v->a[2992] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[2993] = shift_repeat(3117);
	v->a[2994] = entry(2, true);
	v->a[2995] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[2996] = shift_repeat(1461);
	v->a[2997] = entry(2, false);
	v->a[2998] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[2999] = shift_repeat(1581);
	parse_actions_entries_150(v);
}

/* EOF parse_actions_entries_29.c */
