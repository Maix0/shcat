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
	v->a[800] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[801] = shift_repeat(486);
	v->a[802] = entry(1, true);
	v->a[803] = shift(781);
	v->a[804] = entry(1, true);
	v->a[805] = shift(819);
	v->a[806] = entry(1, true);
	v->a[807] = reduce(sym__statements, 1, 0, 2);
	v->a[808] = entry(1, false);
	v->a[809] = shift(689);
	v->a[810] = entry(1, false);
	v->a[811] = shift(134);
	v->a[812] = entry(2, true);
	v->a[813] = reduce(aux_sym_command_repeat1, 1, 0, 0);
	v->a[814] = shift(1946);
	v->a[815] = entry(1, false);
	v->a[816] = shift(682);
	v->a[817] = entry(1, false);
	v->a[818] = shift(533);
	v->a[819] = entry(1, false);
	parse_actions_entries_41(v);
}

void	parse_actions_entries_41(t_parse_actions_entries_array *v)
{
	v->a[820] = shift(761);
	v->a[821] = entry(1, false);
	v->a[822] = shift(1695);
	v->a[823] = entry(1, false);
	v->a[824] = shift(1625);
	v->a[825] = entry(1, false);
	v->a[826] = shift(1632);
	v->a[827] = entry(1, false);
	v->a[828] = shift(62);
	v->a[829] = entry(1, false);
	v->a[830] = shift(63);
	v->a[831] = entry(2, false);
	v->a[832] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[833] = shift_repeat(533);
	v->a[834] = entry(2, false);
	v->a[835] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[836] = shift_repeat(761);
	v->a[837] = entry(2, false);
	v->a[838] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[839] = shift_repeat(1695);
	parse_actions_entries_42(v);
}

void	parse_actions_entries_42(t_parse_actions_entries_array *v)
{
	v->a[840] = entry(2, false);
	v->a[841] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[842] = shift_repeat(1625);
	v->a[843] = entry(2, false);
	v->a[844] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[845] = shift_repeat(1632);
	v->a[846] = entry(2, false);
	v->a[847] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[848] = shift_repeat(62);
	v->a[849] = entry(2, false);
	v->a[850] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[851] = shift_repeat(63);
	v->a[852] = entry(1, false);
	v->a[853] = shift(874);
	v->a[854] = entry(1, false);
	v->a[855] = shift(876);
	v->a[856] = entry(1, true);
	v->a[857] = shift(876);
	v->a[858] = entry(2, false);
	v->a[859] = reduce(aux_sym_command_repeat2, 2, 0, 32);
	parse_actions_entries_43(v);
}

void	parse_actions_entries_43(t_parse_actions_entries_array *v)
{
	v->a[860] = shift_repeat(495);
	v->a[861] = entry(2, false);
	v->a[862] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[863] = shift_repeat(519);
	v->a[864] = entry(2, false);
	v->a[865] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[866] = shift_repeat(670);
	v->a[867] = entry(2, false);
	v->a[868] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[869] = shift_repeat(1689);
	v->a[870] = entry(2, false);
	v->a[871] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[872] = shift_repeat(1637);
	v->a[873] = entry(2, false);
	v->a[874] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[875] = shift_repeat(1644);
	v->a[876] = entry(2, false);
	v->a[877] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[878] = shift_repeat(77);
	v->a[879] = entry(2, false);
	parse_actions_entries_44(v);
}

void	parse_actions_entries_44(t_parse_actions_entries_array *v)
{
	v->a[880] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[881] = shift_repeat(110);
	v->a[882] = entry(1, false);
	v->a[883] = shift(142);
	v->a[884] = entry(1, false);
	v->a[885] = shift(2079);
	v->a[886] = entry(1, false);
	v->a[887] = shift(618);
	v->a[888] = entry(2, true);
	v->a[889] = reduce(aux_sym_command_repeat1, 1, 0, 0);
	v->a[890] = shift(1986);
	v->a[891] = entry(1, true);
	v->a[892] = shift(423);
	v->a[893] = entry(1, true);
	v->a[894] = shift(216);
	v->a[895] = entry(1, false);
	v->a[896] = shift(847);
	v->a[897] = entry(1, true);
	v->a[898] = shift(843);
	v->a[899] = entry(1, true);
	parse_actions_entries_45(v);
}

/* EOF parse_actions_entries_8.c */
