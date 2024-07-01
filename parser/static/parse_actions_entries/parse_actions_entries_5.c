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
	v->a[500] = shift(1850);
	v->a[501] = entry(1, false);
	v->a[502] = shift(1834);
	v->a[503] = entry(1, false);
	v->a[504] = shift(1793);
	v->a[505] = entry(1, false);
	v->a[506] = shift(87);
	v->a[507] = entry(1, false);
	v->a[508] = shift(86);
	v->a[509] = entry(1, true);
	v->a[510] = shift(729);
	v->a[511] = entry(1, false);
	v->a[512] = shift(493);
	v->a[513] = entry(2, false);
	v->a[514] = reduce(aux_sym_command_repeat2, 2, 0, 31);
	v->a[515] = shift_repeat(438);
	v->a[516] = entry(1, false);
	v->a[517] = reduce(aux_sym_command_repeat2, 2, 0, 31);
	v->a[518] = entry(2, false);
	v->a[519] = reduce(aux_sym_command_repeat2, 2, 0, 31);
	parse_actions_entries_26(v);
}

void	parse_actions_entries_26(t_parse_actions_entries_array *v)
{
	v->a[520] = shift_repeat(879);
	v->a[521] = entry(2, false);
	v->a[522] = reduce(aux_sym_command_repeat2, 2, 0, 31);
	v->a[523] = shift_repeat(1850);
	v->a[524] = entry(2, false);
	v->a[525] = reduce(aux_sym_command_repeat2, 2, 0, 31);
	v->a[526] = shift_repeat(1834);
	v->a[527] = entry(2, false);
	v->a[528] = reduce(aux_sym_command_repeat2, 2, 0, 31);
	v->a[529] = shift_repeat(1793);
	v->a[530] = entry(2, false);
	v->a[531] = reduce(aux_sym_command_repeat2, 2, 0, 31);
	v->a[532] = shift_repeat(87);
	v->a[533] = entry(2, false);
	v->a[534] = reduce(aux_sym_command_repeat2, 2, 0, 31);
	v->a[535] = shift_repeat(86);
	v->a[536] = entry(1, true);
	v->a[537] = reduce(aux_sym_command_repeat2, 2, 0, 31);
	v->a[538] = entry(2, true);
	v->a[539] = reduce(aux_sym_command_repeat2, 2, 0, 31);
	parse_actions_entries_27(v);
}

void	parse_actions_entries_27(t_parse_actions_entries_array *v)
{
	v->a[540] = shift_repeat(729);
	v->a[541] = entry(1, false);
	v->a[542] = reduce(sym_command, 3, 0, 33);
	v->a[543] = entry(1, true);
	v->a[544] = reduce(sym_command, 3, 0, 33);
	v->a[545] = entry(2, false);
	v->a[546] = reduce(aux_sym_command_repeat2, 2, 0, 31);
	v->a[547] = shift_repeat(476);
	v->a[548] = entry(2, false);
	v->a[549] = reduce(aux_sym_command_repeat2, 2, 0, 31);
	v->a[550] = shift_repeat(853);
	v->a[551] = entry(2, false);
	v->a[552] = reduce(aux_sym_command_repeat2, 2, 0, 31);
	v->a[553] = shift_repeat(1857);
	v->a[554] = entry(2, false);
	v->a[555] = reduce(aux_sym_command_repeat2, 2, 0, 31);
	v->a[556] = shift_repeat(1851);
	v->a[557] = entry(2, false);
	v->a[558] = reduce(aux_sym_command_repeat2, 2, 0, 31);
	v->a[559] = shift_repeat(1802);
	parse_actions_entries_28(v);
}

void	parse_actions_entries_28(t_parse_actions_entries_array *v)
{
	v->a[560] = entry(2, false);
	v->a[561] = reduce(aux_sym_command_repeat2, 2, 0, 31);
	v->a[562] = shift_repeat(60);
	v->a[563] = entry(2, false);
	v->a[564] = reduce(aux_sym_command_repeat2, 2, 0, 31);
	v->a[565] = shift_repeat(63);
	v->a[566] = entry(2, true);
	v->a[567] = reduce(aux_sym_command_repeat2, 2, 0, 31);
	v->a[568] = shift_repeat(726);
	v->a[569] = entry(1, false);
	v->a[570] = reduce(sym_command, 2, 0, 14);
	v->a[571] = entry(1, true);
	v->a[572] = reduce(sym_command, 2, 0, 14);
	v->a[573] = entry(1, false);
	v->a[574] = reduce(sym_file_redirect, 2, 0, 7);
	v->a[575] = entry(1, true);
	v->a[576] = reduce(sym_file_redirect, 2, 0, 7);
	v->a[577] = entry(1, true);
	v->a[578] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[579] = entry(2, false);
	parse_actions_entries_29(v);
}

void	parse_actions_entries_29(t_parse_actions_entries_array *v)
{
	v->a[580] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[581] = shift_repeat(456);
	v->a[582] = entry(1, false);
	v->a[583] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[584] = entry(2, false);
	v->a[585] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[586] = shift_repeat(861);
	v->a[587] = entry(2, false);
	v->a[588] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[589] = shift_repeat(1887);
	v->a[590] = entry(2, false);
	v->a[591] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[592] = shift_repeat(1885);
	v->a[593] = entry(2, false);
	v->a[594] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[595] = shift_repeat(1779);
	v->a[596] = entry(2, false);
	v->a[597] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[598] = shift_repeat(47);
	v->a[599] = entry(2, false);
	parse_actions_entries_30(v);
}

/* EOF parse_actions_entries_5.c */
