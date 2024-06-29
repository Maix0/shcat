/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_actions_entries_36.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_actions_entries.h"

void	parse_actions_entries_180(t_parse_actions_entries_array *v)
{
	v->a[3600] = entry(1, false);
	v->a[3601] = shift(1768);
	v->a[3602] = entry(1, false);
	v->a[3603] = shift(1125);
	v->a[3604] = entry(1, false);
	v->a[3605] = shift(1712);
	v->a[3606] = entry(1, false);
	v->a[3607] = shift(1984);
	v->a[3608] = entry(1, false);
	v->a[3609] = shift(1762);
	v->a[3610] = entry(1, false);
	v->a[3611] = shift(1122);
	v->a[3612] = entry(2, false);
	v->a[3613] = reduce(aux_sym_string_repeat1, 2, 0, 0);
	v->a[3614] = shift_repeat(902);
	v->a[3615] = entry(2, false);
	v->a[3616] = reduce(aux_sym_string_repeat1, 2, 0, 0);
	v->a[3617] = shift_repeat(1791);
	v->a[3618] = entry(1, false);
	v->a[3619] = reduce(aux_sym_string_repeat1, 2, 0, 0);
	parse_actions_entries_181(v);
}

void	parse_actions_entries_181(t_parse_actions_entries_array *v)
{
	v->a[3620] = entry(2, false);
	v->a[3621] = reduce(aux_sym_string_repeat1, 2, 0, 0);
	v->a[3622] = shift_repeat(1963);
	v->a[3623] = entry(2, false);
	v->a[3624] = reduce(aux_sym_string_repeat1, 2, 0, 0);
	v->a[3625] = shift_repeat(1805);
	v->a[3626] = entry(2, false);
	v->a[3627] = reduce(aux_sym_string_repeat1, 2, 0, 0);
	v->a[3628] = shift_repeat(63);
	v->a[3629] = entry(2, false);
	v->a[3630] = reduce(aux_sym_string_repeat1, 2, 0, 0);
	v->a[3631] = shift_repeat(62);
	v->a[3632] = entry(1, false);
	v->a[3633] = shift(1713);
	v->a[3634] = entry(1, false);
	v->a[3635] = shift(498);
	v->a[3636] = entry(1, false);
	v->a[3637] = reduce(sym_case_item, 5, 0, 63);
	v->a[3638] = entry(1, false);
	v->a[3639] = reduce(sym__case_item_last, 5, 0, 63);
	parse_actions_entries_182(v);
}

void	parse_actions_entries_182(t_parse_actions_entries_array *v)
{
	v->a[3640] = entry(1, true);
	v->a[3641] = reduce(sym_case_item, 5, 0, 63);
	v->a[3642] = entry(1, false);
	v->a[3643] = shift(1766);
	v->a[3644] = entry(1, false);
	v->a[3645] = shift(2091);
	v->a[3646] = entry(1, false);
	v->a[3647] = shift(1716);
	v->a[3648] = entry(1, false);
	v->a[3649] = shift(424);
	v->a[3650] = entry(1, false);
	v->a[3651] = reduce(sym_case_item, 5, 0, 64);
	v->a[3652] = entry(1, false);
	v->a[3653] = reduce(sym__case_item_last, 5, 0, 64);
	v->a[3654] = entry(1, true);
	v->a[3655] = reduce(sym_case_item, 5, 0, 64);
	v->a[3656] = entry(1, false);
	v->a[3657] = shift(1764);
	v->a[3658] = entry(1, false);
	v->a[3659] = shift(2082);
	parse_actions_entries_183(v);
}

void	parse_actions_entries_183(t_parse_actions_entries_array *v)
{
	v->a[3660] = entry(1, false);
	v->a[3661] = shift(1641);
	v->a[3662] = entry(1, true);
	v->a[3663] = shift(1641);
	v->a[3664] = entry(1, true);
	v->a[3665] = shift(260);
	v->a[3666] = entry(1, false);
	v->a[3667] = shift(1720);
	v->a[3668] = entry(1, false);
	v->a[3669] = shift(430);
	v->a[3670] = entry(1, false);
	v->a[3671] = shift(1714);
	v->a[3672] = entry(1, false);
	v->a[3673] = shift(536);
	v->a[3674] = entry(1, false);
	v->a[3675] = reduce(sym_case_item, 5, 0, 65);
	v->a[3676] = entry(1, false);
	v->a[3677] = reduce(sym__case_item_last, 5, 0, 65);
	v->a[3678] = entry(1, true);
	v->a[3679] = reduce(sym_case_item, 5, 0, 65);
	parse_actions_entries_184(v);
}

void	parse_actions_entries_184(t_parse_actions_entries_array *v)
{
	v->a[3680] = entry(1, false);
	v->a[3681] = shift(1614);
	v->a[3682] = entry(1, true);
	v->a[3683] = shift(1614);
	v->a[3684] = entry(1, true);
	v->a[3685] = shift(658);
	v->a[3686] = entry(1, false);
	v->a[3687] = shift(1722);
	v->a[3688] = entry(1, false);
	v->a[3689] = shift(1988);
	v->a[3690] = entry(1, false);
	v->a[3691] = shift(1759);
	v->a[3692] = entry(1, false);
	v->a[3693] = shift(809);
	v->a[3694] = entry(1, false);
	v->a[3695] = shift(1765);
	v->a[3696] = entry(1, false);
	v->a[3697] = shift(517);
	v->a[3698] = entry(1, false);
	v->a[3699] = shift(1754);
	parse_actions_entries_185(v);
}

/* EOF parse_actions_entries_36.c */
