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
	v->a[4000] = shift_repeat(58);
	v->a[4001] = entry(2, false);
	v->a[4002] = reduce(aux_sym_string_repeat1, 2, 0, 0);
	v->a[4003] = shift_repeat(59);
	v->a[4004] = entry(1, false);
	v->a[4005] = shift(1874);
	v->a[4006] = entry(1, false);
	v->a[4007] = shift(2147);
	v->a[4008] = entry(1, false);
	v->a[4009] = reduce(sym_case_item, 6, 0, 72);
	v->a[4010] = entry(1, false);
	v->a[4011] = reduce(sym__case_item_last, 6, 0, 72);
	v->a[4012] = entry(1, true);
	v->a[4013] = reduce(sym_case_item, 6, 0, 72);
	v->a[4014] = entry(1, false);
	v->a[4015] = reduce(sym_case_item, 7, 0, 77);
	v->a[4016] = entry(1, false);
	v->a[4017] = reduce(sym__case_item_last, 7, 0, 77);
	v->a[4018] = entry(1, true);
	v->a[4019] = reduce(sym_case_item, 7, 0, 77);
	parse_actions_entries_201(v);
}

void	parse_actions_entries_201(t_parse_actions_entries_array *v)
{
	v->a[4020] = entry(1, false);
	v->a[4021] = shift(1876);
	v->a[4022] = entry(1, false);
	v->a[4023] = shift(2137);
	v->a[4024] = entry(1, false);
	v->a[4025] = shift(1910);
	v->a[4026] = entry(1, false);
	v->a[4027] = shift(2132);
	v->a[4028] = entry(1, false);
	v->a[4029] = shift(1872);
	v->a[4030] = entry(1, false);
	v->a[4031] = shift(664);
	v->a[4032] = entry(1, false);
	v->a[4033] = shift(1857);
	v->a[4034] = entry(1, false);
	v->a[4035] = shift(343);
	v->a[4036] = entry(1, false);
	v->a[4037] = shift(342);
	v->a[4038] = entry(1, false);
	v->a[4039] = shift(341);
	parse_actions_entries_202(v);
}

void	parse_actions_entries_202(t_parse_actions_entries_array *v)
{
	v->a[4040] = entry(1, true);
	v->a[4041] = shift(341);
	v->a[4042] = entry(1, false);
	v->a[4043] = shift(1913);
	v->a[4044] = entry(1, false);
	v->a[4045] = shift(1009);
	v->a[4046] = entry(1, false);
	v->a[4047] = shift(1878);
	v->a[4048] = entry(1, false);
	v->a[4049] = shift(1096);
	v->a[4050] = entry(1, false);
	v->a[4051] = shift(558);
	v->a[4052] = entry(1, false);
	v->a[4053] = shift(557);
	v->a[4054] = entry(1, true);
	v->a[4055] = shift(557);
	v->a[4056] = entry(1, false);
	v->a[4057] = shift(1875);
	v->a[4058] = entry(1, false);
	v->a[4059] = shift(1604);
	parse_actions_entries_203(v);
}

void	parse_actions_entries_203(t_parse_actions_entries_array *v)
{
	v->a[4060] = entry(1, false);
	v->a[4061] = reduce(sym_case_item, 5, 0, 65);
	v->a[4062] = entry(1, false);
	v->a[4063] = reduce(sym__case_item_last, 5, 0, 65);
	v->a[4064] = entry(1, true);
	v->a[4065] = reduce(sym_case_item, 5, 0, 65);
	v->a[4066] = entry(1, false);
	v->a[4067] = shift(1881);
	v->a[4068] = entry(1, false);
	v->a[4069] = shift(1092);
	v->a[4070] = entry(1, false);
	v->a[4071] = reduce(sym_case_item, 6, 0, 74);
	v->a[4072] = entry(1, false);
	v->a[4073] = reduce(sym__case_item_last, 6, 0, 74);
	v->a[4074] = entry(1, true);
	v->a[4075] = reduce(sym_case_item, 6, 0, 74);
	v->a[4076] = entry(1, false);
	v->a[4077] = shift(1871);
	v->a[4078] = entry(1, false);
	v->a[4079] = shift(467);
	parse_actions_entries_204(v);
}

void	parse_actions_entries_204(t_parse_actions_entries_array *v)
{
	v->a[4080] = entry(1, false);
	v->a[4081] = shift(1880);
	v->a[4082] = entry(1, false);
	v->a[4083] = shift(1596);
	v->a[4084] = entry(1, false);
	v->a[4085] = shift(1776);
	v->a[4086] = entry(1, true);
	v->a[4087] = shift(1776);
	v->a[4088] = entry(1, true);
	v->a[4089] = shift(750);
	v->a[4090] = entry(1, false);
	v->a[4091] = shift(2352);
	v->a[4092] = entry(1, true);
	v->a[4093] = shift(2352);
	v->a[4094] = entry(1, false);
	v->a[4095] = shift(1885);
	v->a[4096] = entry(1, false);
	v->a[4097] = shift(2223);
	v->a[4098] = entry(1, false);
	v->a[4099] = reduce(sym_case_item, 5, 0, 66);
	parse_actions_entries_205(v);
}

/* EOF parse_actions_entries_40.c */
