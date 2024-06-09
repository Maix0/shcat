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
	v->a[4000] = entry(1, false);
	v->a[4001] = shift(1651);
	v->a[4002] = entry(1, false);
	v->a[4003] = shift(1668);
	v->a[4004] = entry(1, false);
	v->a[4005] = shift(433);
	v->a[4006] = entry(1, false);
	v->a[4007] = shift(1659);
	v->a[4008] = entry(1, false);
	v->a[4009] = shift(1646);
	v->a[4010] = entry(1, false);
	v->a[4011] = shift(1466);
	v->a[4012] = entry(1, true);
	v->a[4013] = shift(1466);
	v->a[4014] = entry(1, true);
	v->a[4015] = shift(825);
	v->a[4016] = entry(1, false);
	v->a[4017] = shift(1394);
	v->a[4018] = entry(1, true);
	v->a[4019] = shift(1394);
	parse_actions_entries_201(v);
}

void	parse_actions_entries_201(t_parse_actions_entries_array *v)
{
	v->a[4020] = entry(1, true);
	v->a[4021] = shift(211);
	v->a[4022] = entry(1, false);
	v->a[4023] = shift(1488);
	v->a[4024] = entry(1, true);
	v->a[4025] = shift(1488);
	v->a[4026] = entry(1, true);
	v->a[4027] = shift(482);
	v->a[4028] = entry(1, false);
	v->a[4029] = shift(1798);
	v->a[4030] = entry(1, true);
	v->a[4031] = shift(1694);
	v->a[4032] = entry(1, true);
	v->a[4033] = shift(78);
	v->a[4034] = entry(1, true);
	v->a[4035] = shift(71);
	v->a[4036] = entry(1, true);
	v->a[4037] = shift(1842);
	v->a[4038] = entry(1, true);
	v->a[4039] = reduce(sym_heredoc_body, 2, 0, 0);
	parse_actions_entries_202(v);
}

void	parse_actions_entries_202(t_parse_actions_entries_array *v)
{
	v->a[4040] = entry(1, false);
	v->a[4041] = shift(1370);
	v->a[4042] = entry(1, true);
	v->a[4043] = shift(1370);
	v->a[4044] = entry(1, true);
	v->a[4045] = shift(244);
	v->a[4046] = entry(1, false);
	v->a[4047] = shift(1380);
	v->a[4048] = entry(1, true);
	v->a[4049] = shift(1380);
	v->a[4050] = entry(1, true);
	v->a[4051] = shift(321);
	v->a[4052] = entry(2, false);
	v->a[4053] = reduce(aux_sym_heredoc_body_repeat1, 2, 0, 0);
	v->a[4054] = shift_repeat(1798);
	v->a[4055] = entry(2, true);
	v->a[4056] = reduce(aux_sym_heredoc_body_repeat1, 2, 0, 0);
	v->a[4057] = shift_repeat(1694);
	v->a[4058] = entry(2, true);
	v->a[4059] = reduce(aux_sym_heredoc_body_repeat1, 2, 0, 0);
	parse_actions_entries_203(v);
}

void	parse_actions_entries_203(t_parse_actions_entries_array *v)
{
	v->a[4060] = shift_repeat(78);
	v->a[4061] = entry(2, true);
	v->a[4062] = reduce(aux_sym_heredoc_body_repeat1, 2, 0, 0);
	v->a[4063] = shift_repeat(71);
	v->a[4064] = entry(2, true);
	v->a[4065] = reduce(aux_sym_heredoc_body_repeat1, 2, 0, 0);
	v->a[4066] = shift_repeat(1842);
	v->a[4067] = entry(1, true);
	v->a[4068] = reduce(aux_sym_heredoc_body_repeat1, 2, 0, 0);
	v->a[4069] = entry(1, false);
	v->a[4070] = shift(1483);
	v->a[4071] = entry(1, true);
	v->a[4072] = shift(1483);
	v->a[4073] = entry(1, true);
	v->a[4074] = shift(210);
	v->a[4075] = entry(1, true);
	v->a[4076] = shift(1837);
	v->a[4077] = entry(1, true);
	v->a[4078] = reduce(sym_heredoc_body, 1, 0, 0);
	v->a[4079] = entry(1, false);
	parse_actions_entries_204(v);
}

void	parse_actions_entries_204(t_parse_actions_entries_array *v)
{
	v->a[4080] = shift(1368);
	v->a[4081] = entry(1, true);
	v->a[4082] = shift(1368);
	v->a[4083] = entry(1, true);
	v->a[4084] = shift(227);
	v->a[4085] = entry(1, false);
	v->a[4086] = shift(1492);
	v->a[4087] = entry(1, true);
	v->a[4088] = shift(1492);
	v->a[4089] = entry(1, true);
	v->a[4090] = shift(765);
	v->a[4091] = entry(1, true);
	v->a[4092] = reduce(sym__extglob_blob, 1, 0, 0);
	v->a[4093] = entry(1, true);
	v->a[4094] = shift(1781);
	v->a[4095] = entry(1, true);
	v->a[4096] = shift(1681);
	v->a[4097] = entry(1, true);
	v->a[4098] = shift(122);
	v->a[4099] = entry(1, true);
	parse_actions_entries_205(v);
}

/* EOF parse_actions_entries_40.c */
