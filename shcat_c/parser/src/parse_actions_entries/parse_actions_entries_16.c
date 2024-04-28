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
	v->a[1600] = shift(205);
	v->a[1601] = entry(1, false);
	v->a[1602] = shift(206);
	v->a[1603] = entry(1, false);
	v->a[1604] = shift(207);
	v->a[1605] = entry(1, false);
	v->a[1606] = shift(189);
	v->a[1607] = entry(1, true);
	v->a[1608] = shift(1094);
	v->a[1609] = entry(1, true);
	v->a[1610] = shift(1521);
	v->a[1611] = entry(1, true);
	v->a[1612] = shift(7613);
	v->a[1613] = entry(1, false);
	v->a[1614] = reduce(sym_command, 3, 0, 39);
	v->a[1615] = entry(1, true);
	v->a[1616] = reduce(sym_command, 3, 0, 39);
	v->a[1617] = entry(1, false);
	v->a[1618] = shift(888);
	v->a[1619] = entry(1, false);
	parse_actions_entries_81(v);
}

void	parse_actions_entries_81(t_parse_actions_entries_array *v)
{
	v->a[1620] = shift(5840);
	v->a[1621] = entry(1, false);
	v->a[1622] = shift(889);
	v->a[1623] = entry(1, true);
	v->a[1624] = shift(889);
	v->a[1625] = entry(1, false);
	v->a[1626] = reduce(sym_command, 2, 0, 18);
	v->a[1627] = entry(1, true);
	v->a[1628] = reduce(sym_command, 2, 0, 18);
	v->a[1629] = entry(2, false);
	v->a[1630] = reduce(aux_sym_command_repeat2, 2, 0, 38);
	v->a[1631] = shift_repeat(985);
	v->a[1632] = entry(2, false);
	v->a[1633] = reduce(aux_sym_command_repeat2, 2, 0, 38);
	v->a[1634] = shift_repeat(3809);
	v->a[1635] = entry(2, false);
	v->a[1636] = reduce(aux_sym_command_repeat2, 2, 0, 38);
	v->a[1637] = shift_repeat(3620);
	v->a[1638] = entry(2, false);
	v->a[1639] = reduce(aux_sym_command_repeat2, 2, 0, 38);
	parse_actions_entries_82(v);
}

void	parse_actions_entries_82(t_parse_actions_entries_array *v)
{
	v->a[1640] = shift_repeat(3832);
	v->a[1641] = entry(2, false);
	v->a[1642] = reduce(aux_sym_command_repeat2, 2, 0, 38);
	v->a[1643] = shift_repeat(3812);
	v->a[1644] = entry(2, false);
	v->a[1645] = reduce(aux_sym_command_repeat2, 2, 0, 38);
	v->a[1646] = shift_repeat(6070);
	v->a[1647] = entry(2, false);
	v->a[1648] = reduce(aux_sym_command_repeat2, 2, 0, 38);
	v->a[1649] = shift_repeat(969);
	v->a[1650] = entry(2, false);
	v->a[1651] = reduce(aux_sym_command_repeat2, 2, 0, 38);
	v->a[1652] = shift_repeat(5788);
	v->a[1653] = entry(2, false);
	v->a[1654] = reduce(aux_sym_command_repeat2, 2, 0, 38);
	v->a[1655] = shift_repeat(1155);
	v->a[1656] = entry(2, false);
	v->a[1657] = reduce(aux_sym_command_repeat2, 2, 0, 38);
	v->a[1658] = shift_repeat(6254);
	v->a[1659] = entry(2, false);
	parse_actions_entries_83(v);
}

void	parse_actions_entries_83(t_parse_actions_entries_array *v)
{
	v->a[1660] = reduce(aux_sym_command_repeat2, 2, 0, 38);
	v->a[1661] = shift_repeat(4675);
	v->a[1662] = entry(2, false);
	v->a[1663] = reduce(aux_sym_command_repeat2, 2, 0, 38);
	v->a[1664] = shift_repeat(305);
	v->a[1665] = entry(2, false);
	v->a[1666] = reduce(aux_sym_command_repeat2, 2, 0, 38);
	v->a[1667] = shift_repeat(304);
	v->a[1668] = entry(2, false);
	v->a[1669] = reduce(aux_sym_command_repeat2, 2, 0, 38);
	v->a[1670] = shift_repeat(303);
	v->a[1671] = entry(2, false);
	v->a[1672] = reduce(aux_sym_command_repeat2, 2, 0, 38);
	v->a[1673] = shift_repeat(372);
	v->a[1674] = entry(2, true);
	v->a[1675] = reduce(aux_sym_command_repeat2, 2, 0, 38);
	v->a[1676] = shift_repeat(6805);
	v->a[1677] = entry(2, true);
	v->a[1678] = reduce(aux_sym_command_repeat2, 2, 0, 38);
	v->a[1679] = shift_repeat(1003);
	parse_actions_entries_84(v);
}

void	parse_actions_entries_84(t_parse_actions_entries_array *v)
{
	v->a[1680] = entry(2, true);
	v->a[1681] = reduce(aux_sym_command_repeat2, 2, 0, 38);
	v->a[1682] = shift_repeat(1328);
	v->a[1683] = entry(2, true);
	v->a[1684] = reduce(aux_sym_command_repeat2, 2, 0, 38);
	v->a[1685] = shift_repeat(7664);
	v->a[1686] = entry(1, false);
	v->a[1687] = shift(1219);
	v->a[1688] = entry(1, false);
	v->a[1689] = shift(3682);
	v->a[1690] = entry(1, false);
	v->a[1691] = shift(4052);
	v->a[1692] = entry(1, false);
	v->a[1693] = shift(1174);
	v->a[1694] = entry(1, true);
	v->a[1695] = shift(1203);
	v->a[1696] = entry(2, false);
	v->a[1697] = reduce(aux_sym_declaration_command_repeat1, 2, 0, 0);
	v->a[1698] = shift_repeat(1067);
	v->a[1699] = entry(2, false);
	parse_actions_entries_85(v);
}

/* EOF parse_actions_entries_16.c */
