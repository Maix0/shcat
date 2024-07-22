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
	v->a[3000] = entry(1, false);
	v->a[3001] = shift(424);
	v->a[3002] = entry(1, false);
	v->a[3003] = shift(494);
	v->a[3004] = entry(1, false);
	v->a[3005] = shift(467);
	v->a[3006] = entry(1, false);
	v->a[3007] = shift(1061);
	v->a[3008] = entry(1, false);
	v->a[3009] = shift(485);
	v->a[3010] = entry(1, false);
	v->a[3011] = shift(473);
	v->a[3012] = entry(1, false);
	v->a[3013] = shift(411);
	v->a[3014] = entry(1, false);
	v->a[3015] = shift(1025);
	v->a[3016] = entry(1, false);
	v->a[3017] = shift(478);
	v->a[3018] = entry(1, false);
	v->a[3019] = shift(550);
	parse_actions_entries_151(v);
}

void	parse_actions_entries_151(t_parse_actions_entries_array *v)
{
	v->a[3020] = entry(1, false);
	v->a[3021] = shift(864);
	v->a[3022] = entry(1, false);
	v->a[3023] = shift(460);
	v->a[3024] = entry(1, false);
	v->a[3025] = shift(854);
	v->a[3026] = entry(1, false);
	v->a[3027] = shift(483);
	v->a[3028] = entry(1, false);
	v->a[3029] = shift(884);
	v->a[3030] = entry(1, false);
	v->a[3031] = shift(560);
	v->a[3032] = entry(1, false);
	v->a[3033] = shift(1799);
	v->a[3034] = entry(1, false);
	v->a[3035] = shift(870);
	v->a[3036] = entry(1, true);
	v->a[3037] = shift(1781);
	v->a[3038] = entry(1, true);
	v->a[3039] = shift(1444);
	parse_actions_entries_152(v);
}

void	parse_actions_entries_152(t_parse_actions_entries_array *v)
{
	v->a[3040] = entry(1, true);
	v->a[3041] = shift(892);
	v->a[3042] = entry(1, false);
	v->a[3043] = shift(1445);
	v->a[3044] = entry(1, false);
	v->a[3045] = shift(1444);
	v->a[3046] = entry(1, true);
	v->a[3047] = shift(1445);
	v->a[3048] = entry(1, true);
	v->a[3049] = shift(551);
	v->a[3050] = entry(1, false);
	v->a[3051] = reduce(sym_case_item, 5, 0, 72);
	v->a[3052] = entry(1, false);
	v->a[3053] = reduce(sym__case_item_last, 5, 0, 72);
	v->a[3054] = entry(1, true);
	v->a[3055] = reduce(sym_case_item, 5, 0, 72);
	v->a[3056] = entry(1, true);
	v->a[3057] = shift(1783);
	v->a[3058] = entry(1, false);
	v->a[3059] = shift(750);
	parse_actions_entries_153(v);
}

void	parse_actions_entries_153(t_parse_actions_entries_array *v)
{
	v->a[3060] = entry(1, false);
	v->a[3061] = shift(1580);
	v->a[3062] = entry(1, false);
	v->a[3063] = shift(882);
	v->a[3064] = entry(1, false);
	v->a[3065] = shift(1748);
	v->a[3066] = entry(1, false);
	v->a[3067] = shift(1619);
	v->a[3068] = entry(1, false);
	v->a[3069] = shift(91);
	v->a[3070] = entry(1, false);
	v->a[3071] = shift(89);
	v->a[3072] = entry(1, false);
	v->a[3073] = shift(1526);
	v->a[3074] = entry(1, false);
	v->a[3075] = shift(556);
	v->a[3076] = entry(1, false);
	v->a[3077] = shift(1573);
	v->a[3078] = entry(1, false);
	v->a[3079] = shift(527);
	parse_actions_entries_154(v);
}

void	parse_actions_entries_154(t_parse_actions_entries_array *v)
{
	v->a[3080] = entry(1, true);
	v->a[3081] = shift(883);
	v->a[3082] = entry(1, false);
	v->a[3083] = shift(1577);
	v->a[3084] = entry(1, false);
	v->a[3085] = shift(879);
	v->a[3086] = entry(1, false);
	v->a[3087] = shift(1579);
	v->a[3088] = entry(1, false);
	v->a[3089] = shift(1790);
	v->a[3090] = entry(1, false);
	v->a[3091] = shift(1575);
	v->a[3092] = entry(1, false);
	v->a[3093] = shift(490);
	v->a[3094] = entry(1, false);
	v->a[3095] = shift(1570);
	v->a[3096] = entry(1, false);
	v->a[3097] = shift(481);
	v->a[3098] = entry(1, false);
	v->a[3099] = reduce(sym_case_item, 5, 0, 71);
	parse_actions_entries_155(v);
}

/* EOF parse_actions_entries_30.c */
