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
	v->a[3601] = shift(3281);
	v->a[3602] = entry(1, true);
	v->a[3603] = shift(2945);
	v->a[3604] = entry(1, false);
	v->a[3605] = shift(3283);
	v->a[3606] = entry(1, false);
	v->a[3607] = shift(1839);
	v->a[3608] = entry(1, false);
	v->a[3609] = shift(4000);
	v->a[3610] = entry(1, false);
	v->a[3611] = shift(3997);
	v->a[3612] = entry(1, false);
	v->a[3613] = shift(6060);
	v->a[3614] = entry(1, false);
	v->a[3615] = shift(1832);
	v->a[3616] = entry(1, false);
	v->a[3617] = shift(2116);
	v->a[3618] = entry(1, false);
	v->a[3619] = shift(6333);
	parse_actions_entries_181(v);
}

void	parse_actions_entries_181(t_parse_actions_entries_array *v)
{
	v->a[3620] = entry(1, false);
	v->a[3621] = shift(4854);
	v->a[3622] = entry(1, false);
	v->a[3623] = shift(116);
	v->a[3624] = entry(1, false);
	v->a[3625] = shift(119);
	v->a[3626] = entry(1, false);
	v->a[3627] = shift(121);
	v->a[3628] = entry(1, false);
	v->a[3629] = shift(182);
	v->a[3630] = entry(1, true);
	v->a[3631] = shift(1843);
	v->a[3632] = entry(1, true);
	v->a[3633] = shift(7633);
	v->a[3634] = entry(2, false);
	v->a[3635] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[3636] = shift_repeat(1918);
	v->a[3637] = entry(2, false);
	v->a[3638] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[3639] = shift_repeat(1786);
	parse_actions_entries_182(v);
}

void	parse_actions_entries_182(t_parse_actions_entries_array *v)
{
	v->a[3640] = entry(2, true);
	v->a[3641] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[3642] = shift_repeat(1922);
	v->a[3643] = entry(1, false);
	v->a[3644] = shift(1548);
	v->a[3645] = entry(1, false);
	v->a[3646] = shift(1549);
	v->a[3647] = entry(1, true);
	v->a[3648] = shift(1549);
	v->a[3649] = entry(1, false);
	v->a[3650] = shift(1880);
	v->a[3651] = entry(1, false);
	v->a[3652] = shift(1881);
	v->a[3653] = entry(1, true);
	v->a[3654] = shift(1881);
	v->a[3655] = entry(1, false);
	v->a[3656] = shift(1902);
	v->a[3657] = entry(1, false);
	v->a[3658] = shift(1915);
	v->a[3659] = entry(1, false);
	parse_actions_entries_183(v);
}

void	parse_actions_entries_183(t_parse_actions_entries_array *v)
{
	v->a[3660] = shift(743);
	v->a[3661] = entry(1, true);
	v->a[3662] = shift(1903);
	v->a[3663] = entry(1, false);
	v->a[3664] = shift(1918);
	v->a[3665] = entry(1, false);
	v->a[3666] = shift(1786);
	v->a[3667] = entry(1, true);
	v->a[3668] = shift(1922);
	v->a[3669] = entry(1, false);
	v->a[3670] = shift(4504);
	v->a[3671] = entry(1, false);
	v->a[3672] = shift(3824);
	v->a[3673] = entry(1, false);
	v->a[3674] = shift(3825);
	v->a[3675] = entry(1, false);
	v->a[3676] = shift(6053);
	v->a[3677] = entry(1, false);
	v->a[3678] = shift(4315);
	v->a[3679] = entry(1, false);
	parse_actions_entries_184(v);
}

void	parse_actions_entries_184(t_parse_actions_entries_array *v)
{
	v->a[3680] = shift(5782);
	v->a[3681] = entry(1, false);
	v->a[3682] = shift(4706);
	v->a[3683] = entry(1, false);
	v->a[3684] = shift(6263);
	v->a[3685] = entry(1, false);
	v->a[3686] = shift(4671);
	v->a[3687] = entry(1, false);
	v->a[3688] = shift(299);
	v->a[3689] = entry(1, false);
	v->a[3690] = shift(298);
	v->a[3691] = entry(1, false);
	v->a[3692] = shift(293);
	v->a[3693] = entry(1, false);
	v->a[3694] = shift(361);
	v->a[3695] = entry(1, true);
	v->a[3696] = shift(4506);
	v->a[3697] = entry(1, true);
	v->a[3698] = shift(7666);
	v->a[3699] = entry(1, false);
	parse_actions_entries_185(v);
}

/* EOF parse_actions_entries_36.c */
