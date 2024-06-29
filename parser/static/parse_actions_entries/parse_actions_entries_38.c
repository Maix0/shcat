/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_actions_entries_38.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_actions_entries.h"

void	parse_actions_entries_190(t_parse_actions_entries_array *v)
{
	v->a[3800] = entry(1, false);
	v->a[3801] = shift(1284);
	v->a[3802] = entry(1, false);
	v->a[3803] = shift(1743);
	v->a[3804] = entry(1, false);
	v->a[3805] = shift(381);
	v->a[3806] = entry(1, false);
	v->a[3807] = shift(2001);
	v->a[3808] = entry(1, false);
	v->a[3809] = shift(2005);
	v->a[3810] = entry(1, true);
	v->a[3811] = shift(2005);
	v->a[3812] = entry(1, false);
	v->a[3813] = shift(1736);
	v->a[3814] = entry(1, false);
	v->a[3815] = shift(356);
	v->a[3816] = entry(1, false);
	v->a[3817] = shift(1734);
	v->a[3818] = entry(1, false);
	v->a[3819] = shift(368);
	parse_actions_entries_191(v);
}

void	parse_actions_entries_191(t_parse_actions_entries_array *v)
{
	v->a[3820] = entry(1, false);
	v->a[3821] = reduce(aux_sym_case_statement_repeat1, 1, 0, 37);
	v->a[3822] = entry(1, true);
	v->a[3823] = reduce(aux_sym_case_statement_repeat1, 1, 0, 37);
	v->a[3824] = entry(1, false);
	v->a[3825] = shift(1593);
	v->a[3826] = entry(1, true);
	v->a[3827] = shift(1593);
	v->a[3828] = entry(1, true);
	v->a[3829] = shift(850);
	v->a[3830] = entry(1, false);
	v->a[3831] = shift(1594);
	v->a[3832] = entry(1, true);
	v->a[3833] = shift(1594);
	v->a[3834] = entry(1, true);
	v->a[3835] = shift(595);
	v->a[3836] = entry(1, false);
	v->a[3837] = shift(1590);
	v->a[3838] = entry(1, true);
	v->a[3839] = shift(1590);
	parse_actions_entries_192(v);
}

void	parse_actions_entries_192(t_parse_actions_entries_array *v)
{
	v->a[3840] = entry(1, true);
	v->a[3841] = shift(929);
	v->a[3842] = entry(1, false);
	v->a[3843] = shift(1602);
	v->a[3844] = entry(1, true);
	v->a[3845] = shift(1602);
	v->a[3846] = entry(1, true);
	v->a[3847] = shift(240);
	v->a[3848] = entry(1, false);
	v->a[3849] = shift(1917);
	v->a[3850] = entry(1, true);
	v->a[3851] = shift(1804);
	v->a[3852] = entry(1, true);
	v->a[3853] = shift(119);
	v->a[3854] = entry(1, true);
	v->a[3855] = shift(110);
	v->a[3856] = entry(1, true);
	v->a[3857] = shift(1944);
	v->a[3858] = entry(1, true);
	v->a[3859] = reduce(sym_heredoc_body, 1, 0, 0);
	parse_actions_entries_193(v);
}

void	parse_actions_entries_193(t_parse_actions_entries_array *v)
{
	v->a[3860] = entry(1, false);
	v->a[3861] = shift(1584);
	v->a[3862] = entry(1, true);
	v->a[3863] = shift(1584);
	v->a[3864] = entry(1, true);
	v->a[3865] = shift(233);
	v->a[3866] = entry(1, true);
	v->a[3867] = shift(1945);
	v->a[3868] = entry(1, true);
	v->a[3869] = reduce(sym_heredoc_body, 2, 0, 0);
	v->a[3870] = entry(2, false);
	v->a[3871] = reduce(aux_sym_heredoc_body_repeat1, 2, 0, 0);
	v->a[3872] = shift_repeat(1917);
	v->a[3873] = entry(2, true);
	v->a[3874] = reduce(aux_sym_heredoc_body_repeat1, 2, 0, 0);
	v->a[3875] = shift_repeat(1804);
	v->a[3876] = entry(2, true);
	v->a[3877] = reduce(aux_sym_heredoc_body_repeat1, 2, 0, 0);
	v->a[3878] = shift_repeat(119);
	v->a[3879] = entry(2, true);
	parse_actions_entries_194(v);
}

void	parse_actions_entries_194(t_parse_actions_entries_array *v)
{
	v->a[3880] = reduce(aux_sym_heredoc_body_repeat1, 2, 0, 0);
	v->a[3881] = shift_repeat(110);
	v->a[3882] = entry(2, true);
	v->a[3883] = reduce(aux_sym_heredoc_body_repeat1, 2, 0, 0);
	v->a[3884] = shift_repeat(1945);
	v->a[3885] = entry(1, true);
	v->a[3886] = reduce(aux_sym_heredoc_body_repeat1, 2, 0, 0);
	v->a[3887] = entry(1, false);
	v->a[3888] = shift(1679);
	v->a[3889] = entry(1, true);
	v->a[3890] = shift(1679);
	v->a[3891] = entry(1, true);
	v->a[3892] = shift(222);
	v->a[3893] = entry(1, false);
	v->a[3894] = shift(1678);
	v->a[3895] = entry(1, true);
	v->a[3896] = shift(1678);
	v->a[3897] = entry(1, true);
	v->a[3898] = shift(638);
	v->a[3899] = entry(1, false);
	parse_actions_entries_195(v);
}

/* EOF parse_actions_entries_38.c */
