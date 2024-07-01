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
	v->a[800] = entry(1, false);
	v->a[801] = reduce(sym_simple_expansion, 2, 0, 6);
	v->a[802] = entry(1, true);
	v->a[803] = reduce(sym_simple_expansion, 2, 0, 6);
	v->a[804] = entry(1, true);
	v->a[805] = reduce(sym__statements, 2, 0, 13);
	v->a[806] = entry(1, false);
	v->a[807] = shift(758);
	v->a[808] = entry(1, false);
	v->a[809] = shift(146);
	v->a[810] = entry(2, true);
	v->a[811] = reduce(aux_sym_command_repeat1, 1, 0, 0);
	v->a[812] = shift(1918);
	v->a[813] = entry(1, false);
	v->a[814] = reduce(sym_string, 3, 0, 23);
	v->a[815] = entry(1, true);
	v->a[816] = reduce(sym_string, 3, 0, 23);
	v->a[817] = entry(1, false);
	v->a[818] = reduce(sym_arithmetic_postfix_expression, 2, 0, 22);
	v->a[819] = entry(1, true);
	parse_actions_entries_41(v);
}

void	parse_actions_entries_41(t_parse_actions_entries_array *v)
{
	v->a[820] = reduce(sym_arithmetic_postfix_expression, 2, 0, 22);
	v->a[821] = entry(2, false);
	v->a[822] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[823] = shift_repeat(485);
	v->a[824] = entry(2, false);
	v->a[825] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[826] = shift_repeat(753);
	v->a[827] = entry(2, false);
	v->a[828] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[829] = shift_repeat(1635);
	v->a[830] = entry(2, false);
	v->a[831] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[832] = shift_repeat(1636);
	v->a[833] = entry(2, false);
	v->a[834] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[835] = shift_repeat(1530);
	v->a[836] = entry(2, false);
	v->a[837] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[838] = shift_repeat(79);
	v->a[839] = entry(2, false);
	parse_actions_entries_42(v);
}

void	parse_actions_entries_42(t_parse_actions_entries_array *v)
{
	v->a[840] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[841] = shift_repeat(80);
	v->a[842] = entry(1, false);
	v->a[843] = reduce(sym__statements, 2, 0, 13);
	v->a[844] = entry(1, false);
	v->a[845] = reduce(sym_string, 2, 0, 0);
	v->a[846] = entry(1, true);
	v->a[847] = reduce(sym_string, 2, 0, 0);
	v->a[848] = entry(2, false);
	v->a[849] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[850] = shift_repeat(521);
	v->a[851] = entry(2, false);
	v->a[852] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[853] = shift_repeat(770);
	v->a[854] = entry(2, false);
	v->a[855] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[856] = shift_repeat(1628);
	v->a[857] = entry(2, false);
	v->a[858] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[859] = shift_repeat(1657);
	parse_actions_entries_43(v);
}

void	parse_actions_entries_43(t_parse_actions_entries_array *v)
{
	v->a[860] = entry(2, false);
	v->a[861] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[862] = shift_repeat(1604);
	v->a[863] = entry(2, false);
	v->a[864] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[865] = shift_repeat(73);
	v->a[866] = entry(2, false);
	v->a[867] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[868] = shift_repeat(75);
	v->a[869] = entry(1, false);
	v->a[870] = shift(485);
	v->a[871] = entry(1, false);
	v->a[872] = shift(753);
	v->a[873] = entry(1, false);
	v->a[874] = shift(1635);
	v->a[875] = entry(1, false);
	v->a[876] = shift(1636);
	v->a[877] = entry(1, false);
	v->a[878] = shift(1530);
	v->a[879] = entry(1, false);
	parse_actions_entries_44(v);
}

void	parse_actions_entries_44(t_parse_actions_entries_array *v)
{
	v->a[880] = shift(79);
	v->a[881] = entry(1, false);
	v->a[882] = shift(80);
	v->a[883] = entry(1, false);
	v->a[884] = shift(883);
	v->a[885] = entry(1, false);
	v->a[886] = shift(879);
	v->a[887] = entry(1, true);
	v->a[888] = shift(879);
	v->a[889] = entry(1, false);
	v->a[890] = reduce(sym_arithmetic_ternary_expression, 5, 0, 57);
	v->a[891] = entry(1, true);
	v->a[892] = reduce(sym_arithmetic_ternary_expression, 5, 0, 57);
	v->a[893] = entry(1, false);
	v->a[894] = reduce(sym_expansion, 2, 0, 0);
	v->a[895] = entry(1, true);
	v->a[896] = reduce(sym_expansion, 2, 0, 0);
	v->a[897] = entry(1, false);
	v->a[898] = reduce(sym_arithmetic_literal, 1, 0, 0);
	v->a[899] = entry(1, true);
	parse_actions_entries_45(v);
}

/* EOF parse_actions_entries_8.c */
