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
	v->a[1600] = entry(2, false);
	v->a[1601] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1602] = shift(2125);
	v->a[1603] = entry(1, false);
	v->a[1604] = shift(1558);
	v->a[1605] = entry(2, false);
	v->a[1606] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1607] = shift(521);
	v->a[1608] = entry(2, false);
	v->a[1609] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1610] = shift(386);
	v->a[1611] = entry(2, false);
	v->a[1612] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1613] = shift(2117);
	v->a[1614] = entry(2, false);
	v->a[1615] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1616] = shift(424);
	v->a[1617] = entry(1, true);
	v->a[1618] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1619] = entry(2, false);
	parse_actions_entries_81(v);
}

void	parse_actions_entries_81(t_parse_actions_entries_array *v)
{
	v->a[1620] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1621] = shift(502);
	v->a[1622] = entry(2, false);
	v->a[1623] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1624] = shift(575);
	v->a[1625] = entry(2, false);
	v->a[1626] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1627] = shift(1424);
	v->a[1628] = entry(2, false);
	v->a[1629] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1630] = shift(449);
	v->a[1631] = entry(1, false);
	v->a[1632] = reduce(aux_sym__case_item_last_repeat2, 2, 0, 0);
	v->a[1633] = entry(2, false);
	v->a[1634] = reduce(aux_sym__case_item_last_repeat2, 2, 0, 0);
	v->a[1635] = shift_repeat(767);
	v->a[1636] = entry(1, true);
	v->a[1637] = reduce(aux_sym__case_item_last_repeat2, 2, 0, 0);
	v->a[1638] = entry(2, false);
	v->a[1639] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	parse_actions_entries_82(v);
}

void	parse_actions_entries_82(t_parse_actions_entries_array *v)
{
	v->a[1640] = shift(354);
	v->a[1641] = entry(2, false);
	v->a[1642] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1643] = shift(627);
	v->a[1644] = entry(2, false);
	v->a[1645] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1646] = shift(1176);
	v->a[1647] = entry(2, false);
	v->a[1648] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1649] = shift(1835);
	v->a[1650] = entry(2, false);
	v->a[1651] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1652] = shift(610);
	v->a[1653] = entry(2, false);
	v->a[1654] = reduce(sym_command_name, 1, 0, 0);
	v->a[1655] = shift(2435);
	v->a[1656] = entry(1, false);
	v->a[1657] = shift(1313);
	v->a[1658] = entry(1, false);
	v->a[1659] = shift(1311);
	parse_actions_entries_83(v);
}

void	parse_actions_entries_83(t_parse_actions_entries_array *v)
{
	v->a[1660] = entry(1, true);
	v->a[1661] = shift(1311);
	v->a[1662] = entry(2, false);
	v->a[1663] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1664] = shift(2160);
	v->a[1665] = entry(2, false);
	v->a[1666] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1667] = shift(1086);
	v->a[1668] = entry(2, false);
	v->a[1669] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1670] = shift(2244);
	v->a[1671] = entry(2, false);
	v->a[1672] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1673] = shift(936);
	v->a[1674] = entry(2, false);
	v->a[1675] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1676] = shift(1160);
	v->a[1677] = entry(2, false);
	v->a[1678] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1679] = shift(1814);
	parse_actions_entries_84(v);
}

void	parse_actions_entries_84(t_parse_actions_entries_array *v)
{
	v->a[1680] = entry(2, false);
	v->a[1681] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1682] = shift(407);
	v->a[1683] = entry(2, false);
	v->a[1684] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1685] = shift(1007);
	v->a[1686] = entry(2, false);
	v->a[1687] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1688] = shift(1024);
	v->a[1689] = entry(2, false);
	v->a[1690] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1691] = shift(2140);
	v->a[1692] = entry(2, false);
	v->a[1693] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1694] = shift(600);
	v->a[1695] = entry(2, false);
	v->a[1696] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1697] = shift(579);
	v->a[1698] = entry(2, false);
	v->a[1699] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	parse_actions_entries_85(v);
}

/* EOF parse_actions_entries_16.c */
