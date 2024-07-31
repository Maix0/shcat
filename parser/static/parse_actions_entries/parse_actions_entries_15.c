/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_actions_entries_15.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_actions_entries.h"

void	parse_actions_entries_75(t_parse_actions_entries_array *v)
{
	v->a[1500] = entry(1, true);
	v->a[1501] = shift(1206);
	v->a[1502] = entry(1, false);
	v->a[1503] = shift(1206);
	v->a[1504] = entry(1, false);
	v->a[1505] = shift(1479);
	v->a[1506] = entry(1, true);
	v->a[1507] = shift(724);
	v->a[1508] = entry(1, true);
	v->a[1509] = shift(1176);
	v->a[1510] = entry(1, true);
	v->a[1511] = shift(1479);
	v->a[1512] = entry(1, false);
	v->a[1513] = shift(1208);
	v->a[1514] = entry(1, true);
	v->a[1515] = shift(1208);
	v->a[1516] = entry(1, false);
	v->a[1517] = shift(1222);
	v->a[1518] = entry(1, false);
	v->a[1519] = shift(1220);
	parse_actions_entries_76(v);
}

void	parse_actions_entries_76(t_parse_actions_entries_array *v)
{
	v->a[1520] = entry(1, true);
	v->a[1521] = shift(1220);
	v->a[1522] = entry(1, true);
	v->a[1523] = shift(771);
	v->a[1524] = entry(1, true);
	v->a[1525] = shift(740);
	v->a[1526] = entry(1, true);
	v->a[1527] = shift(741);
	v->a[1528] = entry(1, false);
	v->a[1529] = shift(744);
	v->a[1530] = entry(1, false);
	v->a[1531] = shift(1462);
	v->a[1532] = entry(1, true);
	v->a[1533] = shift(1373);
	v->a[1534] = entry(1, false);
	v->a[1535] = shift(206);
	v->a[1536] = entry(1, true);
	v->a[1537] = shift(1388);
	v->a[1538] = entry(1, true);
	v->a[1539] = shift(206);
	parse_actions_entries_77(v);
}

void	parse_actions_entries_77(t_parse_actions_entries_array *v)
{
	v->a[1540] = entry(1, true);
	v->a[1541] = shift(723);
	v->a[1542] = entry(1, true);
	v->a[1543] = shift(721);
	v->a[1544] = entry(1, true);
	v->a[1545] = shift(735);
	v->a[1546] = entry(1, false);
	v->a[1547] = shift(743);
	v->a[1548] = entry(1, false);
	v->a[1549] = shift(1455);
	v->a[1550] = entry(1, true);
	v->a[1551] = shift(1326);
	v->a[1552] = entry(1, false);
	v->a[1553] = shift(157);
	v->a[1554] = entry(1, true);
	v->a[1555] = shift(1327);
	v->a[1556] = entry(1, true);
	v->a[1557] = shift(157);
	v->a[1558] = entry(2, false);
	v->a[1559] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	parse_actions_entries_78(v);
}

void	parse_actions_entries_78(t_parse_actions_entries_array *v)
{
	v->a[1560] = shift_repeat(1088);
	v->a[1561] = entry(2, true);
	v->a[1562] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1563] = shift_repeat(1088);
	v->a[1564] = entry(1, false);
	v->a[1565] = shift(1522);
	v->a[1566] = entry(2, false);
	v->a[1567] = reduce(sym__expansion_regex, 1, 0, 22);
	v->a[1568] = reduce(sym__expansion_body, 2, 0, 26);
	v->a[1569] = entry(1, false);
	v->a[1570] = shift(1422);
	v->a[1571] = entry(1, false);
	v->a[1572] = shift(1472);
	v->a[1573] = entry(1, true);
	v->a[1574] = shift(1522);
	v->a[1575] = entry(1, true);
	v->a[1576] = shift(1472);
	v->a[1577] = entry(1, false);
	v->a[1578] = shift(1083);
	v->a[1579] = entry(1, true);
	parse_actions_entries_79(v);
}

void	parse_actions_entries_79(t_parse_actions_entries_array *v)
{
	v->a[1580] = shift(1083);
	v->a[1581] = entry(1, false);
	v->a[1582] = shift(1412);
	v->a[1583] = entry(1, false);
	v->a[1584] = shift(1184);
	v->a[1585] = entry(1, false);
	v->a[1586] = shift(987);
	v->a[1587] = entry(1, true);
	v->a[1588] = shift(1116);
	v->a[1589] = entry(1, false);
	v->a[1590] = shift(1178);
	v->a[1591] = entry(1, true);
	v->a[1592] = shift(353);
	v->a[1593] = entry(1, false);
	v->a[1594] = shift(1186);
	v->a[1595] = entry(1, true);
	v->a[1596] = shift(499);
	v->a[1597] = entry(1, false);
	v->a[1598] = shift(1132);
	v->a[1599] = entry(1, false);
	parse_actions_entries_80(v);
}

/* EOF parse_actions_entries_15.c */
