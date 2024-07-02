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
	v->a[500] = shift(805);
	v->a[501] = entry(1, false);
	v->a[502] = reduce(sym_command, 3, 0, 34);
	v->a[503] = entry(1, true);
	v->a[504] = reduce(sym_command, 3, 0, 34);
	v->a[505] = entry(1, false);
	v->a[506] = reduce(sym_command, 2, 0, 12);
	v->a[507] = entry(1, true);
	v->a[508] = reduce(sym_command, 2, 0, 12);
	v->a[509] = entry(1, false);
	v->a[510] = reduce(sym_file_redirect, 2, 0, 5);
	v->a[511] = entry(1, true);
	v->a[512] = reduce(sym_file_redirect, 2, 0, 5);
	v->a[513] = entry(1, false);
	v->a[514] = reduce(sym_file_redirect, 3, 0, 17);
	v->a[515] = entry(1, true);
	v->a[516] = reduce(sym_file_redirect, 3, 0, 17);
	v->a[517] = entry(2, false);
	v->a[518] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[519] = shift_repeat(441);
	parse_actions_entries_26(v);
}

void	parse_actions_entries_26(t_parse_actions_entries_array *v)
{
	v->a[520] = entry(1, false);
	v->a[521] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[522] = entry(2, false);
	v->a[523] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[524] = shift_repeat(737);
	v->a[525] = entry(2, false);
	v->a[526] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[527] = shift_repeat(1695);
	v->a[528] = entry(2, false);
	v->a[529] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[530] = shift_repeat(1687);
	v->a[531] = entry(2, false);
	v->a[532] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[533] = shift_repeat(1596);
	v->a[534] = entry(2, false);
	v->a[535] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[536] = shift_repeat(113);
	v->a[537] = entry(2, false);
	v->a[538] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[539] = shift_repeat(110);
	parse_actions_entries_27(v);
}

void	parse_actions_entries_27(t_parse_actions_entries_array *v)
{
	v->a[540] = entry(1, true);
	v->a[541] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[542] = entry(2, false);
	v->a[543] = reduce(aux_sym_command_repeat2, 2, 0, 32);
	v->a[544] = shift_repeat(430);
	v->a[545] = entry(1, false);
	v->a[546] = reduce(aux_sym_command_repeat2, 2, 0, 32);
	v->a[547] = entry(2, false);
	v->a[548] = reduce(aux_sym_command_repeat2, 2, 0, 32);
	v->a[549] = shift_repeat(710);
	v->a[550] = entry(2, false);
	v->a[551] = reduce(aux_sym_command_repeat2, 2, 0, 32);
	v->a[552] = shift_repeat(1682);
	v->a[553] = entry(2, false);
	v->a[554] = reduce(aux_sym_command_repeat2, 2, 0, 32);
	v->a[555] = shift_repeat(1678);
	v->a[556] = entry(2, false);
	v->a[557] = reduce(aux_sym_command_repeat2, 2, 0, 32);
	v->a[558] = shift_repeat(1599);
	v->a[559] = entry(2, false);
	parse_actions_entries_28(v);
}

void	parse_actions_entries_28(t_parse_actions_entries_array *v)
{
	v->a[560] = reduce(aux_sym_command_repeat2, 2, 0, 32);
	v->a[561] = shift_repeat(59);
	v->a[562] = entry(2, false);
	v->a[563] = reduce(aux_sym_command_repeat2, 2, 0, 32);
	v->a[564] = shift_repeat(60);
	v->a[565] = entry(1, true);
	v->a[566] = reduce(aux_sym_command_repeat2, 2, 0, 32);
	v->a[567] = entry(2, true);
	v->a[568] = reduce(aux_sym_command_repeat2, 2, 0, 32);
	v->a[569] = shift_repeat(661);
	v->a[570] = entry(2, false);
	v->a[571] = reduce(aux_sym_command_repeat2, 2, 0, 32);
	v->a[572] = shift_repeat(431);
	v->a[573] = entry(2, false);
	v->a[574] = reduce(aux_sym_command_repeat2, 2, 0, 32);
	v->a[575] = shift_repeat(730);
	v->a[576] = entry(2, false);
	v->a[577] = reduce(aux_sym_command_repeat2, 2, 0, 32);
	v->a[578] = shift_repeat(1646);
	v->a[579] = entry(2, false);
	parse_actions_entries_29(v);
}

void	parse_actions_entries_29(t_parse_actions_entries_array *v)
{
	v->a[580] = reduce(aux_sym_command_repeat2, 2, 0, 32);
	v->a[581] = shift_repeat(1640);
	v->a[582] = entry(2, false);
	v->a[583] = reduce(aux_sym_command_repeat2, 2, 0, 32);
	v->a[584] = shift_repeat(1567);
	v->a[585] = entry(2, false);
	v->a[586] = reduce(aux_sym_command_repeat2, 2, 0, 32);
	v->a[587] = shift_repeat(47);
	v->a[588] = entry(2, false);
	v->a[589] = reduce(aux_sym_command_repeat2, 2, 0, 32);
	v->a[590] = shift_repeat(50);
	v->a[591] = entry(2, true);
	v->a[592] = reduce(aux_sym_command_repeat2, 2, 0, 32);
	v->a[593] = shift_repeat(636);
	v->a[594] = entry(2, false);
	v->a[595] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[596] = shift_repeat(435);
	v->a[597] = entry(2, false);
	v->a[598] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[599] = shift_repeat(727);
	parse_actions_entries_30(v);
}

/* EOF parse_actions_entries_5.c */
