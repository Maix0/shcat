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
	v->a[1600] = reduce(aux_sym_command_repeat1, 1, 0, 0);
	v->a[1601] = shift(2146);
	v->a[1602] = entry(2, false);
	v->a[1603] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1604] = shift(2004);
	v->a[1605] = entry(1, false);
	v->a[1606] = reduce(sym__statements, 2, 0, 10);
	v->a[1607] = entry(1, false);
	v->a[1608] = reduce(aux_sym_command_repeat2, 1, 0, 12);
	v->a[1609] = entry(1, true);
	v->a[1610] = reduce(aux_sym_command_repeat2, 1, 0, 12);
	v->a[1611] = entry(2, false);
	v->a[1612] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1613] = shift(1084);
	v->a[1614] = entry(2, false);
	v->a[1615] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1616] = shift(608);
	v->a[1617] = entry(2, false);
	v->a[1618] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1619] = shift(370);
	parse_actions_entries_81(v);
}

void	parse_actions_entries_81(t_parse_actions_entries_array *v)
{
	v->a[1620] = entry(2, false);
	v->a[1621] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1622] = shift(589);
	v->a[1623] = entry(2, false);
	v->a[1624] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1625] = shift(549);
	v->a[1626] = entry(1, false);
	v->a[1627] = shift(1243);
	v->a[1628] = entry(1, false);
	v->a[1629] = shift(1242);
	v->a[1630] = entry(1, true);
	v->a[1631] = shift(1242);
	v->a[1632] = entry(2, false);
	v->a[1633] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1634] = shift(1426);
	v->a[1635] = entry(1, false);
	v->a[1636] = shift(1467);
	v->a[1637] = entry(1, false);
	v->a[1638] = shift(844);
	v->a[1639] = entry(1, false);
	parse_actions_entries_82(v);
}

void	parse_actions_entries_82(t_parse_actions_entries_array *v)
{
	v->a[1640] = shift(1826);
	v->a[1641] = entry(1, false);
	v->a[1642] = shift(1815);
	v->a[1643] = entry(1, false);
	v->a[1644] = shift(1795);
	v->a[1645] = entry(1, false);
	v->a[1646] = shift(83);
	v->a[1647] = entry(1, false);
	v->a[1648] = shift(81);
	v->a[1649] = entry(2, false);
	v->a[1650] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1651] = shift(529);
	v->a[1652] = entry(1, false);
	v->a[1653] = shift(1476);
	v->a[1654] = entry(2, false);
	v->a[1655] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1656] = shift(1650);
	v->a[1657] = entry(2, false);
	v->a[1658] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1659] = shift(970);
	parse_actions_entries_83(v);
}

void	parse_actions_entries_83(t_parse_actions_entries_array *v)
{
	v->a[1660] = entry(2, false);
	v->a[1661] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1662] = shift(1189);
	v->a[1663] = entry(2, false);
	v->a[1664] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1665] = shift(567);
	v->a[1666] = entry(2, false);
	v->a[1667] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1668] = shift(487);
	v->a[1669] = entry(2, false);
	v->a[1670] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1671] = shift(1102);
	v->a[1672] = entry(2, false);
	v->a[1673] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1674] = shift(1577);
	v->a[1675] = entry(2, false);
	v->a[1676] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1677] = shift(664);
	v->a[1678] = entry(2, false);
	v->a[1679] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	parse_actions_entries_84(v);
}

void	parse_actions_entries_84(t_parse_actions_entries_array *v)
{
	v->a[1680] = shift(1197);
	v->a[1681] = entry(1, true);
	v->a[1682] = shift(1419);
	v->a[1683] = entry(2, false);
	v->a[1684] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1685] = shift(1026);
	v->a[1686] = entry(1, true);
	v->a[1687] = reduce(sym__statements, 3, 0, 32);
	v->a[1688] = entry(1, false);
	v->a[1689] = shift(1003);
	v->a[1690] = entry(1, false);
	v->a[1691] = shift(872);
	v->a[1692] = entry(1, false);
	v->a[1693] = shift(1866);
	v->a[1694] = entry(1, false);
	v->a[1695] = shift(1893);
	v->a[1696] = entry(1, false);
	v->a[1697] = shift(1777);
	v->a[1698] = entry(1, false);
	v->a[1699] = shift(107);
	parse_actions_entries_85(v);
}

/* EOF parse_actions_entries_16.c */
