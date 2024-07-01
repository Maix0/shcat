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
	v->a[1500] = state(1333);
	v->a[1501] = 1;
	v->a[1502] = aux_sym_redirected_statement_repeat2;
	v->a[1503] = state(2103);
	v->a[1504] = 1;
	v->a[1505] = sym__statement_not_pipeline;
	v->a[1506] = state(2179);
	v->a[1507] = 1;
	v->a[1508] = sym__statements;
	v->a[1509] = actions(11);
	v->a[1510] = 2;
	v->a[1511] = anon_sym_while;
	v->a[1512] = anon_sym_until;
	v->a[1513] = actions(57);
	v->a[1514] = 2;
	v->a[1515] = anon_sym_LT_AMP_DASH;
	v->a[1516] = anon_sym_GT_AMP_DASH;
	v->a[1517] = actions(65);
	v->a[1518] = 2;
	v->a[1519] = sym_raw_string;
	small_parse_table_76(v);
}

void	small_parse_table_76(t_small_parse_table_array *v)
{
	v->a[1520] = sym_number;
	v->a[1521] = state(443);
	v->a[1522] = 5;
	v->a[1523] = sym_arithmetic_expansion;
	v->a[1524] = sym_string;
	v->a[1525] = sym_simple_expansion;
	v->a[1526] = sym_expansion;
	v->a[1527] = sym_command_substitution;
	v->a[1528] = actions(55);
	v->a[1529] = 6;
	v->a[1530] = anon_sym_LT;
	v->a[1531] = anon_sym_GT;
	v->a[1532] = anon_sym_GT_GT;
	v->a[1533] = anon_sym_LT_AMP;
	v->a[1534] = anon_sym_GT_AMP;
	v->a[1535] = anon_sym_GT_PIPE;
	v->a[1536] = state(1179);
	v->a[1537] = 12;
	v->a[1538] = sym_redirected_statement;
	v->a[1539] = sym_for_statement;
	small_parse_table_77(v);
}

void	small_parse_table_77(t_small_parse_table_array *v)
{
	v->a[1540] = sym_while_statement;
	v->a[1541] = sym_if_statement;
	v->a[1542] = sym_case_statement;
	v->a[1543] = sym_function_definition;
	v->a[1544] = sym_compound_statement;
	v->a[1545] = sym_subshell;
	v->a[1546] = sym_list;
	v->a[1547] = sym_negated_command;
	v->a[1548] = sym_command;
	v->a[1549] = sym__variable_assignments;
	v->a[1550] = 34;
	v->a[1551] = actions(3);
	v->a[1552] = 1;
	v->a[1553] = sym_comment;
	v->a[1554] = actions(9);
	v->a[1555] = 1;
	v->a[1556] = anon_sym_for;
	v->a[1557] = actions(13);
	v->a[1558] = 1;
	v->a[1559] = anon_sym_if;
	small_parse_table_78(v);
}

void	small_parse_table_78(t_small_parse_table_array *v)
{
	v->a[1560] = actions(15);
	v->a[1561] = 1;
	v->a[1562] = anon_sym_case;
	v->a[1563] = actions(17);
	v->a[1564] = 1;
	v->a[1565] = anon_sym_LPAREN;
	v->a[1566] = actions(19);
	v->a[1567] = 1;
	v->a[1568] = anon_sym_LBRACE;
	v->a[1569] = actions(45);
	v->a[1570] = 1;
	v->a[1571] = sym_word;
	v->a[1572] = actions(53);
	v->a[1573] = 1;
	v->a[1574] = anon_sym_BANG;
	v->a[1575] = actions(59);
	v->a[1576] = 1;
	v->a[1577] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[1578] = actions(61);
	v->a[1579] = 1;
	small_parse_table_79(v);
}

void	small_parse_table_79(t_small_parse_table_array *v)
{
	v->a[1580] = anon_sym_DOLLAR;
	v->a[1581] = actions(63);
	v->a[1582] = 1;
	v->a[1583] = anon_sym_DQUOTE;
	v->a[1584] = actions(67);
	v->a[1585] = 1;
	v->a[1586] = anon_sym_DOLLAR_LBRACE;
	v->a[1587] = actions(69);
	v->a[1588] = 1;
	v->a[1589] = anon_sym_DOLLAR_LPAREN;
	v->a[1590] = actions(71);
	v->a[1591] = 1;
	v->a[1592] = anon_sym_BQUOTE;
	v->a[1593] = actions(73);
	v->a[1594] = 1;
	v->a[1595] = sym_file_descriptor;
	v->a[1596] = actions(75);
	v->a[1597] = 1;
	v->a[1598] = sym_variable_name;
	v->a[1599] = actions(152);
	small_parse_table_80(v);
}

/* EOF small_parse_table_15.c */
