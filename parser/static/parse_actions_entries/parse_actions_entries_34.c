/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_actions_entries_34.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_actions_entries.h"

void	parse_actions_entries_170(t_parse_actions_entries_array *v)
{
	v->a[3400] = shift(1940);
	v->a[3401] = entry(1, true);
	v->a[3402] = shift(1928);
	v->a[3403] = entry(1, false);
	v->a[3404] = shift(1853);
	v->a[3405] = entry(1, true);
	v->a[3406] = shift(1929);
	v->a[3407] = entry(1, false);
	v->a[3408] = shift(1863);
	v->a[3409] = entry(1, true);
	v->a[3410] = shift(1984);
	v->a[3411] = entry(1, false);
	v->a[3412] = shift(1867);
	v->a[3413] = entry(2, false);
	v->a[3414] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[3415] = shift_repeat(1478);
	v->a[3416] = entry(2, false);
	v->a[3417] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[3418] = shift_repeat(763);
	v->a[3419] = entry(2, true);
	parse_actions_entries_171(v);
}

void	parse_actions_entries_171(t_parse_actions_entries_array *v)
{
	v->a[3420] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[3421] = shift_repeat(1848);
	v->a[3422] = entry(1, true);
	v->a[3423] = reduce(sym__expansion_body, 1, 0, 7);
	v->a[3424] = entry(1, false);
	v->a[3425] = shift(1852);
	v->a[3426] = entry(1, true);
	v->a[3427] = shift(1852);
	v->a[3428] = entry(1, true);
	v->a[3429] = shift(1598);
	v->a[3430] = entry(1, false);
	v->a[3431] = shift(1999);
	v->a[3432] = entry(1, false);
	v->a[3433] = reduce(sym_expansion_expression, 1, 0, 1);
	v->a[3434] = entry(1, true);
	v->a[3435] = shift(2004);
	v->a[3436] = entry(1, true);
	v->a[3437] = shift(1999);
	v->a[3438] = entry(1, true);
	v->a[3439] = reduce(sym__expansion_body, 1, 0, 2);
	parse_actions_entries_172(v);
}

void	parse_actions_entries_172(t_parse_actions_entries_array *v)
{
	v->a[3440] = entry(1, false);
	v->a[3441] = shift(1864);
	v->a[3442] = entry(1, false);
	v->a[3443] = shift(961);
	v->a[3444] = entry(1, false);
	v->a[3445] = shift(1855);
	v->a[3446] = entry(1, false);
	v->a[3447] = shift(1866);
	v->a[3448] = entry(1, true);
	v->a[3449] = shift(1866);
	v->a[3450] = entry(1, false);
	v->a[3451] = shift(1387);
	v->a[3452] = entry(1, false);
	v->a[3453] = shift(1127);
	v->a[3454] = entry(1, false);
	v->a[3455] = shift(1586);
	v->a[3456] = entry(1, false);
	v->a[3457] = shift(564);
	v->a[3458] = entry(1, false);
	v->a[3459] = shift(1973);
	parse_actions_entries_173(v);
}

void	parse_actions_entries_173(t_parse_actions_entries_array *v)
{
	v->a[3460] = entry(1, false);
	v->a[3461] = shift(1980);
	v->a[3462] = entry(1, true);
	v->a[3463] = shift(1980);
	v->a[3464] = entry(1, false);
	v->a[3465] = shift(538);
	v->a[3466] = entry(1, false);
	v->a[3467] = shift(678);
	v->a[3468] = entry(1, false);
	v->a[3469] = shift(574);
	v->a[3470] = entry(1, false);
	v->a[3471] = shift(332);
	v->a[3472] = entry(1, true);
	v->a[3473] = shift(1450);
	v->a[3474] = entry(1, false);
	v->a[3475] = shift(957);
	v->a[3476] = entry(1, false);
	v->a[3477] = shift(1390);
	v->a[3478] = entry(1, false);
	v->a[3479] = shift(984);
	parse_actions_entries_174(v);
}

void	parse_actions_entries_174(t_parse_actions_entries_array *v)
{
	v->a[3480] = entry(1, false);
	v->a[3481] = reduce(aux_sym__heredoc_command, 1, 0, 9);
	v->a[3482] = entry(1, false);
	v->a[3483] = shift(916);
	v->a[3484] = entry(1, false);
	v->a[3485] = shift(1328);
	v->a[3486] = entry(1, false);
	v->a[3487] = shift(1899);
	v->a[3488] = entry(1, false);
	v->a[3489] = shift(503);
	v->a[3490] = entry(1, false);
	v->a[3491] = shift(914);
	v->a[3492] = entry(1, false);
	v->a[3493] = shift(389);
	v->a[3494] = entry(1, false);
	v->a[3495] = shift(958);
	v->a[3496] = entry(1, false);
	v->a[3497] = shift(535);
	v->a[3498] = entry(1, false);
	v->a[3499] = shift(1978);
	parse_actions_entries_175(v);
}

/* EOF parse_actions_entries_34.c */
