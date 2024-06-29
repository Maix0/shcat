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
	v->a[4001] = shift(31);
	v->a[4002] = entry(1, true);
	v->a[4003] = shift(1628);
	v->a[4004] = entry(1, true);
	v->a[4005] = shift(33);
	v->a[4006] = entry(1, false);
	v->a[4007] = reduce(aux_sym_expansion_regex_repeat1, 1, 0, 41);
	v->a[4008] = entry(1, true);
	v->a[4009] = reduce(aux_sym_expansion_regex_repeat1, 1, 0, 41);
	v->a[4010] = entry(1, true);
	v->a[4011] = shift(1258);
	v->a[4012] = entry(1, true);
	v->a[4013] = shift(1321);
	v->a[4014] = entry(1, true);
	v->a[4015] = shift(1622);
	v->a[4016] = entry(1, true);
	v->a[4017] = shift(2243);
	v->a[4018] = entry(1, true);
	v->a[4019] = shift(1942);
	parse_actions_entries_201(v);
}

void	parse_actions_entries_201(t_parse_actions_entries_array *v)
{
	v->a[4020] = entry(1, true);
	v->a[4021] = shift(2137);
	v->a[4022] = entry(1, true);
	v->a[4023] = shift(2165);
	v->a[4024] = entry(1, true);
	v->a[4025] = shift(1528);
	v->a[4026] = entry(1, true);
	v->a[4027] = reduce(aux_sym__case_item_last_repeat1, 2, 0, 36);
	v->a[4028] = entry(1, true);
	v->a[4029] = reduce(aux_sym_if_statement_repeat1, 2, 0, 0);
	v->a[4030] = entry(2, true);
	v->a[4031] = reduce(aux_sym_if_statement_repeat1, 2, 0, 0);
	v->a[4032] = shift_repeat(128);
	v->a[4033] = entry(2, true);
	v->a[4034] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[4035] = shift_repeat(1572);
	v->a[4036] = entry(1, true);
	v->a[4037] = reduce(aux_sym__concatenation_in_expansion_repeat1, 2, 0, 0);
	v->a[4038] = entry(2, true);
	v->a[4039] = reduce(aux_sym__concatenation_in_expansion_repeat1, 2, 0, 0);
	parse_actions_entries_202(v);
}

void	parse_actions_entries_202(t_parse_actions_entries_array *v)
{
	v->a[4040] = shift_repeat(1787);
	v->a[4041] = entry(1, true);
	v->a[4042] = reduce(sym__concatenation_in_expansion, 2, 0, 0);
	v->a[4043] = entry(1, true);
	v->a[4044] = shift(1787);
	v->a[4045] = entry(1, true);
	v->a[4046] = reduce(sym_expansion_expression, 2, 0, 1);
	v->a[4047] = entry(1, true);
	v->a[4048] = reduce(sym__extglob_blob, 2, 0, 0);
	v->a[4049] = entry(1, true);
	v->a[4050] = shift(2102);
	v->a[4051] = entry(1, true);
	v->a[4052] = shift(15);
	v->a[4053] = entry(1, true);
	v->a[4054] = shift(29);
	v->a[4055] = entry(1, true);
	v->a[4056] = shift(28);
	v->a[4057] = entry(1, true);
	v->a[4058] = shift(11);
	v->a[4059] = entry(1, true);
	parse_actions_entries_203(v);
}

void	parse_actions_entries_203(t_parse_actions_entries_array *v)
{
	v->a[4060] = shift(12);
	v->a[4061] = entry(2, true);
	v->a[4062] = reduce(aux_sym__case_item_last_repeat1, 2, 0, 55);
	v->a[4063] = shift_repeat(1536);
	v->a[4064] = entry(1, true);
	v->a[4065] = reduce(aux_sym__case_item_last_repeat1, 2, 0, 55);
	v->a[4066] = entry(1, true);
	v->a[4067] = shift(16);
	v->a[4068] = entry(1, true);
	v->a[4069] = shift(25);
	v->a[4070] = entry(1, true);
	v->a[4071] = shift(9);
	v->a[4072] = entry(1, true);
	v->a[4073] = reduce(sym__case_item_last, 5, 0, 72);
	v->a[4074] = entry(1, true);
	v->a[4075] = shift(1899);
	v->a[4076] = entry(1, true);
	v->a[4077] = shift(143);
	v->a[4078] = entry(1, true);
	v->a[4079] = reduce(sym__extglob_blob, 3, 0, 0);
	parse_actions_entries_204(v);
}

void	parse_actions_entries_204(t_parse_actions_entries_array *v)
{
	v->a[4080] = entry(1, true);
	v->a[4081] = reduce(sym__case_item_last, 3, 0, 54);
	v->a[4082] = entry(1, true);
	v->a[4083] = shift(1816);
	v->a[4084] = entry(1, true);
	v->a[4085] = shift(86);
	v->a[4086] = entry(1, true);
	v->a[4087] = reduce(sym__case_item_last, 4, 0, 65);
	v->a[4088] = entry(1, true);
	v->a[4089] = shift(1920);
	v->a[4090] = entry(1, true);
	v->a[4091] = reduce(sym__case_item_last, 5, 0, 73);
	v->a[4092] = entry(1, true);
	v->a[4093] = shift(1888);
	v->a[4094] = entry(1, true);
	v->a[4095] = shift(1876);
	v->a[4096] = entry(1, true);
	v->a[4097] = reduce(sym__case_item_last, 4, 0, 64);
	v->a[4098] = entry(1, true);
	v->a[4099] = shift(1870);
	parse_actions_entries_205(v);
}

/* EOF parse_actions_entries_40.c */
