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
	v->a[800] = shift_repeat(1904);
	v->a[801] = entry(2, false);
	v->a[802] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[803] = shift_repeat(1901);
	v->a[804] = entry(2, false);
	v->a[805] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[806] = shift_repeat(1790);
	v->a[807] = entry(2, false);
	v->a[808] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[809] = shift_repeat(88);
	v->a[810] = entry(2, false);
	v->a[811] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[812] = shift_repeat(91);
	v->a[813] = entry(1, true);
	v->a[814] = reduce(sym__statements, 1, 0, 3);
	v->a[815] = entry(1, false);
	v->a[816] = shift(937);
	v->a[817] = entry(1, false);
	v->a[818] = shift(938);
	v->a[819] = entry(1, true);
	parse_actions_entries_41(v);
}

void	parse_actions_entries_41(t_parse_actions_entries_array *v)
{
	v->a[820] = shift(938);
	v->a[821] = entry(2, false);
	v->a[822] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[823] = shift_repeat(520);
	v->a[824] = entry(2, false);
	v->a[825] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[826] = shift_repeat(811);
	v->a[827] = entry(2, false);
	v->a[828] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[829] = shift_repeat(1821);
	v->a[830] = entry(2, false);
	v->a[831] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[832] = shift_repeat(1822);
	v->a[833] = entry(2, false);
	v->a[834] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[835] = shift_repeat(1794);
	v->a[836] = entry(2, false);
	v->a[837] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[838] = shift_repeat(112);
	v->a[839] = entry(2, false);
	parse_actions_entries_42(v);
}

void	parse_actions_entries_42(t_parse_actions_entries_array *v)
{
	v->a[840] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[841] = shift_repeat(113);
	v->a[842] = entry(1, false);
	v->a[843] = shift(927);
	v->a[844] = entry(1, true);
	v->a[845] = shift(936);
	v->a[846] = entry(1, true);
	v->a[847] = shift(895);
	v->a[848] = entry(1, false);
	v->a[849] = reduce(sym_arithmetic_ternary_expression, 5, 0, 58);
	v->a[850] = entry(1, false);
	v->a[851] = shift(958);
	v->a[852] = entry(1, false);
	v->a[853] = shift(957);
	v->a[854] = entry(1, true);
	v->a[855] = reduce(sym_arithmetic_ternary_expression, 5, 0, 58);
	v->a[856] = entry(1, false);
	v->a[857] = shift(955);
	v->a[858] = entry(1, false);
	v->a[859] = shift(954);
	parse_actions_entries_43(v);
}

void	parse_actions_entries_43(t_parse_actions_entries_array *v)
{
	v->a[860] = entry(1, true);
	v->a[861] = shift(953);
	v->a[862] = entry(1, true);
	v->a[863] = shift(958);
	v->a[864] = entry(1, false);
	v->a[865] = shift(948);
	v->a[866] = entry(1, false);
	v->a[867] = shift(946);
	v->a[868] = entry(1, true);
	v->a[869] = shift(263);
	v->a[870] = entry(1, true);
	v->a[871] = shift_extra();
	v->a[872] = entry(1, false);
	v->a[873] = reduce(sym_arithmetic_binary_expression, 3, 0, 38);
	v->a[874] = entry(1, true);
	v->a[875] = reduce(sym_arithmetic_binary_expression, 3, 0, 38);
	v->a[876] = entry(1, false);
	v->a[877] = shift(960);
	v->a[878] = entry(1, false);
	v->a[879] = shift(971);
	parse_actions_entries_44(v);
}

void	parse_actions_entries_44(t_parse_actions_entries_array *v)
{
	v->a[880] = entry(1, true);
	v->a[881] = shift(971);
	v->a[882] = entry(1, false);
	v->a[883] = shift(1774);
	v->a[884] = entry(1, false);
	v->a[885] = shift(147);
	v->a[886] = entry(1, false);
	v->a[887] = shift(157);
	v->a[888] = entry(1, false);
	v->a[889] = shift(1578);
	v->a[890] = entry(1, false);
	v->a[891] = shift(818);
	v->a[892] = entry(1, false);
	v->a[893] = shift(2058);
	v->a[894] = entry(1, false);
	v->a[895] = shift(846);
	v->a[896] = entry(1, false);
	v->a[897] = shift(1811);
	v->a[898] = entry(1, false);
	v->a[899] = shift(1812);
	parse_actions_entries_45(v);
}

/* EOF parse_actions_entries_8.c */
