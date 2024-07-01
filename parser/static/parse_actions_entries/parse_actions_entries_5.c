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
	v->a[500] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[501] = entry(2, false);
	v->a[502] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[503] = shift_repeat(397);
	v->a[504] = entry(1, false);
	v->a[505] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[506] = entry(2, false);
	v->a[507] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[508] = shift_repeat(715);
	v->a[509] = entry(2, false);
	v->a[510] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[511] = shift_repeat(1663);
	v->a[512] = entry(2, false);
	v->a[513] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[514] = shift_repeat(1660);
	v->a[515] = entry(2, false);
	v->a[516] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[517] = shift_repeat(1524);
	v->a[518] = entry(2, false);
	v->a[519] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	parse_actions_entries_26(v);
}

void	parse_actions_entries_26(t_parse_actions_entries_array *v)
{
	v->a[520] = shift_repeat(104);
	v->a[521] = entry(2, false);
	v->a[522] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[523] = shift_repeat(98);
	v->a[524] = entry(1, true);
	v->a[525] = reduce(aux_sym_command_repeat2, 2, 0, 30);
	v->a[526] = entry(2, false);
	v->a[527] = reduce(aux_sym_command_repeat2, 2, 0, 30);
	v->a[528] = shift_repeat(386);
	v->a[529] = entry(1, false);
	v->a[530] = reduce(aux_sym_command_repeat2, 2, 0, 30);
	v->a[531] = entry(2, false);
	v->a[532] = reduce(aux_sym_command_repeat2, 2, 0, 30);
	v->a[533] = shift_repeat(712);
	v->a[534] = entry(2, false);
	v->a[535] = reduce(aux_sym_command_repeat2, 2, 0, 30);
	v->a[536] = shift_repeat(1641);
	v->a[537] = entry(2, false);
	v->a[538] = reduce(aux_sym_command_repeat2, 2, 0, 30);
	v->a[539] = shift_repeat(1639);
	parse_actions_entries_27(v);
}

void	parse_actions_entries_27(t_parse_actions_entries_array *v)
{
	v->a[540] = entry(2, false);
	v->a[541] = reduce(aux_sym_command_repeat2, 2, 0, 30);
	v->a[542] = shift_repeat(1548);
	v->a[543] = entry(2, false);
	v->a[544] = reduce(aux_sym_command_repeat2, 2, 0, 30);
	v->a[545] = shift_repeat(53);
	v->a[546] = entry(2, false);
	v->a[547] = reduce(aux_sym_command_repeat2, 2, 0, 30);
	v->a[548] = shift_repeat(54);
	v->a[549] = entry(2, true);
	v->a[550] = reduce(aux_sym_command_repeat2, 2, 0, 30);
	v->a[551] = shift_repeat(669);
	v->a[552] = entry(1, true);
	v->a[553] = reduce(sym_file_redirect, 2, 0, 5);
	v->a[554] = entry(1, false);
	v->a[555] = reduce(sym_file_redirect, 2, 0, 5);
	v->a[556] = entry(1, false);
	v->a[557] = reduce(sym_command, 2, 0, 12);
	v->a[558] = entry(1, true);
	v->a[559] = reduce(sym_command, 2, 0, 12);
	parse_actions_entries_28(v);
}

void	parse_actions_entries_28(t_parse_actions_entries_array *v)
{
	v->a[560] = entry(1, true);
	v->a[561] = reduce(sym_command, 3, 0, 32);
	v->a[562] = entry(1, false);
	v->a[563] = reduce(sym_command, 3, 0, 32);
	v->a[564] = entry(2, false);
	v->a[565] = reduce(aux_sym_command_repeat2, 2, 0, 30);
	v->a[566] = shift_repeat(442);
	v->a[567] = entry(2, false);
	v->a[568] = reduce(aux_sym_command_repeat2, 2, 0, 30);
	v->a[569] = shift_repeat(757);
	v->a[570] = entry(2, false);
	v->a[571] = reduce(aux_sym_command_repeat2, 2, 0, 30);
	v->a[572] = shift_repeat(1678);
	v->a[573] = entry(2, false);
	v->a[574] = reduce(aux_sym_command_repeat2, 2, 0, 30);
	v->a[575] = shift_repeat(1668);
	v->a[576] = entry(2, false);
	v->a[577] = reduce(aux_sym_command_repeat2, 2, 0, 30);
	v->a[578] = shift_repeat(1527);
	v->a[579] = entry(2, false);
	parse_actions_entries_29(v);
}

void	parse_actions_entries_29(t_parse_actions_entries_array *v)
{
	v->a[580] = reduce(aux_sym_command_repeat2, 2, 0, 30);
	v->a[581] = shift_repeat(67);
	v->a[582] = entry(2, false);
	v->a[583] = reduce(aux_sym_command_repeat2, 2, 0, 30);
	v->a[584] = shift_repeat(58);
	v->a[585] = entry(2, true);
	v->a[586] = reduce(aux_sym_command_repeat2, 2, 0, 30);
	v->a[587] = shift_repeat(643);
	v->a[588] = entry(2, false);
	v->a[589] = reduce(aux_sym_command_repeat2, 2, 0, 30);
	v->a[590] = shift_repeat(373);
	v->a[591] = entry(2, false);
	v->a[592] = reduce(aux_sym_command_repeat2, 2, 0, 30);
	v->a[593] = shift_repeat(718);
	v->a[594] = entry(2, false);
	v->a[595] = reduce(aux_sym_command_repeat2, 2, 0, 30);
	v->a[596] = shift_repeat(1612);
	v->a[597] = entry(2, false);
	v->a[598] = reduce(aux_sym_command_repeat2, 2, 0, 30);
	v->a[599] = shift_repeat(1615);
	parse_actions_entries_30(v);
}

/* EOF parse_actions_entries_5.c */
