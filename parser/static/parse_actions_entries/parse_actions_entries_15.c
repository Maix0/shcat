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
	v->a[1501] = reduce(sym_negated_command, 2, 0, 0);
	v->a[1502] = entry(1, false);
	v->a[1503] = shift(902);
	v->a[1504] = entry(1, false);
	v->a[1505] = shift(696);
	v->a[1506] = entry(1, false);
	v->a[1507] = shift(1706);
	v->a[1508] = entry(1, false);
	v->a[1509] = shift(1677);
	v->a[1510] = entry(1, false);
	v->a[1511] = shift(1678);
	v->a[1512] = entry(1, false);
	v->a[1513] = shift(70);
	v->a[1514] = entry(1, false);
	v->a[1515] = shift(71);
	v->a[1516] = entry(1, true);
	v->a[1517] = shift(652);
	v->a[1518] = entry(1, true);
	v->a[1519] = shift(420);
	parse_actions_entries_76(v);
}

void	parse_actions_entries_76(t_parse_actions_entries_array *v)
{
	v->a[1520] = entry(2, false);
	v->a[1521] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1522] = shift(634);
	v->a[1523] = entry(1, false);
	v->a[1524] = reduce(aux_sym_command_repeat2, 1, 0, 10);
	v->a[1525] = entry(1, true);
	v->a[1526] = reduce(aux_sym_command_repeat2, 1, 0, 10);
	v->a[1527] = entry(1, true);
	v->a[1528] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1529] = entry(2, false);
	v->a[1530] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1531] = shift(1405);
	v->a[1532] = entry(2, false);
	v->a[1533] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1534] = shift(1466);
	v->a[1535] = entry(1, true);
	v->a[1536] = shift(933);
	v->a[1537] = entry(2, false);
	v->a[1538] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1539] = shift(639);
	parse_actions_entries_77(v);
}

void	parse_actions_entries_77(t_parse_actions_entries_array *v)
{
	v->a[1540] = entry(1, true);
	v->a[1541] = shift(815);
	v->a[1542] = entry(2, false);
	v->a[1543] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1544] = shift(410);
	v->a[1545] = entry(1, true);
	v->a[1546] = reduce(sym__statements, 2, 0, 8);
	v->a[1547] = entry(2, false);
	v->a[1548] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1549] = shift(1859);
	v->a[1550] = entry(2, false);
	v->a[1551] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1552] = shift_repeat(1245);
	v->a[1553] = entry(2, true);
	v->a[1554] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1555] = shift_repeat(1245);
	v->a[1556] = entry(1, true);
	v->a[1557] = shift(1349);
	v->a[1558] = entry(1, true);
	v->a[1559] = shift(926);
	parse_actions_entries_78(v);
}

void	parse_actions_entries_78(t_parse_actions_entries_array *v)
{
	v->a[1560] = entry(2, false);
	v->a[1561] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1562] = shift(916);
	v->a[1563] = entry(1, true);
	v->a[1564] = shift(399);
	v->a[1565] = entry(2, false);
	v->a[1566] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1567] = shift(1896);
	v->a[1568] = entry(1, true);
	v->a[1569] = shift(850);
	v->a[1570] = entry(1, false);
	v->a[1571] = shift(1058);
	v->a[1572] = entry(1, false);
	v->a[1573] = shift(1059);
	v->a[1574] = entry(1, true);
	v->a[1575] = shift(1059);
	v->a[1576] = entry(2, false);
	v->a[1577] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1578] = shift(770);
	v->a[1579] = entry(1, true);
	parse_actions_entries_79(v);
}

void	parse_actions_entries_79(t_parse_actions_entries_array *v)
{
	v->a[1580] = shift(855);
	v->a[1581] = entry(2, false);
	v->a[1582] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1583] = shift(942);
	v->a[1584] = entry(1, true);
	v->a[1585] = shift(522);
	v->a[1586] = entry(2, false);
	v->a[1587] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1588] = shift(422);
	v->a[1589] = entry(1, true);
	v->a[1590] = shift(540);
	v->a[1591] = entry(1, true);
	v->a[1592] = shift(450);
	v->a[1593] = entry(2, false);
	v->a[1594] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1595] = shift_repeat(902);
	v->a[1596] = entry(2, false);
	v->a[1597] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1598] = shift_repeat(696);
	v->a[1599] = entry(2, false);
	parse_actions_entries_80(v);
}

/* EOF parse_actions_entries_15.c */
