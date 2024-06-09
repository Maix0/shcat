/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_15.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_75(t_small_parse_table_array *v)
{
	v->a[1500] = anon_sym_GT_AMP;
	v->a[1501] = anon_sym_GT_PIPE;
	v->a[1502] = state(1048);
	v->a[1503] = 12;
	v->a[1504] = sym_redirected_statement;
	v->a[1505] = sym_for_statement;
	v->a[1506] = sym_while_statement;
	v->a[1507] = sym_if_statement;
	v->a[1508] = sym_case_statement;
	v->a[1509] = sym_function_definition;
	v->a[1510] = sym_compound_statement;
	v->a[1511] = sym_subshell;
	v->a[1512] = sym_list;
	v->a[1513] = sym_negated_command;
	v->a[1514] = sym_command;
	v->a[1515] = sym_variable_assignments;
	v->a[1516] = 36;
	v->a[1517] = actions(3);
	v->a[1518] = 1;
	v->a[1519] = sym_comment;
	small_parse_table_76(v);
}

void	small_parse_table_76(t_small_parse_table_array *v)
{
	v->a[1520] = actions(95);
	v->a[1521] = 1;
	v->a[1522] = sym_word;
	v->a[1523] = actions(97);
	v->a[1524] = 1;
	v->a[1525] = anon_sym_for;
	v->a[1526] = actions(101);
	v->a[1527] = 1;
	v->a[1528] = anon_sym_if;
	v->a[1529] = actions(103);
	v->a[1530] = 1;
	v->a[1531] = anon_sym_case;
	v->a[1532] = actions(105);
	v->a[1533] = 1;
	v->a[1534] = anon_sym_LPAREN;
	v->a[1535] = actions(109);
	v->a[1536] = 1;
	v->a[1537] = anon_sym_LBRACE;
	v->a[1538] = actions(111);
	v->a[1539] = 1;
	small_parse_table_77(v);
}

void	small_parse_table_77(t_small_parse_table_array *v)
{
	v->a[1540] = anon_sym_BANG;
	v->a[1541] = actions(117);
	v->a[1542] = 1;
	v->a[1543] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[1544] = actions(119);
	v->a[1545] = 1;
	v->a[1546] = anon_sym_DOLLAR;
	v->a[1547] = actions(121);
	v->a[1548] = 1;
	v->a[1549] = anon_sym_DQUOTE;
	v->a[1550] = actions(123);
	v->a[1551] = 1;
	v->a[1552] = sym_raw_string;
	v->a[1553] = actions(125);
	v->a[1554] = 1;
	v->a[1555] = aux_sym_number_token1;
	v->a[1556] = actions(127);
	v->a[1557] = 1;
	v->a[1558] = aux_sym_number_token2;
	v->a[1559] = actions(129);
	small_parse_table_78(v);
}

void	small_parse_table_78(t_small_parse_table_array *v)
{
	v->a[1560] = 1;
	v->a[1561] = anon_sym_DOLLAR_LBRACE;
	v->a[1562] = actions(131);
	v->a[1563] = 1;
	v->a[1564] = anon_sym_DOLLAR_LPAREN;
	v->a[1565] = actions(133);
	v->a[1566] = 1;
	v->a[1567] = anon_sym_BQUOTE;
	v->a[1568] = actions(135);
	v->a[1569] = 1;
	v->a[1570] = sym_file_descriptor;
	v->a[1571] = actions(137);
	v->a[1572] = 1;
	v->a[1573] = sym_variable_name;
	v->a[1574] = actions(141);
	v->a[1575] = 1;
	v->a[1576] = anon_sym_LF;
	v->a[1577] = state(139);
	v->a[1578] = 1;
	v->a[1579] = aux_sym__statements_repeat1;
	small_parse_table_79(v);
}

void	small_parse_table_79(t_small_parse_table_array *v)
{
	v->a[1580] = state(173);
	v->a[1581] = 1;
	v->a[1582] = sym_command_name;
	v->a[1583] = state(269);
	v->a[1584] = 1;
	v->a[1585] = sym_variable_assignment;
	v->a[1586] = state(663);
	v->a[1587] = 1;
	v->a[1588] = aux_sym_command_repeat1;
	v->a[1589] = state(665);
	v->a[1590] = 1;
	v->a[1591] = sym_concatenation;
	v->a[1592] = state(689);
	v->a[1593] = 1;
	v->a[1594] = aux_sym__case_item_last_repeat2;
	v->a[1595] = state(749);
	v->a[1596] = 1;
	v->a[1597] = sym_file_redirect;
	v->a[1598] = state(1145);
	v->a[1599] = 1;
	small_parse_table_80(v);
}

/* EOF small_parse_table_15.c */
