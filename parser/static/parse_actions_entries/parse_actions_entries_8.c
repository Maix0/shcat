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
	v->a[800] = entry(2, false);
	v->a[801] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[802] = shift_repeat(120);
	v->a[803] = entry(1, true);
	v->a[804] = reduce(sym_list, 3, 0, 30);
	v->a[805] = entry(1, false);
	v->a[806] = reduce(aux_sym_command_repeat1, 1, 0, 0);
	v->a[807] = entry(1, false);
	v->a[808] = reduce(sym__statement_not_pipeline, 1, 0, 0);
	v->a[809] = entry(1, false);
	v->a[810] = reduce(sym_list, 3, 0, 30);
	v->a[811] = entry(1, true);
	v->a[812] = reduce(aux_sym_command_repeat1, 1, 0, 0);
	v->a[813] = entry(2, true);
	v->a[814] = reduce(aux_sym_command_repeat1, 1, 0, 0);
	v->a[815] = shift(2286);
	v->a[816] = entry(1, false);
	v->a[817] = shift(1057);
	v->a[818] = entry(1, false);
	v->a[819] = shift(1056);
	parse_actions_entries_41(v);
}

void	parse_actions_entries_41(t_parse_actions_entries_array *v)
{
	v->a[820] = entry(1, true);
	v->a[821] = shift(1056);
	v->a[822] = entry(1, false);
	v->a[823] = shift(1228);
	v->a[824] = entry(1, false);
	v->a[825] = shift(1059);
	v->a[826] = entry(1, false);
	v->a[827] = shift(2032);
	v->a[828] = entry(1, false);
	v->a[829] = shift(2026);
	v->a[830] = entry(1, false);
	v->a[831] = shift(1948);
	v->a[832] = entry(1, false);
	v->a[833] = shift(72);
	v->a[834] = entry(1, false);
	v->a[835] = shift(73);
	v->a[836] = entry(1, false);
	v->a[837] = shift(1270);
	v->a[838] = entry(1, false);
	v->a[839] = shift(910);
	parse_actions_entries_42(v);
}

void	parse_actions_entries_42(t_parse_actions_entries_array *v)
{
	v->a[840] = entry(1, false);
	v->a[841] = reduce(sym__statements, 2, 0, 15);
	v->a[842] = entry(1, false);
	v->a[843] = shift(149);
	v->a[844] = entry(1, false);
	v->a[845] = shift(2400);
	v->a[846] = entry(1, false);
	v->a[847] = shift(726);
	v->a[848] = entry(1, false);
	v->a[849] = shift(727);
	v->a[850] = entry(1, false);
	v->a[851] = shift(737);
	v->a[852] = entry(2, true);
	v->a[853] = reduce(aux_sym_command_repeat1, 1, 0, 0);
	v->a[854] = shift(2294);
	v->a[855] = entry(1, false);
	v->a[856] = shift(1276);
	v->a[857] = entry(1, false);
	v->a[858] = shift(774);
	v->a[859] = entry(1, false);
	parse_actions_entries_43(v);
}

void	parse_actions_entries_43(t_parse_actions_entries_array *v)
{
	v->a[860] = shift(143);
	v->a[861] = entry(1, false);
	v->a[862] = shift(2379);
	v->a[863] = entry(1, false);
	v->a[864] = shift(764);
	v->a[865] = entry(1, false);
	v->a[866] = shift(762);
	v->a[867] = entry(1, false);
	v->a[868] = shift(755);
	v->a[869] = entry(2, true);
	v->a[870] = reduce(aux_sym_command_repeat1, 1, 0, 0);
	v->a[871] = shift(2446);
	v->a[872] = entry(1, false);
	v->a[873] = shift(1944);
	v->a[874] = entry(1, false);
	v->a[875] = shift(155);
	v->a[876] = entry(1, false);
	v->a[877] = shift(152);
	v->a[878] = entry(1, false);
	v->a[879] = shift(1758);
	parse_actions_entries_44(v);
}

void	parse_actions_entries_44(t_parse_actions_entries_array *v)
{
	v->a[880] = entry(1, false);
	v->a[881] = shift(970);
	v->a[882] = entry(1, false);
	v->a[883] = shift(2176);
	v->a[884] = entry(1, false);
	v->a[885] = shift(1037);
	v->a[886] = entry(1, false);
	v->a[887] = shift(1957);
	v->a[888] = entry(1, false);
	v->a[889] = shift(1958);
	v->a[890] = entry(1, false);
	v->a[891] = shift(1952);
	v->a[892] = entry(1, false);
	v->a[893] = shift(74);
	v->a[894] = entry(1, false);
	v->a[895] = shift(75);
	v->a[896] = entry(1, true);
	v->a[897] = shift(2082);
	v->a[898] = entry(1, false);
	v->a[899] = shift(2185);
	parse_actions_entries_45(v);
}

/* EOF parse_actions_entries_8.c */
