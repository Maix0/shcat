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
	v->a[1500] = shift_repeat(926);
	v->a[1501] = entry(2, false);
	v->a[1502] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1503] = shift_repeat(1869);
	v->a[1504] = entry(2, false);
	v->a[1505] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1506] = shift_repeat(1851);
	v->a[1507] = entry(2, false);
	v->a[1508] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1509] = shift_repeat(1795);
	v->a[1510] = entry(2, false);
	v->a[1511] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1512] = shift_repeat(91);
	v->a[1513] = entry(2, false);
	v->a[1514] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1515] = shift_repeat(85);
	v->a[1516] = entry(1, false);
	v->a[1517] = shift(1398);
	v->a[1518] = entry(1, false);
	v->a[1519] = shift(1399);
	parse_actions_entries_76(v);
}

void	parse_actions_entries_76(t_parse_actions_entries_array *v)
{
	v->a[1520] = entry(1, false);
	v->a[1521] = reduce(aux_sym__statements_repeat1, 2, 0, 10);
	v->a[1522] = entry(1, false);
	v->a[1523] = reduce(sym__statements, 3, 0, 32);
	v->a[1524] = entry(1, true);
	v->a[1525] = reduce(aux_sym__statements_repeat1, 2, 0, 10);
	v->a[1526] = entry(1, false);
	v->a[1527] = reduce(aux_sym_command_repeat1, 1, 0, 5);
	v->a[1528] = entry(1, false);
	v->a[1529] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1530] = entry(2, false);
	v->a[1531] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1532] = shift(2096);
	v->a[1533] = entry(2, false);
	v->a[1534] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1535] = reduce(aux_sym_command_repeat1, 1, 0, 5);
	v->a[1536] = entry(2, true);
	v->a[1537] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1538] = reduce(aux_sym_command_repeat1, 1, 0, 5);
	v->a[1539] = entry(1, true);
	parse_actions_entries_77(v);
}

void	parse_actions_entries_77(t_parse_actions_entries_array *v)
{
	v->a[1540] = reduce(aux_sym_command_repeat1, 1, 0, 5);
	v->a[1541] = entry(2, false);
	v->a[1542] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1543] = shift(1978);
	v->a[1544] = entry(2, false);
	v->a[1545] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1546] = shift(819);
	v->a[1547] = entry(2, false);
	v->a[1548] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1549] = shift(604);
	v->a[1550] = entry(2, false);
	v->a[1551] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1552] = shift(1659);
	v->a[1553] = entry(2, false);
	v->a[1554] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1555] = shift(634);
	v->a[1556] = entry(2, false);
	v->a[1557] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1558] = shift(387);
	v->a[1559] = entry(2, false);
	parse_actions_entries_78(v);
}

void	parse_actions_entries_78(t_parse_actions_entries_array *v)
{
	v->a[1560] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1561] = shift(866);
	v->a[1562] = entry(1, true);
	v->a[1563] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1564] = entry(1, false);
	v->a[1565] = shift(1437);
	v->a[1566] = entry(1, false);
	v->a[1567] = shift(940);
	v->a[1568] = entry(1, false);
	v->a[1569] = shift(1852);
	v->a[1570] = entry(1, false);
	v->a[1571] = shift(1836);
	v->a[1572] = entry(1, false);
	v->a[1573] = shift(1786);
	v->a[1574] = entry(1, false);
	v->a[1575] = shift(83);
	v->a[1576] = entry(1, false);
	v->a[1577] = shift(82);
	v->a[1578] = entry(1, false);
	v->a[1579] = reduce(aux_sym_command_repeat2, 1, 0, 12);
	parse_actions_entries_79(v);
}

void	parse_actions_entries_79(t_parse_actions_entries_array *v)
{
	v->a[1580] = entry(1, true);
	v->a[1581] = reduce(aux_sym_command_repeat2, 1, 0, 12);
	v->a[1582] = entry(1, false);
	v->a[1583] = reduce(sym__statements, 2, 0, 10);
	v->a[1584] = entry(2, false);
	v->a[1585] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1586] = shift(2006);
	v->a[1587] = entry(1, false);
	v->a[1588] = shift(1417);
	v->a[1589] = entry(2, false);
	v->a[1590] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1591] = shift(554);
	v->a[1592] = entry(1, true);
	v->a[1593] = reduce(sym_negated_command, 2, 0, 0);
	v->a[1594] = entry(1, false);
	v->a[1595] = reduce(sym_negated_command, 2, 0, 0);
	v->a[1596] = entry(1, true);
	v->a[1597] = shift(1518);
	v->a[1598] = entry(2, false);
	v->a[1599] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	parse_actions_entries_80(v);
}

/* EOF parse_actions_entries_15.c */
