/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_actions_entries_32.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_actions_entries.h"

void	parse_actions_entries_160(t_parse_actions_entries_array *v)
{
	v->a[3200] = entry(1, true);
	v->a[3201] = shift(447);
	v->a[3202] = entry(1, false);
	v->a[3203] = shift(1553);
	v->a[3204] = entry(1, false);
	v->a[3205] = shift(389);
	v->a[3206] = entry(1, false);
	v->a[3207] = shift(1555);
	v->a[3208] = entry(1, false);
	v->a[3209] = shift(500);
	v->a[3210] = entry(1, false);
	v->a[3211] = shift(1546);
	v->a[3212] = entry(1, false);
	v->a[3213] = shift(897);
	v->a[3214] = entry(1, false);
	v->a[3215] = shift(1536);
	v->a[3216] = entry(1, false);
	v->a[3217] = shift(458);
	v->a[3218] = entry(1, false);
	v->a[3219] = shift(1543);
	parse_actions_entries_161(v);
}

void	parse_actions_entries_161(t_parse_actions_entries_array *v)
{
	v->a[3220] = entry(1, false);
	v->a[3221] = shift(631);
	v->a[3222] = entry(1, true);
	v->a[3223] = shift(277);
	v->a[3224] = entry(1, true);
	v->a[3225] = shift(436);
	v->a[3226] = entry(1, false);
	v->a[3227] = shift(1542);
	v->a[3228] = entry(1, false);
	v->a[3229] = shift(593);
	v->a[3230] = entry(1, false);
	v->a[3231] = shift(1541);
	v->a[3232] = entry(1, false);
	v->a[3233] = shift(656);
	v->a[3234] = entry(1, true);
	v->a[3235] = shift(889);
	v->a[3236] = entry(1, false);
	v->a[3237] = shift(1538);
	v->a[3238] = entry(1, false);
	v->a[3239] = shift(1448);
	parse_actions_entries_162(v);
}

void	parse_actions_entries_162(t_parse_actions_entries_array *v)
{
	v->a[3240] = entry(1, true);
	v->a[3241] = shift(646);
	v->a[3242] = entry(1, false);
	v->a[3243] = shift(1539);
	v->a[3244] = entry(1, false);
	v->a[3245] = shift(590);
	v->a[3246] = entry(1, false);
	v->a[3247] = shift(1535);
	v->a[3248] = entry(1, false);
	v->a[3249] = shift(1449);
	v->a[3250] = entry(1, false);
	v->a[3251] = shift(1545);
	v->a[3252] = entry(1, false);
	v->a[3253] = shift(198);
	v->a[3254] = entry(1, false);
	v->a[3255] = shift(1532);
	v->a[3256] = entry(1, false);
	v->a[3257] = shift(1381);
	v->a[3258] = entry(1, false);
	v->a[3259] = shift(1534);
	parse_actions_entries_163(v);
}

void	parse_actions_entries_163(t_parse_actions_entries_array *v)
{
	v->a[3260] = entry(1, false);
	v->a[3261] = shift(659);
	v->a[3262] = entry(1, true);
	v->a[3263] = shift(1457);
	v->a[3264] = entry(1, true);
	v->a[3265] = shift(588);
	v->a[3266] = entry(1, false);
	v->a[3267] = shift(1533);
	v->a[3268] = entry(1, false);
	v->a[3269] = shift(654);
	v->a[3270] = entry(1, false);
	v->a[3271] = shift(1500);
	v->a[3272] = entry(1, false);
	v->a[3273] = shift(382);
	v->a[3274] = entry(1, false);
	v->a[3275] = reduce(sym_case_item, 7, 0, 84);
	v->a[3276] = entry(1, false);
	v->a[3277] = reduce(sym__case_item_last, 7, 0, 84);
	v->a[3278] = entry(1, true);
	v->a[3279] = reduce(sym_case_item, 7, 0, 84);
	parse_actions_entries_164(v);
}

void	parse_actions_entries_164(t_parse_actions_entries_array *v)
{
	v->a[3280] = entry(1, false);
	v->a[3281] = shift(1530);
	v->a[3282] = entry(1, false);
	v->a[3283] = shift(1836);
	v->a[3284] = entry(1, true);
	v->a[3285] = shift(645);
	v->a[3286] = entry(1, false);
	v->a[3287] = shift(1529);
	v->a[3288] = entry(1, false);
	v->a[3289] = shift(1839);
	v->a[3290] = entry(1, false);
	v->a[3291] = reduce(sym_case_item, 4, 0, 59);
	v->a[3292] = entry(1, false);
	v->a[3293] = reduce(sym__case_item_last, 4, 0, 59);
	v->a[3294] = entry(1, true);
	v->a[3295] = reduce(sym_case_item, 4, 0, 59);
	v->a[3296] = entry(1, false);
	v->a[3297] = shift(1472);
	v->a[3298] = entry(1, false);
	v->a[3299] = shift(1376);
	parse_actions_entries_165(v);
}

/* EOF parse_actions_entries_32.c */
