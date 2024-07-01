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
	v->a[1501] = reduce(sym__heredoc_pipeline, 2, 0, 0);
	v->a[1502] = entry(1, false);
	v->a[1503] = shift(926);
	v->a[1504] = entry(1, false);
	v->a[1505] = shift(866);
	v->a[1506] = entry(1, false);
	v->a[1507] = shift(1835);
	v->a[1508] = entry(1, false);
	v->a[1509] = shift(1825);
	v->a[1510] = entry(1, false);
	v->a[1511] = shift(1796);
	v->a[1512] = entry(1, false);
	v->a[1513] = shift(85);
	v->a[1514] = entry(1, false);
	v->a[1515] = shift(84);
	v->a[1516] = entry(1, false);
	v->a[1517] = reduce(aux_sym__terminated_statement, 2, 0, 10);
	v->a[1518] = entry(1, true);
	v->a[1519] = reduce(aux_sym__terminated_statement, 2, 0, 10);
	parse_actions_entries_76(v);
}

void	parse_actions_entries_76(t_parse_actions_entries_array *v)
{
	v->a[1520] = entry(1, false);
	v->a[1521] = reduce(aux_sym_command_repeat1, 1, 0, 5);
	v->a[1522] = entry(1, false);
	v->a[1523] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1524] = entry(2, false);
	v->a[1525] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1526] = shift(839);
	v->a[1527] = entry(2, false);
	v->a[1528] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1529] = reduce(aux_sym_command_repeat1, 1, 0, 5);
	v->a[1530] = entry(2, true);
	v->a[1531] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1532] = reduce(aux_sym_command_repeat1, 1, 0, 5);
	v->a[1533] = entry(1, true);
	v->a[1534] = reduce(aux_sym_command_repeat1, 1, 0, 5);
	v->a[1535] = entry(2, false);
	v->a[1536] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1537] = shift(475);
	v->a[1538] = entry(2, false);
	v->a[1539] = reduce(sym_command_name, 1, 0, 0);
	parse_actions_entries_77(v);
}

void	parse_actions_entries_77(t_parse_actions_entries_array *v)
{
	v->a[1540] = shift(2290);
	v->a[1541] = entry(2, false);
	v->a[1542] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1543] = shift(2046);
	v->a[1544] = entry(2, false);
	v->a[1545] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1546] = shift(998);
	v->a[1547] = entry(2, false);
	v->a[1548] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1549] = shift(633);
	v->a[1550] = entry(2, false);
	v->a[1551] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1552] = shift(923);
	v->a[1553] = entry(1, false);
	v->a[1554] = reduce(sym_negated_command, 2, 0, 0);
	v->a[1555] = entry(1, true);
	v->a[1556] = reduce(sym_negated_command, 2, 0, 0);
	v->a[1557] = entry(1, false);
	v->a[1558] = reduce(aux_sym__case_item_last_repeat2, 2, 0, 0);
	v->a[1559] = entry(2, false);
	parse_actions_entries_78(v);
}

void	parse_actions_entries_78(t_parse_actions_entries_array *v)
{
	v->a[1560] = reduce(aux_sym__case_item_last_repeat2, 2, 0, 0);
	v->a[1561] = shift_repeat(678);
	v->a[1562] = entry(1, true);
	v->a[1563] = reduce(aux_sym__case_item_last_repeat2, 2, 0, 0);
	v->a[1564] = entry(2, false);
	v->a[1565] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1566] = shift(417);
	v->a[1567] = entry(2, false);
	v->a[1568] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1569] = shift(568);
	v->a[1570] = entry(2, false);
	v->a[1571] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1572] = shift(1605);
	v->a[1573] = entry(1, false);
	v->a[1574] = reduce(aux_sym__statements_repeat1, 2, 0, 10);
	v->a[1575] = entry(1, false);
	v->a[1576] = reduce(sym__statements, 3, 0, 32);
	v->a[1577] = entry(1, true);
	v->a[1578] = reduce(aux_sym__statements_repeat1, 2, 0, 10);
	v->a[1579] = entry(1, true);
	parse_actions_entries_79(v);
}

void	parse_actions_entries_79(t_parse_actions_entries_array *v)
{
	v->a[1580] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1581] = entry(2, false);
	v->a[1582] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1583] = shift(266);
	v->a[1584] = entry(2, false);
	v->a[1585] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1586] = shift(909);
	v->a[1587] = entry(2, false);
	v->a[1588] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1589] = shift(1950);
	v->a[1590] = entry(2, false);
	v->a[1591] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1592] = shift(1974);
	v->a[1593] = entry(2, false);
	v->a[1594] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1595] = shift(403);
	v->a[1596] = entry(2, false);
	v->a[1597] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1598] = shift(2086);
	v->a[1599] = entry(2, true);
	parse_actions_entries_80(v);
}

/* EOF parse_actions_entries_15.c */
