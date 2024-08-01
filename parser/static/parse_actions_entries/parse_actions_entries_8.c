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
	v->a[800] = entry(1, true);
	v->a[801] = shift(640);
	v->a[802] = entry(1, false);
	v->a[803] = shift(1398);
	v->a[804] = entry(1, false);
	v->a[805] = shift(1439);
	v->a[806] = entry(1, false);
	v->a[807] = shift(695);
	v->a[808] = entry(1, false);
	v->a[809] = shift(693);
	v->a[810] = entry(1, true);
	v->a[811] = shift(693);
	v->a[812] = entry(1, false);
	v->a[813] = shift(459);
	v->a[814] = entry(1, false);
	v->a[815] = shift(1246);
	v->a[816] = entry(1, false);
	v->a[817] = reduce(sym_list, 3, 0, 28);
	v->a[818] = entry(2, false);
	v->a[819] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	parse_actions_entries_41(v);
}

void	parse_actions_entries_41(t_parse_actions_entries_array *v)
{
	v->a[820] = shift_repeat(493);
	v->a[821] = entry(1, false);
	v->a[822] = shift(1029);
	v->a[823] = entry(1, false);
	v->a[824] = shift(264);
	v->a[825] = entry(1, false);
	v->a[826] = shift(986);
	v->a[827] = entry(1, true);
	v->a[828] = reduce(sym_list, 3, 0, 28);
	v->a[829] = entry(1, true);
	v->a[830] = reduce(sym__statement_not_pipeline, 1, 0, 0);
	v->a[831] = entry(1, false);
	v->a[832] = shift(454);
	v->a[833] = entry(1, false);
	v->a[834] = reduce(sym_command_name, 1, 0, 0);
	v->a[835] = entry(1, false);
	v->a[836] = shift(1747);
	v->a[837] = entry(1, false);
	v->a[838] = shift(735);
	v->a[839] = entry(1, true);
	parse_actions_entries_42(v);
}

void	parse_actions_entries_42(t_parse_actions_entries_array *v)
{
	v->a[840] = shift(735);
	v->a[841] = entry(1, true);
	v->a[842] = reduce(sym_command_name, 1, 0, 0);
	v->a[843] = entry(2, false);
	v->a[844] = reduce(aux_sym_command_repeat2, 2, 0, 29);
	v->a[845] = shift_repeat(574);
	v->a[846] = entry(2, false);
	v->a[847] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[848] = shift_repeat(530);
	v->a[849] = entry(1, false);
	v->a[850] = shift(1694);
	v->a[851] = entry(1, false);
	v->a[852] = shift(751);
	v->a[853] = entry(1, true);
	v->a[854] = shift(751);
	v->a[855] = entry(1, false);
	v->a[856] = shift(1703);
	v->a[857] = entry(1, false);
	v->a[858] = shift(743);
	v->a[859] = entry(1, true);
	parse_actions_entries_43(v);
}

void	parse_actions_entries_43(t_parse_actions_entries_array *v)
{
	v->a[860] = shift(743);
	v->a[861] = entry(1, false);
	v->a[862] = shift(656);
	v->a[863] = entry(1, false);
	v->a[864] = shift(657);
	v->a[865] = entry(1, true);
	v->a[866] = shift(657);
	v->a[867] = entry(1, false);
	v->a[868] = reduce(sym_terminator, 1, 0, 0);
	v->a[869] = entry(1, true);
	v->a[870] = reduce(sym_terminator, 1, 0, 0);
	v->a[871] = entry(1, false);
	v->a[872] = shift(574);
	v->a[873] = entry(2, false);
	v->a[874] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[875] = shift_repeat(593);
	v->a[876] = entry(1, false);
	v->a[877] = shift(1583);
	v->a[878] = entry(1, true);
	v->a[879] = reduce(aux_sym_for_statement_repeat1, 1, 0, 0);
	parse_actions_entries_44(v);
}

void	parse_actions_entries_44(t_parse_actions_entries_array *v)
{
	v->a[880] = entry(1, false);
	v->a[881] = reduce(aux_sym_for_statement_repeat1, 1, 0, 0);
	v->a[882] = entry(1, false);
	v->a[883] = shift(710);
	v->a[884] = entry(1, true);
	v->a[885] = shift(710);
	v->a[886] = entry(1, false);
	v->a[887] = shift(593);
	v->a[888] = entry(2, false);
	v->a[889] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[890] = shift_repeat(589);
	v->a[891] = entry(2, false);
	v->a[892] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[893] = shift_repeat(633);
	v->a[894] = entry(2, false);
	v->a[895] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[896] = shift_repeat(1200);
	v->a[897] = entry(2, false);
	v->a[898] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[899] = shift_repeat(1121);
	parse_actions_entries_45(v);
}

/* EOF parse_actions_entries_8.c */
