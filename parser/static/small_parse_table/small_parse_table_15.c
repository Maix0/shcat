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
	v->a[1500] = anon_sym_LPAREN;
	v->a[1501] = actions(93);
	v->a[1502] = 1;
	v->a[1503] = anon_sym_LBRACE;
	v->a[1504] = actions(95);
	v->a[1505] = 1;
	v->a[1506] = anon_sym_BANG;
	v->a[1507] = actions(99);
	v->a[1508] = 1;
	v->a[1509] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[1510] = actions(101);
	v->a[1511] = 1;
	v->a[1512] = anon_sym_DOLLAR;
	v->a[1513] = actions(103);
	v->a[1514] = 1;
	v->a[1515] = anon_sym_DQUOTE;
	v->a[1516] = actions(107);
	v->a[1517] = 1;
	v->a[1518] = anon_sym_DOLLAR_LBRACE;
	v->a[1519] = actions(109);
	small_parse_table_76(v);
}

void	small_parse_table_76(t_small_parse_table_array *v)
{
	v->a[1520] = 1;
	v->a[1521] = anon_sym_DOLLAR_LPAREN;
	v->a[1522] = actions(111);
	v->a[1523] = 1;
	v->a[1524] = anon_sym_BQUOTE;
	v->a[1525] = actions(113);
	v->a[1526] = 1;
	v->a[1527] = sym_variable_name;
	v->a[1528] = actions(121);
	v->a[1529] = 1;
	v->a[1530] = anon_sym_LF;
	v->a[1531] = state(9);
	v->a[1532] = 1;
	v->a[1533] = aux_sym__case_item_last_repeat2;
	v->a[1534] = state(112);
	v->a[1535] = 1;
	v->a[1536] = aux_sym__statements_repeat1;
	v->a[1537] = state(185);
	v->a[1538] = 1;
	v->a[1539] = sym_command_name;
	small_parse_table_77(v);
}

void	small_parse_table_77(t_small_parse_table_array *v)
{
	v->a[1540] = state(255);
	v->a[1541] = 1;
	v->a[1542] = sym_variable_assignment;
	v->a[1543] = state(491);
	v->a[1544] = 1;
	v->a[1545] = aux_sym_command_repeat1;
	v->a[1546] = state(599);
	v->a[1547] = 1;
	v->a[1548] = sym_concatenation;
	v->a[1549] = state(615);
	v->a[1550] = 1;
	v->a[1551] = sym_file_redirect;
	v->a[1552] = state(941);
	v->a[1553] = 1;
	v->a[1554] = sym_pipeline;
	v->a[1555] = state(1015);
	v->a[1556] = 1;
	v->a[1557] = aux_sym_redirected_statement_repeat2;
	v->a[1558] = state(1610);
	v->a[1559] = 1;
	small_parse_table_78(v);
}

void	small_parse_table_78(t_small_parse_table_array *v)
{
	v->a[1560] = sym__statement_not_pipeline;
	v->a[1561] = state(1620);
	v->a[1562] = 1;
	v->a[1563] = sym__statements;
	v->a[1564] = actions(83);
	v->a[1565] = 2;
	v->a[1566] = anon_sym_while;
	v->a[1567] = anon_sym_until;
	v->a[1568] = actions(105);
	v->a[1569] = 2;
	v->a[1570] = sym_raw_string;
	v->a[1571] = sym_number;
	v->a[1572] = state(341);
	v->a[1573] = 5;
	v->a[1574] = sym_arithmetic_expansion;
	v->a[1575] = sym_string;
	v->a[1576] = sym_simple_expansion;
	v->a[1577] = sym_expansion;
	v->a[1578] = sym_command_substitution;
	v->a[1579] = actions(97);
	small_parse_table_79(v);
}

void	small_parse_table_79(t_small_parse_table_array *v)
{
	v->a[1580] = 7;
	v->a[1581] = anon_sym_LT;
	v->a[1582] = anon_sym_GT;
	v->a[1583] = anon_sym_GT_GT;
	v->a[1584] = anon_sym_LT_AMP;
	v->a[1585] = anon_sym_GT_AMP;
	v->a[1586] = anon_sym_GT_PIPE;
	v->a[1587] = anon_sym_LT_GT;
	v->a[1588] = state(819);
	v->a[1589] = 12;
	v->a[1590] = sym_redirected_statement;
	v->a[1591] = sym_for_statement;
	v->a[1592] = sym_while_statement;
	v->a[1593] = sym_if_statement;
	v->a[1594] = sym_case_statement;
	v->a[1595] = sym_function_definition;
	v->a[1596] = sym_compound_statement;
	v->a[1597] = sym_subshell;
	v->a[1598] = sym_list;
	v->a[1599] = sym_negated_command;
	small_parse_table_80(v);
}

/* EOF small_parse_table_15.c */
