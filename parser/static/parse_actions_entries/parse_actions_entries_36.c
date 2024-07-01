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
	v->a[3600] = shift(16);
	v->a[3601] = entry(1, true);
	v->a[3602] = shift(1574);
	v->a[3603] = entry(1, false);
	v->a[3604] = shift(1396);
	v->a[3605] = entry(1, true);
	v->a[3606] = shift(25);
	v->a[3607] = entry(1, true);
	v->a[3608] = shift(28);
	v->a[3609] = entry(1, true);
	v->a[3610] = shift(1158);
	v->a[3611] = entry(1, true);
	v->a[3612] = shift(1928);
	v->a[3613] = entry(1, true);
	v->a[3614] = shift(1720);
	v->a[3615] = entry(2, true);
	v->a[3616] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[3617] = shift_repeat(1361);
	v->a[3618] = entry(1, true);
	v->a[3619] = shift(2072);
	parse_actions_entries_181(v);
}

void	parse_actions_entries_181(t_parse_actions_entries_array *v)
{
	v->a[3620] = entry(1, true);
	v->a[3621] = shift(1961);
	v->a[3622] = entry(1, true);
	v->a[3623] = reduce(aux_sym_if_statement_repeat1, 2, 0, 0);
	v->a[3624] = entry(2, true);
	v->a[3625] = reduce(aux_sym_if_statement_repeat1, 2, 0, 0);
	v->a[3626] = shift_repeat(133);
	v->a[3627] = entry(1, true);
	v->a[3628] = reduce(aux_sym__case_item_last_repeat1, 2, 0, 35);
	v->a[3629] = entry(1, true);
	v->a[3630] = shift(1292);
	v->a[3631] = entry(1, true);
	v->a[3632] = reduce(aux_sym__concatenation_in_expansion_repeat1, 2, 0, 0);
	v->a[3633] = entry(2, true);
	v->a[3634] = reduce(aux_sym__concatenation_in_expansion_repeat1, 2, 0, 0);
	v->a[3635] = shift_repeat(1557);
	v->a[3636] = entry(1, true);
	v->a[3637] = reduce(sym__concatenation_in_expansion, 2, 0, 0);
	v->a[3638] = entry(1, true);
	v->a[3639] = shift(1557);
	parse_actions_entries_182(v);
}

void	parse_actions_entries_182(t_parse_actions_entries_array *v)
{
	v->a[3640] = entry(1, true);
	v->a[3641] = reduce(sym_expansion_expression, 2, 0, 24);
	v->a[3642] = entry(1, true);
	v->a[3643] = shift(8);
	v->a[3644] = entry(1, true);
	v->a[3645] = shift(10);
	v->a[3646] = entry(1, true);
	v->a[3647] = reduce(sym__extglob_blob, 2, 0, 0);
	v->a[3648] = entry(1, true);
	v->a[3649] = shift(1906);
	v->a[3650] = entry(1, true);
	v->a[3651] = shift(34);
	v->a[3652] = entry(1, true);
	v->a[3653] = shift(26);
	v->a[3654] = entry(1, true);
	v->a[3655] = shift(24);
	v->a[3656] = entry(2, true);
	v->a[3657] = reduce(aux_sym__case_item_last_repeat1, 2, 0, 54);
	v->a[3658] = shift_repeat(1310);
	v->a[3659] = entry(1, true);
	parse_actions_entries_183(v);
}

void	parse_actions_entries_183(t_parse_actions_entries_array *v)
{
	v->a[3660] = reduce(aux_sym__case_item_last_repeat1, 2, 0, 54);
	v->a[3661] = entry(1, true);
	v->a[3662] = shift(11);
	v->a[3663] = entry(1, true);
	v->a[3664] = shift(13);
	v->a[3665] = entry(1, true);
	v->a[3666] = shift(14);
	v->a[3667] = entry(1, true);
	v->a[3668] = shift(147);
	v->a[3669] = entry(1, true);
	v->a[3670] = shift(61);
	v->a[3671] = entry(1, true);
	v->a[3672] = reduce(sym__case_item_last, 4, 0, 65);
	v->a[3673] = entry(1, true);
	v->a[3674] = shift(1676);
	v->a[3675] = entry(1, true);
	v->a[3676] = shift(1609);
	v->a[3677] = entry(1, true);
	v->a[3678] = shift(134);
	v->a[3679] = entry(1, true);
	parse_actions_entries_184(v);
}

void	parse_actions_entries_184(t_parse_actions_entries_array *v)
{
	v->a[3680] = reduce(sym__case_item_last, 4, 0, 64);
	v->a[3681] = entry(1, true);
	v->a[3682] = shift(1669);
	v->a[3683] = entry(1, true);
	v->a[3684] = reduce(sym__case_item_last, 4, 0, 63);
	v->a[3685] = entry(1, true);
	v->a[3686] = shift(1630);
	v->a[3687] = entry(1, true);
	v->a[3688] = shift(140);
	v->a[3689] = entry(1, true);
	v->a[3690] = reduce(sym__case_item_last, 5, 0, 72);
	v->a[3691] = entry(1, true);
	v->a[3692] = shift(1683);
	v->a[3693] = entry(1, true);
	v->a[3694] = reduce(sym__case_item_last, 5, 0, 73);
	v->a[3695] = entry(1, true);
	v->a[3696] = shift(1686);
	v->a[3697] = entry(1, true);
	v->a[3698] = shift(139);
	v->a[3699] = entry(1, true);
	parse_actions_entries_185(v);
}

/* EOF parse_actions_entries_36.c */
