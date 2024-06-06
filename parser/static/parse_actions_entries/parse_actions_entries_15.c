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
	v->a[1500] = shift_repeat(3304);
	v->a[1501] = entry(2, false);
	v->a[1502] = reduce(aux_sym_unset_command_repeat1, 2, 0, 0);
	v->a[1503] = shift_repeat(3035);
	v->a[1504] = entry(2, false);
	v->a[1505] = reduce(aux_sym_unset_command_repeat1, 2, 0, 0);
	v->a[1506] = shift_repeat(121);
	v->a[1507] = entry(2, false);
	v->a[1508] = reduce(aux_sym_unset_command_repeat1, 2, 0, 0);
	v->a[1509] = shift_repeat(123);
	v->a[1510] = entry(2, false);
	v->a[1511] = reduce(aux_sym_unset_command_repeat1, 2, 0, 0);
	v->a[1512] = shift_repeat(125);
	v->a[1513] = entry(2, false);
	v->a[1514] = reduce(aux_sym_unset_command_repeat1, 2, 0, 0);
	v->a[1515] = shift_repeat(315);
	v->a[1516] = entry(2, true);
	v->a[1517] = reduce(aux_sym_unset_command_repeat1, 2, 0, 0);
	v->a[1518] = shift_repeat(742);
	v->a[1519] = entry(2, true);
	parse_actions_entries_76(v);
}

void	parse_actions_entries_76(t_parse_actions_entries_array *v)
{
	v->a[1520] = reduce(aux_sym_unset_command_repeat1, 2, 0, 0);
	v->a[1521] = shift_repeat(4081);
	v->a[1522] = entry(1, false);
	v->a[1523] = shift(1053);
	v->a[1524] = entry(1, false);
	v->a[1525] = shift(1052);
	v->a[1526] = entry(1, true);
	v->a[1527] = shift(1052);
	v->a[1528] = entry(1, false);
	v->a[1529] = reduce(sym_file_redirect, 1, 0, 0);
	v->a[1530] = entry(1, true);
	v->a[1531] = reduce(sym_file_redirect, 1, 0, 0);
	v->a[1532] = entry(1, false);
	v->a[1533] = reduce(sym_file_redirect, 2, 0, 4);
	v->a[1534] = entry(1, true);
	v->a[1535] = reduce(sym_file_redirect, 2, 0, 4);
	v->a[1536] = entry(1, false);
	v->a[1537] = shift(634);
	v->a[1538] = entry(1, false);
	v->a[1539] = shift(1820);
	parse_actions_entries_77(v);
}

void	parse_actions_entries_77(t_parse_actions_entries_array *v)
{
	v->a[1540] = entry(1, false);
	v->a[1541] = shift(3188);
	v->a[1542] = entry(1, false);
	v->a[1543] = shift(677);
	v->a[1544] = entry(1, false);
	v->a[1545] = shift(3091);
	v->a[1546] = entry(1, false);
	v->a[1547] = shift(811);
	v->a[1548] = entry(1, false);
	v->a[1549] = shift(3323);
	v->a[1550] = entry(1, false);
	v->a[1551] = shift(3082);
	v->a[1552] = entry(1, false);
	v->a[1553] = shift(63);
	v->a[1554] = entry(1, false);
	v->a[1555] = shift(65);
	v->a[1556] = entry(1, false);
	v->a[1557] = shift(66);
	v->a[1558] = entry(1, true);
	v->a[1559] = shift(634);
	parse_actions_entries_78(v);
}

void	parse_actions_entries_78(t_parse_actions_entries_array *v)
{
	v->a[1560] = entry(1, true);
	v->a[1561] = shift(4075);
	v->a[1562] = entry(1, false);
	v->a[1563] = shift(906);
	v->a[1564] = entry(1, false);
	v->a[1565] = shift(882);
	v->a[1566] = entry(1, false);
	v->a[1567] = shift(336);
	v->a[1568] = entry(1, true);
	v->a[1569] = shift(3617);
	v->a[1570] = entry(1, true);
	v->a[1571] = shift(906);
	v->a[1572] = entry(1, false);
	v->a[1573] = shift(307);
	v->a[1574] = entry(2, false);
	v->a[1575] = reduce(aux_sym_declaration_command_repeat1, 2, 0, 0);
	v->a[1576] = shift_repeat(906);
	v->a[1577] = entry(2, false);
	v->a[1578] = reduce(aux_sym_declaration_command_repeat1, 2, 0, 0);
	v->a[1579] = shift_repeat(882);
	parse_actions_entries_79(v);
}

void	parse_actions_entries_79(t_parse_actions_entries_array *v)
{
	v->a[1580] = entry(2, false);
	v->a[1581] = reduce(aux_sym_declaration_command_repeat1, 2, 0, 0);
	v->a[1582] = shift_repeat(328);
	v->a[1583] = entry(2, true);
	v->a[1584] = reduce(aux_sym_declaration_command_repeat1, 2, 0, 0);
	v->a[1585] = shift_repeat(3617);
	v->a[1586] = entry(2, true);
	v->a[1587] = reduce(aux_sym_declaration_command_repeat1, 2, 0, 0);
	v->a[1588] = shift_repeat(906);
	v->a[1589] = entry(1, false);
	v->a[1590] = shift(328);
	v->a[1591] = entry(1, false);
	v->a[1592] = shift(940);
	v->a[1593] = entry(1, false);
	v->a[1594] = shift(938);
	v->a[1595] = entry(1, true);
	v->a[1596] = shift(938);
	v->a[1597] = entry(1, false);
	v->a[1598] = shift(966);
	v->a[1599] = entry(1, false);
	parse_actions_entries_80(v);
}

/* EOF parse_actions_entries_15.c */
