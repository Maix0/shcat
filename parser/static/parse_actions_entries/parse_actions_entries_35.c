/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_actions_entries_35.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_actions_entries.h"

void	parse_actions_entries_175(t_parse_actions_entries_array *v)
{
	v->a[3500] = shift(1374);
	v->a[3501] = entry(1, false);
	v->a[3502] = shift(1420);
	v->a[3503] = entry(1, true);
	v->a[3504] = shift(1420);
	v->a[3505] = entry(1, false);
	v->a[3506] = shift(1389);
	v->a[3507] = entry(1, true);
	v->a[3508] = shift(1389);
	v->a[3509] = entry(1, false);
	v->a[3510] = shift(2041);
	v->a[3511] = entry(1, true);
	v->a[3512] = shift(2041);
	v->a[3513] = entry(1, true);
	v->a[3514] = reduce(sym__extglob_blob, 1, 0, 0);
	v->a[3515] = entry(1, true);
	v->a[3516] = shift(1707);
	v->a[3517] = entry(1, true);
	v->a[3518] = shift(1604);
	v->a[3519] = entry(1, true);
	parse_actions_entries_176(v);
}

void	parse_actions_entries_176(t_parse_actions_entries_array *v)
{
	v->a[3520] = shift(49);
	v->a[3521] = entry(1, true);
	v->a[3522] = shift(51);
	v->a[3523] = entry(2, false);
	v->a[3524] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[3525] = shift_repeat(1304);
	v->a[3526] = entry(2, true);
	v->a[3527] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[3528] = shift_repeat(1304);
	v->a[3529] = entry(2, false);
	v->a[3530] = reduce(aux_sym__expansion_regex_repeat1, 2, 0, 0);
	v->a[3531] = shift_repeat(1800);
	v->a[3532] = entry(1, false);
	v->a[3533] = reduce(aux_sym__expansion_regex_repeat1, 2, 0, 0);
	v->a[3534] = entry(2, false);
	v->a[3535] = reduce(aux_sym__expansion_regex_repeat1, 2, 0, 0);
	v->a[3536] = shift_repeat(1681);
	v->a[3537] = entry(2, false);
	v->a[3538] = reduce(aux_sym__expansion_regex_repeat1, 2, 0, 0);
	v->a[3539] = shift_repeat(1742);
	parse_actions_entries_177(v);
}

void	parse_actions_entries_177(t_parse_actions_entries_array *v)
{
	v->a[3540] = entry(2, true);
	v->a[3541] = reduce(aux_sym__expansion_regex_repeat1, 2, 0, 0);
	v->a[3542] = shift_repeat(1800);
	v->a[3543] = entry(2, true);
	v->a[3544] = reduce(aux_sym__expansion_regex_repeat1, 2, 0, 0);
	v->a[3545] = shift_repeat(1742);
	v->a[3546] = entry(1, true);
	v->a[3547] = shift(1284);
	v->a[3548] = entry(1, false);
	v->a[3549] = reduce(sym__expansion_regex, 1, 0, 24);
	v->a[3550] = entry(1, false);
	v->a[3551] = reduce(aux_sym_string_repeat1, 1, 0, 0);
	v->a[3552] = entry(1, true);
	v->a[3553] = shift(1781);
	v->a[3554] = entry(1, false);
	v->a[3555] = reduce(sym__expansion_regex, 2, 0, 43);
	v->a[3556] = entry(1, false);
	v->a[3557] = shift(1742);
	v->a[3558] = entry(1, true);
	v->a[3559] = shift(1742);
	parse_actions_entries_178(v);
}

void	parse_actions_entries_178(t_parse_actions_entries_array *v)
{
	v->a[3560] = entry(1, true);
	v->a[3561] = shift(1754);
	v->a[3562] = entry(1, false);
	v->a[3563] = reduce(aux_sym_string_repeat1, 3, 0, 0);
	v->a[3564] = entry(1, false);
	v->a[3565] = shift(1400);
	v->a[3566] = entry(1, true);
	v->a[3567] = shift(1400);
	v->a[3568] = entry(1, false);
	v->a[3569] = shift(1370);
	v->a[3570] = entry(1, true);
	v->a[3571] = shift(1370);
	v->a[3572] = entry(1, false);
	v->a[3573] = shift(1385);
	v->a[3574] = entry(1, true);
	v->a[3575] = shift(1385);
	v->a[3576] = entry(1, false);
	v->a[3577] = shift(1383);
	v->a[3578] = entry(1, true);
	v->a[3579] = shift(1383);
	parse_actions_entries_179(v);
}

void	parse_actions_entries_179(t_parse_actions_entries_array *v)
{
	v->a[3580] = entry(1, false);
	v->a[3581] = shift(1413);
	v->a[3582] = entry(1, true);
	v->a[3583] = shift(1413);
	v->a[3584] = entry(1, false);
	v->a[3585] = shift(1381);
	v->a[3586] = entry(1, true);
	v->a[3587] = shift(1381);
	v->a[3588] = entry(1, false);
	v->a[3589] = shift(1382);
	v->a[3590] = entry(1, true);
	v->a[3591] = shift(1382);
	v->a[3592] = entry(1, false);
	v->a[3593] = shift(1368);
	v->a[3594] = entry(1, true);
	v->a[3595] = shift(1368);
	v->a[3596] = entry(1, true);
	v->a[3597] = shift(1110);
	v->a[3598] = entry(1, true);
	v->a[3599] = shift(121);
	parse_actions_entries_180(v);
}

/* EOF parse_actions_entries_35.c */
