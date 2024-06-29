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
	v->a[1600] = shift(1973);
	v->a[1601] = entry(2, false);
	v->a[1602] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1603] = shift(374);
	v->a[1604] = entry(2, false);
	v->a[1605] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1606] = shift(1104);
	v->a[1607] = entry(2, false);
	v->a[1608] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1609] = shift(514);
	v->a[1610] = entry(2, false);
	v->a[1611] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1612] = shift(1412);
	v->a[1613] = entry(2, false);
	v->a[1614] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1615] = shift(1199);
	v->a[1616] = entry(2, false);
	v->a[1617] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1618] = shift(623);
	v->a[1619] = entry(2, false);
	parse_actions_entries_81(v);
}

void	parse_actions_entries_81(t_parse_actions_entries_array *v)
{
	v->a[1620] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1621] = shift(1457);
	v->a[1622] = entry(2, false);
	v->a[1623] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1624] = shift(330);
	v->a[1625] = entry(2, true);
	v->a[1626] = reduce(aux_sym_command_repeat1, 1, 0, 0);
	v->a[1627] = shift(2146);
	v->a[1628] = entry(1, false);
	v->a[1629] = reduce(aux_sym__case_item_last_repeat2, 2, 0, 0);
	v->a[1630] = entry(2, false);
	v->a[1631] = reduce(aux_sym__case_item_last_repeat2, 2, 0, 0);
	v->a[1632] = shift_repeat(709);
	v->a[1633] = entry(1, true);
	v->a[1634] = reduce(aux_sym__case_item_last_repeat2, 2, 0, 0);
	v->a[1635] = entry(2, false);
	v->a[1636] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1637] = shift(855);
	v->a[1638] = entry(2, false);
	v->a[1639] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	parse_actions_entries_82(v);
}

void	parse_actions_entries_82(t_parse_actions_entries_array *v)
{
	v->a[1640] = shift(1077);
	v->a[1641] = entry(2, false);
	v->a[1642] = reduce(sym_command_name, 1, 0, 0);
	v->a[1643] = shift(2290);
	v->a[1644] = entry(2, false);
	v->a[1645] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1646] = shift(1294);
	v->a[1647] = entry(2, false);
	v->a[1648] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1649] = shift(582);
	v->a[1650] = entry(2, false);
	v->a[1651] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1652] = shift(1691);
	v->a[1653] = entry(2, false);
	v->a[1654] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1655] = shift(396);
	v->a[1656] = entry(1, false);
	v->a[1657] = shift(1272);
	v->a[1658] = entry(1, false);
	v->a[1659] = shift(1257);
	parse_actions_entries_83(v);
}

void	parse_actions_entries_83(t_parse_actions_entries_array *v)
{
	v->a[1660] = entry(1, true);
	v->a[1661] = shift(1257);
	v->a[1662] = entry(2, false);
	v->a[1663] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1664] = shift(457);
	v->a[1665] = entry(2, false);
	v->a[1666] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1667] = shift(641);
	v->a[1668] = entry(2, false);
	v->a[1669] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1670] = shift(921);
	v->a[1671] = entry(2, false);
	v->a[1672] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1673] = shift(484);
	v->a[1674] = entry(2, false);
	v->a[1675] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1676] = shift(975);
	v->a[1677] = entry(2, false);
	v->a[1678] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1679] = shift(541);
	parse_actions_entries_84(v);
}

void	parse_actions_entries_84(t_parse_actions_entries_array *v)
{
	v->a[1680] = entry(2, false);
	v->a[1681] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1682] = shift(1036);
	v->a[1683] = entry(2, false);
	v->a[1684] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1685] = shift(2022);
	v->a[1686] = entry(1, true);
	v->a[1687] = shift(1517);
	v->a[1688] = entry(1, true);
	v->a[1689] = reduce(sym__statements, 2, 0, 10);
	v->a[1690] = entry(2, false);
	v->a[1691] = reduce(sym_command_name, 1, 0, 0);
	v->a[1692] = shift(2246);
	v->a[1693] = entry(1, false);
	v->a[1694] = shift(1466);
	v->a[1695] = entry(1, true);
	v->a[1696] = shift(1466);
	v->a[1697] = entry(1, true);
	v->a[1698] = reduce(sym__statements, 3, 0, 32);
	v->a[1699] = entry(1, true);
	parse_actions_entries_85(v);
}

/* EOF parse_actions_entries_16.c */
