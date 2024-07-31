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
	v->a[800] = shift_repeat(86);
	v->a[801] = entry(1, false);
	v->a[802] = shift(418);
	v->a[803] = entry(1, false);
	v->a[804] = shift(780);
	v->a[805] = entry(1, false);
	v->a[806] = shift(1454);
	v->a[807] = entry(1, false);
	v->a[808] = shift(1387);
	v->a[809] = entry(1, false);
	v->a[810] = shift(1401);
	v->a[811] = entry(1, false);
	v->a[812] = shift(90);
	v->a[813] = entry(1, false);
	v->a[814] = shift(86);
	v->a[815] = entry(1, false);
	v->a[816] = shift(672);
	v->a[817] = entry(1, false);
	v->a[818] = shift(673);
	v->a[819] = entry(1, true);
	parse_actions_entries_41(v);
}

void	parse_actions_entries_41(t_parse_actions_entries_array *v)
{
	v->a[820] = shift(673);
	v->a[821] = entry(2, false);
	v->a[822] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[823] = shift_repeat(405);
	v->a[824] = entry(2, false);
	v->a[825] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[826] = shift_repeat(777);
	v->a[827] = entry(2, false);
	v->a[828] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[829] = shift_repeat(1445);
	v->a[830] = entry(2, false);
	v->a[831] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[832] = shift_repeat(1413);
	v->a[833] = entry(2, false);
	v->a[834] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[835] = shift_repeat(1426);
	v->a[836] = entry(2, false);
	v->a[837] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[838] = shift_repeat(83);
	v->a[839] = entry(2, false);
	parse_actions_entries_42(v);
}

void	parse_actions_entries_42(t_parse_actions_entries_array *v)
{
	v->a[840] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[841] = shift_repeat(68);
	v->a[842] = entry(1, false);
	v->a[843] = reduce(sym__statements, 2, 0, 12);
	v->a[844] = entry(1, true);
	v->a[845] = reduce(sym__statements, 2, 0, 12);
	v->a[846] = entry(1, false);
	v->a[847] = shift(624);
	v->a[848] = entry(1, false);
	v->a[849] = shift(126);
	v->a[850] = entry(1, false);
	v->a[851] = shift(1771);
	v->a[852] = entry(2, true);
	v->a[853] = reduce(aux_sym_command_repeat1, 1, 0, 0);
	v->a[854] = shift(1780);
	v->a[855] = entry(2, false);
	v->a[856] = reduce(aux_sym_command_repeat2, 2, 0, 30);
	v->a[857] = shift_repeat(449);
	v->a[858] = entry(1, false);
	v->a[859] = shift(353);
	parse_actions_entries_43(v);
}

void	parse_actions_entries_43(t_parse_actions_entries_array *v)
{
	v->a[860] = entry(1, false);
	v->a[861] = shift(132);
	v->a[862] = entry(2, true);
	v->a[863] = reduce(aux_sym_command_repeat1, 1, 0, 0);
	v->a[864] = shift(1785);
	v->a[865] = entry(1, true);
	v->a[866] = reduce(sym__statements, 1, 0, 2);
	v->a[867] = entry(2, false);
	v->a[868] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[869] = shift_repeat(439);
	v->a[870] = entry(1, false);
	v->a[871] = shift(412);
	v->a[872] = entry(1, false);
	v->a[873] = shift(758);
	v->a[874] = entry(1, false);
	v->a[875] = shift(1437);
	v->a[876] = entry(1, false);
	v->a[877] = shift(1339);
	v->a[878] = entry(1, false);
	v->a[879] = shift(1331);
	parse_actions_entries_44(v);
}

void	parse_actions_entries_44(t_parse_actions_entries_array *v)
{
	v->a[880] = entry(1, false);
	v->a[881] = shift(70);
	v->a[882] = entry(1, false);
	v->a[883] = shift(71);
	v->a[884] = entry(1, false);
	v->a[885] = shift(405);
	v->a[886] = entry(1, false);
	v->a[887] = shift(777);
	v->a[888] = entry(1, false);
	v->a[889] = shift(1445);
	v->a[890] = entry(1, false);
	v->a[891] = shift(1413);
	v->a[892] = entry(1, false);
	v->a[893] = shift(1426);
	v->a[894] = entry(1, false);
	v->a[895] = shift(83);
	v->a[896] = entry(1, false);
	v->a[897] = shift(68);
	v->a[898] = entry(1, false);
	v->a[899] = shift(129);
	parse_actions_entries_45(v);
}

/* EOF parse_actions_entries_8.c */
