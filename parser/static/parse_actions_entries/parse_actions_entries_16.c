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
	v->a[1601] = shift(359);
	v->a[1602] = entry(1, true);
	v->a[1603] = shift(1588);
	v->a[1604] = entry(1, true);
	v->a[1605] = shift(598);
	v->a[1606] = entry(1, false);
	v->a[1607] = shift(922);
	v->a[1608] = entry(1, true);
	v->a[1609] = shift(918);
	v->a[1610] = entry(1, true);
	v->a[1611] = shift(886);
	v->a[1612] = entry(1, true);
	v->a[1613] = shift(405);
	v->a[1614] = entry(1, true);
	v->a[1615] = shift(1353);
	v->a[1616] = entry(1, false);
	v->a[1617] = shift(1357);
	v->a[1618] = entry(1, false);
	v->a[1619] = shift(868);
	parse_actions_entries_81(v);
}

void	parse_actions_entries_81(t_parse_actions_entries_array *v)
{
	v->a[1620] = entry(1, false);
	v->a[1621] = shift(1733);
	v->a[1622] = entry(1, false);
	v->a[1623] = shift(1754);
	v->a[1624] = entry(1, false);
	v->a[1625] = shift(1398);
	v->a[1626] = entry(1, false);
	v->a[1627] = shift(1911);
	v->a[1628] = entry(1, false);
	v->a[1629] = shift(1710);
	v->a[1630] = entry(1, false);
	v->a[1631] = shift(110);
	v->a[1632] = entry(1, false);
	v->a[1633] = shift(74);
	v->a[1634] = entry(1, true);
	v->a[1635] = shift(1177);
	v->a[1636] = entry(1, true);
	v->a[1637] = shift(375);
	v->a[1638] = entry(1, true);
	v->a[1639] = shift(592);
	parse_actions_entries_82(v);
}

void	parse_actions_entries_82(t_parse_actions_entries_array *v)
{
	v->a[1640] = entry(1, false);
	v->a[1641] = shift(1330);
	v->a[1642] = entry(1, true);
	v->a[1643] = shift(830);
	v->a[1644] = entry(1, true);
	v->a[1645] = shift(905);
	v->a[1646] = entry(1, false);
	v->a[1647] = shift(971);
	v->a[1648] = entry(1, false);
	v->a[1649] = shift(972);
	v->a[1650] = entry(1, true);
	v->a[1651] = shift(972);
	v->a[1652] = entry(1, true);
	v->a[1653] = shift(888);
	v->a[1654] = entry(1, true);
	v->a[1655] = reduce(aux_sym__terminated_statement, 2, 0, 0);
	v->a[1656] = entry(1, true);
	v->a[1657] = shift(420);
	v->a[1658] = entry(1, true);
	v->a[1659] = shift(1573);
	parse_actions_entries_83(v);
}

void	parse_actions_entries_83(t_parse_actions_entries_array *v)
{
	v->a[1660] = entry(1, true);
	v->a[1661] = shift(1407);
	v->a[1662] = entry(1, true);
	v->a[1663] = shift(884);
	v->a[1664] = entry(1, true);
	v->a[1665] = shift(501);
	v->a[1666] = entry(1, true);
	v->a[1667] = shift(459);
	v->a[1668] = entry(1, false);
	v->a[1669] = shift(989);
	v->a[1670] = entry(1, false);
	v->a[1671] = shift(988);
	v->a[1672] = entry(1, true);
	v->a[1673] = shift(988);
	v->a[1674] = entry(1, true);
	v->a[1675] = shift(992);
	v->a[1676] = entry(1, true);
	v->a[1677] = shift(837);
	v->a[1678] = entry(1, true);
	v->a[1679] = shift(1479);
	parse_actions_entries_84(v);
}

void	parse_actions_entries_84(t_parse_actions_entries_array *v)
{
	v->a[1680] = entry(1, true);
	v->a[1681] = shift(1887);
	v->a[1682] = entry(1, true);
	v->a[1683] = shift(619);
	v->a[1684] = entry(1, true);
	v->a[1685] = shift(474);
	v->a[1686] = entry(1, true);
	v->a[1687] = shift(1068);
	v->a[1688] = entry(1, true);
	v->a[1689] = shift(475);
	v->a[1690] = entry(1, true);
	v->a[1691] = shift(799);
	v->a[1692] = entry(1, true);
	v->a[1693] = shift(526);
	v->a[1694] = entry(1, true);
	v->a[1695] = shift(507);
	v->a[1696] = entry(1, false);
	v->a[1697] = reduce(aux_sym_command_repeat1, 1, 0, 3);
	v->a[1698] = entry(1, false);
	v->a[1699] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	parse_actions_entries_85(v);
}

/* EOF parse_actions_entries_16.c */
