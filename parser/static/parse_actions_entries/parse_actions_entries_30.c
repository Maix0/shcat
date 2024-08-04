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
	v->a[3000] = shift(8);
	v->a[3001] = entry(1, true);
	v->a[3002] = shift(23);
	v->a[3003] = entry(1, true);
	v->a[3004] = reduce(sym__word_no_brace, 1, 0, 0);
	v->a[3005] = entry(1, true);
	v->a[3006] = shift(28);
	v->a[3007] = entry(2, true);
	v->a[3008] = reduce(aux_sym__case_item_last_repeat1, 2, 0, 57);
	v->a[3009] = shift_repeat(750);
	v->a[3010] = entry(1, true);
	v->a[3011] = reduce(aux_sym__case_item_last_repeat1, 2, 0, 57);
	v->a[3012] = entry(1, true);
	v->a[3013] = shift(29);
	v->a[3014] = entry(1, true);
	v->a[3015] = shift(21);
	v->a[3016] = entry(1, true);
	v->a[3017] = shift(22);
	v->a[3018] = entry(1, true);
	v->a[3019] = reduce(aux_sym__concatenation_in_expansion_repeat1, 2, 0, 61);
	return (parse_actions_entries_151(v));
}

void	parse_actions_entries_151(t_parse_actions_entries_array *v)
{
	v->a[3020] = entry(1, true);
	v->a[3021] = shift(15);
	v->a[3022] = entry(1, true);
	v->a[3023] = reduce(sym__extglob_blob, 2, 0, 0);
	v->a[3024] = entry(1, true);
	v->a[3025] = shift(1551);
	v->a[3026] = entry(1, true);
	v->a[3027] = shift(30);
	v->a[3028] = entry(1, true);
	v->a[3029] = reduce(sym__case_item_last, 5, 0, 73);
	v->a[3030] = entry(1, true);
	v->a[3031] = shift(1134);
	v->a[3032] = entry(1, true);
	v->a[3033] = reduce(sym__extglob_blob, 3, 0, 0);
	v->a[3034] = entry(1, true);
	v->a[3035] = reduce(sym__case_item_last, 5, 0, 74);
	v->a[3036] = entry(1, true);
	v->a[3037] = shift(1128);
	v->a[3038] = entry(1, true);
	v->a[3039] = shift(58);
	return (parse_actions_entries_152(v));
}

void	parse_actions_entries_152(t_parse_actions_entries_array *v)
{
	v->a[3040] = entry(1, true);
	v->a[3041] = shift(1184);
	v->a[3042] = entry(1, true);
	v->a[3043] = shift(71);
	v->a[3044] = entry(1, true);
	v->a[3045] = shift(122);
	v->a[3046] = entry(1, true);
	v->a[3047] = shift(120);
	v->a[3048] = entry(1, true);
	v->a[3049] = shift(135);
	v->a[3050] = entry(1, true);
	v->a[3051] = shift(134);
	v->a[3052] = entry(1, true);
	v->a[3053] = shift(121);
	v->a[3054] = entry(1, true);
	v->a[3055] = shift(102);
	v->a[3056] = entry(1, true);
	v->a[3057] = shift(126);
	v->a[3058] = entry(1, true);
	v->a[3059] = shift(127);
	return (parse_actions_entries_153(v));
}

void	parse_actions_entries_153(t_parse_actions_entries_array *v)
{
	v->a[3060] = entry(1, true);
	v->a[3061] = reduce(sym__case_item_last, 6, 0, 76);
	v->a[3062] = entry(1, true);
	v->a[3063] = shift(1179);
	v->a[3064] = entry(1, true);
	v->a[3065] = shift(1180);
	v->a[3066] = entry(1, true);
	v->a[3067] = shift(1119);
	v->a[3068] = entry(1, true);
	v->a[3069] = reduce(sym__case_item_last, 4, 0, 66);
	v->a[3070] = entry(1, true);
	v->a[3071] = shift(1142);
	v->a[3072] = entry(1, true);
	v->a[3073] = reduce(sym__case_item_last, 4, 0, 67);
	v->a[3074] = entry(1, true);
	v->a[3075] = shift(1143);
	v->a[3076] = entry(1, true);
	v->a[3077] = reduce(sym__case_item_last, 4, 0, 68);
	v->a[3078] = entry(1, true);
	v->a[3079] = shift(1160);
	return (parse_actions_entries_154(v));
}

void	parse_actions_entries_154(t_parse_actions_entries_array *v)
{
	v->a[3080] = entry(1, true);
	v->a[3081] = reduce(sym__case_item_last, 5, 0, 72);
	v->a[3082] = entry(1, true);
	v->a[3083] = shift(1113);
	v->a[3084] = entry(1, true);
	v->a[3085] = shift(1157);
	v->a[3086] = entry(1, true);
	v->a[3087] = reduce(sym__case_item_last, 3, 0, 56);
	v->a[3088] = entry(1, true);
	v->a[3089] = shift(1092);
	v->a[3090] = entry(1, true);
	v->a[3091] = shift(1534);
	v->a[3092] = entry(1, true);
	v->a[3093] = shift(226);
	v->a[3094] = entry(1, true);
	v->a[3095] = shift(1442);
	v->a[3096] = entry(1, true);
	v->a[3097] = shift(511);
	v->a[3098] = entry(1, true);
	v->a[3099] = shift(1472);
	return (parse_actions_entries_155(v));
}

/* EOF parse_actions_entries_30.c */
