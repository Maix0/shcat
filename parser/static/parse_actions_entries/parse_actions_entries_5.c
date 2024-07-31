/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_actions_entries_5.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_actions_entries.h"

void	parse_actions_entries_25(t_parse_actions_entries_array *v)
{
	v->a[500] = shift(592);
	v->a[501] = entry(1, true);
	v->a[502] = reduce(aux_sym_command_repeat2, 2, 0, 30);
	v->a[503] = entry(2, false);
	v->a[504] = reduce(aux_sym_command_repeat2, 2, 0, 30);
	v->a[505] = shift_repeat(339);
	v->a[506] = entry(1, false);
	v->a[507] = reduce(aux_sym_command_repeat2, 2, 0, 30);
	v->a[508] = entry(2, false);
	v->a[509] = reduce(aux_sym_command_repeat2, 2, 0, 30);
	v->a[510] = shift_repeat(782);
	v->a[511] = entry(2, false);
	v->a[512] = reduce(aux_sym_command_repeat2, 2, 0, 30);
	v->a[513] = shift_repeat(1431);
	v->a[514] = entry(2, false);
	v->a[515] = reduce(aux_sym_command_repeat2, 2, 0, 30);
	v->a[516] = shift_repeat(1344);
	v->a[517] = entry(2, false);
	v->a[518] = reduce(aux_sym_command_repeat2, 2, 0, 30);
	v->a[519] = shift_repeat(1351);
	parse_actions_entries_26(v);
}

void	parse_actions_entries_26(t_parse_actions_entries_array *v)
{
	v->a[520] = entry(2, false);
	v->a[521] = reduce(aux_sym_command_repeat2, 2, 0, 30);
	v->a[522] = shift_repeat(100);
	v->a[523] = entry(2, false);
	v->a[524] = reduce(aux_sym_command_repeat2, 2, 0, 30);
	v->a[525] = shift_repeat(99);
	v->a[526] = entry(2, true);
	v->a[527] = reduce(aux_sym_command_repeat2, 2, 0, 30);
	v->a[528] = shift_repeat(626);
	v->a[529] = entry(1, true);
	v->a[530] = shift(436);
	v->a[531] = entry(1, false);
	v->a[532] = shift(344);
	v->a[533] = entry(1, false);
	v->a[534] = reduce(sym_command, 2, 0, 11);
	v->a[535] = entry(1, true);
	v->a[536] = shift(614);
	v->a[537] = entry(1, false);
	v->a[538] = reduce(sym_command, 2, 0, 14);
	v->a[539] = entry(2, false);
	parse_actions_entries_27(v);
}

void	parse_actions_entries_27(t_parse_actions_entries_array *v)
{
	v->a[540] = reduce(aux_sym_command_repeat2, 2, 0, 30);
	v->a[541] = shift_repeat(344);
	v->a[542] = entry(2, false);
	v->a[543] = reduce(aux_sym_command_repeat2, 2, 0, 30);
	v->a[544] = shift_repeat(769);
	v->a[545] = entry(2, false);
	v->a[546] = reduce(aux_sym_command_repeat2, 2, 0, 30);
	v->a[547] = shift_repeat(1459);
	v->a[548] = entry(2, false);
	v->a[549] = reduce(aux_sym_command_repeat2, 2, 0, 30);
	v->a[550] = shift_repeat(1319);
	v->a[551] = entry(2, false);
	v->a[552] = reduce(aux_sym_command_repeat2, 2, 0, 30);
	v->a[553] = shift_repeat(1321);
	v->a[554] = entry(2, false);
	v->a[555] = reduce(aux_sym_command_repeat2, 2, 0, 30);
	v->a[556] = shift_repeat(81);
	v->a[557] = entry(2, false);
	v->a[558] = reduce(aux_sym_command_repeat2, 2, 0, 30);
	v->a[559] = shift_repeat(82);
	parse_actions_entries_28(v);
}

void	parse_actions_entries_28(t_parse_actions_entries_array *v)
{
	v->a[560] = entry(2, true);
	v->a[561] = reduce(aux_sym_command_repeat2, 2, 0, 30);
	v->a[562] = shift_repeat(614);
	v->a[563] = entry(1, true);
	v->a[564] = shift(781);
	v->a[565] = entry(1, false);
	v->a[566] = reduce(sym_command, 3, 0, 32);
	v->a[567] = entry(1, false);
	v->a[568] = shift(739);
	v->a[569] = entry(1, true);
	v->a[570] = shift(173);
	v->a[571] = entry(1, true);
	v->a[572] = shift(719);
	v->a[573] = entry(1, true);
	v->a[574] = shift(727);
	v->a[575] = entry(1, false);
	v->a[576] = shift(729);
	v->a[577] = entry(1, false);
	v->a[578] = shift(730);
	v->a[579] = entry(1, false);
	parse_actions_entries_29(v);
}

void	parse_actions_entries_29(t_parse_actions_entries_array *v)
{
	v->a[580] = shift(737);
	v->a[581] = entry(1, true);
	v->a[582] = shift(738);
	v->a[583] = entry(1, false);
	v->a[584] = shift(742);
	v->a[585] = entry(1, false);
	v->a[586] = shift(745);
	v->a[587] = entry(1, true);
	v->a[588] = shift(747);
	v->a[589] = entry(1, true);
	v->a[590] = shift(730);
	v->a[591] = entry(1, false);
	v->a[592] = shift(753);
	v->a[593] = entry(1, false);
	v->a[594] = shift(761);
	v->a[595] = entry(1, true);
	v->a[596] = shift(734);
	v->a[597] = entry(1, true);
	v->a[598] = shift(183);
	v->a[599] = entry(1, true);
	parse_actions_entries_30(v);
}

/* EOF parse_actions_entries_5.c */
