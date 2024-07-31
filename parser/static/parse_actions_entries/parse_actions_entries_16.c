/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_actions_entries_16.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_actions_entries.h"

void	parse_actions_entries_80(t_parse_actions_entries_array *v)
{
	v->a[1600] = shift(1088);
	v->a[1601] = entry(1, true);
	v->a[1602] = shift(1119);
	v->a[1603] = entry(1, false);
	v->a[1604] = shift(1133);
	v->a[1605] = entry(1, true);
	v->a[1606] = shift(624);
	v->a[1607] = entry(1, false);
	v->a[1608] = shift(1227);
	v->a[1609] = entry(1, false);
	v->a[1610] = shift(1614);
	v->a[1611] = entry(1, true);
	v->a[1612] = shift(1088);
	v->a[1613] = entry(1, false);
	v->a[1614] = reduce(aux_sym_command_repeat1, 2, 0, 15);
	v->a[1615] = entry(2, false);
	v->a[1616] = reduce(aux_sym_command_repeat1, 2, 0, 15);
	v->a[1617] = shift_repeat(1146);
	v->a[1618] = entry(2, true);
	v->a[1619] = reduce(aux_sym_command_repeat1, 2, 0, 15);
	parse_actions_entries_81(v);
}

void	parse_actions_entries_81(t_parse_actions_entries_array *v)
{
	v->a[1620] = shift_repeat(1651);
	v->a[1621] = entry(1, false);
	v->a[1622] = shift(1069);
	v->a[1623] = entry(1, true);
	v->a[1624] = shift(1069);
	v->a[1625] = entry(2, false);
	v->a[1626] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1627] = shift_repeat(1062);
	v->a[1628] = entry(2, true);
	v->a[1629] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1630] = shift_repeat(1062);
	v->a[1631] = entry(1, true);
	v->a[1632] = shift(1043);
	v->a[1633] = entry(1, false);
	v->a[1634] = shift(1062);
	v->a[1635] = entry(1, true);
	v->a[1636] = shift(1089);
	v->a[1637] = entry(1, true);
	v->a[1638] = shift(1058);
	v->a[1639] = entry(2, false);
	parse_actions_entries_82(v);
}

void	parse_actions_entries_82(t_parse_actions_entries_array *v)
{
	v->a[1640] = reduce(aux_sym_case_statement_repeat1, 2, 0, 50);
	v->a[1641] = shift_repeat(1507);
	v->a[1642] = entry(2, false);
	v->a[1643] = reduce(aux_sym_case_statement_repeat1, 2, 0, 50);
	v->a[1644] = shift_repeat(1115);
	v->a[1645] = entry(2, false);
	v->a[1646] = reduce(aux_sym_case_statement_repeat1, 2, 0, 50);
	v->a[1647] = shift_repeat(775);
	v->a[1648] = entry(2, false);
	v->a[1649] = reduce(aux_sym_case_statement_repeat1, 2, 0, 50);
	v->a[1650] = shift_repeat(1447);
	v->a[1651] = entry(2, false);
	v->a[1652] = reduce(aux_sym_case_statement_repeat1, 2, 0, 50);
	v->a[1653] = shift_repeat(1425);
	v->a[1654] = entry(2, false);
	v->a[1655] = reduce(aux_sym_case_statement_repeat1, 2, 0, 50);
	v->a[1656] = shift_repeat(1421);
	v->a[1657] = entry(2, false);
	v->a[1658] = reduce(aux_sym_case_statement_repeat1, 2, 0, 50);
	v->a[1659] = shift_repeat(66);
	parse_actions_entries_83(v);
}

void	parse_actions_entries_83(t_parse_actions_entries_array *v)
{
	v->a[1660] = entry(2, false);
	v->a[1661] = reduce(aux_sym_case_statement_repeat1, 2, 0, 50);
	v->a[1662] = shift_repeat(80);
	v->a[1663] = entry(2, true);
	v->a[1664] = reduce(aux_sym_case_statement_repeat1, 2, 0, 50);
	v->a[1665] = shift_repeat(1468);
	v->a[1666] = entry(2, false);
	v->a[1667] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1668] = shift_repeat(1069);
	v->a[1669] = entry(2, true);
	v->a[1670] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1671] = shift_repeat(1069);
	v->a[1672] = entry(1, true);
	v->a[1673] = shift(1104);
	v->a[1674] = entry(1, true);
	v->a[1675] = shift(1062);
	v->a[1676] = entry(1, false);
	v->a[1677] = shift(1171);
	v->a[1678] = entry(1, false);
	v->a[1679] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	parse_actions_entries_84(v);
}

void	parse_actions_entries_84(t_parse_actions_entries_array *v)
{
	v->a[1680] = entry(2, false);
	v->a[1681] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[1682] = shift_repeat(1132);
	v->a[1683] = entry(2, false);
	v->a[1684] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[1685] = shift_repeat(1771);
	v->a[1686] = entry(1, true);
	v->a[1687] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[1688] = entry(1, false);
	v->a[1689] = reduce(sym_redirected_statement, 2, -1, 9);
	v->a[1690] = entry(1, true);
	v->a[1691] = reduce(sym_redirected_statement, 2, -1, 9);
	v->a[1692] = entry(1, true);
	v->a[1693] = reduce(sym__variable_assignments, 2, 0, 0);
	v->a[1694] = entry(1, false);
	v->a[1695] = reduce(sym__variable_assignments, 2, 0, 0);
	v->a[1696] = entry(1, true);
	v->a[1697] = shift(1780);
	v->a[1698] = entry(1, true);
	v->a[1699] = shift(1105);
	parse_actions_entries_85(v);
}

/* EOF parse_actions_entries_16.c */
