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
	v->a[500] = shift(2013);
	v->a[501] = entry(1, false);
	v->a[502] = shift(2007);
	v->a[503] = entry(1, false);
	v->a[504] = shift(1937);
	v->a[505] = entry(1, false);
	v->a[506] = shift(64);
	v->a[507] = entry(1, false);
	v->a[508] = shift(65);
	v->a[509] = entry(1, true);
	v->a[510] = shift(730);
	v->a[511] = entry(1, false);
	v->a[512] = shift(519);
	v->a[513] = entry(2, false);
	v->a[514] = reduce(aux_sym_command_repeat2, 2, 0, 31);
	v->a[515] = shift_repeat(361);
	v->a[516] = entry(1, false);
	v->a[517] = reduce(aux_sym_command_repeat2, 2, 0, 31);
	v->a[518] = entry(2, false);
	v->a[519] = reduce(aux_sym_command_repeat2, 2, 0, 31);
	parse_actions_entries_26(v);
}

void	parse_actions_entries_26(t_parse_actions_entries_array *v)
{
	v->a[520] = shift_repeat(1063);
	v->a[521] = entry(2, false);
	v->a[522] = reduce(aux_sym_command_repeat2, 2, 0, 31);
	v->a[523] = shift_repeat(2059);
	v->a[524] = entry(2, false);
	v->a[525] = reduce(aux_sym_command_repeat2, 2, 0, 31);
	v->a[526] = shift_repeat(2044);
	v->a[527] = entry(2, false);
	v->a[528] = reduce(aux_sym_command_repeat2, 2, 0, 31);
	v->a[529] = shift_repeat(1934);
	v->a[530] = entry(2, false);
	v->a[531] = reduce(aux_sym_command_repeat2, 2, 0, 31);
	v->a[532] = shift_repeat(110);
	v->a[533] = entry(2, false);
	v->a[534] = reduce(aux_sym_command_repeat2, 2, 0, 31);
	v->a[535] = shift_repeat(111);
	v->a[536] = entry(1, true);
	v->a[537] = reduce(aux_sym_command_repeat2, 2, 0, 31);
	v->a[538] = entry(2, true);
	v->a[539] = reduce(aux_sym_command_repeat2, 2, 0, 31);
	parse_actions_entries_27(v);
}

void	parse_actions_entries_27(t_parse_actions_entries_array *v)
{
	v->a[540] = shift_repeat(795);
	v->a[541] = entry(1, false);
	v->a[542] = reduce(sym_file_redirect, 2, 0, 7);
	v->a[543] = entry(1, true);
	v->a[544] = reduce(sym_file_redirect, 2, 0, 7);
	v->a[545] = entry(1, false);
	v->a[546] = reduce(sym_command, 3, 0, 33);
	v->a[547] = entry(1, true);
	v->a[548] = reduce(sym_command, 3, 0, 33);
	v->a[549] = entry(1, false);
	v->a[550] = shift(967);
	v->a[551] = entry(1, false);
	v->a[552] = shift(913);
	v->a[553] = entry(1, true);
	v->a[554] = shift(913);
	v->a[555] = entry(1, true);
	v->a[556] = reduce(sym_command, 2, 0, 14);
	v->a[557] = entry(1, false);
	v->a[558] = reduce(sym_command, 2, 0, 14);
	v->a[559] = entry(1, true);
	parse_actions_entries_28(v);
}

void	parse_actions_entries_28(t_parse_actions_entries_array *v)
{
	v->a[560] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[561] = entry(2, false);
	v->a[562] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[563] = shift_repeat(368);
	v->a[564] = entry(1, false);
	v->a[565] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[566] = entry(2, false);
	v->a[567] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[568] = shift_repeat(1067);
	v->a[569] = entry(2, false);
	v->a[570] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[571] = shift_repeat(2033);
	v->a[572] = entry(2, false);
	v->a[573] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[574] = shift_repeat(2028);
	v->a[575] = entry(2, false);
	v->a[576] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[577] = shift_repeat(1936);
	v->a[578] = entry(2, false);
	v->a[579] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	parse_actions_entries_29(v);
}

void	parse_actions_entries_29(t_parse_actions_entries_array *v)
{
	v->a[580] = shift_repeat(52);
	v->a[581] = entry(2, false);
	v->a[582] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[583] = shift_repeat(53);
	v->a[584] = entry(2, false);
	v->a[585] = reduce(aux_sym_command_repeat2, 2, 0, 31);
	v->a[586] = shift_repeat(334);
	v->a[587] = entry(2, false);
	v->a[588] = reduce(aux_sym_command_repeat2, 2, 0, 31);
	v->a[589] = shift_repeat(1046);
	v->a[590] = entry(2, false);
	v->a[591] = reduce(aux_sym_command_repeat2, 2, 0, 31);
	v->a[592] = shift_repeat(2013);
	v->a[593] = entry(2, false);
	v->a[594] = reduce(aux_sym_command_repeat2, 2, 0, 31);
	v->a[595] = shift_repeat(2007);
	v->a[596] = entry(2, false);
	v->a[597] = reduce(aux_sym_command_repeat2, 2, 0, 31);
	v->a[598] = shift_repeat(1937);
	v->a[599] = entry(2, false);
	parse_actions_entries_30(v);
}

/* EOF parse_actions_entries_5.c */
