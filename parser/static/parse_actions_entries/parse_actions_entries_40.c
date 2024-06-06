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
	v->a[4000] = shift(2656);
	v->a[4001] = entry(2, false);
	v->a[4002] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[4003] = shift(3223);
	v->a[4004] = entry(2, false);
	v->a[4005] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[4006] = shift(1066);
	v->a[4007] = entry(2, false);
	v->a[4008] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[4009] = shift(1923);
	v->a[4010] = entry(1, false);
	v->a[4011] = shift(1363);
	v->a[4012] = entry(1, true);
	v->a[4013] = shift(2563);
	v->a[4014] = entry(2, false);
	v->a[4015] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[4016] = shift(865);
	v->a[4017] = entry(2, false);
	v->a[4018] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[4019] = shift(598);
	parse_actions_entries_201(v);
}

void	parse_actions_entries_201(t_parse_actions_entries_array *v)
{
	v->a[4020] = entry(1, true);
	v->a[4021] = shift(2565);
	v->a[4022] = entry(1, true);
	v->a[4023] = shift(2566);
	v->a[4024] = entry(2, false);
	v->a[4025] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[4026] = shift(1993);
	v->a[4027] = entry(2, false);
	v->a[4028] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[4029] = shift(2156);
	v->a[4030] = entry(1, false);
	v->a[4031] = shift(1878);
	v->a[4032] = entry(1, false);
	v->a[4033] = shift(1877);
	v->a[4034] = entry(1, true);
	v->a[4035] = shift(1877);
	v->a[4036] = entry(2, true);
	v->a[4037] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[4038] = shift_repeat(2403);
	v->a[4039] = entry(1, true);
	parse_actions_entries_202(v);
}

void	parse_actions_entries_202(t_parse_actions_entries_array *v)
{
	v->a[4040] = shift(2479);
	v->a[4041] = entry(1, true);
	v->a[4042] = shift(2478);
	v->a[4043] = entry(1, true);
	v->a[4044] = shift(2403);
	v->a[4045] = entry(1, true);
	v->a[4046] = shift(2560);
	v->a[4047] = entry(1, true);
	v->a[4048] = shift(2477);
	v->a[4049] = entry(2, true);
	v->a[4050] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[4051] = shift_repeat(2327);
	v->a[4052] = entry(1, true);
	v->a[4053] = shift(2559);
	v->a[4054] = entry(1, true);
	v->a[4055] = shift(2476);
	v->a[4056] = entry(1, true);
	v->a[4057] = shift(2327);
	v->a[4058] = entry(1, true);
	v->a[4059] = shift(2498);
	parse_actions_entries_203(v);
}

void	parse_actions_entries_203(t_parse_actions_entries_array *v)
{
	v->a[4060] = entry(2, true);
	v->a[4061] = reduce(sym_command_name, 1, 0, 0);
	v->a[4062] = shift(3940);
	v->a[4063] = entry(1, false);
	v->a[4064] = shift(1951);
	v->a[4065] = entry(1, false);
	v->a[4066] = shift(1956);
	v->a[4067] = entry(1, true);
	v->a[4068] = shift(1956);
	v->a[4069] = entry(1, true);
	v->a[4070] = shift(2568);
	v->a[4071] = entry(1, false);
	v->a[4072] = shift(1889);
	v->a[4073] = entry(1, false);
	v->a[4074] = shift(1888);
	v->a[4075] = entry(1, true);
	v->a[4076] = shift(1888);
	v->a[4077] = entry(1, true);
	v->a[4078] = shift(2567);
	v->a[4079] = entry(2, false);
	parse_actions_entries_204(v);
}

void	parse_actions_entries_204(t_parse_actions_entries_array *v)
{
	v->a[4080] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[4081] = shift_repeat(1800);
	v->a[4082] = entry(2, true);
	v->a[4083] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[4084] = shift_repeat(1804);
	v->a[4085] = entry(2, false);
	v->a[4086] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[4087] = shift_repeat(3159);
	v->a[4088] = entry(2, true);
	v->a[4089] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[4090] = shift_repeat(1784);
	v->a[4091] = entry(2, true);
	v->a[4092] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[4093] = shift_repeat(3083);
	v->a[4094] = entry(2, true);
	v->a[4095] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[4096] = shift_repeat(1800);
	v->a[4097] = entry(2, false);
	v->a[4098] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[4099] = shift_repeat(1866);
	parse_actions_entries_205(v);
}

/* EOF parse_actions_entries_40.c */
