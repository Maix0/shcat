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
	v->a[3000] = shift(1056);
	v->a[3001] = entry(1, true);
	v->a[3002] = shift(27);
	v->a[3003] = entry(1, true);
	v->a[3004] = shift(1087);
	v->a[3005] = entry(1, true);
	v->a[3006] = shift(996);
	v->a[3007] = entry(1, true);
	v->a[3008] = shift(14);
	v->a[3009] = entry(1, true);
	v->a[3010] = shift(31);
	v->a[3011] = entry(1, true);
	v->a[3012] = shift(975);
	v->a[3013] = entry(1, true);
	v->a[3014] = shift(1196);
	v->a[3015] = entry(1, true);
	v->a[3016] = shift(12);
	v->a[3017] = entry(1, false);
	v->a[3018] = reduce(aux_sym__expansion_regex_repeat1, 1, 0, 40);
	v->a[3019] = entry(1, true);
	parse_actions_entries_151(v);
}

void	parse_actions_entries_151(t_parse_actions_entries_array *v)
{
	v->a[3020] = reduce(aux_sym__expansion_regex_repeat1, 1, 0, 40);
	v->a[3021] = entry(1, true);
	v->a[3022] = shift(1684);
	v->a[3023] = entry(1, true);
	v->a[3024] = shift(1466);
	v->a[3025] = entry(1, true);
	v->a[3026] = shift(1779);
	v->a[3027] = entry(1, true);
	v->a[3028] = reduce(aux_sym_if_statement_repeat1, 2, 0, 0);
	v->a[3029] = entry(2, true);
	v->a[3030] = reduce(aux_sym_if_statement_repeat1, 2, 0, 0);
	v->a[3031] = shift_repeat(108);
	v->a[3032] = entry(1, false);
	v->a[3033] = shift(1182);
	v->a[3034] = entry(1, true);
	v->a[3035] = shift(1077);
	v->a[3036] = entry(1, true);
	v->a[3037] = shift(1687);
	v->a[3038] = entry(1, true);
	v->a[3039] = reduce(aux_sym__case_item_last_repeat1, 2, 0, 35);
	parse_actions_entries_152(v);
}

void	parse_actions_entries_152(t_parse_actions_entries_array *v)
{
	v->a[3040] = entry(1, false);
	v->a[3041] = shift(1194);
	v->a[3042] = entry(2, true);
	v->a[3043] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[3044] = shift_repeat(1087);
	v->a[3045] = entry(1, false);
	v->a[3046] = shift(1172);
	v->a[3047] = entry(1, true);
	v->a[3048] = reduce(sym__concatenation_in_expansion, 2, 0, 0);
	v->a[3049] = entry(1, true);
	v->a[3050] = shift(1234);
	v->a[3051] = entry(1, true);
	v->a[3052] = reduce(sym__expansion_expression, 2, 0, 41);
	v->a[3053] = entry(1, true);
	v->a[3054] = reduce(aux_sym__concatenation_in_expansion_repeat1, 2, 0, 0);
	v->a[3055] = entry(2, true);
	v->a[3056] = reduce(aux_sym__concatenation_in_expansion_repeat1, 2, 0, 0);
	v->a[3057] = shift_repeat(1234);
	v->a[3058] = entry(1, true);
	v->a[3059] = reduce(sym__concatenation_in_expansion, 2, 0, 51);
	parse_actions_entries_153(v);
}

void	parse_actions_entries_153(t_parse_actions_entries_array *v)
{
	v->a[3060] = entry(1, true);
	v->a[3061] = reduce(sym__word_no_brace, 1, 0, 0);
	v->a[3062] = entry(2, true);
	v->a[3063] = reduce(aux_sym__case_item_last_repeat1, 2, 0, 58);
	v->a[3064] = shift_repeat(1056);
	v->a[3065] = entry(1, true);
	v->a[3066] = reduce(aux_sym__case_item_last_repeat1, 2, 0, 58);
	v->a[3067] = entry(1, true);
	v->a[3068] = reduce(aux_sym__concatenation_in_expansion_repeat1, 2, 0, 62);
	v->a[3069] = entry(1, true);
	v->a[3070] = shift(23);
	v->a[3071] = entry(1, true);
	v->a[3072] = shift(10);
	v->a[3073] = entry(1, true);
	v->a[3074] = shift(22);
	v->a[3075] = entry(1, true);
	v->a[3076] = shift(30);
	v->a[3077] = entry(1, true);
	v->a[3078] = shift(8);
	v->a[3079] = entry(1, true);
	parse_actions_entries_154(v);
}

void	parse_actions_entries_154(t_parse_actions_entries_array *v)
{
	v->a[3080] = shift(28);
	v->a[3081] = entry(1, true);
	v->a[3082] = reduce(sym__extglob_blob, 2, 0, 0);
	v->a[3083] = entry(1, true);
	v->a[3084] = shift(1621);
	v->a[3085] = entry(1, true);
	v->a[3086] = shift(26);
	v->a[3087] = entry(1, true);
	v->a[3088] = shift(19);
	v->a[3089] = entry(1, true);
	v->a[3090] = reduce(sym__case_item_last, 5, 0, 74);
	v->a[3091] = entry(1, true);
	v->a[3092] = shift(1305);
	v->a[3093] = entry(1, true);
	v->a[3094] = reduce(sym__case_item_last, 4, 0, 68);
	v->a[3095] = entry(1, true);
	v->a[3096] = shift(1336);
	v->a[3097] = entry(1, true);
	v->a[3098] = shift(92);
	v->a[3099] = entry(1, true);
	parse_actions_entries_155(v);
}

/* EOF parse_actions_entries_30.c */
