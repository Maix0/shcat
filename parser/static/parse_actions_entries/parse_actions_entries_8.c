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
	v->a[800] = shift_repeat(476);
	v->a[801] = entry(2, false);
	v->a[802] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[803] = shift_repeat(745);
	v->a[804] = entry(2, false);
	v->a[805] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[806] = shift_repeat(1655);
	v->a[807] = entry(2, false);
	v->a[808] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[809] = shift_repeat(1656);
	v->a[810] = entry(2, false);
	v->a[811] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[812] = shift_repeat(1608);
	v->a[813] = entry(2, false);
	v->a[814] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[815] = shift_repeat(91);
	v->a[816] = entry(2, false);
	v->a[817] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[818] = shift_repeat(114);
	v->a[819] = entry(1, false);
	parse_actions_entries_41(v);
}

void	parse_actions_entries_41(t_parse_actions_entries_array *v)
{
	v->a[820] = shift(476);
	v->a[821] = entry(1, false);
	v->a[822] = shift(745);
	v->a[823] = entry(1, false);
	v->a[824] = shift(1655);
	v->a[825] = entry(1, false);
	v->a[826] = shift(1656);
	v->a[827] = entry(1, false);
	v->a[828] = shift(1608);
	v->a[829] = entry(1, false);
	v->a[830] = shift(91);
	v->a[831] = entry(1, false);
	v->a[832] = shift(114);
	v->a[833] = entry(1, false);
	v->a[834] = reduce(sym_simple_expansion, 2, 0, 6);
	v->a[835] = entry(1, true);
	v->a[836] = reduce(sym_simple_expansion, 2, 0, 6);
	v->a[837] = entry(1, false);
	v->a[838] = reduce(sym_simple_expansion, 2, 0, 0);
	v->a[839] = entry(1, true);
	parse_actions_entries_42(v);
}

void	parse_actions_entries_42(t_parse_actions_entries_array *v)
{
	v->a[840] = reduce(sym_simple_expansion, 2, 0, 0);
	v->a[841] = entry(2, false);
	v->a[842] = reduce(aux_sym_command_repeat2, 2, 0, 32);
	v->a[843] = shift_repeat(490);
	v->a[844] = entry(1, false);
	v->a[845] = reduce(sym_arithmetic_ternary_expression, 5, 0, 63);
	v->a[846] = entry(1, true);
	v->a[847] = reduce(sym_arithmetic_ternary_expression, 5, 0, 63);
	v->a[848] = entry(1, false);
	v->a[849] = shift(475);
	v->a[850] = entry(1, false);
	v->a[851] = shift(754);
	v->a[852] = entry(1, false);
	v->a[853] = shift(1663);
	v->a[854] = entry(1, false);
	v->a[855] = shift(1650);
	v->a[856] = entry(1, false);
	v->a[857] = shift(1592);
	v->a[858] = entry(1, false);
	v->a[859] = shift(100);
	parse_actions_entries_43(v);
}

void	parse_actions_entries_43(t_parse_actions_entries_array *v)
{
	v->a[860] = entry(1, false);
	v->a[861] = shift(99);
	v->a[862] = entry(1, true);
	v->a[863] = reduce(sym__statements, 2, 0, 13);
	v->a[864] = entry(2, false);
	v->a[865] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[866] = shift_repeat(475);
	v->a[867] = entry(2, false);
	v->a[868] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[869] = shift_repeat(754);
	v->a[870] = entry(2, false);
	v->a[871] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[872] = shift_repeat(1663);
	v->a[873] = entry(2, false);
	v->a[874] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[875] = shift_repeat(1650);
	v->a[876] = entry(2, false);
	v->a[877] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[878] = shift_repeat(1592);
	v->a[879] = entry(2, false);
	parse_actions_entries_44(v);
}

void	parse_actions_entries_44(t_parse_actions_entries_array *v)
{
	v->a[880] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[881] = shift_repeat(100);
	v->a[882] = entry(2, false);
	v->a[883] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[884] = shift_repeat(99);
	v->a[885] = entry(1, false);
	v->a[886] = reduce(sym_arithmetic_postfix_expression, 2, 0, 22);
	v->a[887] = entry(1, true);
	v->a[888] = reduce(sym_arithmetic_postfix_expression, 2, 0, 22);
	v->a[889] = entry(2, false);
	v->a[890] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[891] = shift_repeat(525);
	v->a[892] = entry(2, false);
	v->a[893] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[894] = shift_repeat(729);
	v->a[895] = entry(2, false);
	v->a[896] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[897] = shift_repeat(1630);
	v->a[898] = entry(2, false);
	v->a[899] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	parse_actions_entries_45(v);
}

/* EOF parse_actions_entries_8.c */
