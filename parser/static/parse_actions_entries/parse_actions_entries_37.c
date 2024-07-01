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
	v->a[3700] = entry(1, false);
	v->a[3701] = reduce(sym__case_item_last, 5, 0, 63);
	v->a[3702] = entry(1, true);
	v->a[3703] = reduce(sym_case_item, 5, 0, 63);
	v->a[3704] = entry(1, false);
	v->a[3705] = reduce(sym_case_item, 4, 0, 54);
	v->a[3706] = entry(1, false);
	v->a[3707] = reduce(sym__case_item_last, 4, 0, 54);
	v->a[3708] = entry(1, true);
	v->a[3709] = reduce(sym_case_item, 4, 0, 54);
	v->a[3710] = entry(1, false);
	v->a[3711] = shift(1759);
	v->a[3712] = entry(1, false);
	v->a[3713] = shift(666);
	v->a[3714] = entry(1, false);
	v->a[3715] = shift(1642);
	v->a[3716] = entry(1, false);
	v->a[3717] = shift(1640);
	v->a[3718] = entry(1, false);
	v->a[3719] = shift(1762);
	parse_actions_entries_186(v);
}

void	parse_actions_entries_186(t_parse_actions_entries_array *v)
{
	v->a[3720] = entry(1, false);
	v->a[3721] = shift(1444);
	v->a[3722] = entry(2, false);
	v->a[3723] = reduce(aux_sym_string_repeat1, 2, 0, 0);
	v->a[3724] = shift_repeat(841);
	v->a[3725] = entry(2, false);
	v->a[3726] = reduce(aux_sym_string_repeat1, 2, 0, 0);
	v->a[3727] = shift_repeat(1771);
	v->a[3728] = entry(1, false);
	v->a[3729] = reduce(aux_sym_string_repeat1, 2, 0, 0);
	v->a[3730] = entry(2, false);
	v->a[3731] = reduce(aux_sym_string_repeat1, 2, 0, 0);
	v->a[3732] = shift_repeat(1959);
	v->a[3733] = entry(2, false);
	v->a[3734] = reduce(aux_sym_string_repeat1, 2, 0, 0);
	v->a[3735] = shift_repeat(1791);
	v->a[3736] = entry(2, false);
	v->a[3737] = reduce(aux_sym_string_repeat1, 2, 0, 0);
	v->a[3738] = shift_repeat(57);
	v->a[3739] = entry(2, false);
	parse_actions_entries_187(v);
}

void	parse_actions_entries_187(t_parse_actions_entries_array *v)
{
	v->a[3740] = reduce(aux_sym_string_repeat1, 2, 0, 0);
	v->a[3741] = shift_repeat(58);
	v->a[3742] = entry(1, false);
	v->a[3743] = shift(1637);
	v->a[3744] = entry(1, false);
	v->a[3745] = shift(1646);
	v->a[3746] = entry(1, false);
	v->a[3747] = shift(1641);
	v->a[3748] = entry(1, false);
	v->a[3749] = shift(410);
	v->a[3750] = entry(1, false);
	v->a[3751] = shift(1761);
	v->a[3752] = entry(1, false);
	v->a[3753] = shift(1111);
	v->a[3754] = entry(1, false);
	v->a[3755] = shift(1639);
	v->a[3756] = entry(1, false);
	v->a[3757] = shift(427);
	v->a[3758] = entry(1, false);
	v->a[3759] = shift(1693);
	parse_actions_entries_188(v);
}

void	parse_actions_entries_188(t_parse_actions_entries_array *v)
{
	v->a[3760] = entry(1, false);
	v->a[3761] = shift(405);
	v->a[3762] = entry(1, false);
	v->a[3763] = shift(1764);
	v->a[3764] = entry(1, false);
	v->a[3765] = shift(374);
	v->a[3766] = entry(1, false);
	v->a[3767] = reduce(aux_sym_case_statement_repeat1, 1, 0, 37);
	v->a[3768] = entry(1, true);
	v->a[3769] = reduce(aux_sym_case_statement_repeat1, 1, 0, 37);
	v->a[3770] = entry(2, false);
	v->a[3771] = reduce(aux_sym_heredoc_body_repeat1, 2, 0, 0);
	v->a[3772] = shift_repeat(1886);
	v->a[3773] = entry(2, true);
	v->a[3774] = reduce(aux_sym_heredoc_body_repeat1, 2, 0, 0);
	v->a[3775] = shift_repeat(1789);
	v->a[3776] = entry(2, true);
	v->a[3777] = reduce(aux_sym_heredoc_body_repeat1, 2, 0, 0);
	v->a[3778] = shift_repeat(39);
	v->a[3779] = entry(2, true);
	parse_actions_entries_189(v);
}

void	parse_actions_entries_189(t_parse_actions_entries_array *v)
{
	v->a[3780] = reduce(aux_sym_heredoc_body_repeat1, 2, 0, 0);
	v->a[3781] = shift_repeat(92);
	v->a[3782] = entry(2, true);
	v->a[3783] = reduce(aux_sym_heredoc_body_repeat1, 2, 0, 0);
	v->a[3784] = shift_repeat(1928);
	v->a[3785] = entry(1, true);
	v->a[3786] = reduce(aux_sym_heredoc_body_repeat1, 2, 0, 0);
	v->a[3787] = entry(1, false);
	v->a[3788] = shift(1558);
	v->a[3789] = entry(1, true);
	v->a[3790] = shift(1558);
	v->a[3791] = entry(1, true);
	v->a[3792] = shift(623);
	v->a[3793] = entry(1, false);
	v->a[3794] = shift(2305);
	v->a[3795] = entry(1, true);
	v->a[3796] = shift(2305);
	v->a[3797] = entry(1, false);
	v->a[3798] = shift(1589);
	v->a[3799] = entry(1, true);
	parse_actions_entries_190(v);
}

/* EOF parse_actions_entries_37.c */
