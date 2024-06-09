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
	v->a[500] = shift(104);
	v->a[501] = entry(1, true);
	v->a[502] = shift(753);
	v->a[503] = entry(1, false);
	v->a[504] = shift(651);
	v->a[505] = entry(1, false);
	v->a[506] = shift(650);
	v->a[507] = entry(1, true);
	v->a[508] = shift(650);
	v->a[509] = entry(1, false);
	v->a[510] = shift(579);
	v->a[511] = entry(1, false);
	v->a[512] = shift(580);
	v->a[513] = entry(1, true);
	v->a[514] = shift(580);
	v->a[515] = entry(1, false);
	v->a[516] = reduce(sym_command, 2, 0, 11);
	v->a[517] = entry(1, true);
	v->a[518] = reduce(sym_command, 2, 0, 11);
	v->a[519] = entry(1, false);
	parse_actions_entries_26(v);
}

void	parse_actions_entries_26(t_parse_actions_entries_array *v)
{
	v->a[520] = shift(508);
	v->a[521] = entry(1, false);
	v->a[522] = shift(506);
	v->a[523] = entry(1, true);
	v->a[524] = shift(506);
	v->a[525] = entry(1, false);
	v->a[526] = shift(343);
	v->a[527] = entry(1, false);
	v->a[528] = shift(813);
	v->a[529] = entry(1, false);
	v->a[530] = shift(1815);
	v->a[531] = entry(1, false);
	v->a[532] = shift(1811);
	v->a[533] = entry(1, false);
	v->a[534] = shift(497);
	v->a[535] = entry(1, false);
	v->a[536] = shift(1958);
	v->a[537] = entry(1, false);
	v->a[538] = shift(1706);
	v->a[539] = entry(1, false);
	parse_actions_entries_27(v);
}

void	parse_actions_entries_27(t_parse_actions_entries_array *v)
{
	v->a[540] = shift(57);
	v->a[541] = entry(1, false);
	v->a[542] = shift(54);
	v->a[543] = entry(1, true);
	v->a[544] = shift(739);
	v->a[545] = entry(1, false);
	v->a[546] = shift(676);
	v->a[547] = entry(1, false);
	v->a[548] = shift(551);
	v->a[549] = entry(1, true);
	v->a[550] = shift(551);
	v->a[551] = entry(1, false);
	v->a[552] = shift(452);
	v->a[553] = entry(1, false);
	v->a[554] = reduce(sym_file_redirect, 3, 0, 13);
	v->a[555] = entry(1, true);
	v->a[556] = reduce(sym_file_redirect, 3, 0, 13);
	v->a[557] = entry(1, false);
	v->a[558] = reduce(sym_command, 3, 0, 24);
	v->a[559] = entry(1, true);
	parse_actions_entries_28(v);
}

void	parse_actions_entries_28(t_parse_actions_entries_array *v)
{
	v->a[560] = reduce(sym_command, 3, 0, 24);
	v->a[561] = entry(1, false);
	v->a[562] = reduce(sym_command, 2, 0, 10);
	v->a[563] = entry(1, true);
	v->a[564] = reduce(sym_command, 2, 0, 10);
	v->a[565] = entry(1, true);
	v->a[566] = reduce(sym_file_redirect, 2, 0, 5);
	v->a[567] = entry(1, false);
	v->a[568] = reduce(sym_file_redirect, 2, 0, 5);
	v->a[569] = entry(2, false);
	v->a[570] = reduce(aux_sym_command_repeat2, 2, 0, 23);
	v->a[571] = shift_repeat(341);
	v->a[572] = entry(1, false);
	v->a[573] = reduce(aux_sym_command_repeat2, 2, 0, 23);
	v->a[574] = entry(2, false);
	v->a[575] = reduce(aux_sym_command_repeat2, 2, 0, 23);
	v->a[576] = shift_repeat(812);
	v->a[577] = entry(2, false);
	v->a[578] = reduce(aux_sym_command_repeat2, 2, 0, 23);
	v->a[579] = shift_repeat(1753);
	parse_actions_entries_29(v);
}

void	parse_actions_entries_29(t_parse_actions_entries_array *v)
{
	v->a[580] = entry(2, false);
	v->a[581] = reduce(aux_sym_command_repeat2, 2, 0, 23);
	v->a[582] = shift_repeat(1762);
	v->a[583] = entry(2, false);
	v->a[584] = reduce(aux_sym_command_repeat2, 2, 0, 23);
	v->a[585] = shift_repeat(483);
	v->a[586] = entry(2, false);
	v->a[587] = reduce(aux_sym_command_repeat2, 2, 0, 23);
	v->a[588] = shift_repeat(1930);
	v->a[589] = entry(2, false);
	v->a[590] = reduce(aux_sym_command_repeat2, 2, 0, 23);
	v->a[591] = shift_repeat(1686);
	v->a[592] = entry(2, false);
	v->a[593] = reduce(aux_sym_command_repeat2, 2, 0, 23);
	v->a[594] = shift_repeat(43);
	v->a[595] = entry(2, false);
	v->a[596] = reduce(aux_sym_command_repeat2, 2, 0, 23);
	v->a[597] = shift_repeat(104);
	v->a[598] = entry(1, true);
	v->a[599] = reduce(aux_sym_command_repeat2, 2, 0, 23);
	parse_actions_entries_30(v);
}

/* EOF parse_actions_entries_5.c */
