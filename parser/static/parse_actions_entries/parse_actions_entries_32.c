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
	v->a[3200] = shift(1461);
	v->a[3201] = entry(1, false);
	v->a[3202] = shift(430);
	v->a[3203] = entry(1, false);
	v->a[3204] = shift(1498);
	v->a[3205] = entry(1, false);
	v->a[3206] = shift(1822);
	v->a[3207] = entry(1, false);
	v->a[3208] = shift(1473);
	v->a[3209] = entry(1, false);
	v->a[3210] = shift(881);
	v->a[3211] = entry(1, false);
	v->a[3212] = shift(1490);
	v->a[3213] = entry(1, false);
	v->a[3214] = shift(610);
	v->a[3215] = entry(1, false);
	v->a[3216] = shift(1459);
	v->a[3217] = entry(1, false);
	v->a[3218] = shift(404);
	v->a[3219] = entry(1, false);
	parse_actions_entries_161(v);
}

void	parse_actions_entries_161(t_parse_actions_entries_array *v)
{
	v->a[3220] = shift(1485);
	v->a[3221] = entry(1, false);
	v->a[3222] = shift(1838);
	v->a[3223] = entry(1, false);
	v->a[3224] = shift(1470);
	v->a[3225] = entry(1, false);
	v->a[3226] = shift(613);
	v->a[3227] = entry(1, false);
	v->a[3228] = shift(1476);
	v->a[3229] = entry(1, false);
	v->a[3230] = shift(878);
	v->a[3231] = entry(1, false);
	v->a[3232] = shift(1467);
	v->a[3233] = entry(1, false);
	v->a[3234] = shift(605);
	v->a[3235] = entry(1, false);
	v->a[3236] = shift(1499);
	v->a[3237] = entry(1, false);
	v->a[3238] = shift(537);
	v->a[3239] = entry(1, false);
	parse_actions_entries_162(v);
}

void	parse_actions_entries_162(t_parse_actions_entries_array *v)
{
	v->a[3240] = shift(1517);
	v->a[3241] = entry(1, false);
	v->a[3242] = shift(894);
	v->a[3243] = entry(1, false);
	v->a[3244] = shift(1492);
	v->a[3245] = entry(1, false);
	v->a[3246] = shift(500);
	v->a[3247] = entry(1, false);
	v->a[3248] = shift(1480);
	v->a[3249] = entry(1, false);
	v->a[3250] = shift(1806);
	v->a[3251] = entry(1, false);
	v->a[3252] = shift(1509);
	v->a[3253] = entry(1, false);
	v->a[3254] = shift(902);
	v->a[3255] = entry(1, false);
	v->a[3256] = shift(1466);
	v->a[3257] = entry(1, false);
	v->a[3258] = shift(1788);
	v->a[3259] = entry(1, false);
	parse_actions_entries_163(v);
}

void	parse_actions_entries_163(t_parse_actions_entries_array *v)
{
	v->a[3260] = shift(1505);
	v->a[3261] = entry(1, false);
	v->a[3262] = shift(531);
	v->a[3263] = entry(1, false);
	v->a[3264] = shift(1497);
	v->a[3265] = entry(1, false);
	v->a[3266] = shift(535);
	v->a[3267] = entry(1, false);
	v->a[3268] = reduce(sym_case_item, 5, 0, 64);
	v->a[3269] = entry(1, false);
	v->a[3270] = reduce(sym__case_item_last, 5, 0, 64);
	v->a[3271] = entry(1, true);
	v->a[3272] = reduce(sym_case_item, 5, 0, 64);
	v->a[3273] = entry(1, false);
	v->a[3274] = shift(1502);
	v->a[3275] = entry(1, false);
	v->a[3276] = shift(866);
	v->a[3277] = entry(1, false);
	v->a[3278] = shift(1506);
	v->a[3279] = entry(1, false);
	parse_actions_entries_164(v);
}

void	parse_actions_entries_164(t_parse_actions_entries_array *v)
{
	v->a[3280] = shift(555);
	v->a[3281] = entry(1, false);
	v->a[3282] = shift(1780);
	v->a[3283] = entry(1, false);
	v->a[3284] = shift(1783);
	v->a[3285] = entry(1, true);
	v->a[3286] = shift(1783);
	v->a[3287] = entry(1, false);
	v->a[3288] = shift(1475);
	v->a[3289] = entry(1, false);
	v->a[3290] = shift(914);
	v->a[3291] = entry(1, false);
	v->a[3292] = shift(1515);
	v->a[3293] = entry(1, false);
	v->a[3294] = shift(464);
	v->a[3295] = entry(1, false);
	v->a[3296] = shift(1493);
	v->a[3297] = entry(1, false);
	v->a[3298] = shift(908);
	v->a[3299] = entry(1, false);
	parse_actions_entries_165(v);
}

/* EOF parse_actions_entries_32.c */
