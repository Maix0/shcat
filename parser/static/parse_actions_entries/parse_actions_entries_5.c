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
	v->a[500] = reduce(sym_command, 1, 0, 3);
	v->a[501] = entry(1, true);
	v->a[502] = reduce(aux_sym_command_repeat2, 2, 0, 29);
	v->a[503] = entry(2, false);
	v->a[504] = reduce(aux_sym_command_repeat2, 2, 0, 29);
	v->a[505] = shift_repeat(273);
	v->a[506] = entry(2, false);
	v->a[507] = reduce(aux_sym_command_repeat2, 2, 0, 29);
	v->a[508] = shift_repeat(610);
	v->a[509] = entry(2, false);
	v->a[510] = reduce(aux_sym_command_repeat2, 2, 0, 29);
	v->a[511] = shift_repeat(1275);
	v->a[512] = entry(2, false);
	v->a[513] = reduce(aux_sym_command_repeat2, 2, 0, 29);
	v->a[514] = shift_repeat(1168);
	v->a[515] = entry(2, false);
	v->a[516] = reduce(aux_sym_command_repeat2, 2, 0, 29);
	v->a[517] = shift_repeat(1167);
	v->a[518] = entry(2, false);
	v->a[519] = reduce(aux_sym_command_repeat2, 2, 0, 29);
	return (parse_actions_entries_26(v));
}

void	parse_actions_entries_26(t_parse_actions_entries_array *v)
{
	v->a[520] = shift_repeat(45);
	v->a[521] = entry(2, false);
	v->a[522] = reduce(aux_sym_command_repeat2, 2, 0, 29);
	v->a[523] = shift_repeat(46);
	v->a[524] = entry(2, true);
	v->a[525] = reduce(aux_sym_command_repeat2, 2, 0, 29);
	v->a[526] = shift_repeat(564);
	v->a[527] = entry(1, true);
	v->a[528] = reduce(sym_command, 2, 0, 14);
	v->a[529] = entry(2, false);
	v->a[530] = reduce(aux_sym_command_repeat2, 2, 0, 29);
	v->a[531] = shift_repeat(261);
	v->a[532] = entry(2, false);
	v->a[533] = reduce(aux_sym_command_repeat2, 2, 0, 29);
	v->a[534] = shift_repeat(637);
	v->a[535] = entry(2, false);
	v->a[536] = reduce(aux_sym_command_repeat2, 2, 0, 29);
	v->a[537] = shift_repeat(1199);
	v->a[538] = entry(2, false);
	v->a[539] = reduce(aux_sym_command_repeat2, 2, 0, 29);
	return (parse_actions_entries_27(v));
}

void	parse_actions_entries_27(t_parse_actions_entries_array *v)
{
	v->a[540] = shift_repeat(1133);
	v->a[541] = entry(2, false);
	v->a[542] = reduce(aux_sym_command_repeat2, 2, 0, 29);
	v->a[543] = shift_repeat(1129);
	v->a[544] = entry(2, false);
	v->a[545] = reduce(aux_sym_command_repeat2, 2, 0, 29);
	v->a[546] = shift_repeat(67);
	v->a[547] = entry(2, false);
	v->a[548] = reduce(aux_sym_command_repeat2, 2, 0, 29);
	v->a[549] = shift_repeat(68);
	v->a[550] = entry(2, true);
	v->a[551] = reduce(aux_sym_command_repeat2, 2, 0, 29);
	v->a[552] = shift_repeat(523);
	v->a[553] = entry(1, true);
	v->a[554] = reduce(sym_command, 3, 0, 31);
	v->a[555] = entry(2, false);
	v->a[556] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[557] = shift_repeat(292);
	v->a[558] = entry(2, false);
	v->a[559] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	return (parse_actions_entries_28(v));
}

void	parse_actions_entries_28(t_parse_actions_entries_array *v)
{
	v->a[560] = shift_repeat(658);
	v->a[561] = entry(2, false);
	v->a[562] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[563] = shift_repeat(1269);
	v->a[564] = entry(2, false);
	v->a[565] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[566] = shift_repeat(1093);
	v->a[567] = entry(2, false);
	v->a[568] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[569] = shift_repeat(1151);
	v->a[570] = entry(2, false);
	v->a[571] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[572] = shift_repeat(73);
	v->a[573] = entry(2, false);
	v->a[574] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[575] = shift_repeat(69);
	v->a[576] = entry(1, false);
	v->a[577] = reduce(aux_sym_command_repeat1, 1, 0, 0);
	v->a[578] = entry(1, false);
	v->a[579] = reduce(sym__statements, 1, 0, 2);
	return (parse_actions_entries_29(v));
}

void	parse_actions_entries_29(t_parse_actions_entries_array *v)
{
	v->a[580] = entry(1, false);
	v->a[581] = reduce(sym__statement_not_pipeline, 1, 0, 0);
	v->a[582] = entry(1, false);
	v->a[583] = shift(131);
	v->a[584] = entry(1, false);
	v->a[585] = shift(1710);
	v->a[586] = entry(1, false);
	v->a[587] = shift(310);
	v->a[588] = entry(2, true);
	v->a[589] = reduce(aux_sym_command_repeat1, 1, 0, 0);
	v->a[590] = shift(1630);
	v->a[591] = entry(1, false);
	v->a[592] = reduce(sym__statements, 2, 0, 12);
	v->a[593] = entry(1, false);
	v->a[594] = shift(250);
	v->a[595] = entry(1, false);
	v->a[596] = shift(123);
	v->a[597] = entry(1, false);
	v->a[598] = shift(1690);
	v->a[599] = entry(2, true);
	return (parse_actions_entries_30(v));
}

/* EOF parse_actions_entries_5.c */
