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
	v->a[1600] = shift(1200);
	v->a[1601] = entry(1, false);
	v->a[1602] = shift(1121);
	v->a[1603] = entry(1, false);
	v->a[1604] = shift(1120);
	v->a[1605] = entry(1, false);
	v->a[1606] = shift(74);
	v->a[1607] = entry(1, false);
	v->a[1608] = shift(40);
	v->a[1609] = entry(1, false);
	v->a[1610] = shift(762);
	v->a[1611] = entry(1, true);
	v->a[1612] = shift(762);
	v->a[1613] = entry(1, false);
	v->a[1614] = shift(682);
	v->a[1615] = entry(1, false);
	v->a[1616] = shift(539);
	v->a[1617] = entry(1, false);
	v->a[1618] = shift(560);
	v->a[1619] = entry(1, true);
	return (parse_actions_entries_81(v));
}

void	parse_actions_entries_81(t_parse_actions_entries_array *v)
{
	v->a[1620] = shift(560);
	v->a[1621] = entry(1, false);
	v->a[1622] = shift(146);
	v->a[1623] = entry(1, false);
	v->a[1624] = shift(275);
	v->a[1625] = entry(1, false);
	v->a[1626] = shift(670);
	v->a[1627] = entry(1, false);
	v->a[1628] = shift(1206);
	v->a[1629] = entry(1, false);
	v->a[1630] = shift(1100);
	v->a[1631] = entry(1, false);
	v->a[1632] = shift(1102);
	v->a[1633] = entry(1, false);
	v->a[1634] = shift(86);
	v->a[1635] = entry(1, false);
	v->a[1636] = shift(87);
	v->a[1637] = entry(1, false);
	v->a[1638] = shift(535);
	v->a[1639] = entry(1, true);
	return (parse_actions_entries_82(v));
}

void	parse_actions_entries_82(t_parse_actions_entries_array *v)
{
	v->a[1640] = shift(535);
	v->a[1641] = entry(1, false);
	v->a[1642] = shift(827);
	v->a[1643] = entry(1, false);
	v->a[1644] = shift(651);
	v->a[1645] = entry(1, false);
	v->a[1646] = shift(1238);
	v->a[1647] = entry(1, false);
	v->a[1648] = shift(1149);
	v->a[1649] = entry(1, false);
	v->a[1650] = shift(1187);
	v->a[1651] = entry(1, false);
	v->a[1652] = shift(54);
	v->a[1653] = entry(1, false);
	v->a[1654] = shift(66);
	v->a[1655] = entry(1, true);
	v->a[1656] = shift(827);
	v->a[1657] = entry(1, false);
	v->a[1658] = shift(265);
	v->a[1659] = entry(1, false);
	return (parse_actions_entries_83(v));
}

void	parse_actions_entries_83(t_parse_actions_entries_array *v)
{
	v->a[1660] = shift(520);
	v->a[1661] = entry(1, true);
	v->a[1662] = shift(520);
	v->a[1663] = entry(1, false);
	v->a[1664] = shift(1276);
	v->a[1665] = entry(1, false);
	v->a[1666] = shift(615);
	v->a[1667] = entry(1, false);
	v->a[1668] = shift(1217);
	v->a[1669] = entry(1, false);
	v->a[1670] = shift(1116);
	v->a[1671] = entry(1, false);
	v->a[1672] = shift(1130);
	v->a[1673] = entry(1, false);
	v->a[1674] = shift(93);
	v->a[1675] = entry(1, false);
	v->a[1676] = shift(91);
	v->a[1677] = entry(1, false);
	v->a[1678] = shift(1377);
	v->a[1679] = entry(1, true);
	return (parse_actions_entries_84(v));
}

void	parse_actions_entries_84(t_parse_actions_entries_array *v)
{
	v->a[1680] = shift(1377);
	v->a[1681] = entry(1, false);
	v->a[1682] = shift(491);
	v->a[1683] = entry(1, true);
	v->a[1684] = shift(491);
	v->a[1685] = entry(1, false);
	v->a[1686] = shift(149);
	v->a[1687] = entry(1, false);
	v->a[1688] = shift(836);
	v->a[1689] = entry(1, false);
	v->a[1690] = shift(1218);
	v->a[1691] = entry(1, false);
	v->a[1692] = shift(1188);
	v->a[1693] = entry(1, true);
	v->a[1694] = shift(1188);
	v->a[1695] = entry(1, false);
	v->a[1696] = shift(156);
	v->a[1697] = entry(1, false);
	v->a[1698] = shift(311);
	v->a[1699] = entry(1, false);
	return (parse_actions_entries_85(v));
}

/* EOF parse_actions_entries_16.c */
