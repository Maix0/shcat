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
	v->a[1500] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1501] = shift_repeat(1412);
	v->a[1502] = entry(2, true);
	v->a[1503] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1504] = shift_repeat(1412);
	v->a[1505] = entry(1, false);
	v->a[1506] = shift(1412);
	v->a[1507] = entry(1, true);
	v->a[1508] = shift(1489);
	v->a[1509] = entry(1, false);
	v->a[1510] = shift(1485);
	v->a[1511] = entry(1, true);
	v->a[1512] = shift(1386);
	v->a[1513] = entry(1, false);
	v->a[1514] = reduce(sym_arithmetic_unary_expression, 2, 0, 1);
	v->a[1515] = entry(1, true);
	v->a[1516] = reduce(sym_arithmetic_unary_expression, 2, 0, 1);
	v->a[1517] = entry(1, true);
	v->a[1518] = shift(1412);
	v->a[1519] = entry(1, true);
	parse_actions_entries_76(v);
}

void	parse_actions_entries_76(t_parse_actions_entries_array *v)
{
	v->a[1520] = shift(1396);
	v->a[1521] = entry(2, false);
	v->a[1522] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1523] = shift_repeat(1429);
	v->a[1524] = entry(2, true);
	v->a[1525] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1526] = shift_repeat(1429);
	v->a[1527] = entry(1, true);
	v->a[1528] = shift(1460);
	v->a[1529] = entry(1, false);
	v->a[1530] = reduce(sym_arithmetic_literal, 1, 0, 0);
	v->a[1531] = entry(1, true);
	v->a[1532] = reduce(sym_arithmetic_literal, 1, 0, 0);
	v->a[1533] = entry(1, true);
	v->a[1534] = shift(1485);
	v->a[1535] = entry(1, false);
	v->a[1536] = reduce(sym_arithmetic_ternary_expression, 5, 0, 39);
	v->a[1537] = entry(1, true);
	v->a[1538] = reduce(sym_arithmetic_ternary_expression, 5, 0, 39);
	v->a[1539] = entry(1, false);
	parse_actions_entries_77(v);
}

void	parse_actions_entries_77(t_parse_actions_entries_array *v)
{
	v->a[1540] = shift(1303);
	v->a[1541] = entry(1, true);
	v->a[1542] = shift(1870);
	v->a[1543] = entry(1, true);
	v->a[1544] = shift(901);
	v->a[1545] = entry(1, true);
	v->a[1546] = shift(649);
	v->a[1547] = entry(1, false);
	v->a[1548] = shift(1020);
	v->a[1549] = entry(1, false);
	v->a[1550] = shift(1021);
	v->a[1551] = entry(1, true);
	v->a[1552] = shift(1021);
	v->a[1553] = entry(1, false);
	v->a[1554] = shift(1129);
	v->a[1555] = entry(1, false);
	v->a[1556] = shift(1130);
	v->a[1557] = entry(1, true);
	v->a[1558] = shift(1130);
	v->a[1559] = entry(2, true);
	parse_actions_entries_78(v);
}

void	parse_actions_entries_78(t_parse_actions_entries_array *v)
{
	v->a[1560] = reduce(aux_sym_command_repeat1, 1, 0, 0);
	v->a[1561] = shift(2234);
	v->a[1562] = entry(1, false);
	v->a[1563] = shift(931);
	v->a[1564] = entry(1, true);
	v->a[1565] = shift(873);
	v->a[1566] = entry(1, true);
	v->a[1567] = shift(930);
	v->a[1568] = entry(1, false);
	v->a[1569] = shift(919);
	v->a[1570] = entry(1, false);
	v->a[1571] = shift(883);
	v->a[1572] = entry(1, false);
	v->a[1573] = shift(915);
	v->a[1574] = entry(1, false);
	v->a[1575] = shift(913);
	v->a[1576] = entry(1, true);
	v->a[1577] = shift(900);
	v->a[1578] = entry(1, true);
	v->a[1579] = shift(919);
	parse_actions_entries_79(v);
}

void	parse_actions_entries_79(t_parse_actions_entries_array *v)
{
	v->a[1580] = entry(1, false);
	v->a[1581] = shift(892);
	v->a[1582] = entry(1, false);
	v->a[1583] = shift(890);
	v->a[1584] = entry(1, true);
	v->a[1585] = shift(962);
	v->a[1586] = entry(1, true);
	v->a[1587] = shift(1996);
	v->a[1588] = entry(1, false);
	v->a[1589] = shift(152);
	v->a[1590] = entry(1, false);
	v->a[1591] = reduce(sym__heredoc_expression, 2, 0, 33);
	v->a[1592] = entry(1, false);
	v->a[1593] = reduce(sym__heredoc_pipeline, 2, 0, 0);
	v->a[1594] = entry(1, true);
	v->a[1595] = shift(1025);
	v->a[1596] = entry(1, true);
	v->a[1597] = shift(959);
	v->a[1598] = entry(1, true);
	v->a[1599] = shift(672);
	parse_actions_entries_80(v);
}

/* EOF parse_actions_entries_15.c */
