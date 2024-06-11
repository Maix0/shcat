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
	v->a[2900] = shift(1806);
	v->a[2901] = entry(1, true);
	v->a[2902] = shift(2088);
	v->a[2903] = entry(2, false);
	v->a[2904] = reduce(aux_sym_pipeline_repeat1, 2, 0, 0);
	v->a[2905] = shift_repeat(146);
	v->a[2906] = entry(2, false);
	v->a[2907] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2908] = shift_repeat(1809);
	v->a[2909] = entry(2, false);
	v->a[2910] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2911] = shift_repeat(273);
	v->a[2912] = entry(2, true);
	v->a[2913] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2914] = shift_repeat(2088);
	v->a[2915] = entry(1, false);
	v->a[2916] = shift(154);
	v->a[2917] = entry(1, true);
	v->a[2918] = shift(1666);
	v->a[2919] = entry(1, false);
	parse_actions_entries_146(v);
}

void	parse_actions_entries_146(t_parse_actions_entries_array *v)
{
	v->a[2920] = shift(157);
	v->a[2921] = entry(2, false);
	v->a[2922] = reduce(aux_sym_pipeline_repeat1, 2, 0, 0);
	v->a[2923] = shift_repeat(157);
	v->a[2924] = entry(1, false);
	v->a[2925] = shift(1745);
	v->a[2926] = entry(1, false);
	v->a[2927] = shift(2256);
	v->a[2928] = entry(2, true);
	v->a[2929] = reduce(aux_sym_variable_assignments_repeat1, 2, 0, 0);
	v->a[2930] = shift_repeat(2456);
	v->a[2931] = entry(1, false);
	v->a[2932] = shift(2253);
	v->a[2933] = entry(1, true);
	v->a[2934] = shift(1667);
	v->a[2935] = entry(1, true);
	v->a[2936] = shift(1636);
	v->a[2937] = entry(1, true);
	v->a[2938] = shift(2456);
	v->a[2939] = entry(2, false);
	parse_actions_entries_147(v);
}

void	parse_actions_entries_147(t_parse_actions_entries_array *v)
{
	v->a[2940] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[2941] = shift_repeat(1745);
	v->a[2942] = entry(2, false);
	v->a[2943] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[2944] = shift_repeat(1037);
	v->a[2945] = entry(2, false);
	v->a[2946] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[2947] = shift_repeat(1957);
	v->a[2948] = entry(2, false);
	v->a[2949] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[2950] = shift_repeat(1958);
	v->a[2951] = entry(2, false);
	v->a[2952] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[2953] = shift_repeat(1952);
	v->a[2954] = entry(2, false);
	v->a[2955] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[2956] = shift_repeat(74);
	v->a[2957] = entry(2, false);
	v->a[2958] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[2959] = shift_repeat(75);
	parse_actions_entries_148(v);
}

void	parse_actions_entries_148(t_parse_actions_entries_array *v)
{
	v->a[2960] = entry(1, false);
	v->a[2961] = shift(1816);
	v->a[2962] = entry(1, false);
	v->a[2963] = shift(613);
	v->a[2964] = entry(1, true);
	v->a[2965] = shift(2054);
	v->a[2966] = entry(2, false);
	v->a[2967] = reduce(aux_sym_case_statement_repeat1, 2, 0, 48);
	v->a[2968] = shift_repeat(2149);
	v->a[2969] = entry(2, false);
	v->a[2970] = reduce(aux_sym_case_statement_repeat1, 2, 0, 48);
	v->a[2971] = shift_repeat(1631);
	v->a[2972] = entry(2, false);
	v->a[2973] = reduce(aux_sym_case_statement_repeat1, 2, 0, 48);
	v->a[2974] = shift_repeat(1045);
	v->a[2975] = entry(2, false);
	v->a[2976] = reduce(aux_sym_case_statement_repeat1, 2, 0, 48);
	v->a[2977] = shift_repeat(1976);
	v->a[2978] = entry(2, false);
	v->a[2979] = reduce(aux_sym_case_statement_repeat1, 2, 0, 48);
	parse_actions_entries_149(v);
}

void	parse_actions_entries_149(t_parse_actions_entries_array *v)
{
	v->a[2980] = shift_repeat(1977);
	v->a[2981] = entry(2, false);
	v->a[2982] = reduce(aux_sym_case_statement_repeat1, 2, 0, 48);
	v->a[2983] = shift_repeat(1946);
	v->a[2984] = entry(2, false);
	v->a[2985] = reduce(aux_sym_case_statement_repeat1, 2, 0, 48);
	v->a[2986] = shift_repeat(78);
	v->a[2987] = entry(2, false);
	v->a[2988] = reduce(aux_sym_case_statement_repeat1, 2, 0, 48);
	v->a[2989] = shift_repeat(79);
	v->a[2990] = entry(2, true);
	v->a[2991] = reduce(aux_sym_case_statement_repeat1, 2, 0, 48);
	v->a[2992] = shift_repeat(2100);
	v->a[2993] = entry(1, true);
	v->a[2994] = shift(1677);
	v->a[2995] = entry(1, false);
	v->a[2996] = shift(2248);
	v->a[2997] = entry(2, true);
	v->a[2998] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[2999] = shift_repeat(1636);
	parse_actions_entries_150(v);
}

/* EOF parse_actions_entries_29.c */
