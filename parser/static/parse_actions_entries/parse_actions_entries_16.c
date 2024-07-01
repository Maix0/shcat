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
	v->a[1600] = entry(1, true);
	v->a[1601] = shift(458);
	v->a[1602] = entry(1, true);
	v->a[1603] = shift(480);
	v->a[1604] = entry(1, true);
	v->a[1605] = shift(479);
	v->a[1606] = entry(1, true);
	v->a[1607] = shift(1035);
	v->a[1608] = entry(1, true);
	v->a[1609] = shift(1744);
	v->a[1610] = entry(1, true);
	v->a[1611] = shift(510);
	v->a[1612] = entry(1, true);
	v->a[1613] = reduce(sym__statements, 3, 0, 31);
	v->a[1614] = entry(1, true);
	v->a[1615] = shift(466);
	v->a[1616] = entry(1, true);
	v->a[1617] = shift(1859);
	v->a[1618] = entry(1, true);
	v->a[1619] = shift(1295);
	parse_actions_entries_81(v);
}

void	parse_actions_entries_81(t_parse_actions_entries_array *v)
{
	v->a[1620] = entry(1, true);
	v->a[1621] = shift(1294);
	v->a[1622] = entry(2, false);
	v->a[1623] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1624] = shift_repeat(1283);
	v->a[1625] = entry(2, true);
	v->a[1626] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1627] = shift_repeat(1283);
	v->a[1628] = entry(1, true);
	v->a[1629] = shift(913);
	v->a[1630] = entry(1, false);
	v->a[1631] = shift(1804);
	v->a[1632] = entry(1, false);
	v->a[1633] = shift(1209);
	v->a[1634] = entry(1, false);
	v->a[1635] = shift(1352);
	v->a[1636] = entry(1, false);
	v->a[1637] = shift(1629);
	v->a[1638] = entry(1, false);
	v->a[1639] = shift(719);
	parse_actions_entries_82(v);
}

void	parse_actions_entries_82(t_parse_actions_entries_array *v)
{
	v->a[1640] = entry(1, false);
	v->a[1641] = shift(1648);
	v->a[1642] = entry(1, false);
	v->a[1643] = shift(1649);
	v->a[1644] = entry(1, false);
	v->a[1645] = shift(1528);
	v->a[1646] = entry(1, false);
	v->a[1647] = shift(39);
	v->a[1648] = entry(1, false);
	v->a[1649] = shift(82);
	v->a[1650] = entry(1, true);
	v->a[1651] = shift(1727);
	v->a[1652] = entry(1, false);
	v->a[1653] = shift(1226);
	v->a[1654] = entry(1, false);
	v->a[1655] = shift(1283);
	v->a[1656] = entry(1, true);
	v->a[1657] = shift(1268);
	v->a[1658] = entry(1, true);
	v->a[1659] = shift(1179);
	parse_actions_entries_83(v);
}

void	parse_actions_entries_83(t_parse_actions_entries_array *v)
{
	v->a[1660] = entry(1, true);
	v->a[1661] = shift(843);
	v->a[1662] = entry(1, false);
	v->a[1663] = shift(1103);
	v->a[1664] = entry(1, true);
	v->a[1665] = shift(1773);
	v->a[1666] = entry(2, false);
	v->a[1667] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1668] = shift_repeat(915);
	v->a[1669] = entry(2, false);
	v->a[1670] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1671] = shift_repeat(735);
	v->a[1672] = entry(2, false);
	v->a[1673] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1674] = shift_repeat(1687);
	v->a[1675] = entry(2, false);
	v->a[1676] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1677] = shift_repeat(1702);
	v->a[1678] = entry(2, false);
	v->a[1679] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	parse_actions_entries_84(v);
}

void	parse_actions_entries_84(t_parse_actions_entries_array *v)
{
	v->a[1680] = shift_repeat(1587);
	v->a[1681] = entry(2, false);
	v->a[1682] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1683] = shift_repeat(91);
	v->a[1684] = entry(2, false);
	v->a[1685] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1686] = shift_repeat(92);
	v->a[1687] = entry(1, true);
	v->a[1688] = shift(413);
	v->a[1689] = entry(1, false);
	v->a[1690] = shift(1578);
	v->a[1691] = entry(1, true);
	v->a[1692] = shift(949);
	v->a[1693] = entry(1, true);
	v->a[1694] = shift(385);
	v->a[1695] = entry(1, true);
	v->a[1696] = shift(858);
	v->a[1697] = entry(1, true);
	v->a[1698] = shift(1397);
	v->a[1699] = entry(1, false);
	parse_actions_entries_85(v);
}

/* EOF parse_actions_entries_16.c */
