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
	v->a[1500] = entry(1, false);
	v->a[1501] = shift(148);
	v->a[1502] = entry(1, false);
	v->a[1503] = reduce(sym__heredoc_pipeline, 2, 0, 0);
	v->a[1504] = entry(2, true);
	v->a[1505] = reduce(aux_sym_command_repeat1, 1, 0, 0);
	v->a[1506] = shift(2456);
	v->a[1507] = entry(1, false);
	v->a[1508] = reduce(sym__heredoc_expression, 2, 0, 49);
	v->a[1509] = entry(1, true);
	v->a[1510] = shift(1682);
	v->a[1511] = entry(1, false);
	v->a[1512] = shift(1028);
	v->a[1513] = entry(1, false);
	v->a[1514] = shift(1065);
	v->a[1515] = entry(1, false);
	v->a[1516] = shift(2045);
	v->a[1517] = entry(1, false);
	v->a[1518] = shift(2027);
	v->a[1519] = entry(1, false);
	parse_actions_entries_76(v);
}

void	parse_actions_entries_76(t_parse_actions_entries_array *v)
{
	v->a[1520] = shift(1939);
	v->a[1521] = entry(1, false);
	v->a[1522] = shift(112);
	v->a[1523] = entry(1, false);
	v->a[1524] = shift(113);
	v->a[1525] = entry(2, false);
	v->a[1526] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1527] = shift_repeat(1028);
	v->a[1528] = entry(2, false);
	v->a[1529] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1530] = shift_repeat(1065);
	v->a[1531] = entry(2, false);
	v->a[1532] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1533] = shift_repeat(2045);
	v->a[1534] = entry(2, false);
	v->a[1535] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1536] = shift_repeat(2027);
	v->a[1537] = entry(2, false);
	v->a[1538] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1539] = shift_repeat(1939);
	parse_actions_entries_77(v);
}

void	parse_actions_entries_77(t_parse_actions_entries_array *v)
{
	v->a[1540] = entry(2, false);
	v->a[1541] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1542] = shift_repeat(112);
	v->a[1543] = entry(2, false);
	v->a[1544] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1545] = shift_repeat(113);
	v->a[1546] = entry(1, false);
	v->a[1547] = reduce(aux_sym__terminated_statement, 2, 0, 10);
	v->a[1548] = entry(1, true);
	v->a[1549] = reduce(aux_sym__terminated_statement, 2, 0, 10);
	v->a[1550] = entry(1, false);
	v->a[1551] = shift(1551);
	v->a[1552] = entry(1, false);
	v->a[1553] = reduce(aux_sym__statements_repeat1, 2, 0, 10);
	v->a[1554] = entry(1, false);
	v->a[1555] = reduce(sym__statements, 3, 0, 32);
	v->a[1556] = entry(1, true);
	v->a[1557] = reduce(aux_sym__statements_repeat1, 2, 0, 10);
	v->a[1558] = entry(1, false);
	v->a[1559] = reduce(aux_sym_command_repeat1, 1, 0, 5);
	parse_actions_entries_78(v);
}

void	parse_actions_entries_78(t_parse_actions_entries_array *v)
{
	v->a[1560] = entry(1, false);
	v->a[1561] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1562] = entry(2, false);
	v->a[1563] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1564] = reduce(aux_sym_command_repeat1, 1, 0, 5);
	v->a[1565] = entry(2, true);
	v->a[1566] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1567] = reduce(aux_sym_command_repeat1, 1, 0, 5);
	v->a[1568] = entry(1, true);
	v->a[1569] = reduce(aux_sym_command_repeat1, 1, 0, 5);
	v->a[1570] = entry(1, false);
	v->a[1571] = reduce(sym_negated_command, 2, 0, 0);
	v->a[1572] = entry(1, true);
	v->a[1573] = reduce(sym_negated_command, 2, 0, 0);
	v->a[1574] = entry(2, true);
	v->a[1575] = reduce(aux_sym_command_repeat1, 1, 0, 0);
	v->a[1576] = shift(2291);
	v->a[1577] = entry(1, false);
	v->a[1578] = reduce(aux_sym_command_repeat2, 1, 0, 12);
	v->a[1579] = entry(1, true);
	parse_actions_entries_79(v);
}

void	parse_actions_entries_79(t_parse_actions_entries_array *v)
{
	v->a[1580] = reduce(aux_sym_command_repeat2, 1, 0, 12);
	v->a[1581] = entry(1, false);
	v->a[1582] = reduce(sym__statements, 2, 0, 10);
	v->a[1583] = entry(2, false);
	v->a[1584] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1585] = shift(323);
	v->a[1586] = entry(1, false);
	v->a[1587] = shift(1560);
	v->a[1588] = entry(1, false);
	v->a[1589] = shift(1068);
	v->a[1590] = entry(1, false);
	v->a[1591] = shift(2031);
	v->a[1592] = entry(1, false);
	v->a[1593] = shift(2008);
	v->a[1594] = entry(1, false);
	v->a[1595] = shift(1951);
	v->a[1596] = entry(1, false);
	v->a[1597] = shift(39);
	v->a[1598] = entry(1, false);
	v->a[1599] = shift(114);
	parse_actions_entries_80(v);
}

/* EOF parse_actions_entries_15.c */
