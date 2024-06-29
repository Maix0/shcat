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
	v->a[500] = shift(1886);
	v->a[501] = entry(1, false);
	v->a[502] = shift(1868);
	v->a[503] = entry(1, false);
	v->a[504] = shift(1801);
	v->a[505] = entry(1, false);
	v->a[506] = shift(102);
	v->a[507] = entry(1, false);
	v->a[508] = shift(100);
	v->a[509] = entry(1, true);
	v->a[510] = shift(687);
	v->a[511] = entry(1, false);
	v->a[512] = shift(479);
	v->a[513] = entry(2, false);
	v->a[514] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[515] = shift_repeat(339);
	v->a[516] = entry(1, false);
	v->a[517] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[518] = entry(2, false);
	v->a[519] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	parse_actions_entries_26(v);
}

void	parse_actions_entries_26(t_parse_actions_entries_array *v)
{
	v->a[520] = shift_repeat(911);
	v->a[521] = entry(2, false);
	v->a[522] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[523] = shift_repeat(1895);
	v->a[524] = entry(2, false);
	v->a[525] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[526] = shift_repeat(1875);
	v->a[527] = entry(2, false);
	v->a[528] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[529] = shift_repeat(1794);
	v->a[530] = entry(2, false);
	v->a[531] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[532] = shift_repeat(59);
	v->a[533] = entry(2, false);
	v->a[534] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[535] = shift_repeat(58);
	v->a[536] = entry(1, true);
	v->a[537] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[538] = entry(1, true);
	v->a[539] = reduce(sym_file_redirect, 2, 0, 7);
	parse_actions_entries_27(v);
}

void	parse_actions_entries_27(t_parse_actions_entries_array *v)
{
	v->a[540] = entry(1, false);
	v->a[541] = reduce(sym_file_redirect, 2, 0, 7);
	v->a[542] = entry(1, true);
	v->a[543] = reduce(sym_command, 3, 0, 33);
	v->a[544] = entry(1, false);
	v->a[545] = reduce(sym_command, 3, 0, 33);
	v->a[546] = entry(1, false);
	v->a[547] = reduce(sym_file_redirect, 3, 0, 19);
	v->a[548] = entry(1, true);
	v->a[549] = reduce(sym_file_redirect, 3, 0, 19);
	v->a[550] = entry(1, false);
	v->a[551] = reduce(sym_command, 2, 0, 14);
	v->a[552] = entry(1, true);
	v->a[553] = reduce(sym_command, 2, 0, 14);
	v->a[554] = entry(2, false);
	v->a[555] = reduce(aux_sym_command_repeat2, 2, 0, 31);
	v->a[556] = shift_repeat(385);
	v->a[557] = entry(1, false);
	v->a[558] = reduce(aux_sym_command_repeat2, 2, 0, 31);
	v->a[559] = entry(2, false);
	parse_actions_entries_28(v);
}

void	parse_actions_entries_28(t_parse_actions_entries_array *v)
{
	v->a[560] = reduce(aux_sym_command_repeat2, 2, 0, 31);
	v->a[561] = shift_repeat(920);
	v->a[562] = entry(2, false);
	v->a[563] = reduce(aux_sym_command_repeat2, 2, 0, 31);
	v->a[564] = shift_repeat(1886);
	v->a[565] = entry(2, false);
	v->a[566] = reduce(aux_sym_command_repeat2, 2, 0, 31);
	v->a[567] = shift_repeat(1868);
	v->a[568] = entry(2, false);
	v->a[569] = reduce(aux_sym_command_repeat2, 2, 0, 31);
	v->a[570] = shift_repeat(1801);
	v->a[571] = entry(2, false);
	v->a[572] = reduce(aux_sym_command_repeat2, 2, 0, 31);
	v->a[573] = shift_repeat(102);
	v->a[574] = entry(2, false);
	v->a[575] = reduce(aux_sym_command_repeat2, 2, 0, 31);
	v->a[576] = shift_repeat(100);
	v->a[577] = entry(1, true);
	v->a[578] = reduce(aux_sym_command_repeat2, 2, 0, 31);
	v->a[579] = entry(2, true);
	parse_actions_entries_29(v);
}

void	parse_actions_entries_29(t_parse_actions_entries_array *v)
{
	v->a[580] = reduce(aux_sym_command_repeat2, 2, 0, 31);
	v->a[581] = shift_repeat(687);
	v->a[582] = entry(2, false);
	v->a[583] = reduce(aux_sym_command_repeat2, 2, 0, 31);
	v->a[584] = shift_repeat(334);
	v->a[585] = entry(2, false);
	v->a[586] = reduce(aux_sym_command_repeat2, 2, 0, 31);
	v->a[587] = shift_repeat(918);
	v->a[588] = entry(2, false);
	v->a[589] = reduce(aux_sym_command_repeat2, 2, 0, 31);
	v->a[590] = shift_repeat(1902);
	v->a[591] = entry(2, false);
	v->a[592] = reduce(aux_sym_command_repeat2, 2, 0, 31);
	v->a[593] = shift_repeat(1903);
	v->a[594] = entry(2, false);
	v->a[595] = reduce(aux_sym_command_repeat2, 2, 0, 31);
	v->a[596] = shift_repeat(1783);
	v->a[597] = entry(2, false);
	v->a[598] = reduce(aux_sym_command_repeat2, 2, 0, 31);
	v->a[599] = shift_repeat(57);
	parse_actions_entries_30(v);
}

/* EOF parse_actions_entries_5.c */
