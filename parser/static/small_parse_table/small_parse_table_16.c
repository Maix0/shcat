/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_16.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_80(t_small_parse_table_array *v)
{
	v->a[1600] = 1;
	v->a[1601] = aux_sym__case_item_last_repeat2;
	v->a[1602] = state(104);
	v->a[1603] = 1;
	v->a[1604] = aux_sym__statements_repeat1;
	v->a[1605] = state(170);
	v->a[1606] = 1;
	v->a[1607] = sym_command_name;
	v->a[1608] = state(177);
	v->a[1609] = 1;
	v->a[1610] = sym_variable_assignment;
	v->a[1611] = state(408);
	v->a[1612] = 1;
	v->a[1613] = aux_sym_command_repeat1;
	v->a[1614] = state(541);
	v->a[1615] = 1;
	v->a[1616] = sym_file_redirect;
	v->a[1617] = state(546);
	v->a[1618] = 1;
	v->a[1619] = sym_concatenation;
	small_parse_table_81(v);
}

void	small_parse_table_81(t_small_parse_table_array *v)
{
	v->a[1620] = state(913);
	v->a[1621] = 1;
	v->a[1622] = sym_pipeline;
	v->a[1623] = state(990);
	v->a[1624] = 1;
	v->a[1625] = aux_sym_redirected_statement_repeat2;
	v->a[1626] = state(1550);
	v->a[1627] = 1;
	v->a[1628] = sym__statements;
	v->a[1629] = state(1564);
	v->a[1630] = 1;
	v->a[1631] = sym__statement_not_pipeline;
	v->a[1632] = actions(83);
	v->a[1633] = 2;
	v->a[1634] = anon_sym_while;
	v->a[1635] = anon_sym_until;
	v->a[1636] = actions(105);
	v->a[1637] = 2;
	v->a[1638] = sym_raw_string;
	v->a[1639] = sym_number;
	small_parse_table_82(v);
}

void	small_parse_table_82(t_small_parse_table_array *v)
{
	v->a[1640] = actions(97);
	v->a[1641] = 3;
	v->a[1642] = anon_sym_LT;
	v->a[1643] = anon_sym_GT;
	v->a[1644] = anon_sym_GT_GT;
	v->a[1645] = state(276);
	v->a[1646] = 5;
	v->a[1647] = sym_arithmetic_expansion;
	v->a[1648] = sym_string;
	v->a[1649] = sym_simple_expansion;
	v->a[1650] = sym_expansion;
	v->a[1651] = sym_command_substitution;
	v->a[1652] = state(867);
	v->a[1653] = 12;
	v->a[1654] = sym_redirected_statement;
	v->a[1655] = sym_for_statement;
	v->a[1656] = sym_while_statement;
	v->a[1657] = sym_if_statement;
	v->a[1658] = sym_case_statement;
	v->a[1659] = sym_function_definition;
	small_parse_table_83(v);
}

void	small_parse_table_83(t_small_parse_table_array *v)
{
	v->a[1660] = sym_compound_statement;
	v->a[1661] = sym_subshell;
	v->a[1662] = sym_list;
	v->a[1663] = sym_negated_command;
	v->a[1664] = sym_command;
	v->a[1665] = sym__variable_assignments;
	v->a[1666] = 30;
	v->a[1667] = actions(3);
	v->a[1668] = 1;
	v->a[1669] = sym_comment;
	v->a[1670] = actions(9);
	v->a[1671] = 1;
	v->a[1672] = anon_sym_for;
	v->a[1673] = actions(13);
	v->a[1674] = 1;
	v->a[1675] = anon_sym_if;
	v->a[1676] = actions(15);
	v->a[1677] = 1;
	v->a[1678] = anon_sym_case;
	v->a[1679] = actions(17);
	small_parse_table_84(v);
}

void	small_parse_table_84(t_small_parse_table_array *v)
{
	v->a[1680] = 1;
	v->a[1681] = anon_sym_LPAREN;
	v->a[1682] = actions(19);
	v->a[1683] = 1;
	v->a[1684] = anon_sym_LBRACE;
	v->a[1685] = actions(41);
	v->a[1686] = 1;
	v->a[1687] = sym_word;
	v->a[1688] = actions(49);
	v->a[1689] = 1;
	v->a[1690] = anon_sym_BANG;
	v->a[1691] = actions(53);
	v->a[1692] = 1;
	v->a[1693] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[1694] = actions(55);
	v->a[1695] = 1;
	v->a[1696] = anon_sym_DOLLAR;
	v->a[1697] = actions(57);
	v->a[1698] = 1;
	v->a[1699] = anon_sym_DQUOTE;
	small_parse_table_85(v);
}

/* EOF small_parse_table_16.c */
