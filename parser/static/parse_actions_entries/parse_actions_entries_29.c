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
	v->a[2900] = shift(39);
	v->a[2901] = entry(1, true);
	v->a[2902] = shift(1467);
	v->a[2903] = entry(1, true);
	v->a[2904] = reduce(sym_heredoc_body, 2, 0, 0);
	v->a[2905] = entry(1, true);
	v->a[2906] = shift(1464);
	v->a[2907] = entry(1, true);
	v->a[2908] = reduce(sym_heredoc_body, 1, 0, 0);
	v->a[2909] = entry(2, false);
	v->a[2910] = reduce(aux_sym_heredoc_body_repeat1, 2, 0, 0);
	v->a[2911] = shift_repeat(1458);
	v->a[2912] = entry(2, true);
	v->a[2913] = reduce(aux_sym_heredoc_body_repeat1, 2, 0, 0);
	v->a[2914] = shift_repeat(1356);
	v->a[2915] = entry(2, true);
	v->a[2916] = reduce(aux_sym_heredoc_body_repeat1, 2, 0, 0);
	v->a[2917] = shift_repeat(59);
	v->a[2918] = entry(2, true);
	v->a[2919] = reduce(aux_sym_heredoc_body_repeat1, 2, 0, 0);
	parse_actions_entries_146(v);
}

void	parse_actions_entries_146(t_parse_actions_entries_array *v)
{
	v->a[2920] = shift_repeat(39);
	v->a[2921] = entry(2, true);
	v->a[2922] = reduce(aux_sym_heredoc_body_repeat1, 2, 0, 0);
	v->a[2923] = shift_repeat(1467);
	v->a[2924] = entry(1, true);
	v->a[2925] = reduce(aux_sym_heredoc_body_repeat1, 2, 0, 0);
	v->a[2926] = entry(1, true);
	v->a[2927] = reduce(sym__extglob_blob, 1, 0, 0);
	v->a[2928] = entry(1, true);
	v->a[2929] = shift(1398);
	v->a[2930] = entry(1, true);
	v->a[2931] = shift(1397);
	v->a[2932] = entry(1, true);
	v->a[2933] = shift(45);
	v->a[2934] = entry(1, true);
	v->a[2935] = shift(46);
	v->a[2936] = entry(1, false);
	v->a[2937] = shift(617);
	v->a[2938] = entry(1, true);
	v->a[2939] = shift(1614);
	parse_actions_entries_147(v);
}

void	parse_actions_entries_147(t_parse_actions_entries_array *v)
{
	v->a[2940] = entry(1, false);
	v->a[2941] = shift(1122);
	v->a[2942] = entry(1, true);
	v->a[2943] = shift(1122);
	v->a[2944] = entry(2, false);
	v->a[2945] = reduce(aux_sym__expansion_regex_repeat1, 2, 0, 0);
	v->a[2946] = shift_repeat(1522);
	v->a[2947] = entry(1, false);
	v->a[2948] = reduce(aux_sym__expansion_regex_repeat1, 2, 0, 0);
	v->a[2949] = entry(2, false);
	v->a[2950] = reduce(aux_sym__expansion_regex_repeat1, 2, 0, 0);
	v->a[2951] = shift_repeat(1422);
	v->a[2952] = entry(2, false);
	v->a[2953] = reduce(aux_sym__expansion_regex_repeat1, 2, 0, 0);
	v->a[2954] = shift_repeat(1470);
	v->a[2955] = entry(2, true);
	v->a[2956] = reduce(aux_sym__expansion_regex_repeat1, 2, 0, 0);
	v->a[2957] = shift_repeat(1522);
	v->a[2958] = entry(2, true);
	v->a[2959] = reduce(aux_sym__expansion_regex_repeat1, 2, 0, 0);
	parse_actions_entries_148(v);
}

void	parse_actions_entries_148(t_parse_actions_entries_array *v)
{
	v->a[2960] = shift_repeat(1470);
	v->a[2961] = entry(1, false);
	v->a[2962] = shift(610);
	v->a[2963] = entry(1, false);
	v->a[2964] = reduce(sym__expansion_regex, 2, 0, 41);
	v->a[2965] = entry(1, false);
	v->a[2966] = shift(1470);
	v->a[2967] = entry(1, true);
	v->a[2968] = shift(1470);
	v->a[2969] = entry(1, true);
	v->a[2970] = shift(1486);
	v->a[2971] = entry(1, false);
	v->a[2972] = reduce(aux_sym_string_repeat1, 1, 0, 0);
	v->a[2973] = entry(1, true);
	v->a[2974] = shift(1485);
	v->a[2975] = entry(1, false);
	v->a[2976] = reduce(sym__expansion_regex, 1, 0, 22);
	v->a[2977] = entry(1, false);
	v->a[2978] = shift(621);
	v->a[2979] = entry(1, false);
	parse_actions_entries_149(v);
}

void	parse_actions_entries_149(t_parse_actions_entries_array *v)
{
	v->a[2980] = reduce(aux_sym_string_repeat1, 3, 0, 0);
	v->a[2981] = entry(1, true);
	v->a[2982] = shift(1081);
	v->a[2983] = entry(2, false);
	v->a[2984] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[2985] = shift_repeat(1122);
	v->a[2986] = entry(2, true);
	v->a[2987] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[2988] = shift_repeat(1122);
	v->a[2989] = entry(1, true);
	v->a[2990] = shift(1390);
	v->a[2991] = entry(1, true);
	v->a[2992] = shift(108);
	v->a[2993] = entry(1, true);
	v->a[2994] = shift(88);
	v->a[2995] = entry(1, true);
	v->a[2996] = shift(1160);
	v->a[2997] = entry(1, true);
	v->a[2998] = shift(1368);
	v->a[2999] = entry(1, true);
	parse_actions_entries_150(v);
}

/* EOF parse_actions_entries_29.c */
