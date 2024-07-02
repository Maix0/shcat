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
	v->a[3400] = entry(1, true);
	v->a[3401] = shift(245);
	v->a[3402] = entry(1, false);
	v->a[3403] = shift(1506);
	v->a[3404] = entry(1, false);
	v->a[3405] = shift(851);
	v->a[3406] = entry(1, false);
	v->a[3407] = shift(1784);
	v->a[3408] = entry(1, false);
	v->a[3409] = shift(1795);
	v->a[3410] = entry(1, true);
	v->a[3411] = shift(1795);
	v->a[3412] = entry(1, false);
	v->a[3413] = shift(1502);
	v->a[3414] = entry(1, false);
	v->a[3415] = shift(396);
	v->a[3416] = entry(1, false);
	v->a[3417] = shift(1462);
	v->a[3418] = entry(1, false);
	v->a[3419] = shift(1889);
	parse_actions_entries_171(v);
}

void	parse_actions_entries_171(t_parse_actions_entries_array *v)
{
	v->a[3420] = entry(1, false);
	v->a[3421] = shift(1497);
	v->a[3422] = entry(1, false);
	v->a[3423] = shift(424);
	v->a[3424] = entry(1, false);
	v->a[3425] = reduce(aux_sym_case_statement_repeat1, 1, 0, 38);
	v->a[3426] = entry(1, true);
	v->a[3427] = reduce(aux_sym_case_statement_repeat1, 1, 0, 38);
	v->a[3428] = entry(1, false);
	v->a[3429] = shift(1702);
	v->a[3430] = entry(1, true);
	v->a[3431] = shift(1597);
	v->a[3432] = entry(1, true);
	v->a[3433] = shift(116);
	v->a[3434] = entry(1, true);
	v->a[3435] = shift(117);
	v->a[3436] = entry(1, true);
	v->a[3437] = shift(1723);
	v->a[3438] = entry(1, true);
	v->a[3439] = reduce(sym_heredoc_body, 1, 0, 0);
	parse_actions_entries_172(v);
}

void	parse_actions_entries_172(t_parse_actions_entries_array *v)
{
	v->a[3440] = entry(1, true);
	v->a[3441] = shift(1724);
	v->a[3442] = entry(1, true);
	v->a[3443] = reduce(sym_heredoc_body, 2, 0, 0);
	v->a[3444] = entry(2, false);
	v->a[3445] = reduce(aux_sym_heredoc_body_repeat1, 2, 0, 0);
	v->a[3446] = shift_repeat(1702);
	v->a[3447] = entry(2, true);
	v->a[3448] = reduce(aux_sym_heredoc_body_repeat1, 2, 0, 0);
	v->a[3449] = shift_repeat(1597);
	v->a[3450] = entry(2, true);
	v->a[3451] = reduce(aux_sym_heredoc_body_repeat1, 2, 0, 0);
	v->a[3452] = shift_repeat(116);
	v->a[3453] = entry(2, true);
	v->a[3454] = reduce(aux_sym_heredoc_body_repeat1, 2, 0, 0);
	v->a[3455] = shift_repeat(117);
	v->a[3456] = entry(2, true);
	v->a[3457] = reduce(aux_sym_heredoc_body_repeat1, 2, 0, 0);
	v->a[3458] = shift_repeat(1724);
	v->a[3459] = entry(1, true);
	parse_actions_entries_173(v);
}

void	parse_actions_entries_173(t_parse_actions_entries_array *v)
{
	v->a[3460] = reduce(aux_sym_heredoc_body_repeat1, 2, 0, 0);
	v->a[3461] = entry(1, false);
	v->a[3462] = shift(1375);
	v->a[3463] = entry(1, true);
	v->a[3464] = shift(1375);
	v->a[3465] = entry(1, false);
	v->a[3466] = shift(2002);
	v->a[3467] = entry(1, true);
	v->a[3468] = shift(2002);
	v->a[3469] = entry(1, false);
	v->a[3470] = shift(750);
	v->a[3471] = entry(1, true);
	v->a[3472] = shift(1924);
	v->a[3473] = entry(1, false);
	v->a[3474] = shift(1304);
	v->a[3475] = entry(1, true);
	v->a[3476] = shift(1304);
	v->a[3477] = entry(1, false);
	v->a[3478] = shift(1417);
	v->a[3479] = entry(1, true);
	parse_actions_entries_174(v);
}

void	parse_actions_entries_174(t_parse_actions_entries_array *v)
{
	v->a[3480] = shift(1417);
	v->a[3481] = entry(1, false);
	v->a[3482] = shift(757);
	v->a[3483] = entry(1, false);
	v->a[3484] = shift(1401);
	v->a[3485] = entry(1, true);
	v->a[3486] = shift(1401);
	v->a[3487] = entry(1, false);
	v->a[3488] = shift(1392);
	v->a[3489] = entry(1, true);
	v->a[3490] = shift(1392);
	v->a[3491] = entry(1, false);
	v->a[3492] = shift(2081);
	v->a[3493] = entry(1, true);
	v->a[3494] = shift(2081);
	v->a[3495] = entry(1, false);
	v->a[3496] = shift(765);
	v->a[3497] = entry(1, false);
	v->a[3498] = shift(1374);
	v->a[3499] = entry(1, true);
	parse_actions_entries_175(v);
}

/* EOF parse_actions_entries_34.c */
