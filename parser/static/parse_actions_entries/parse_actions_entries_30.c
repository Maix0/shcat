/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_actions_entries_30.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_actions_entries.h"

void	parse_actions_entries_150(t_parse_actions_entries_array *v)
{
	v->a[3000] = entry(2, false);
	v->a[3001] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[3002] = shift_repeat(3299);
	v->a[3003] = entry(2, true);
	v->a[3004] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[3005] = shift_repeat(3118);
	v->a[3006] = entry(2, false);
	v->a[3007] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[3008] = shift_repeat(162);
	v->a[3009] = entry(2, true);
	v->a[3010] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[3011] = shift_repeat(161);
	v->a[3012] = entry(2, true);
	v->a[3013] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[3014] = shift_repeat(138);
	v->a[3015] = entry(2, true);
	v->a[3016] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[3017] = shift_repeat(4067);
	v->a[3018] = entry(1, false);
	v->a[3019] = reduce(sym_simple_expansion, 2, 0, 0);
	parse_actions_entries_151(v);
}

void	parse_actions_entries_151(t_parse_actions_entries_array *v)
{
	v->a[3020] = entry(1, true);
	v->a[3021] = reduce(sym_simple_expansion, 2, 0, 0);
	v->a[3022] = entry(1, false);
	v->a[3023] = reduce(sym_simple_expansion, 2, 0, 10);
	v->a[3024] = entry(1, true);
	v->a[3025] = reduce(sym_simple_expansion, 2, 0, 10);
	v->a[3026] = entry(2, false);
	v->a[3027] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[3028] = shift_repeat(2352);
	v->a[3029] = entry(2, true);
	v->a[3030] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[3031] = shift_repeat(2352);
	v->a[3032] = entry(1, false);
	v->a[3033] = reduce(sym_string, 2, 0, 0);
	v->a[3034] = entry(1, true);
	v->a[3035] = reduce(sym_string, 2, 0, 0);
	v->a[3036] = entry(1, true);
	v->a[3037] = shift(2554);
	v->a[3038] = entry(1, false);
	v->a[3039] = reduce(aux_sym_command_repeat2, 1, 0, 13);
	parse_actions_entries_152(v);
}

void	parse_actions_entries_152(t_parse_actions_entries_array *v)
{
	v->a[3040] = entry(1, true);
	v->a[3041] = reduce(aux_sym_command_repeat2, 1, 0, 13);
	v->a[3042] = entry(1, true);
	v->a[3043] = shift(2520);
	v->a[3044] = entry(1, false);
	v->a[3045] = shift(1341);
	v->a[3046] = entry(1, true);
	v->a[3047] = shift(1337);
	v->a[3048] = entry(1, false);
	v->a[3049] = reduce(sym_brace_expression, 5, 0, 0);
	v->a[3050] = entry(1, true);
	v->a[3051] = reduce(sym_brace_expression, 5, 0, 0);
	v->a[3052] = entry(1, false);
	v->a[3053] = shift(702);
	v->a[3054] = entry(1, true);
	v->a[3055] = shift(698);
	v->a[3056] = entry(1, false);
	v->a[3057] = shift(2340);
	v->a[3058] = entry(1, true);
	v->a[3059] = shift(2569);
	parse_actions_entries_153(v);
}

void	parse_actions_entries_153(t_parse_actions_entries_array *v)
{
	v->a[3060] = entry(1, false);
	v->a[3061] = reduce(aux_sym_concatenation_repeat1, 2, 0, 22);
	v->a[3062] = entry(1, true);
	v->a[3063] = reduce(aux_sym_concatenation_repeat1, 2, 0, 22);
	v->a[3064] = entry(1, false);
	v->a[3065] = reduce(sym_string, 4, 0, 0);
	v->a[3066] = entry(1, true);
	v->a[3067] = reduce(sym_string, 4, 0, 0);
	v->a[3068] = entry(1, true);
	v->a[3069] = shift(2382);
	v->a[3070] = entry(2, false);
	v->a[3071] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[3072] = shift_repeat(2538);
	v->a[3073] = entry(2, true);
	v->a[3074] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[3075] = shift_repeat(2538);
	v->a[3076] = entry(1, false);
	v->a[3077] = shift(1442);
	v->a[3078] = entry(1, true);
	v->a[3079] = shift(1845);
	parse_actions_entries_154(v);
}

void	parse_actions_entries_154(t_parse_actions_entries_array *v)
{
	v->a[3080] = entry(1, false);
	v->a[3081] = shift(3177);
	v->a[3082] = entry(1, true);
	v->a[3083] = shift(1472);
	v->a[3084] = entry(1, true);
	v->a[3085] = shift(3101);
	v->a[3086] = entry(1, true);
	v->a[3087] = shift(1442);
	v->a[3088] = entry(1, false);
	v->a[3089] = shift(1575);
	v->a[3090] = entry(1, false);
	v->a[3091] = shift(3318);
	v->a[3092] = entry(1, true);
	v->a[3093] = shift(3103);
	v->a[3094] = entry(1, false);
	v->a[3095] = shift(168);
	v->a[3096] = entry(1, true);
	v->a[3097] = shift(167);
	v->a[3098] = entry(1, true);
	v->a[3099] = shift(164);
	parse_actions_entries_155(v);
}

/* EOF parse_actions_entries_30.c */
