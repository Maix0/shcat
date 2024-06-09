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
	v->a[2900] = shift(1963);
	v->a[2901] = entry(1, true);
	v->a[2902] = shift(1433);
	v->a[2903] = entry(1, false);
	v->a[2904] = shift(348);
	v->a[2905] = entry(1, false);
	v->a[2906] = shift(819);
	v->a[2907] = entry(1, false);
	v->a[2908] = shift(1770);
	v->a[2909] = entry(1, false);
	v->a[2910] = shift(1792);
	v->a[2911] = entry(1, false);
	v->a[2912] = shift(545);
	v->a[2913] = entry(1, false);
	v->a[2914] = shift(1923);
	v->a[2915] = entry(1, false);
	v->a[2916] = shift(1697);
	v->a[2917] = entry(1, false);
	v->a[2918] = shift(53);
	v->a[2919] = entry(1, false);
	parse_actions_entries_146(v);
}

void	parse_actions_entries_146(t_parse_actions_entries_array *v)
{
	v->a[2920] = shift(52);
	v->a[2921] = entry(1, false);
	v->a[2922] = shift(744);
	v->a[2923] = entry(1, true);
	v->a[2924] = shift(744);
	v->a[2925] = entry(1, false);
	v->a[2926] = shift(1909);
	v->a[2927] = entry(1, false);
	v->a[2928] = shift(779);
	v->a[2929] = entry(1, false);
	v->a[2930] = shift(834);
	v->a[2931] = entry(1, false);
	v->a[2932] = shift(1822);
	v->a[2933] = entry(1, false);
	v->a[2934] = shift(1796);
	v->a[2935] = entry(1, false);
	v->a[2936] = shift(833);
	v->a[2937] = entry(1, false);
	v->a[2938] = shift(1987);
	v->a[2939] = entry(1, false);
	parse_actions_entries_147(v);
}

void	parse_actions_entries_147(t_parse_actions_entries_array *v)
{
	v->a[2940] = shift(1688);
	v->a[2941] = entry(1, false);
	v->a[2942] = shift(100);
	v->a[2943] = entry(1, false);
	v->a[2944] = shift(96);
	v->a[2945] = entry(1, false);
	v->a[2946] = shift(935);
	v->a[2947] = entry(1, true);
	v->a[2948] = shift(935);
	v->a[2949] = entry(1, false);
	v->a[2950] = shift(1042);
	v->a[2951] = entry(1, false);
	v->a[2952] = shift(986);
	v->a[2953] = entry(1, false);
	v->a[2954] = shift(823);
	v->a[2955] = entry(1, false);
	v->a[2956] = shift(1793);
	v->a[2957] = entry(1, false);
	v->a[2958] = shift(1816);
	v->a[2959] = entry(1, false);
	parse_actions_entries_148(v);
}

void	parse_actions_entries_148(t_parse_actions_entries_array *v)
{
	v->a[2960] = shift(1024);
	v->a[2961] = entry(1, false);
	v->a[2962] = shift(1944);
	v->a[2963] = entry(1, false);
	v->a[2964] = shift(1672);
	v->a[2965] = entry(1, false);
	v->a[2966] = shift(47);
	v->a[2967] = entry(1, false);
	v->a[2968] = shift(48);
	v->a[2969] = entry(1, false);
	v->a[2970] = shift(1240);
	v->a[2971] = entry(1, true);
	v->a[2972] = shift(1240);
	v->a[2973] = entry(1, false);
	v->a[2974] = shift(1967);
	v->a[2975] = entry(1, false);
	v->a[2976] = shift(1985);
	v->a[2977] = entry(2, true);
	v->a[2978] = reduce(aux_sym_variable_assignments_repeat1, 2, 0, 0);
	v->a[2979] = shift_repeat(2069);
	parse_actions_entries_149(v);
}

void	parse_actions_entries_149(t_parse_actions_entries_array *v)
{
	v->a[2980] = entry(2, false);
	v->a[2981] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[2982] = shift_repeat(1481);
	v->a[2983] = entry(2, true);
	v->a[2984] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[2985] = shift_repeat(1481);
	v->a[2986] = entry(2, true);
	v->a[2987] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[2988] = shift_repeat(593);
	v->a[2989] = entry(2, false);
	v->a[2990] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[2991] = shift_repeat(2128);
	v->a[2992] = entry(2, true);
	v->a[2993] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[2994] = shift_repeat(2128);
	v->a[2995] = entry(2, true);
	v->a[2996] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[2997] = shift_repeat(1813);
	v->a[2998] = entry(2, false);
	v->a[2999] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	parse_actions_entries_150(v);
}

/* EOF parse_actions_entries_29.c */
