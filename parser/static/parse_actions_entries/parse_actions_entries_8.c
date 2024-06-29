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
	v->a[801] = shift(437);
	v->a[802] = entry(1, false);
	v->a[803] = shift(142);
	v->a[804] = entry(1, false);
	v->a[805] = shift(2312);
	v->a[806] = entry(2, true);
	v->a[807] = reduce(aux_sym_command_repeat1, 1, 0, 0);
	v->a[808] = shift(2301);
	v->a[809] = entry(1, false);
	v->a[810] = reduce(sym__statements, 1, 0, 3);
	v->a[811] = entry(1, false);
	v->a[812] = shift(506);
	v->a[813] = entry(1, false);
	v->a[814] = shift(932);
	v->a[815] = entry(1, false);
	v->a[816] = shift(1837);
	v->a[817] = entry(1, false);
	v->a[818] = shift(1827);
	v->a[819] = entry(1, false);
	parse_actions_entries_41(v);
}

void	parse_actions_entries_41(t_parse_actions_entries_array *v)
{
	v->a[820] = shift(1782);
	v->a[821] = entry(1, false);
	v->a[822] = shift(78);
	v->a[823] = entry(1, false);
	v->a[824] = shift(77);
	v->a[825] = entry(1, false);
	v->a[826] = shift(879);
	v->a[827] = entry(1, false);
	v->a[828] = shift(873);
	v->a[829] = entry(1, true);
	v->a[830] = shift(873);
	v->a[831] = entry(1, true);
	v->a[832] = reduce(sym__statements, 1, 0, 3);
	v->a[833] = entry(1, false);
	v->a[834] = shift(782);
	v->a[835] = entry(1, false);
	v->a[836] = shift(153);
	v->a[837] = entry(2, true);
	v->a[838] = reduce(aux_sym_command_repeat1, 1, 0, 0);
	v->a[839] = shift(2148);
	parse_actions_entries_42(v);
}

void	parse_actions_entries_42(t_parse_actions_entries_array *v)
{
	v->a[840] = entry(1, true);
	v->a[841] = reduce(sym__statements, 2, 0, 15);
	v->a[842] = entry(1, false);
	v->a[843] = shift(144);
	v->a[844] = entry(2, true);
	v->a[845] = reduce(aux_sym_command_repeat1, 1, 0, 0);
	v->a[846] = shift(2306);
	v->a[847] = entry(1, false);
	v->a[848] = shift(1788);
	v->a[849] = entry(1, false);
	v->a[850] = shift(145);
	v->a[851] = entry(1, false);
	v->a[852] = shift(146);
	v->a[853] = entry(1, false);
	v->a[854] = shift(1600);
	v->a[855] = entry(1, false);
	v->a[856] = shift(846);
	v->a[857] = entry(1, false);
	v->a[858] = shift(2055);
	v->a[859] = entry(1, false);
	parse_actions_entries_43(v);
}

void	parse_actions_entries_43(t_parse_actions_entries_array *v)
{
	v->a[860] = shift(910);
	v->a[861] = entry(1, false);
	v->a[862] = shift(1810);
	v->a[863] = entry(1, false);
	v->a[864] = shift(1811);
	v->a[865] = entry(1, false);
	v->a[866] = shift(1798);
	v->a[867] = entry(1, false);
	v->a[868] = shift(74);
	v->a[869] = entry(1, false);
	v->a[870] = shift(51);
	v->a[871] = entry(1, true);
	v->a[872] = shift(1936);
	v->a[873] = entry(1, false);
	v->a[874] = shift(647);
	v->a[875] = entry(1, true);
	v->a[876] = reduce(sym__statement_not_pipeline, 1, 0, 0);
	v->a[877] = entry(1, false);
	v->a[878] = shift(1173);
	v->a[879] = entry(1, false);
	parse_actions_entries_44(v);
}

void	parse_actions_entries_44(t_parse_actions_entries_array *v)
{
	v->a[880] = shift(922);
	v->a[881] = entry(1, false);
	v->a[882] = shift(1828);
	v->a[883] = entry(1, false);
	v->a[884] = shift(1822);
	v->a[885] = entry(1, false);
	v->a[886] = shift(1779);
	v->a[887] = entry(1, false);
	v->a[888] = shift(75);
	v->a[889] = entry(1, false);
	v->a[890] = shift(71);
	v->a[891] = entry(1, false);
	v->a[892] = shift(796);
	v->a[893] = entry(1, false);
	v->a[894] = shift(155);
	v->a[895] = entry(2, true);
	v->a[896] = reduce(aux_sym_command_repeat1, 1, 0, 0);
	v->a[897] = shift(2251);
	v->a[898] = entry(1, false);
	v->a[899] = shift(781);
	parse_actions_entries_45(v);
}

/* EOF parse_actions_entries_8.c */
