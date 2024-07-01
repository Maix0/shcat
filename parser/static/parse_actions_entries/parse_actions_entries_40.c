/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_actions_entries_40.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_actions_entries.h"

void	parse_actions_entries_200(t_parse_actions_entries_array *v)
{
	v->a[4000] = entry(1, true);
	v->a[4001] = shift(1683);
	v->a[4002] = entry(1, true);
	v->a[4003] = shift(29);
	v->a[4004] = entry(1, false);
	v->a[4005] = shift(1566);
	v->a[4006] = entry(1, true);
	v->a[4007] = shift(1223);
	v->a[4008] = entry(1, true);
	v->a[4009] = shift(23);
	v->a[4010] = entry(1, true);
	v->a[4011] = shift(1370);
	v->a[4012] = entry(1, false);
	v->a[4013] = shift(1557);
	v->a[4014] = entry(1, true);
	v->a[4015] = shift(1690);
	v->a[4016] = entry(1, true);
	v->a[4017] = shift(2163);
	v->a[4018] = entry(1, true);
	v->a[4019] = shift(1931);
	parse_actions_entries_201(v);
}

void	parse_actions_entries_201(t_parse_actions_entries_array *v)
{
	v->a[4020] = entry(1, true);
	v->a[4021] = shift(2222);
	v->a[4022] = entry(1, true);
	v->a[4023] = shift(2260);
	v->a[4024] = entry(2, true);
	v->a[4025] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[4026] = shift_repeat(1489);
	v->a[4027] = entry(1, true);
	v->a[4028] = shift(1435);
	v->a[4029] = entry(1, true);
	v->a[4030] = reduce(aux_sym_if_statement_repeat1, 2, 0, 0);
	v->a[4031] = entry(2, true);
	v->a[4032] = reduce(aux_sym_if_statement_repeat1, 2, 0, 0);
	v->a[4033] = shift_repeat(127);
	v->a[4034] = entry(1, true);
	v->a[4035] = reduce(aux_sym__case_item_last_repeat1, 2, 0, 36);
	v->a[4036] = entry(1, true);
	v->a[4037] = reduce(sym__concatenation_in_expansion, 2, 0, 0);
	v->a[4038] = entry(1, true);
	v->a[4039] = shift(1775);
	parse_actions_entries_202(v);
}

void	parse_actions_entries_202(t_parse_actions_entries_array *v)
{
	v->a[4040] = entry(1, true);
	v->a[4041] = reduce(aux_sym__concatenation_in_expansion_repeat1, 2, 0, 0);
	v->a[4042] = entry(2, true);
	v->a[4043] = reduce(aux_sym__concatenation_in_expansion_repeat1, 2, 0, 0);
	v->a[4044] = shift_repeat(1775);
	v->a[4045] = entry(1, true);
	v->a[4046] = reduce(sym_expansion_expression, 2, 0, 1);
	v->a[4047] = entry(1, true);
	v->a[4048] = shift(26);
	v->a[4049] = entry(1, true);
	v->a[4050] = shift(22);
	v->a[4051] = entry(1, true);
	v->a[4052] = shift(14);
	v->a[4053] = entry(1, true);
	v->a[4054] = shift(27);
	v->a[4055] = entry(1, true);
	v->a[4056] = shift(25);
	v->a[4057] = entry(1, true);
	v->a[4058] = reduce(sym__extglob_blob, 2, 0, 0);
	v->a[4059] = entry(1, true);
	parse_actions_entries_203(v);
}

void	parse_actions_entries_203(t_parse_actions_entries_array *v)
{
	v->a[4060] = shift(2104);
	v->a[4061] = entry(2, true);
	v->a[4062] = reduce(aux_sym__case_item_last_repeat1, 2, 0, 55);
	v->a[4063] = shift_repeat(1448);
	v->a[4064] = entry(1, true);
	v->a[4065] = reduce(aux_sym__case_item_last_repeat1, 2, 0, 55);
	v->a[4066] = entry(1, true);
	v->a[4067] = shift(12);
	v->a[4068] = entry(1, true);
	v->a[4069] = shift(11);
	v->a[4070] = entry(1, true);
	v->a[4071] = shift(15);
	v->a[4072] = entry(1, true);
	v->a[4073] = shift(40);
	v->a[4074] = entry(1, true);
	v->a[4075] = reduce(sym__case_item_last, 4, 0, 64);
	v->a[4076] = entry(1, true);
	v->a[4077] = shift(1896);
	v->a[4078] = entry(1, true);
	v->a[4079] = shift(67);
	parse_actions_entries_204(v);
}

void	parse_actions_entries_204(t_parse_actions_entries_array *v)
{
	v->a[4080] = entry(1, true);
	v->a[4081] = shift(142);
	v->a[4082] = entry(1, true);
	v->a[4083] = reduce(sym__extglob_blob, 3, 0, 0);
	v->a[4084] = entry(1, true);
	v->a[4085] = reduce(sym__case_item_last, 3, 0, 54);
	v->a[4086] = entry(1, true);
	v->a[4087] = shift(1899);
	v->a[4088] = entry(1, true);
	v->a[4089] = shift(145);
	v->a[4090] = entry(1, true);
	v->a[4091] = reduce(sym__case_item_last, 4, 0, 65);
	v->a[4092] = entry(1, true);
	v->a[4093] = shift(1891);
	v->a[4094] = entry(1, true);
	v->a[4095] = reduce(sym__case_item_last, 5, 0, 72);
	v->a[4096] = entry(1, true);
	v->a[4097] = shift(1890);
	v->a[4098] = entry(1, true);
	v->a[4099] = shift(146);
	parse_actions_entries_205(v);
}

/* EOF parse_actions_entries_40.c */
