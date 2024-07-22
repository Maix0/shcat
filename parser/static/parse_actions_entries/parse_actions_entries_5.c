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
	v->a[500] = shift(228);
	v->a[501] = entry(1, true);
	v->a[502] = shift_extra();
	v->a[503] = entry(1, false);
	v->a[504] = reduce(sym_command, 2, 0, 12);
	v->a[505] = entry(1, true);
	v->a[506] = reduce(sym_command, 2, 0, 12);
	v->a[507] = entry(1, false);
	v->a[508] = shift(788);
	v->a[509] = entry(1, false);
	v->a[510] = shift(790);
	v->a[511] = entry(1, true);
	v->a[512] = shift(790);
	v->a[513] = entry(1, false);
	v->a[514] = reduce(sym_string, 4, 0, 40);
	v->a[515] = entry(1, true);
	v->a[516] = reduce(sym_string, 4, 0, 40);
	v->a[517] = entry(1, false);
	v->a[518] = reduce(sym_command, 3, 0, 34);
	v->a[519] = entry(1, true);
	parse_actions_entries_26(v);
}

void	parse_actions_entries_26(t_parse_actions_entries_array *v)
{
	v->a[520] = reduce(sym_command, 3, 0, 34);
	v->a[521] = entry(1, false);
	v->a[522] = reduce(sym_command_substitution, 3, 0, 20);
	v->a[523] = entry(1, true);
	v->a[524] = reduce(sym_command_substitution, 3, 0, 20);
	v->a[525] = entry(1, false);
	v->a[526] = reduce(sym_command_substitution, 3, 0, 30);
	v->a[527] = entry(1, true);
	v->a[528] = reduce(sym_command_substitution, 3, 0, 30);
	v->a[529] = entry(1, true);
	v->a[530] = reduce(sym_file_redirect, 2, 0, 5);
	v->a[531] = entry(1, false);
	v->a[532] = reduce(sym_file_redirect, 2, 0, 5);
	v->a[533] = entry(1, false);
	v->a[534] = reduce(sym_arithmetic_literal, 1, 0, 0);
	v->a[535] = entry(1, true);
	v->a[536] = reduce(sym_arithmetic_literal, 1, 0, 0);
	v->a[537] = entry(1, false);
	v->a[538] = reduce(sym_expansion, 3, 0, 29);
	v->a[539] = entry(1, true);
	parse_actions_entries_27(v);
}

void	parse_actions_entries_27(t_parse_actions_entries_array *v)
{
	v->a[540] = reduce(sym_expansion, 3, 0, 29);
	v->a[541] = entry(2, false);
	v->a[542] = reduce(aux_sym_command_repeat2, 2, 0, 32);
	v->a[543] = shift_repeat(401);
	v->a[544] = entry(1, false);
	v->a[545] = reduce(aux_sym_command_repeat2, 2, 0, 32);
	v->a[546] = entry(2, false);
	v->a[547] = reduce(aux_sym_command_repeat2, 2, 0, 32);
	v->a[548] = shift_repeat(712);
	v->a[549] = entry(2, false);
	v->a[550] = reduce(aux_sym_command_repeat2, 2, 0, 32);
	v->a[551] = shift_repeat(1686);
	v->a[552] = entry(2, false);
	v->a[553] = reduce(aux_sym_command_repeat2, 2, 0, 32);
	v->a[554] = shift_repeat(1604);
	v->a[555] = entry(2, false);
	v->a[556] = reduce(aux_sym_command_repeat2, 2, 0, 32);
	v->a[557] = shift_repeat(1617);
	v->a[558] = entry(2, false);
	v->a[559] = reduce(aux_sym_command_repeat2, 2, 0, 32);
	parse_actions_entries_28(v);
}

void	parse_actions_entries_28(t_parse_actions_entries_array *v)
{
	v->a[560] = shift_repeat(107);
	v->a[561] = entry(2, false);
	v->a[562] = reduce(aux_sym_command_repeat2, 2, 0, 32);
	v->a[563] = shift_repeat(104);
	v->a[564] = entry(1, true);
	v->a[565] = reduce(aux_sym_command_repeat2, 2, 0, 32);
	v->a[566] = entry(2, true);
	v->a[567] = reduce(aux_sym_command_repeat2, 2, 0, 32);
	v->a[568] = shift_repeat(741);
	v->a[569] = entry(1, false);
	v->a[570] = reduce(sym_string, 3, 0, 0);
	v->a[571] = entry(1, true);
	v->a[572] = reduce(sym_string, 3, 0, 0);
	v->a[573] = entry(2, false);
	v->a[574] = reduce(aux_sym_command_repeat2, 2, 0, 32);
	v->a[575] = shift_repeat(418);
	v->a[576] = entry(2, false);
	v->a[577] = reduce(aux_sym_command_repeat2, 2, 0, 32);
	v->a[578] = shift_repeat(764);
	v->a[579] = entry(2, false);
	parse_actions_entries_29(v);
}

void	parse_actions_entries_29(t_parse_actions_entries_array *v)
{
	v->a[580] = reduce(aux_sym_command_repeat2, 2, 0, 32);
	v->a[581] = shift_repeat(1705);
	v->a[582] = entry(2, false);
	v->a[583] = reduce(aux_sym_command_repeat2, 2, 0, 32);
	v->a[584] = shift_repeat(1622);
	v->a[585] = entry(2, false);
	v->a[586] = reduce(aux_sym_command_repeat2, 2, 0, 32);
	v->a[587] = shift_repeat(1607);
	v->a[588] = entry(2, false);
	v->a[589] = reduce(aux_sym_command_repeat2, 2, 0, 32);
	v->a[590] = shift_repeat(52);
	v->a[591] = entry(2, false);
	v->a[592] = reduce(aux_sym_command_repeat2, 2, 0, 32);
	v->a[593] = shift_repeat(45);
	v->a[594] = entry(2, true);
	v->a[595] = reduce(aux_sym_command_repeat2, 2, 0, 32);
	v->a[596] = shift_repeat(692);
	v->a[597] = entry(1, false);
	v->a[598] = reduce(sym_string, 3, 0, 23);
	v->a[599] = entry(1, true);
	parse_actions_entries_30(v);
}

/* EOF parse_actions_entries_5.c */
