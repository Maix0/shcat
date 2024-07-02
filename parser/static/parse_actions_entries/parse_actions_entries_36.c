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
	v->a[3600] = entry(1, true);
	v->a[3601] = shift(45);
	v->a[3602] = entry(1, true);
	v->a[3603] = shift(1361);
	v->a[3604] = entry(1, true);
	v->a[3605] = shift(23);
	v->a[3606] = entry(1, true);
	v->a[3607] = shift(1353);
	v->a[3608] = entry(1, true);
	v->a[3609] = shift(18);
	v->a[3610] = entry(1, false);
	v->a[3611] = shift(1376);
	v->a[3612] = entry(1, true);
	v->a[3613] = shift(1239);
	v->a[3614] = entry(1, false);
	v->a[3615] = shift(1369);
	v->a[3616] = entry(1, true);
	v->a[3617] = shift(1262);
	v->a[3618] = entry(1, false);
	v->a[3619] = reduce(aux_sym__expansion_regex_repeat1, 1, 0, 42);
	parse_actions_entries_181(v);
}

void	parse_actions_entries_181(t_parse_actions_entries_array *v)
{
	v->a[3620] = entry(1, true);
	v->a[3621] = reduce(aux_sym__expansion_regex_repeat1, 1, 0, 42);
	v->a[3622] = entry(1, true);
	v->a[3623] = shift(1562);
	v->a[3624] = entry(1, false);
	v->a[3625] = shift(1378);
	v->a[3626] = entry(1, true);
	v->a[3627] = shift(1167);
	v->a[3628] = entry(1, true);
	v->a[3629] = shift(33);
	v->a[3630] = entry(1, true);
	v->a[3631] = shift(20);
	v->a[3632] = entry(1, true);
	v->a[3633] = shift(1569);
	v->a[3634] = entry(1, true);
	v->a[3635] = shift(2096);
	v->a[3636] = entry(1, true);
	v->a[3637] = shift(1722);
	v->a[3638] = entry(1, true);
	v->a[3639] = shift(2016);
	parse_actions_entries_182(v);
}

void	parse_actions_entries_182(t_parse_actions_entries_array *v)
{
	v->a[3640] = entry(2, true);
	v->a[3641] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[3642] = shift_repeat(1353);
	v->a[3643] = entry(1, true);
	v->a[3644] = shift(2095);
	v->a[3645] = entry(1, true);
	v->a[3646] = shift(1296);
	v->a[3647] = entry(1, true);
	v->a[3648] = reduce(aux_sym__case_item_last_repeat1, 2, 0, 37);
	v->a[3649] = entry(1, true);
	v->a[3650] = reduce(aux_sym_if_statement_repeat1, 2, 0, 0);
	v->a[3651] = entry(2, true);
	v->a[3652] = reduce(aux_sym_if_statement_repeat1, 2, 0, 0);
	v->a[3653] = shift_repeat(121);
	v->a[3654] = entry(1, true);
	v->a[3655] = reduce(sym__expansion_expression, 2, 0, 43);
	v->a[3656] = entry(1, true);
	v->a[3657] = shift(1469);
	v->a[3658] = entry(1, true);
	v->a[3659] = reduce(aux_sym__concatenation_in_expansion_repeat1, 2, 0, 0);
	parse_actions_entries_183(v);
}

void	parse_actions_entries_183(t_parse_actions_entries_array *v)
{
	v->a[3660] = entry(2, true);
	v->a[3661] = reduce(aux_sym__concatenation_in_expansion_repeat1, 2, 0, 0);
	v->a[3662] = shift_repeat(1469);
	v->a[3663] = entry(1, true);
	v->a[3664] = reduce(sym__concatenation_in_expansion, 2, 0, 53);
	v->a[3665] = entry(1, true);
	v->a[3666] = reduce(sym__concatenation_in_expansion, 2, 0, 0);
	v->a[3667] = entry(1, true);
	v->a[3668] = shift(21);
	v->a[3669] = entry(1, true);
	v->a[3670] = shift(30);
	v->a[3671] = entry(1, true);
	v->a[3672] = shift(9);
	v->a[3673] = entry(1, true);
	v->a[3674] = shift(26);
	v->a[3675] = entry(2, true);
	v->a[3676] = reduce(aux_sym__case_item_last_repeat1, 2, 0, 60);
	v->a[3677] = shift_repeat(1361);
	v->a[3678] = entry(1, true);
	v->a[3679] = reduce(aux_sym__case_item_last_repeat1, 2, 0, 60);
	parse_actions_entries_184(v);
}

void	parse_actions_entries_184(t_parse_actions_entries_array *v)
{
	v->a[3680] = entry(1, true);
	v->a[3681] = shift(31);
	v->a[3682] = entry(1, true);
	v->a[3683] = shift(22);
	v->a[3684] = entry(1, true);
	v->a[3685] = reduce(sym__extglob_blob, 2, 0, 0);
	v->a[3686] = entry(1, true);
	v->a[3687] = shift(1921);
	v->a[3688] = entry(1, true);
	v->a[3689] = reduce(aux_sym__concatenation_in_expansion_repeat1, 2, 0, 64);
	v->a[3690] = entry(1, true);
	v->a[3691] = reduce(sym__word_no_brace, 1, 0, 0);
	v->a[3692] = entry(1, true);
	v->a[3693] = shift(27);
	v->a[3694] = entry(1, true);
	v->a[3695] = shift(11);
	v->a[3696] = entry(1, true);
	v->a[3697] = reduce(sym__case_item_last, 4, 0, 72);
	v->a[3698] = entry(1, true);
	v->a[3699] = shift(1615);
	parse_actions_entries_185(v);
}

/* EOF parse_actions_entries_36.c */
