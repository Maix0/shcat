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
	v->a[3000] = shift(1432);
	v->a[3001] = entry(1, true);
	v->a[3002] = shift(433);
	v->a[3003] = entry(1, true);
	v->a[3004] = shift(488);
	v->a[3005] = entry(1, true);
	v->a[3006] = shift(1856);
	v->a[3007] = entry(1, true);
	v->a[3008] = shift(252);
	v->a[3009] = entry(1, true);
	v->a[3010] = shift(581);
	v->a[3011] = entry(1, true);
	v->a[3012] = shift(1747);
	v->a[3013] = entry(1, true);
	v->a[3014] = shift(1430);
	v->a[3015] = entry(1, true);
	v->a[3016] = shift(892);
	v->a[3017] = entry(1, true);
	v->a[3018] = shift(906);
	v->a[3019] = entry(1, true);
	parse_actions_entries_151(v);
}

void	parse_actions_entries_151(t_parse_actions_entries_array *v)
{
	v->a[3020] = shift(498);
	v->a[3021] = entry(1, true);
	v->a[3022] = shift(1865);
	v->a[3023] = entry(1, false);
	v->a[3024] = shift(1865);
	v->a[3025] = entry(1, true);
	v->a[3026] = shift(534);
	v->a[3027] = entry(1, true);
	v->a[3028] = shift(471);
	v->a[3029] = entry(1, true);
	v->a[3030] = shift(608);
	v->a[3031] = entry(1, true);
	v->a[3032] = shift(1870);
	v->a[3033] = entry(1, true);
	v->a[3034] = shift(1331);
	v->a[3035] = entry(1, true);
	v->a[3036] = shift(1769);
	v->a[3037] = entry(1, true);
	v->a[3038] = shift(548);
	v->a[3039] = entry(1, false);
	parse_actions_entries_152(v);
}

void	parse_actions_entries_152(t_parse_actions_entries_array *v)
{
	v->a[3040] = reduce(aux_sym__heredoc_command, 1, 0, 11);
	v->a[3041] = entry(1, true);
	v->a[3042] = shift(1151);
	v->a[3043] = entry(1, true);
	v->a[3044] = shift(790);
	v->a[3045] = entry(1, true);
	v->a[3046] = shift(929);
	v->a[3047] = entry(1, true);
	v->a[3048] = shift(429);
	v->a[3049] = entry(1, true);
	v->a[3050] = shift(885);
	v->a[3051] = entry(1, true);
	v->a[3052] = shift(1407);
	v->a[3053] = entry(1, true);
	v->a[3054] = shift(285);
	v->a[3055] = entry(1, true);
	v->a[3056] = shift(434);
	v->a[3057] = entry(1, true);
	v->a[3058] = shift(865);
	v->a[3059] = entry(1, true);
	parse_actions_entries_153(v);
}

void	parse_actions_entries_153(t_parse_actions_entries_array *v)
{
	v->a[3060] = shift(1784);
	v->a[3061] = entry(2, false);
	v->a[3062] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[3063] = shift_repeat(1395);
	v->a[3064] = entry(2, true);
	v->a[3065] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[3066] = shift_repeat(1770);
	v->a[3067] = entry(1, true);
	v->a[3068] = shift(1009);
	v->a[3069] = entry(1, true);
	v->a[3070] = shift(567);
	v->a[3071] = entry(1, false);
	v->a[3072] = shift(714);
	v->a[3073] = entry(1, false);
	v->a[3074] = shift(1464);
	v->a[3075] = entry(1, false);
	v->a[3076] = shift(1443);
	v->a[3077] = entry(1, false);
	v->a[3078] = shift(1739);
	v->a[3079] = entry(1, false);
	parse_actions_entries_154(v);
}

void	parse_actions_entries_154(t_parse_actions_entries_array *v)
{
	v->a[3080] = shift(1532);
	v->a[3081] = entry(1, false);
	v->a[3082] = shift(50);
	v->a[3083] = entry(1, false);
	v->a[3084] = shift(51);
	v->a[3085] = entry(1, false);
	v->a[3086] = reduce(sym_case_item, 5, 0, 65);
	v->a[3087] = entry(1, false);
	v->a[3088] = reduce(sym__case_item_last, 5, 0, 65);
	v->a[3089] = entry(1, true);
	v->a[3090] = reduce(sym_case_item, 5, 0, 65);
	v->a[3091] = entry(1, false);
	v->a[3092] = shift(283);
	v->a[3093] = entry(1, false);
	v->a[3094] = shift(282);
	v->a[3095] = entry(1, true);
	v->a[3096] = shift(282);
	v->a[3097] = entry(1, false);
	v->a[3098] = shift(1477);
	v->a[3099] = entry(1, false);
	parse_actions_entries_155(v);
}

/* EOF parse_actions_entries_30.c */
