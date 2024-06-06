/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_actions_entries_8.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_actions_entries.h"

void	parse_actions_entries_40(t_parse_actions_entries_array *v)
{
	v->a[800] = shift_repeat(260);
	v->a[801] = entry(2, true);
	v->a[802] = reduce(aux_sym_declaration_command_repeat1, 2, 0, 0);
	v->a[803] = shift_repeat(3653);
	v->a[804] = entry(2, true);
	v->a[805] = reduce(aux_sym_declaration_command_repeat1, 2, 0, 0);
	v->a[806] = shift_repeat(503);
	v->a[807] = entry(2, true);
	v->a[808] = reduce(aux_sym_declaration_command_repeat1, 2, 0, 0);
	v->a[809] = shift_repeat(4069);
	v->a[810] = entry(1, false);
	v->a[811] = reduce(sym_concatenation, 4, 0, 0);
	v->a[812] = entry(1, false);
	v->a[813] = shift(592);
	v->a[814] = entry(1, false);
	v->a[815] = shift(588);
	v->a[816] = entry(1, true);
	v->a[817] = reduce(sym_concatenation, 4, 0, 0);
	v->a[818] = entry(1, true);
	v->a[819] = shift(588);
	parse_actions_entries_41(v);
}

void	parse_actions_entries_41(t_parse_actions_entries_array *v)
{
	v->a[820] = entry(1, false);
	v->a[821] = reduce(sym_declaration_command, 1, 0, 0);
	v->a[822] = entry(1, true);
	v->a[823] = reduce(sym_declaration_command, 1, 0, 0);
	v->a[824] = entry(1, false);
	v->a[825] = shift(258);
	v->a[826] = entry(1, false);
	v->a[827] = reduce(sym_concatenation, 4, 0, 3);
	v->a[828] = entry(1, true);
	v->a[829] = reduce(sym_concatenation, 4, 0, 3);
	v->a[830] = entry(1, false);
	v->a[831] = shift(647);
	v->a[832] = entry(1, false);
	v->a[833] = shift(649);
	v->a[834] = entry(1, true);
	v->a[835] = shift(649);
	v->a[836] = entry(1, false);
	v->a[837] = shift(689);
	v->a[838] = entry(1, false);
	v->a[839] = shift(685);
	parse_actions_entries_42(v);
}

void	parse_actions_entries_42(t_parse_actions_entries_array *v)
{
	v->a[840] = entry(1, true);
	v->a[841] = shift(685);
	v->a[842] = entry(2, false);
	v->a[843] = reduce(aux_sym_declaration_command_repeat1, 2, 0, 0);
	v->a[844] = shift_repeat(605);
	v->a[845] = entry(2, false);
	v->a[846] = reduce(aux_sym_declaration_command_repeat1, 2, 0, 0);
	v->a[847] = shift_repeat(1774);
	v->a[848] = entry(2, false);
	v->a[849] = reduce(aux_sym_declaration_command_repeat1, 2, 0, 0);
	v->a[850] = shift_repeat(3170);
	v->a[851] = entry(2, false);
	v->a[852] = reduce(aux_sym_declaration_command_repeat1, 2, 0, 0);
	v->a[853] = shift_repeat(542);
	v->a[854] = entry(2, false);
	v->a[855] = reduce(aux_sym_declaration_command_repeat1, 2, 0, 0);
	v->a[856] = shift_repeat(3050);
	v->a[857] = entry(2, false);
	v->a[858] = reduce(aux_sym_declaration_command_repeat1, 2, 0, 0);
	v->a[859] = shift_repeat(651);
	parse_actions_entries_43(v);
}

void	parse_actions_entries_43(t_parse_actions_entries_array *v)
{
	v->a[860] = entry(2, false);
	v->a[861] = reduce(aux_sym_declaration_command_repeat1, 2, 0, 0);
	v->a[862] = shift_repeat(3293);
	v->a[863] = entry(2, false);
	v->a[864] = reduce(aux_sym_declaration_command_repeat1, 2, 0, 0);
	v->a[865] = shift_repeat(3041);
	v->a[866] = entry(2, false);
	v->a[867] = reduce(aux_sym_declaration_command_repeat1, 2, 0, 0);
	v->a[868] = shift_repeat(112);
	v->a[869] = entry(2, false);
	v->a[870] = reduce(aux_sym_declaration_command_repeat1, 2, 0, 0);
	v->a[871] = shift_repeat(113);
	v->a[872] = entry(2, false);
	v->a[873] = reduce(aux_sym_declaration_command_repeat1, 2, 0, 0);
	v->a[874] = shift_repeat(114);
	v->a[875] = entry(2, false);
	v->a[876] = reduce(aux_sym_declaration_command_repeat1, 2, 0, 0);
	v->a[877] = shift_repeat(266);
	v->a[878] = entry(2, true);
	v->a[879] = reduce(aux_sym_declaration_command_repeat1, 2, 0, 0);
	parse_actions_entries_44(v);
}

void	parse_actions_entries_44(t_parse_actions_entries_array *v)
{
	v->a[880] = shift_repeat(3671);
	v->a[881] = entry(2, true);
	v->a[882] = reduce(aux_sym_declaration_command_repeat1, 2, 0, 0);
	v->a[883] = shift_repeat(605);
	v->a[884] = entry(2, true);
	v->a[885] = reduce(aux_sym_declaration_command_repeat1, 2, 0, 0);
	v->a[886] = shift_repeat(4080);
	v->a[887] = entry(1, false);
	v->a[888] = shift(605);
	v->a[889] = entry(1, false);
	v->a[890] = shift(1774);
	v->a[891] = entry(1, false);
	v->a[892] = shift(3170);
	v->a[893] = entry(1, false);
	v->a[894] = shift(542);
	v->a[895] = entry(1, false);
	v->a[896] = shift(3050);
	v->a[897] = entry(1, false);
	v->a[898] = shift(651);
	v->a[899] = entry(1, false);
	parse_actions_entries_45(v);
}

/* EOF parse_actions_entries_8.c */
