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
	v->a[1500] = 1;
	v->a[1501] = sym_variable_name;
	v->a[1502] = state(129);
	v->a[1503] = 1;
	v->a[1504] = aux_sym__statements_repeat1;
	v->a[1505] = state(182);
	v->a[1506] = 1;
	v->a[1507] = sym_command_name;
	v->a[1508] = state(271);
	v->a[1509] = 1;
	v->a[1510] = sym_variable_assignment;
	v->a[1511] = state(621);
	v->a[1512] = 1;
	v->a[1513] = sym_concatenation;
	v->a[1514] = state(692);
	v->a[1515] = 1;
	v->a[1516] = sym_file_redirect;
	v->a[1517] = state(767);
	v->a[1518] = 1;
	v->a[1519] = aux_sym__case_item_last_repeat2;
	small_parse_table_76(v);
}

void	small_parse_table_76(t_small_parse_table_array *v)
{
	v->a[1520] = state(810);
	v->a[1521] = 1;
	v->a[1522] = aux_sym_command_repeat1;
	v->a[1523] = state(1321);
	v->a[1524] = 1;
	v->a[1525] = sym_pipeline;
	v->a[1526] = state(1432);
	v->a[1527] = 1;
	v->a[1528] = aux_sym_redirected_statement_repeat2;
	v->a[1529] = state(2251);
	v->a[1530] = 1;
	v->a[1531] = sym__statements;
	v->a[1532] = state(2254);
	v->a[1533] = 1;
	v->a[1534] = sym__statement_not_pipeline;
	v->a[1535] = actions(93);
	v->a[1536] = 2;
	v->a[1537] = anon_sym_while;
	v->a[1538] = anon_sym_until;
	v->a[1539] = actions(107);
	small_parse_table_77(v);
}

void	small_parse_table_77(t_small_parse_table_array *v)
{
	v->a[1540] = 2;
	v->a[1541] = anon_sym_LT_AMP_DASH;
	v->a[1542] = anon_sym_GT_AMP_DASH;
	v->a[1543] = actions(115);
	v->a[1544] = 2;
	v->a[1545] = sym_raw_string;
	v->a[1546] = sym_number;
	v->a[1547] = state(282);
	v->a[1548] = 5;
	v->a[1549] = sym_arithmetic_expansion;
	v->a[1550] = sym_string;
	v->a[1551] = sym_simple_expansion;
	v->a[1552] = sym_expansion;
	v->a[1553] = sym_command_substitution;
	v->a[1554] = actions(105);
	v->a[1555] = 8;
	v->a[1556] = anon_sym_LT;
	v->a[1557] = anon_sym_GT;
	v->a[1558] = anon_sym_GT_GT;
	v->a[1559] = anon_sym_AMP_GT;
	small_parse_table_78(v);
}

void	small_parse_table_78(t_small_parse_table_array *v)
{
	v->a[1560] = anon_sym_AMP_GT_GT;
	v->a[1561] = anon_sym_LT_AMP;
	v->a[1562] = anon_sym_GT_AMP;
	v->a[1563] = anon_sym_GT_PIPE;
	v->a[1564] = state(1296);
	v->a[1565] = 12;
	v->a[1566] = sym_redirected_statement;
	v->a[1567] = sym_for_statement;
	v->a[1568] = sym_while_statement;
	v->a[1569] = sym_if_statement;
	v->a[1570] = sym_case_statement;
	v->a[1571] = sym_function_definition;
	v->a[1572] = sym_compound_statement;
	v->a[1573] = sym_subshell;
	v->a[1574] = sym_list;
	v->a[1575] = sym_negated_command;
	v->a[1576] = sym_command;
	v->a[1577] = sym__variable_assignments;
	v->a[1578] = 34;
	v->a[1579] = actions(3);
	small_parse_table_79(v);
}

void	small_parse_table_79(t_small_parse_table_array *v)
{
	v->a[1580] = 1;
	v->a[1581] = sym_comment;
	v->a[1582] = actions(87);
	v->a[1583] = 1;
	v->a[1584] = anon_sym_LF;
	v->a[1585] = actions(89);
	v->a[1586] = 1;
	v->a[1587] = sym_word;
	v->a[1588] = actions(91);
	v->a[1589] = 1;
	v->a[1590] = anon_sym_for;
	v->a[1591] = actions(95);
	v->a[1592] = 1;
	v->a[1593] = anon_sym_if;
	v->a[1594] = actions(97);
	v->a[1595] = 1;
	v->a[1596] = anon_sym_case;
	v->a[1597] = actions(99);
	v->a[1598] = 1;
	v->a[1599] = anon_sym_LPAREN;
	small_parse_table_80(v);
}

/* EOF small_parse_table_15.c */
