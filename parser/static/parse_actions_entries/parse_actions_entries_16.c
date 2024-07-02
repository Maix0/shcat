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
	v->a[1601] = shift(547);
	v->a[1602] = entry(1, true);
	v->a[1603] = shift(383);
	v->a[1604] = entry(1, true);
	v->a[1605] = shift(956);
	v->a[1606] = entry(1, true);
	v->a[1607] = shift(398);
	v->a[1608] = entry(1, true);
	v->a[1609] = reduce(sym__statements, 2, 0, 8);
	v->a[1610] = entry(1, false);
	v->a[1611] = shift(1344);
	v->a[1612] = entry(1, true);
	v->a[1613] = shift(1344);
	v->a[1614] = entry(2, false);
	v->a[1615] = reduce(sym_command_name, 1, 0, 0);
	v->a[1616] = shift(2057);
	v->a[1617] = entry(1, true);
	v->a[1618] = shift(879);
	v->a[1619] = entry(2, false);
	parse_actions_entries_81(v);
}

void	parse_actions_entries_81(t_parse_actions_entries_array *v)
{
	v->a[1620] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1621] = shift_repeat(1344);
	v->a[1622] = entry(2, true);
	v->a[1623] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1624] = shift_repeat(1344);
	v->a[1625] = entry(1, true);
	v->a[1626] = shift(504);
	v->a[1627] = entry(1, true);
	v->a[1628] = shift(1292);
	v->a[1629] = entry(1, true);
	v->a[1630] = shift(579);
	v->a[1631] = entry(1, true);
	v->a[1632] = shift(482);
	v->a[1633] = entry(1, false);
	v->a[1634] = shift(1806);
	v->a[1635] = entry(1, false);
	v->a[1636] = shift(1098);
	v->a[1637] = entry(1, false);
	v->a[1638] = shift(1275);
	v->a[1639] = entry(1, false);
	parse_actions_entries_82(v);
}

void	parse_actions_entries_82(t_parse_actions_entries_array *v)
{
	v->a[1640] = shift(1622);
	v->a[1641] = entry(1, false);
	v->a[1642] = shift(749);
	v->a[1643] = entry(1, false);
	v->a[1644] = shift(1667);
	v->a[1645] = entry(1, false);
	v->a[1646] = shift(1668);
	v->a[1647] = entry(1, false);
	v->a[1648] = shift(1606);
	v->a[1649] = entry(1, false);
	v->a[1650] = shift(107);
	v->a[1651] = entry(1, false);
	v->a[1652] = shift(40);
	v->a[1653] = entry(1, true);
	v->a[1654] = shift(1736);
	v->a[1655] = entry(1, true);
	v->a[1656] = shift(1744);
	v->a[1657] = entry(1, true);
	v->a[1658] = shift(1334);
	v->a[1659] = entry(1, true);
	parse_actions_entries_83(v);
}

void	parse_actions_entries_83(t_parse_actions_entries_array *v)
{
	v->a[1660] = shift(524);
	v->a[1661] = entry(1, true);
	v->a[1662] = reduce(sym__statements, 3, 0, 33);
	v->a[1663] = entry(1, true);
	v->a[1664] = shift(471);
	v->a[1665] = entry(1, true);
	v->a[1666] = shift(1278);
	v->a[1667] = entry(1, true);
	v->a[1668] = shift(1440);
	v->a[1669] = entry(1, true);
	v->a[1670] = shift(592);
	v->a[1671] = entry(1, true);
	v->a[1672] = shift(1036);
	v->a[1673] = entry(1, true);
	v->a[1674] = shift(1868);
	v->a[1675] = entry(1, false);
	v->a[1676] = shift(1196);
	v->a[1677] = entry(1, true);
	v->a[1678] = shift(827);
	v->a[1679] = entry(1, true);
	parse_actions_entries_84(v);
}

void	parse_actions_entries_84(t_parse_actions_entries_array *v)
{
	v->a[1680] = shift(1422);
	v->a[1681] = entry(1, true);
	v->a[1682] = shift(516);
	v->a[1683] = entry(1, true);
	v->a[1684] = shift(594);
	v->a[1685] = entry(1, false);
	v->a[1686] = shift(1244);
	v->a[1687] = entry(1, false);
	v->a[1688] = shift(1259);
	v->a[1689] = entry(1, true);
	v->a[1690] = shift(902);
	v->a[1691] = entry(1, true);
	v->a[1692] = shift(436);
	v->a[1693] = entry(1, true);
	v->a[1694] = shift(920);
	v->a[1695] = entry(1, false);
	v->a[1696] = shift(1566);
	v->a[1697] = entry(1, false);
	v->a[1698] = shift(1574);
	v->a[1699] = entry(1, true);
	parse_actions_entries_85(v);
}

/* EOF parse_actions_entries_16.c */
