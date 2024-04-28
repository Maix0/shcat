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
	v->a[800] = shift(1012);
	v->a[801] = entry(1, false);
	v->a[802] = shift(7482);
	v->a[803] = entry(1, false);
	v->a[804] = shift(626);
	v->a[805] = entry(1, false);
	v->a[806] = shift(592);
	v->a[807] = entry(1, false);
	v->a[808] = shift(761);
	v->a[809] = entry(1, true);
	v->a[810] = reduce(aux_sym__terminated_statement, 2, 0, 0);
	v->a[811] = entry(1, true);
	v->a[812] = shift(4858);
	v->a[813] = entry(1, true);
	v->a[814] = shift(4609);
	v->a[815] = entry(1, false);
	v->a[816] = shift(5547);
	v->a[817] = entry(1, false);
	v->a[818] = shift(5615);
	v->a[819] = entry(1, true);
	parse_actions_entries_41(v);
}

void	parse_actions_entries_41(t_parse_actions_entries_array *v)
{
	v->a[820] = shift(5613);
	v->a[821] = entry(1, true);
	v->a[822] = shift(5591);
	v->a[823] = entry(1, false);
	v->a[824] = shift(5676);
	v->a[825] = entry(1, false);
	v->a[826] = shift(5652);
	v->a[827] = entry(1, true);
	v->a[828] = shift(5016);
	v->a[829] = entry(1, true);
	v->a[830] = shift(4959);
	v->a[831] = entry(1, false);
	v->a[832] = shift(4844);
	v->a[833] = entry(1, false);
	v->a[834] = shift(4712);
	v->a[835] = entry(1, true);
	v->a[836] = shift(4785);
	v->a[837] = entry(1, true);
	v->a[838] = shift(4643);
	v->a[839] = entry(1, false);
	parse_actions_entries_42(v);
}

void	parse_actions_entries_42(t_parse_actions_entries_array *v)
{
	v->a[840] = shift(4976);
	v->a[841] = entry(1, false);
	v->a[842] = shift(5008);
	v->a[843] = entry(1, true);
	v->a[844] = shift(5074);
	v->a[845] = entry(1, true);
	v->a[846] = shift(5092);
	v->a[847] = entry(1, false);
	v->a[848] = shift(4953);
	v->a[849] = entry(1, false);
	v->a[850] = shift(4864);
	v->a[851] = entry(1, true);
	v->a[852] = shift(4982);
	v->a[853] = entry(1, true);
	v->a[854] = shift(5019);
	v->a[855] = entry(1, false);
	v->a[856] = shift(19);
	v->a[857] = entry(1, false);
	v->a[858] = shift(5042);
	v->a[859] = entry(1, false);
	parse_actions_entries_43(v);
}

void	parse_actions_entries_43(t_parse_actions_entries_array *v)
{
	v->a[860] = shift(5049);
	v->a[861] = entry(1, false);
	v->a[862] = shift(21);
	v->a[863] = entry(1, false);
	v->a[864] = shift(18);
	v->a[865] = entry(1, false);
	v->a[866] = shift(4875);
	v->a[867] = entry(1, false);
	v->a[868] = shift(4905);
	v->a[869] = entry(1, false);
	v->a[870] = shift(17);
	v->a[871] = entry(1, true);
	v->a[872] = shift(5010);
	v->a[873] = entry(1, false);
	v->a[874] = reduce(sym_else_clause, 1, 0, 0);
	v->a[875] = entry(1, false);
	v->a[876] = reduce(sym_else_clause, 2, 0, 0);
	v->a[877] = entry(1, false);
	v->a[878] = shift(48);
	v->a[879] = entry(1, false);
	parse_actions_entries_44(v);
}

void	parse_actions_entries_44(t_parse_actions_entries_array *v)
{
	v->a[880] = shift(4856);
	v->a[881] = entry(1, false);
	v->a[882] = shift(4615);
	v->a[883] = entry(1, true);
	v->a[884] = shift(4958);
	v->a[885] = entry(1, true);
	v->a[886] = shift(5621);
	v->a[887] = entry(1, true);
	v->a[888] = shift(5647);
	v->a[889] = entry(2, false);
	v->a[890] = reduce(aux_sym__statements_repeat1, 2, 0, 0);
	v->a[891] = shift_repeat(1080);
	v->a[892] = entry(2, false);
	v->a[893] = reduce(aux_sym__statements_repeat1, 2, 0, 0);
	v->a[894] = shift_repeat(6777);
	v->a[895] = entry(2, false);
	v->a[896] = reduce(aux_sym__statements_repeat1, 2, 0, 0);
	v->a[897] = shift_repeat(7604);
	v->a[898] = entry(2, true);
	v->a[899] = reduce(aux_sym__statements_repeat1, 2, 0, 0);
	parse_actions_entries_45(v);
}

/* EOF parse_actions_entries_8.c */
