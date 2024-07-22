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
	v->a[1600] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1601] = shift_repeat(1706);
	v->a[1602] = entry(2, false);
	v->a[1603] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1604] = shift_repeat(1677);
	v->a[1605] = entry(2, false);
	v->a[1606] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1607] = shift_repeat(1678);
	v->a[1608] = entry(2, false);
	v->a[1609] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1610] = shift_repeat(70);
	v->a[1611] = entry(2, false);
	v->a[1612] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1613] = shift_repeat(71);
	v->a[1614] = entry(1, true);
	v->a[1615] = shift(1866);
	v->a[1616] = entry(2, false);
	v->a[1617] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1618] = shift(415);
	v->a[1619] = entry(2, false);
	parse_actions_entries_81(v);
}

void	parse_actions_entries_81(t_parse_actions_entries_array *v)
{
	v->a[1620] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1621] = shift(853);
	v->a[1622] = entry(1, true);
	v->a[1623] = shift(891);
	v->a[1624] = entry(2, false);
	v->a[1625] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1626] = shift(877);
	v->a[1627] = entry(1, true);
	v->a[1628] = shift(628);
	v->a[1629] = entry(2, false);
	v->a[1630] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1631] = shift(191);
	v->a[1632] = entry(2, false);
	v->a[1633] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1634] = shift(1784);
	v->a[1635] = entry(1, true);
	v->a[1636] = shift(1410);
	v->a[1637] = entry(2, false);
	v->a[1638] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1639] = shift(469);
	parse_actions_entries_82(v);
}

void	parse_actions_entries_82(t_parse_actions_entries_array *v)
{
	v->a[1640] = entry(1, true);
	v->a[1641] = shift(1065);
	v->a[1642] = entry(2, false);
	v->a[1643] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1644] = shift(517);
	v->a[1645] = entry(2, false);
	v->a[1646] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1647] = shift(899);
	v->a[1648] = entry(2, false);
	v->a[1649] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1650] = shift(575);
	v->a[1651] = entry(1, true);
	v->a[1652] = shift(1785);
	v->a[1653] = entry(2, false);
	v->a[1654] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1655] = shift(1805);
	v->a[1656] = entry(1, true);
	v->a[1657] = shift(534);
	v->a[1658] = entry(1, true);
	v->a[1659] = shift(1216);
	parse_actions_entries_83(v);
}

void	parse_actions_entries_83(t_parse_actions_entries_array *v)
{
	v->a[1660] = entry(2, false);
	v->a[1661] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1662] = shift(538);
	v->a[1663] = entry(1, true);
	v->a[1664] = shift(1736);
	v->a[1665] = entry(1, true);
	v->a[1666] = shift(559);
	v->a[1667] = entry(2, false);
	v->a[1668] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1669] = shift(562);
	v->a[1670] = entry(2, false);
	v->a[1671] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1672] = shift(1106);
	v->a[1673] = entry(1, true);
	v->a[1674] = shift(479);
	v->a[1675] = entry(2, false);
	v->a[1676] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1677] = shift(1746);
	v->a[1678] = entry(2, false);
	v->a[1679] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	parse_actions_entries_84(v);
}

void	parse_actions_entries_84(t_parse_actions_entries_array *v)
{
	v->a[1680] = shift(1053);
	v->a[1681] = entry(1, true);
	v->a[1682] = shift(626);
	v->a[1683] = entry(2, false);
	v->a[1684] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1685] = shift(505);
	v->a[1686] = entry(1, true);
	v->a[1687] = shift(501);
	v->a[1688] = entry(1, true);
	v->a[1689] = shift(1289);
	v->a[1690] = entry(1, true);
	v->a[1691] = shift(1082);
	v->a[1692] = entry(1, true);
	v->a[1693] = shift(772);
	v->a[1694] = entry(1, true);
	v->a[1695] = shift(778);
	v->a[1696] = entry(1, true);
	v->a[1697] = shift(779);
	v->a[1698] = entry(1, false);
	v->a[1699] = shift(782);
	parse_actions_entries_85(v);
}

/* EOF parse_actions_entries_16.c */
