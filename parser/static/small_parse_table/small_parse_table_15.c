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
	v->a[1500] = anon_sym_LT_AMP;
	v->a[1501] = anon_sym_GT_AMP;
	v->a[1502] = anon_sym_GT_PIPE;
	v->a[1503] = anon_sym_LT_GT;
	v->a[1504] = state(1001);
	v->a[1505] = 12;
	v->a[1506] = sym_redirected_statement;
	v->a[1507] = sym_for_statement;
	v->a[1508] = sym_while_statement;
	v->a[1509] = sym_if_statement;
	v->a[1510] = sym_case_statement;
	v->a[1511] = sym_function_definition;
	v->a[1512] = sym_compound_statement;
	v->a[1513] = sym_subshell;
	v->a[1514] = sym_list;
	v->a[1515] = sym_negated_command;
	v->a[1516] = sym_command;
	v->a[1517] = sym__variable_assignments;
	v->a[1518] = 33;
	v->a[1519] = actions(3);
	small_parse_table_76(v);
}

void	small_parse_table_76(t_small_parse_table_array *v)
{
	v->a[1520] = 1;
	v->a[1521] = sym_comment;
	v->a[1522] = actions(9);
	v->a[1523] = 1;
	v->a[1524] = anon_sym_for;
	v->a[1525] = actions(13);
	v->a[1526] = 1;
	v->a[1527] = anon_sym_if;
	v->a[1528] = actions(15);
	v->a[1529] = 1;
	v->a[1530] = anon_sym_case;
	v->a[1531] = actions(17);
	v->a[1532] = 1;
	v->a[1533] = anon_sym_LPAREN;
	v->a[1534] = actions(19);
	v->a[1535] = 1;
	v->a[1536] = anon_sym_LBRACE;
	v->a[1537] = actions(43);
	v->a[1538] = 1;
	v->a[1539] = sym_word;
	small_parse_table_77(v);
}

void	small_parse_table_77(t_small_parse_table_array *v)
{
	v->a[1540] = actions(51);
	v->a[1541] = 1;
	v->a[1542] = anon_sym_BANG;
	v->a[1543] = actions(55);
	v->a[1544] = 1;
	v->a[1545] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[1546] = actions(57);
	v->a[1547] = 1;
	v->a[1548] = anon_sym_DOLLAR;
	v->a[1549] = actions(59);
	v->a[1550] = 1;
	v->a[1551] = anon_sym_DQUOTE;
	v->a[1552] = actions(63);
	v->a[1553] = 1;
	v->a[1554] = anon_sym_DOLLAR_LBRACE;
	v->a[1555] = actions(65);
	v->a[1556] = 1;
	v->a[1557] = anon_sym_DOLLAR_LPAREN;
	v->a[1558] = actions(67);
	v->a[1559] = 1;
	small_parse_table_78(v);
}

void	small_parse_table_78(t_small_parse_table_array *v)
{
	v->a[1560] = anon_sym_BQUOTE;
	v->a[1561] = actions(69);
	v->a[1562] = 1;
	v->a[1563] = sym_file_descriptor;
	v->a[1564] = actions(71);
	v->a[1565] = 1;
	v->a[1566] = sym_variable_name;
	v->a[1567] = actions(95);
	v->a[1568] = 1;
	v->a[1569] = anon_sym_LF;
	v->a[1570] = state(129);
	v->a[1571] = 1;
	v->a[1572] = aux_sym__statements_repeat1;
	v->a[1573] = state(182);
	v->a[1574] = 1;
	v->a[1575] = sym_command_name;
	v->a[1576] = state(261);
	v->a[1577] = 1;
	v->a[1578] = sym_variable_assignment;
	v->a[1579] = state(584);
	small_parse_table_79(v);
}

void	small_parse_table_79(t_small_parse_table_array *v)
{
	v->a[1580] = 1;
	v->a[1581] = sym_concatenation;
	v->a[1582] = state(620);
	v->a[1583] = 1;
	v->a[1584] = sym_file_redirect;
	v->a[1585] = state(623);
	v->a[1586] = 1;
	v->a[1587] = aux_sym_command_repeat1;
	v->a[1588] = state(672);
	v->a[1589] = 1;
	v->a[1590] = aux_sym__case_item_last_repeat2;
	v->a[1591] = state(1114);
	v->a[1592] = 1;
	v->a[1593] = sym_pipeline;
	v->a[1594] = state(1201);
	v->a[1595] = 1;
	v->a[1596] = aux_sym_redirected_statement_repeat2;
	v->a[1597] = state(1911);
	v->a[1598] = 1;
	v->a[1599] = sym__statement_not_pipeline;
	small_parse_table_80(v);
}

/* EOF small_parse_table_15.c */
