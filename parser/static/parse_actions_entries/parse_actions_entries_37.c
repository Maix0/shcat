/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_actions_entries_37.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_actions_entries.h"

void	parse_actions_entries_185(t_parse_actions_entries_array *v)
{
	v->a[3700] = entry(1, true);
	v->a[3701] = reduce(sym_case_item, 5, 0, 45);
	v->a[3702] = entry(1, false);
	v->a[3703] = reduce(sym_case_item, 5, 0, 43);
	v->a[3704] = entry(1, false);
	v->a[3705] = reduce(sym__case_item_last, 5, 0, 43);
	v->a[3706] = entry(1, true);
	v->a[3707] = reduce(sym_case_item, 5, 0, 43);
	v->a[3708] = entry(1, true);
	v->a[3709] = shift(993);
	v->a[3710] = entry(1, true);
	v->a[3711] = shift(562);
	v->a[3712] = entry(1, false);
	v->a[3713] = shift(840);
	v->a[3714] = entry(1, false);
	v->a[3715] = shift(1663);
	v->a[3716] = entry(1, false);
	v->a[3717] = shift(1869);
	v->a[3718] = entry(1, false);
	v->a[3719] = shift(1702);
	parse_actions_entries_186(v);
}

void	parse_actions_entries_186(t_parse_actions_entries_array *v)
{
	v->a[3720] = entry(1, false);
	v->a[3721] = shift(61);
	v->a[3722] = entry(1, false);
	v->a[3723] = shift(60);
	v->a[3724] = entry(1, false);
	v->a[3725] = shift(1649);
	v->a[3726] = entry(1, false);
	v->a[3727] = shift(634);
	v->a[3728] = entry(1, false);
	v->a[3729] = shift(1638);
	v->a[3730] = entry(1, false);
	v->a[3731] = shift(384);
	v->a[3732] = entry(1, false);
	v->a[3733] = shift(1639);
	v->a[3734] = entry(1, false);
	v->a[3735] = shift(1619);
	v->a[3736] = entry(1, false);
	v->a[3737] = shift(911);
	v->a[3738] = entry(1, false);
	v->a[3739] = shift(1633);
	parse_actions_entries_187(v);
}

void	parse_actions_entries_187(t_parse_actions_entries_array *v)
{
	v->a[3740] = entry(1, false);
	v->a[3741] = shift(1627);
	v->a[3742] = entry(1, false);
	v->a[3743] = shift(979);
	v->a[3744] = entry(1, false);
	v->a[3745] = shift(1613);
	v->a[3746] = entry(1, false);
	v->a[3747] = shift(1414);
	v->a[3748] = entry(1, true);
	v->a[3749] = shift(1414);
	v->a[3750] = entry(1, true);
	v->a[3751] = shift(260);
	v->a[3752] = entry(1, false);
	v->a[3753] = shift(2212);
	v->a[3754] = entry(1, true);
	v->a[3755] = shift(2212);
	v->a[3756] = entry(1, false);
	v->a[3757] = shift(1603);
	v->a[3758] = entry(1, false);
	v->a[3759] = shift(1579);
	parse_actions_entries_188(v);
}

void	parse_actions_entries_188(t_parse_actions_entries_array *v)
{
	v->a[3760] = entry(1, false);
	v->a[3761] = shift(1643);
	v->a[3762] = entry(2, false);
	v->a[3763] = reduce(aux_sym_string_repeat1, 2, 0, 0);
	v->a[3764] = shift_repeat(840);
	v->a[3765] = entry(2, false);
	v->a[3766] = reduce(aux_sym_string_repeat1, 2, 0, 0);
	v->a[3767] = shift_repeat(1685);
	v->a[3768] = entry(1, false);
	v->a[3769] = reduce(aux_sym_string_repeat1, 2, 0, 0);
	v->a[3770] = entry(2, false);
	v->a[3771] = reduce(aux_sym_string_repeat1, 2, 0, 0);
	v->a[3772] = shift_repeat(1869);
	v->a[3773] = entry(2, false);
	v->a[3774] = reduce(aux_sym_string_repeat1, 2, 0, 0);
	v->a[3775] = shift_repeat(1702);
	v->a[3776] = entry(2, false);
	v->a[3777] = reduce(aux_sym_string_repeat1, 2, 0, 0);
	v->a[3778] = shift_repeat(61);
	v->a[3779] = entry(2, false);
	parse_actions_entries_189(v);
}

void	parse_actions_entries_189(t_parse_actions_entries_array *v)
{
	v->a[3780] = reduce(aux_sym_string_repeat1, 2, 0, 0);
	v->a[3781] = shift_repeat(60);
	v->a[3782] = entry(1, false);
	v->a[3783] = shift(1625);
	v->a[3784] = entry(1, false);
	v->a[3785] = shift(684);
	v->a[3786] = entry(1, false);
	v->a[3787] = shift(1607);
	v->a[3788] = entry(1, false);
	v->a[3789] = shift(1624);
	v->a[3790] = entry(1, false);
	v->a[3791] = shift(1622);
	v->a[3792] = entry(1, false);
	v->a[3793] = shift(1623);
	v->a[3794] = entry(1, false);
	v->a[3795] = shift(1948);
	v->a[3796] = entry(1, false);
	v->a[3797] = shift(1601);
	v->a[3798] = entry(1, false);
	v->a[3799] = shift(1645);
	parse_actions_entries_190(v);
}

/* EOF parse_actions_entries_37.c */
